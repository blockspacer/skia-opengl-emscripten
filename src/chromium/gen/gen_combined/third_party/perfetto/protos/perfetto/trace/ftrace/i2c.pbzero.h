// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_I2C_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_I2C_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT SmbusReplyFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kAddrFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kCommandFieldNumber = 4,
    kLenFieldNumber = 5,
    kProtocolFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_addr() const { return at<2>().valid(); }
    uint32_t addr() const { return at<2>().as_uint32(); }
    bool has_flags() const { return at<3>().valid(); }
    uint32_t flags() const { return at<3>().as_uint32(); }
    bool has_command() const { return at<4>().valid(); }
    uint32_t command() const { return at<4>().as_uint32(); }
    bool has_len() const { return at<5>().valid(); }
    uint32_t len() const { return at<5>().as_uint32(); }
    bool has_protocol() const { return at<6>().valid(); }
    uint32_t protocol() const { return at<6>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class PERFETTO_EXPORT SmbusResultFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kAddrFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kReadWriteFieldNumber = 4,
    kCommandFieldNumber = 5,
    kResFieldNumber = 6,
    kProtocolFieldNumber = 7,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_addr() const { return at<2>().valid(); }
    uint32_t addr() const { return at<2>().as_uint32(); }
    bool has_flags() const { return at<3>().valid(); }
    uint32_t flags() const { return at<3>().as_uint32(); }
    bool has_read_write() const { return at<4>().valid(); }
    uint32_t read_write() const { return at<4>().as_uint32(); }
    bool has_command() const { return at<5>().valid(); }
    uint32_t command() const { return at<5>().as_uint32(); }
    bool has_res() const { return at<6>().valid(); }
    int32_t res() const { return at<6>().as_int32(); }
    bool has_protocol() const { return at<7>().valid(); }
    uint32_t protocol() const { return at<7>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_read_write(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_res(int32_t value) {
    AppendVarInt(6, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(7, value);
  }
};

class PERFETTO_EXPORT SmbusWriteFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kAddrFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kCommandFieldNumber = 4,
    kLenFieldNumber = 5,
    kProtocolFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_addr() const { return at<2>().valid(); }
    uint32_t addr() const { return at<2>().as_uint32(); }
    bool has_flags() const { return at<3>().valid(); }
    uint32_t flags() const { return at<3>().as_uint32(); }
    bool has_command() const { return at<4>().valid(); }
    uint32_t command() const { return at<4>().as_uint32(); }
    bool has_len() const { return at<5>().valid(); }
    uint32_t len() const { return at<5>().as_uint32(); }
    bool has_protocol() const { return at<6>().valid(); }
    uint32_t protocol() const { return at<6>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class PERFETTO_EXPORT SmbusReadFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kFlagsFieldNumber = 2,
    kAddrFieldNumber = 3,
    kCommandFieldNumber = 4,
    kProtocolFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_flags() const { return at<2>().valid(); }
    uint32_t flags() const { return at<2>().as_uint32(); }
    bool has_addr() const { return at<3>().valid(); }
    uint32_t addr() const { return at<3>().as_uint32(); }
    bool has_command() const { return at<4>().valid(); }
    uint32_t command() const { return at<4>().as_uint32(); }
    bool has_protocol() const { return at<5>().valid(); }
    uint32_t protocol() const { return at<5>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(5, value);
  }
};

class PERFETTO_EXPORT I2cReplyFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kMsgNrFieldNumber = 2,
    kAddrFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kLenFieldNumber = 5,
    kBufFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_msg_nr() const { return at<2>().valid(); }
    uint32_t msg_nr() const { return at<2>().as_uint32(); }
    bool has_addr() const { return at<3>().valid(); }
    uint32_t addr() const { return at<3>().as_uint32(); }
    bool has_flags() const { return at<4>().valid(); }
    uint32_t flags() const { return at<4>().as_uint32(); }
    bool has_len() const { return at<5>().valid(); }
    uint32_t len() const { return at<5>().as_uint32(); }
    bool has_buf() const { return at<6>().valid(); }
    uint32_t buf() const { return at<6>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_msg_nr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_buf(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class PERFETTO_EXPORT I2cResultFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kNrMsgsFieldNumber = 2,
    kRetFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_nr_msgs() const { return at<2>().valid(); }
    uint32_t nr_msgs() const { return at<2>().as_uint32(); }
    bool has_ret() const { return at<3>().valid(); }
    int32_t ret() const { return at<3>().as_int32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_nr_msgs(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_ret(int32_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT I2cWriteFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kMsgNrFieldNumber = 2,
    kAddrFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kLenFieldNumber = 5,
    kBufFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_msg_nr() const { return at<2>().valid(); }
    uint32_t msg_nr() const { return at<2>().as_uint32(); }
    bool has_addr() const { return at<3>().valid(); }
    uint32_t addr() const { return at<3>().as_uint32(); }
    bool has_flags() const { return at<4>().valid(); }
    uint32_t flags() const { return at<4>().as_uint32(); }
    bool has_len() const { return at<5>().valid(); }
    uint32_t len() const { return at<5>().as_uint32(); }
    bool has_buf() const { return at<6>().valid(); }
    uint32_t buf() const { return at<6>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_msg_nr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_buf(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class PERFETTO_EXPORT I2cReadFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kMsgNrFieldNumber = 2,
    kAddrFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kLenFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_adapter_nr() const { return at<1>().valid(); }
    int32_t adapter_nr() const { return at<1>().as_int32(); }
    bool has_msg_nr() const { return at<2>().valid(); }
    uint32_t msg_nr() const { return at<2>().as_uint32(); }
    bool has_addr() const { return at<3>().valid(); }
    uint32_t addr() const { return at<3>().as_uint32(); }
    bool has_flags() const { return at<4>().valid(); }
    uint32_t flags() const { return at<4>().as_uint32(); }
    bool has_len() const { return at<5>().valid(); }
    uint32_t len() const { return at<5>().as_uint32(); }
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_msg_nr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
