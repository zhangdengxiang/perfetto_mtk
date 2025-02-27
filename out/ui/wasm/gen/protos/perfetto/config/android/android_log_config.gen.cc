#include "perfetto/protozero/gen_field_helpers.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/config/android/android_log_config.gen.h"
#include "protos/perfetto/common/android_log_constants.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

AndroidLogConfig::AndroidLogConfig() = default;
AndroidLogConfig::~AndroidLogConfig() = default;
AndroidLogConfig::AndroidLogConfig(const AndroidLogConfig&) = default;
AndroidLogConfig& AndroidLogConfig::operator=(const AndroidLogConfig&) = default;
AndroidLogConfig::AndroidLogConfig(AndroidLogConfig&&) noexcept = default;
AndroidLogConfig& AndroidLogConfig::operator=(AndroidLogConfig&&) = default;

bool AndroidLogConfig::operator==(const AndroidLogConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(log_ids_, other.log_ids_)
   && ::protozero::internal::gen_helpers::EqualsField(min_prio_, other.min_prio_)
   && ::protozero::internal::gen_helpers::EqualsField(filter_tags_, other.filter_tags_);
}

bool AndroidLogConfig::ParseFromArray(const void* raw, size_t size) {
  log_ids_.clear();
  filter_tags_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* log_ids */:
        log_ids_.emplace_back();
        field.get(&log_ids_.back());
        break;
      case 3 /* min_prio */:
        field.get(&min_prio_);
        break;
      case 4 /* filter_tags */:
        filter_tags_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &filter_tags_.back());
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidLogConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidLogConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidLogConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: log_ids
  for (auto& it : log_ids_) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, it, msg);
  }

  // Field 3: min_prio
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(3, min_prio_, msg);
  }

  // Field 4: filter_tags
  for (auto& it : filter_tags_) {
    ::protozero::internal::gen_helpers::SerializeString(4, it, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
