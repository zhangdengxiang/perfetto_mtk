// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_CONTENT_LOCALE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_CONTENT_LOCALE_PROTO_H_

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

class LocaleProto_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  LocaleProto_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit LocaleProto_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit LocaleProto_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_language() const { return at<1>().valid(); }
  ::protozero::ConstChars language() const { return at<1>().as_string(); }
  bool has_country() const { return at<2>().valid(); }
  ::protozero::ConstChars country() const { return at<2>().as_string(); }
  bool has_variant() const { return at<3>().valid(); }
  ::protozero::ConstChars variant() const { return at<3>().as_string(); }
  bool has_script() const { return at<4>().valid(); }
  ::protozero::ConstChars script() const { return at<4>().as_string(); }
};

class LocaleProto : public ::protozero::Message {
 public:
  using Decoder = LocaleProto_Decoder;
  enum : int32_t {
    kLanguageFieldNumber = 1,
    kCountryFieldNumber = 2,
    kVariantFieldNumber = 3,
    kScriptFieldNumber = 4,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.LocaleProto"; }


  using FieldMetadata_Language =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      LocaleProto>;

  static constexpr FieldMetadata_Language kLanguage{};
  void set_language(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Language::kFieldId, data, size);
  }
  void set_language(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Language::kFieldId, chars.data, chars.size);
  }
  void set_language(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Language::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Country =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      LocaleProto>;

  static constexpr FieldMetadata_Country kCountry{};
  void set_country(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Country::kFieldId, data, size);
  }
  void set_country(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Country::kFieldId, chars.data, chars.size);
  }
  void set_country(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Country::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Variant =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      LocaleProto>;

  static constexpr FieldMetadata_Variant kVariant{};
  void set_variant(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Variant::kFieldId, data, size);
  }
  void set_variant(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Variant::kFieldId, chars.data, chars.size);
  }
  void set_variant(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Variant::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Script =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      LocaleProto>;

  static constexpr FieldMetadata_Script kScript{};
  void set_script(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Script::kFieldId, data, size);
  }
  void set_script(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Script::kFieldId, chars.data, chars.size);
  }
  void set_script(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Script::kFieldId;
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
