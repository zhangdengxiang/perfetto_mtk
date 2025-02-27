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
#include "protos/perfetto/config/android/android_input_event_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

AndroidInputEventConfig::AndroidInputEventConfig() = default;
AndroidInputEventConfig::~AndroidInputEventConfig() = default;
AndroidInputEventConfig::AndroidInputEventConfig(const AndroidInputEventConfig&) = default;
AndroidInputEventConfig& AndroidInputEventConfig::operator=(const AndroidInputEventConfig&) = default;
AndroidInputEventConfig::AndroidInputEventConfig(AndroidInputEventConfig&&) noexcept = default;
AndroidInputEventConfig& AndroidInputEventConfig::operator=(AndroidInputEventConfig&&) = default;

bool AndroidInputEventConfig::operator==(const AndroidInputEventConfig& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(mode_, other.mode_)
   && ::protozero::internal::gen_helpers::EqualsField(rules_, other.rules_)
   && ::protozero::internal::gen_helpers::EqualsField(trace_dispatcher_input_events_, other.trace_dispatcher_input_events_)
   && ::protozero::internal::gen_helpers::EqualsField(trace_dispatcher_window_dispatch_, other.trace_dispatcher_window_dispatch_);
}

int AndroidInputEventConfig::rules_size() const { return static_cast<int>(rules_.size()); }
void AndroidInputEventConfig::clear_rules() { rules_.clear(); }
AndroidInputEventConfig_TraceRule* AndroidInputEventConfig::add_rules() { rules_.emplace_back(); return &rules_.back(); }
bool AndroidInputEventConfig::ParseFromArray(const void* raw, size_t size) {
  rules_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* mode */:
        field.get(&mode_);
        break;
      case 2 /* rules */:
        rules_.emplace_back();
        rules_.back().ParseFromArray(field.data(), field.size());
        break;
      case 3 /* trace_dispatcher_input_events */:
        field.get(&trace_dispatcher_input_events_);
        break;
      case 4 /* trace_dispatcher_window_dispatch */:
        field.get(&trace_dispatcher_window_dispatch_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidInputEventConfig::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidInputEventConfig::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidInputEventConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: mode
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, mode_, msg);
  }

  // Field 2: rules
  for (auto& it : rules_) {
    it.Serialize(msg->BeginNestedMessage<::protozero::Message>(2));
  }

  // Field 3: trace_dispatcher_input_events
  if (_has_field_[3]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(3, trace_dispatcher_input_events_, msg);
  }

  // Field 4: trace_dispatcher_window_dispatch
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(4, trace_dispatcher_window_dispatch_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}


AndroidInputEventConfig_TraceRule::AndroidInputEventConfig_TraceRule() = default;
AndroidInputEventConfig_TraceRule::~AndroidInputEventConfig_TraceRule() = default;
AndroidInputEventConfig_TraceRule::AndroidInputEventConfig_TraceRule(const AndroidInputEventConfig_TraceRule&) = default;
AndroidInputEventConfig_TraceRule& AndroidInputEventConfig_TraceRule::operator=(const AndroidInputEventConfig_TraceRule&) = default;
AndroidInputEventConfig_TraceRule::AndroidInputEventConfig_TraceRule(AndroidInputEventConfig_TraceRule&&) noexcept = default;
AndroidInputEventConfig_TraceRule& AndroidInputEventConfig_TraceRule::operator=(AndroidInputEventConfig_TraceRule&&) = default;

bool AndroidInputEventConfig_TraceRule::operator==(const AndroidInputEventConfig_TraceRule& other) const {
  return ::protozero::internal::gen_helpers::EqualsField(unknown_fields_, other.unknown_fields_)
   && ::protozero::internal::gen_helpers::EqualsField(trace_level_, other.trace_level_)
   && ::protozero::internal::gen_helpers::EqualsField(match_all_packages_, other.match_all_packages_)
   && ::protozero::internal::gen_helpers::EqualsField(match_any_packages_, other.match_any_packages_)
   && ::protozero::internal::gen_helpers::EqualsField(match_secure_, other.match_secure_)
   && ::protozero::internal::gen_helpers::EqualsField(match_ime_connection_active_, other.match_ime_connection_active_);
}

bool AndroidInputEventConfig_TraceRule::ParseFromArray(const void* raw, size_t size) {
  match_all_packages_.clear();
  match_any_packages_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* trace_level */:
        field.get(&trace_level_);
        break;
      case 2 /* match_all_packages */:
        match_all_packages_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &match_all_packages_.back());
        break;
      case 3 /* match_any_packages */:
        match_any_packages_.emplace_back();
        ::protozero::internal::gen_helpers::DeserializeString(field, &match_any_packages_.back());
        break;
      case 4 /* match_secure */:
        field.get(&match_secure_);
        break;
      case 5 /* match_ime_connection_active */:
        field.get(&match_ime_connection_active_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidInputEventConfig_TraceRule::SerializeAsString() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidInputEventConfig_TraceRule::SerializeAsArray() const {
  ::protozero::internal::gen_helpers::MessageSerializer msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidInputEventConfig_TraceRule::Serialize(::protozero::Message* msg) const {
  // Field 1: trace_level
  if (_has_field_[1]) {
    ::protozero::internal::gen_helpers::SerializeVarInt(1, trace_level_, msg);
  }

  // Field 2: match_all_packages
  for (auto& it : match_all_packages_) {
    ::protozero::internal::gen_helpers::SerializeString(2, it, msg);
  }

  // Field 3: match_any_packages
  for (auto& it : match_any_packages_) {
    ::protozero::internal::gen_helpers::SerializeString(3, it, msg);
  }

  // Field 4: match_secure
  if (_has_field_[4]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(4, match_secure_, msg);
  }

  // Field 5: match_ime_connection_active
  if (_has_field_[5]) {
    ::protozero::internal::gen_helpers::SerializeTinyVarInt(5, match_ime_connection_active_, msg);
  }

  protozero::internal::gen_helpers::SerializeUnknownFields(unknown_fields_, msg);
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
