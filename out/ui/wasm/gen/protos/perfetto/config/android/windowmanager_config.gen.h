// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_WINDOWMANAGER_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_WINDOWMANAGER_CONFIG_PROTO_CPP_H_

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
class WindowManagerConfig;
enum WindowManagerConfig_LogFrequency : int;
enum WindowManagerConfig_LogLevel : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum WindowManagerConfig_LogFrequency : int {
  WindowManagerConfig_LogFrequency_LOG_FREQUENCY_UNSPECIFIED = 0,
  WindowManagerConfig_LogFrequency_LOG_FREQUENCY_FRAME = 1,
  WindowManagerConfig_LogFrequency_LOG_FREQUENCY_TRANSACTION = 2,
  WindowManagerConfig_LogFrequency_LOG_FREQUENCY_SINGLE_DUMP = 3,
};
enum WindowManagerConfig_LogLevel : int {
  WindowManagerConfig_LogLevel_LOG_LEVEL_UNSPECIFIED = 0,
  WindowManagerConfig_LogLevel_LOG_LEVEL_VERBOSE = 1,
  WindowManagerConfig_LogLevel_LOG_LEVEL_DEBUG = 2,
  WindowManagerConfig_LogLevel_LOG_LEVEL_CRITICAL = 3,
};

class PERFETTO_EXPORT_COMPONENT WindowManagerConfig : public ::protozero::CppMessageObj {
 public:
  using LogFrequency = WindowManagerConfig_LogFrequency;
  static constexpr auto LOG_FREQUENCY_UNSPECIFIED = WindowManagerConfig_LogFrequency_LOG_FREQUENCY_UNSPECIFIED;
  static constexpr auto LOG_FREQUENCY_FRAME = WindowManagerConfig_LogFrequency_LOG_FREQUENCY_FRAME;
  static constexpr auto LOG_FREQUENCY_TRANSACTION = WindowManagerConfig_LogFrequency_LOG_FREQUENCY_TRANSACTION;
  static constexpr auto LOG_FREQUENCY_SINGLE_DUMP = WindowManagerConfig_LogFrequency_LOG_FREQUENCY_SINGLE_DUMP;
  static constexpr auto LogFrequency_MIN = WindowManagerConfig_LogFrequency_LOG_FREQUENCY_UNSPECIFIED;
  static constexpr auto LogFrequency_MAX = WindowManagerConfig_LogFrequency_LOG_FREQUENCY_SINGLE_DUMP;
  using LogLevel = WindowManagerConfig_LogLevel;
  static constexpr auto LOG_LEVEL_UNSPECIFIED = WindowManagerConfig_LogLevel_LOG_LEVEL_UNSPECIFIED;
  static constexpr auto LOG_LEVEL_VERBOSE = WindowManagerConfig_LogLevel_LOG_LEVEL_VERBOSE;
  static constexpr auto LOG_LEVEL_DEBUG = WindowManagerConfig_LogLevel_LOG_LEVEL_DEBUG;
  static constexpr auto LOG_LEVEL_CRITICAL = WindowManagerConfig_LogLevel_LOG_LEVEL_CRITICAL;
  static constexpr auto LogLevel_MIN = WindowManagerConfig_LogLevel_LOG_LEVEL_UNSPECIFIED;
  static constexpr auto LogLevel_MAX = WindowManagerConfig_LogLevel_LOG_LEVEL_CRITICAL;
  enum FieldNumbers {
    kLogFrequencyFieldNumber = 1,
    kLogLevelFieldNumber = 2,
  };

  WindowManagerConfig();
  ~WindowManagerConfig() override;
  WindowManagerConfig(WindowManagerConfig&&) noexcept;
  WindowManagerConfig& operator=(WindowManagerConfig&&);
  WindowManagerConfig(const WindowManagerConfig&);
  WindowManagerConfig& operator=(const WindowManagerConfig&);
  bool operator==(const WindowManagerConfig&) const;
  bool operator!=(const WindowManagerConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_log_frequency() const { return _has_field_[1]; }
  WindowManagerConfig_LogFrequency log_frequency() const { return log_frequency_; }
  void set_log_frequency(WindowManagerConfig_LogFrequency value) { log_frequency_ = value; _has_field_.set(1); }

  bool has_log_level() const { return _has_field_[2]; }
  WindowManagerConfig_LogLevel log_level() const { return log_level_; }
  void set_log_level(WindowManagerConfig_LogLevel value) { log_level_ = value; _has_field_.set(2); }

 private:
  WindowManagerConfig_LogFrequency log_frequency_{};
  WindowManagerConfig_LogLevel log_level_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_ANDROID_WINDOWMANAGER_CONFIG_PROTO_CPP_H_
