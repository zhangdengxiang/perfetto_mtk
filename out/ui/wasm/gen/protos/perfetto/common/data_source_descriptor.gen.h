// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_DATA_SOURCE_DESCRIPTOR_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_DATA_SOURCE_DESCRIPTOR_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class DataSourceDescriptor;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT_COMPONENT DataSourceDescriptor : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kIdFieldNumber = 7,
    kWillNotifyOnStopFieldNumber = 2,
    kWillNotifyOnStartFieldNumber = 3,
    kHandlesIncrementalStateClearFieldNumber = 4,
    kNoFlushFieldNumber = 9,
    kGpuCounterDescriptorFieldNumber = 5,
    kTrackEventDescriptorFieldNumber = 6,
    kFtraceDescriptorFieldNumber = 8,
  };

  DataSourceDescriptor();
  ~DataSourceDescriptor() override;
  DataSourceDescriptor(DataSourceDescriptor&&) noexcept;
  DataSourceDescriptor& operator=(DataSourceDescriptor&&);
  DataSourceDescriptor(const DataSourceDescriptor&);
  DataSourceDescriptor& operator=(const DataSourceDescriptor&);
  bool operator==(const DataSourceDescriptor&) const;
  bool operator!=(const DataSourceDescriptor& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_id() const { return _has_field_[7]; }
  uint64_t id() const { return id_; }
  void set_id(uint64_t value) { id_ = value; _has_field_.set(7); }

  bool has_will_notify_on_stop() const { return _has_field_[2]; }
  bool will_notify_on_stop() const { return will_notify_on_stop_; }
  void set_will_notify_on_stop(bool value) { will_notify_on_stop_ = value; _has_field_.set(2); }

  bool has_will_notify_on_start() const { return _has_field_[3]; }
  bool will_notify_on_start() const { return will_notify_on_start_; }
  void set_will_notify_on_start(bool value) { will_notify_on_start_ = value; _has_field_.set(3); }

  bool has_handles_incremental_state_clear() const { return _has_field_[4]; }
  bool handles_incremental_state_clear() const { return handles_incremental_state_clear_; }
  void set_handles_incremental_state_clear(bool value) { handles_incremental_state_clear_ = value; _has_field_.set(4); }

  bool has_no_flush() const { return _has_field_[9]; }
  bool no_flush() const { return no_flush_; }
  void set_no_flush(bool value) { no_flush_ = value; _has_field_.set(9); }

  const std::string& gpu_counter_descriptor_raw() const { return gpu_counter_descriptor_; }
  void set_gpu_counter_descriptor_raw(const std::string& raw) { gpu_counter_descriptor_ = raw; _has_field_.set(5); }

  const std::string& track_event_descriptor_raw() const { return track_event_descriptor_; }
  void set_track_event_descriptor_raw(const std::string& raw) { track_event_descriptor_ = raw; _has_field_.set(6); }

  const std::string& ftrace_descriptor_raw() const { return ftrace_descriptor_; }
  void set_ftrace_descriptor_raw(const std::string& raw) { ftrace_descriptor_ = raw; _has_field_.set(8); }

 private:
  std::string name_{};
  uint64_t id_{};
  bool will_notify_on_stop_{};
  bool will_notify_on_start_{};
  bool handles_incremental_state_clear_{};
  bool no_flush_{};
  std::string gpu_counter_descriptor_;  // [lazy=true]
  std::string track_event_descriptor_;  // [lazy=true]
  std::string ftrace_descriptor_;  // [lazy=true]

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<10> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_DATA_SOURCE_DESCRIPTOR_PROTO_CPP_H_
