/*
 * Copyright (C) 2021 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "src/trace_processor/importers/etm/element_cursor.h"

#include <cstddef>
#include <cstdint>
#include <limits>
#include <memory>

#include "perfetto/base/logging.h"
#include "perfetto/base/status.h"
#include "src/trace_processor/importers/etm/etm_v4_decoder.h"
#include "src/trace_processor/importers/etm/storage_handle.h"
#include "src/trace_processor/importers/etm/target_memory_reader.h"
#include "src/trace_processor/importers/etm/types.h"
#include "src/trace_processor/storage/trace_storage.h"
#include "src/trace_processor/util/status_macros.h"

namespace perfetto::trace_processor::etm {

ElementCursor::ElementCursor(TraceStorage* storage)
    : storage_(storage), reader_(std::make_unique<TargetMemoryReader>()) {}

ElementCursor::~ElementCursor() = default;

base::Status ElementCursor::Filter(
    std::optional<tables::EtmV4TraceTable::Id> trace_id,
    ElementTypeMask type_mask) {
  trace_id_ = trace_id;
  type_mask_ = type_mask;
  if (!trace_id.has_value() || type_mask_.empty()) {
    SetAtEof();
    return base::OkStatus();
  }
  auto session = *storage_->etm_v4_session_table().FindById(
      storage_->etm_v4_trace_table().FindById(*trace_id)->session_id());
  RETURN_IF_ERROR(ResetDecoder(session.configuration_id()));

  reader_->SetTs(session.start_ts());
  // We expect this to overflow to 0 in the Next() below
  element_index_ = std::numeric_limits<uint32_t>::max();
  const auto& data = StorageHandle(storage_).GetTrace(*trace_id);
  data_start_ = data.data();
  data_ = data_start_;
  data_end_ = data.data() + data.size();

  if (Eof()) {
    return base::OkStatus();
  }
  return Next();
}

void ElementCursor::SetAtEof() {
  data_start_ = nullptr;
  data_ = nullptr;
  data_end_ = nullptr;
  needs_flush_ = false;
}

base::Status ElementCursor::ResetDecoder(
    tables::EtmV4ConfigurationTable::Id config_id) {
  if (config_id == config_id_) {
    ASSIGN_OR_RETURN(bool keep_going, decoder_->Reset(0));
    PERFETTO_CHECK(keep_going);
    needs_flush_ = false;
    return base::OkStatus();
  }
  const EtmV4Config& config =
      StorageHandle(storage_).GetEtmV4Config(config_id).etm_v4_config();

  ASSIGN_OR_RETURN(decoder_, EtmV4Decoder::Create(this, reader_.get(), config));
  config_id_ = config_id;
  needs_flush_ = false;
  return base::OkStatus();
}

// Keeps feeding data to the decoder until the next `OCSD_RESP_WAIT` response or
// the end of the stream. See `ElementCursor::TraceElemIn` to see how we handle
// the callbacks form the decoder.
// Note, if the decoder returns `OCSD_RESP_WAIT` the next decoding round must
// *not* provide new data but rather call flush!
base::Status ElementCursor::Next() {
  bool keep_going;
  do {
    if (needs_flush_) {
      ASSIGN_OR_RETURN(keep_going, decoder_->Flush(index()));
    } else {
      uint32_t num_bytes_processed;
      ASSIGN_OR_RETURN(
          keep_going,
          decoder_->Data(index(), static_cast<size_t>(data_end_ - data_), data_,
                         &num_bytes_processed));
      data_ += num_bytes_processed;
    }
    needs_flush_ = !keep_going;
  } while (keep_going && data_ != data_end_);
  return base::OkStatus();
}

// This is the callback called by the open_csd library for each decoded element.
// The element filtering happens here, if we are interested in the element we
// return `OCSD_RESP_WAIT` to tell the library to stop processing, if we are an
// an uninteresting element (one that is being filtered out) we return
// `OCSD_RESP_CONT`so decoding continues.
ocsd_datapath_resp_t ElementCursor::TraceElemIn(const ocsd_trc_index_t,
                                                const uint8_t,
                                                const OcsdTraceElement& elem,
                                                const Mapping* mapping) {
  ++element_index_;
  if (!(type_mask_.matches(elem.getType()))) {
    return OCSD_RESP_CONT;
  }
  element_ = &elem;
  mapping_ = mapping;
  return OCSD_RESP_WAIT;
}

}  // namespace perfetto::trace_processor::etm
