// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEW_REMOTE_ANIMATION_TARGET_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_VIEW_REMOTE_ANIMATION_TARGET_PROTO_H_

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
class PointProto;
class RectProto;
class SurfaceControlProto;
class WindowConfigurationProto;
} // Namespace pbzero.
} // Namespace protos.
} // Namespace perfetto.

namespace perfetto {
namespace protos {
namespace pbzero {

class RemoteAnimationTargetProto_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/14, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  RemoteAnimationTargetProto_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit RemoteAnimationTargetProto_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit RemoteAnimationTargetProto_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_task_id() const { return at<1>().valid(); }
  int32_t task_id() const { return at<1>().as_int32(); }
  bool has_mode() const { return at<2>().valid(); }
  int32_t mode() const { return at<2>().as_int32(); }
  bool has_leash() const { return at<3>().valid(); }
  ::protozero::ConstBytes leash() const { return at<3>().as_bytes(); }
  bool has_is_translucent() const { return at<4>().valid(); }
  bool is_translucent() const { return at<4>().as_bool(); }
  bool has_clip_rect() const { return at<5>().valid(); }
  ::protozero::ConstBytes clip_rect() const { return at<5>().as_bytes(); }
  bool has_content_insets() const { return at<6>().valid(); }
  ::protozero::ConstBytes content_insets() const { return at<6>().as_bytes(); }
  bool has_prefix_order_index() const { return at<7>().valid(); }
  int32_t prefix_order_index() const { return at<7>().as_int32(); }
  bool has_position() const { return at<8>().valid(); }
  ::protozero::ConstBytes position() const { return at<8>().as_bytes(); }
  bool has_source_container_bounds() const { return at<9>().valid(); }
  ::protozero::ConstBytes source_container_bounds() const { return at<9>().as_bytes(); }
  bool has_window_configuration() const { return at<10>().valid(); }
  ::protozero::ConstBytes window_configuration() const { return at<10>().as_bytes(); }
  bool has_start_leash() const { return at<11>().valid(); }
  ::protozero::ConstBytes start_leash() const { return at<11>().as_bytes(); }
  bool has_start_bounds() const { return at<12>().valid(); }
  ::protozero::ConstBytes start_bounds() const { return at<12>().as_bytes(); }
  bool has_local_bounds() const { return at<13>().valid(); }
  ::protozero::ConstBytes local_bounds() const { return at<13>().as_bytes(); }
  bool has_screen_space_bounds() const { return at<14>().valid(); }
  ::protozero::ConstBytes screen_space_bounds() const { return at<14>().as_bytes(); }
};

class RemoteAnimationTargetProto : public ::protozero::Message {
 public:
  using Decoder = RemoteAnimationTargetProto_Decoder;
  enum : int32_t {
    kTaskIdFieldNumber = 1,
    kModeFieldNumber = 2,
    kLeashFieldNumber = 3,
    kIsTranslucentFieldNumber = 4,
    kClipRectFieldNumber = 5,
    kContentInsetsFieldNumber = 6,
    kPrefixOrderIndexFieldNumber = 7,
    kPositionFieldNumber = 8,
    kSourceContainerBoundsFieldNumber = 9,
    kWindowConfigurationFieldNumber = 10,
    kStartLeashFieldNumber = 11,
    kStartBoundsFieldNumber = 12,
    kLocalBoundsFieldNumber = 13,
    kScreenSpaceBoundsFieldNumber = 14,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.RemoteAnimationTargetProto"; }


  using FieldMetadata_TaskId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_TaskId kTaskId{};
  void set_task_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_TaskId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Mode =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_Mode kMode{};
  void set_mode(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Mode::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Leash =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      SurfaceControlProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_Leash kLeash{};
  template <typename T = SurfaceControlProto> T* set_leash() {
    return BeginNestedMessage<T>(3);
  }


  using FieldMetadata_IsTranslucent =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_IsTranslucent kIsTranslucent{};
  void set_is_translucent(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_IsTranslucent::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ClipRect =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      RectProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_ClipRect kClipRect{};
  template <typename T = RectProto> T* set_clip_rect() {
    return BeginNestedMessage<T>(5);
  }


  using FieldMetadata_ContentInsets =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      RectProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_ContentInsets kContentInsets{};
  template <typename T = RectProto> T* set_content_insets() {
    return BeginNestedMessage<T>(6);
  }


  using FieldMetadata_PrefixOrderIndex =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_PrefixOrderIndex kPrefixOrderIndex{};
  void set_prefix_order_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_PrefixOrderIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Position =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      PointProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_Position kPosition{};
  template <typename T = PointProto> T* set_position() {
    return BeginNestedMessage<T>(8);
  }


  using FieldMetadata_SourceContainerBounds =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      RectProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_SourceContainerBounds kSourceContainerBounds{};
  template <typename T = RectProto> T* set_source_container_bounds() {
    return BeginNestedMessage<T>(9);
  }


  using FieldMetadata_WindowConfiguration =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      WindowConfigurationProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_WindowConfiguration kWindowConfiguration{};
  template <typename T = WindowConfigurationProto> T* set_window_configuration() {
    return BeginNestedMessage<T>(10);
  }


  using FieldMetadata_StartLeash =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      SurfaceControlProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_StartLeash kStartLeash{};
  template <typename T = SurfaceControlProto> T* set_start_leash() {
    return BeginNestedMessage<T>(11);
  }


  using FieldMetadata_StartBounds =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      RectProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_StartBounds kStartBounds{};
  template <typename T = RectProto> T* set_start_bounds() {
    return BeginNestedMessage<T>(12);
  }


  using FieldMetadata_LocalBounds =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      RectProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_LocalBounds kLocalBounds{};
  template <typename T = RectProto> T* set_local_bounds() {
    return BeginNestedMessage<T>(13);
  }


  using FieldMetadata_ScreenSpaceBounds =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      RectProto,
      RemoteAnimationTargetProto>;

  static constexpr FieldMetadata_ScreenSpaceBounds kScreenSpaceBounds{};
  template <typename T = RectProto> T* set_screen_space_bounds() {
    return BeginNestedMessage<T>(14);
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
