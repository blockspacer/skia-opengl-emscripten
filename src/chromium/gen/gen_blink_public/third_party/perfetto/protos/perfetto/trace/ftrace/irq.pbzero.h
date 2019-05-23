// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_IRQ_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_IRQ_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT IrqHandlerExitFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kIrqFieldNumber = 1,
    kRetFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_irq() const { return at<1>().valid(); }
    int32_t irq() const { return at<1>().as_int32(); }
    bool has_ret() const { return at<2>().valid(); }
    int32_t ret() const { return at<2>().as_int32(); }
  };
  void set_irq(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_ret(int32_t value) {
    AppendVarInt(2, value);
  }
};

class PERFETTO_EXPORT IrqHandlerEntryFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kIrqFieldNumber = 1,
    kNameFieldNumber = 2,
    kHandlerFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_irq() const { return at<1>().valid(); }
    int32_t irq() const { return at<1>().as_int32(); }
    bool has_name() const { return at<2>().valid(); }
    ::protozero::ConstChars name() const { return at<2>().as_string(); }
    bool has_handler() const { return at<3>().valid(); }
    uint32_t handler() const { return at<3>().as_uint32(); }
  };
  void set_irq(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_name(const char* value) {
    AppendString(2, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_name(const char* value, size_t size) {
    AppendBytes(2, value, size);
  }
  void set_handler(uint32_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT SoftirqRaiseFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kVecFieldNumber = 1,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_vec() const { return at<1>().valid(); }
    uint32_t vec() const { return at<1>().as_uint32(); }
  };
  void set_vec(uint32_t value) {
    AppendVarInt(1, value);
  }
};

class PERFETTO_EXPORT SoftirqExitFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kVecFieldNumber = 1,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_vec() const { return at<1>().valid(); }
    uint32_t vec() const { return at<1>().as_uint32(); }
  };
  void set_vec(uint32_t value) {
    AppendVarInt(1, value);
  }
};

class PERFETTO_EXPORT SoftirqEntryFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kVecFieldNumber = 1,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_vec() const { return at<1>().valid(); }
    uint32_t vec() const { return at<1>().as_uint32(); }
  };
  void set_vec(uint32_t value) {
    AppendVarInt(1, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
