// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_WORKQUEUE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_WORKQUEUE_PROTO_H_

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

class WorkqueueQueueWorkFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  WorkqueueQueueWorkFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit WorkqueueQueueWorkFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit WorkqueueQueueWorkFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_work() const { return at<1>().valid(); }
  uint64_t work() const { return at<1>().as_uint64(); }
  bool has_function() const { return at<2>().valid(); }
  uint64_t function() const { return at<2>().as_uint64(); }
  bool has_workqueue() const { return at<3>().valid(); }
  uint64_t workqueue() const { return at<3>().as_uint64(); }
  bool has_req_cpu() const { return at<4>().valid(); }
  uint32_t req_cpu() const { return at<4>().as_uint32(); }
  bool has_cpu() const { return at<5>().valid(); }
  uint32_t cpu() const { return at<5>().as_uint32(); }
};

class WorkqueueQueueWorkFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = WorkqueueQueueWorkFtraceEvent_Decoder;
  enum : int32_t {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
    kWorkqueueFieldNumber = 3,
    kReqCpuFieldNumber = 4,
    kCpuFieldNumber = 5,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.WorkqueueQueueWorkFtraceEvent"; }


  using FieldMetadata_Work =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueQueueWorkFtraceEvent>;

  static constexpr FieldMetadata_Work kWork{};
  void set_work(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Work::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Function =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueQueueWorkFtraceEvent>;

  static constexpr FieldMetadata_Function kFunction{};
  void set_function(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Function::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Workqueue =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueQueueWorkFtraceEvent>;

  static constexpr FieldMetadata_Workqueue kWorkqueue{};
  void set_workqueue(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Workqueue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ReqCpu =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      WorkqueueQueueWorkFtraceEvent>;

  static constexpr FieldMetadata_ReqCpu kReqCpu{};
  void set_req_cpu(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ReqCpu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Cpu =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      WorkqueueQueueWorkFtraceEvent>;

  static constexpr FieldMetadata_Cpu kCpu{};
  void set_cpu(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cpu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

class WorkqueueExecuteStartFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  WorkqueueExecuteStartFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit WorkqueueExecuteStartFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit WorkqueueExecuteStartFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_work() const { return at<1>().valid(); }
  uint64_t work() const { return at<1>().as_uint64(); }
  bool has_function() const { return at<2>().valid(); }
  uint64_t function() const { return at<2>().as_uint64(); }
};

class WorkqueueExecuteStartFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = WorkqueueExecuteStartFtraceEvent_Decoder;
  enum : int32_t {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.WorkqueueExecuteStartFtraceEvent"; }


  using FieldMetadata_Work =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueExecuteStartFtraceEvent>;

  static constexpr FieldMetadata_Work kWork{};
  void set_work(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Work::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Function =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueExecuteStartFtraceEvent>;

  static constexpr FieldMetadata_Function kFunction{};
  void set_function(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Function::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class WorkqueueExecuteEndFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  WorkqueueExecuteEndFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit WorkqueueExecuteEndFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit WorkqueueExecuteEndFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_work() const { return at<1>().valid(); }
  uint64_t work() const { return at<1>().as_uint64(); }
  bool has_function() const { return at<2>().valid(); }
  uint64_t function() const { return at<2>().as_uint64(); }
};

class WorkqueueExecuteEndFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = WorkqueueExecuteEndFtraceEvent_Decoder;
  enum : int32_t {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.WorkqueueExecuteEndFtraceEvent"; }


  using FieldMetadata_Work =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueExecuteEndFtraceEvent>;

  static constexpr FieldMetadata_Work kWork{};
  void set_work(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Work::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Function =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueExecuteEndFtraceEvent>;

  static constexpr FieldMetadata_Function kFunction{};
  void set_function(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Function::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

class WorkqueueActivateWorkFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  WorkqueueActivateWorkFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit WorkqueueActivateWorkFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit WorkqueueActivateWorkFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_work() const { return at<1>().valid(); }
  uint64_t work() const { return at<1>().as_uint64(); }
};

class WorkqueueActivateWorkFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = WorkqueueActivateWorkFtraceEvent_Decoder;
  enum : int32_t {
    kWorkFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.WorkqueueActivateWorkFtraceEvent"; }


  using FieldMetadata_Work =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      WorkqueueActivateWorkFtraceEvent>;

  static constexpr FieldMetadata_Work kWork{};
  void set_work(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Work::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
