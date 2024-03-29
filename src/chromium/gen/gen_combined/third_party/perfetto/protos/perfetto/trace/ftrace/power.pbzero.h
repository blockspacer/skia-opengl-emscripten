// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_POWER_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_POWER_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT SuspendResumeFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kActionFieldNumber = 1,
    kValFieldNumber = 2,
    kStartFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_action() const { return at<1>().valid(); }
    ::protozero::ConstChars action() const { return at<1>().as_string(); }
    bool has_val() const { return at<2>().valid(); }
    int32_t val() const { return at<2>().as_int32(); }
    bool has_start() const { return at<3>().valid(); }
    uint32_t start() const { return at<3>().as_uint32(); }
  };
  void set_action(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_action(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_val(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_start(uint32_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT ClockSetRateFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_name() const { return at<1>().valid(); }
    ::protozero::ConstChars name() const { return at<1>().as_string(); }
    bool has_state() const { return at<2>().valid(); }
    uint64_t state() const { return at<2>().as_uint64(); }
    bool has_cpu_id() const { return at<3>().valid(); }
    uint64_t cpu_id() const { return at<3>().as_uint64(); }
  };
  void set_name(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_name(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_state(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_cpu_id(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT ClockDisableFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_name() const { return at<1>().valid(); }
    ::protozero::ConstChars name() const { return at<1>().as_string(); }
    bool has_state() const { return at<2>().valid(); }
    uint64_t state() const { return at<2>().as_uint64(); }
    bool has_cpu_id() const { return at<3>().valid(); }
    uint64_t cpu_id() const { return at<3>().as_uint64(); }
  };
  void set_name(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_name(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_state(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_cpu_id(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT ClockEnableFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNameFieldNumber = 1,
    kStateFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_name() const { return at<1>().valid(); }
    ::protozero::ConstChars name() const { return at<1>().as_string(); }
    bool has_state() const { return at<2>().valid(); }
    uint64_t state() const { return at<2>().as_uint64(); }
    bool has_cpu_id() const { return at<3>().valid(); }
    uint64_t cpu_id() const { return at<3>().as_uint64(); }
  };
  void set_name(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_name(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_state(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_cpu_id(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT CpuIdleFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kStateFieldNumber = 1,
    kCpuIdFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_state() const { return at<1>().valid(); }
    uint32_t state() const { return at<1>().as_uint32(); }
    bool has_cpu_id() const { return at<2>().valid(); }
    uint32_t cpu_id() const { return at<2>().as_uint32(); }
  };
  void set_state(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_cpu_id(uint32_t value) {
    AppendVarInt(2, value);
  }
};

class PERFETTO_EXPORT CpuFrequencyLimitsFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kMinFreqFieldNumber = 1,
    kMaxFreqFieldNumber = 2,
    kCpuIdFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_min_freq() const { return at<1>().valid(); }
    uint32_t min_freq() const { return at<1>().as_uint32(); }
    bool has_max_freq() const { return at<2>().valid(); }
    uint32_t max_freq() const { return at<2>().as_uint32(); }
    bool has_cpu_id() const { return at<3>().valid(); }
    uint32_t cpu_id() const { return at<3>().as_uint32(); }
  };
  void set_min_freq(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_max_freq(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_cpu_id(uint32_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT CpuFrequencyFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kStateFieldNumber = 1,
    kCpuIdFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_state() const { return at<1>().valid(); }
    uint32_t state() const { return at<1>().as_uint32(); }
    bool has_cpu_id() const { return at<2>().valid(); }
    uint32_t cpu_id() const { return at<2>().as_uint32(); }
  };
  void set_state(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_cpu_id(uint32_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
