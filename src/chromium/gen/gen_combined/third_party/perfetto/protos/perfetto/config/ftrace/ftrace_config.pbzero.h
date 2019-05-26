// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_CONFIG_FTRACE_FTRACE_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_CONFIG_FTRACE_FTRACE_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT FtraceConfig : public ::protozero::Message {
 public:
  enum : int32_t {
    kFtraceEventsFieldNumber = 1,
    kAtraceCategoriesFieldNumber = 2,
    kAtraceAppsFieldNumber = 3,
    kBufferSizeKbFieldNumber = 10,
    kDrainPeriodMsFieldNumber = 11,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/11, /*HAS_REPEATED_FIELDS=*/true> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_ftrace_events() const { return at<1>().valid(); }
    ::protozero::RepeatedFieldIterator ftrace_events() const { return GetRepeated(1); }
    bool has_atrace_categories() const { return at<2>().valid(); }
    ::protozero::RepeatedFieldIterator atrace_categories() const { return GetRepeated(2); }
    bool has_atrace_apps() const { return at<3>().valid(); }
    ::protozero::RepeatedFieldIterator atrace_apps() const { return GetRepeated(3); }
    bool has_buffer_size_kb() const { return at<10>().valid(); }
    uint32_t buffer_size_kb() const { return at<10>().as_uint32(); }
    bool has_drain_period_ms() const { return at<11>().valid(); }
    uint32_t drain_period_ms() const { return at<11>().as_uint32(); }
  };
  void add_ftrace_events(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void add_ftrace_events(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void add_atrace_categories(const char* value) {
    AppendString(2, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void add_atrace_categories(const char* value, size_t size) {
    AppendBytes(2, value, size);
  }
  void add_atrace_apps(const char* value) {
    AppendString(3, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void add_atrace_apps(const char* value, size_t size) {
    AppendBytes(3, value, size);
  }
  void set_buffer_size_kb(uint32_t value) {
    AppendVarInt(10, value);
  }
  void set_drain_period_ms(uint32_t value) {
    AppendVarInt(11, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.