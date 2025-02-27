// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_CHROME_CHROME_TRIGGER_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_CHROME_CHROME_TRIGGER_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"


namespace perfetto {
namespace protos {
namespace pbzero {

class ChromeTrigger_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeTrigger_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeTrigger_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeTrigger_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_trigger_name() const { return at<1>().valid(); }
  ::protozero::ConstChars trigger_name() const { return at<1>().as_string(); }
  bool has_trigger_name_hash() const { return at<2>().valid(); }
  uint32_t trigger_name_hash() const { return at<2>().as_uint32(); }
  bool has_flow_id() const { return at<3>().valid(); }
  uint64_t flow_id() const { return at<3>().as_uint64(); }
};

class ChromeTrigger : public ::protozero::Message {
 public:
  using Decoder = ChromeTrigger_Decoder;
  enum : int32_t {
    kTriggerNameFieldNumber = 1,
    kTriggerNameHashFieldNumber = 2,
    kFlowIdFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ChromeTrigger"; }


  using FieldMetadata_TriggerName =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ChromeTrigger>;

  static constexpr FieldMetadata_TriggerName kTriggerName{};
  void set_trigger_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_TriggerName::kFieldId, data, size);
  }
  void set_trigger_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_TriggerName::kFieldId, chars.data, chars.size);
  }
  void set_trigger_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_TriggerName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TriggerNameHash =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFixed32,
      uint32_t,
      ChromeTrigger>;

  static constexpr FieldMetadata_TriggerNameHash kTriggerNameHash{};
  void set_trigger_name_hash(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TriggerNameHash::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFixed32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FlowId =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kFixed64,
      uint64_t,
      ChromeTrigger>;

  static constexpr FieldMetadata_FlowId kFlowId{};
  void set_flow_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FlowId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kFixed64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
