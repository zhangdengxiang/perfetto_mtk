// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEW_IMEFOCUSCONTROLLER_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEW_IMEFOCUSCONTROLLER_PROTO_H_

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

class ImeFocusControllerProto_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ImeFocusControllerProto_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ImeFocusControllerProto_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ImeFocusControllerProto_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_has_ime_focus() const { return at<1>().valid(); }
  bool has_ime_focus() const { return at<1>().as_bool(); }
  bool has_served_view() const { return at<2>().valid(); }
  ::protozero::ConstChars served_view() const { return at<2>().as_string(); }
  bool has_next_served_view() const { return at<3>().valid(); }
  ::protozero::ConstChars next_served_view() const { return at<3>().as_string(); }
};

class ImeFocusControllerProto : public ::protozero::Message {
 public:
  using Decoder = ImeFocusControllerProto_Decoder;
  enum : int32_t {
    kHasImeFocusFieldNumber = 1,
    kServedViewFieldNumber = 2,
    kNextServedViewFieldNumber = 3,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ImeFocusControllerProto"; }


  using FieldMetadata_HasImeFocus =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ImeFocusControllerProto>;

  static constexpr FieldMetadata_HasImeFocus kHasImeFocus{};
  void set_has_ime_focus(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasImeFocus::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ServedView =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ImeFocusControllerProto>;

  static constexpr FieldMetadata_ServedView kServedView{};
  void set_served_view(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ServedView::kFieldId, data, size);
  }
  void set_served_view(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ServedView::kFieldId, chars.data, chars.size);
  }
  void set_served_view(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ServedView::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_NextServedView =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ImeFocusControllerProto>;

  static constexpr FieldMetadata_NextServedView kNextServedView{};
  void set_next_served_view(const char* data, size_t size) {
    AppendBytes(FieldMetadata_NextServedView::kFieldId, data, size);
  }
  void set_next_served_view(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_NextServedView::kFieldId, chars.data, chars.size);
  }
  void set_next_served_view(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_NextServedView::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
