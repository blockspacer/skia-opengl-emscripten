// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_BLOCK_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_FTRACE_BLOCK_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT BlockUnplugFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNrRqFieldNumber = 1,
    kCommFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_nr_rq() const { return at<1>().valid(); }
    int32_t nr_rq() const { return at<1>().as_int32(); }
    bool has_comm() const { return at<2>().valid(); }
    ::protozero::ConstChars comm() const { return at<2>().as_string(); }
  };
  void set_nr_rq(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_comm(const char* value) {
    AppendString(2, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(2, value, size);
  }
};

class PERFETTO_EXPORT BlockTouchBufferFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_size() const { return at<3>().valid(); }
    uint64_t size() const { return at<3>().as_uint64(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_size(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT BlockSplitFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNewSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_new_sector() const { return at<3>().valid(); }
    uint64_t new_sector() const { return at<3>().as_uint64(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_new_sector(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockSleeprqFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockRqRequeueFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kErrorsFieldNumber = 4,
    kRwbsFieldNumber = 5,
    kCmdFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_errors() const { return at<4>().valid(); }
    int32_t errors() const { return at<4>().as_int32(); }
    bool has_rwbs() const { return at<5>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<5>().as_string(); }
    bool has_cmd() const { return at<6>().valid(); }
    ::protozero::ConstChars cmd() const { return at<6>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_errors(int32_t value) {
    AppendVarInt(4, value);
  }
  void set_rwbs(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
  void set_cmd(const char* value) {
    AppendString(6, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_cmd(const char* value, size_t size) {
    AppendBytes(6, value, size);
  }
};

class PERFETTO_EXPORT BlockRqRemapFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kOldDevFieldNumber = 4,
    kOldSectorFieldNumber = 5,
    kNrBiosFieldNumber = 6,
    kRwbsFieldNumber = 7,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_old_dev() const { return at<4>().valid(); }
    uint64_t old_dev() const { return at<4>().as_uint64(); }
    bool has_old_sector() const { return at<5>().valid(); }
    uint64_t old_sector() const { return at<5>().as_uint64(); }
    bool has_nr_bios() const { return at<6>().valid(); }
    uint32_t nr_bios() const { return at<6>().as_uint32(); }
    bool has_rwbs() const { return at<7>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<7>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_old_dev(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_old_sector(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_nr_bios(uint32_t value) {
    AppendVarInt(6, value);
  }
  void set_rwbs(const char* value) {
    AppendString(7, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(7, value, size);
  }
};

class PERFETTO_EXPORT BlockRqInsertFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kBytesFieldNumber = 4,
    kRwbsFieldNumber = 5,
    kCommFieldNumber = 6,
    kCmdFieldNumber = 7,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_bytes() const { return at<4>().valid(); }
    uint32_t bytes() const { return at<4>().as_uint32(); }
    bool has_rwbs() const { return at<5>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<5>().as_string(); }
    bool has_comm() const { return at<6>().valid(); }
    ::protozero::ConstChars comm() const { return at<6>().as_string(); }
    bool has_cmd() const { return at<7>().valid(); }
    ::protozero::ConstChars cmd() const { return at<7>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_bytes(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_rwbs(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
  void set_comm(const char* value) {
    AppendString(6, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(6, value, size);
  }
  void set_cmd(const char* value) {
    AppendString(7, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_cmd(const char* value, size_t size) {
    AppendBytes(7, value, size);
  }
};

class PERFETTO_EXPORT BlockRqCompleteFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kErrorsFieldNumber = 4,
    kRwbsFieldNumber = 5,
    kCmdFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_errors() const { return at<4>().valid(); }
    int32_t errors() const { return at<4>().as_int32(); }
    bool has_rwbs() const { return at<5>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<5>().as_string(); }
    bool has_cmd() const { return at<6>().valid(); }
    ::protozero::ConstChars cmd() const { return at<6>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_errors(int32_t value) {
    AppendVarInt(4, value);
  }
  void set_rwbs(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
  void set_cmd(const char* value) {
    AppendString(6, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_cmd(const char* value, size_t size) {
    AppendBytes(6, value, size);
  }
};

class PERFETTO_EXPORT BlockRqAbortFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kErrorsFieldNumber = 4,
    kRwbsFieldNumber = 5,
    kCmdFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_errors() const { return at<4>().valid(); }
    int32_t errors() const { return at<4>().as_int32(); }
    bool has_rwbs() const { return at<5>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<5>().as_string(); }
    bool has_cmd() const { return at<6>().valid(); }
    ::protozero::ConstChars cmd() const { return at<6>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_errors(int32_t value) {
    AppendVarInt(4, value);
  }
  void set_rwbs(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
  void set_cmd(const char* value) {
    AppendString(6, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_cmd(const char* value, size_t size) {
    AppendBytes(6, value, size);
  }
};

class PERFETTO_EXPORT BlockPlugFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kCommFieldNumber = 1,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_comm() const { return at<1>().valid(); }
    ::protozero::ConstChars comm() const { return at<1>().as_string(); }
  };
  void set_comm(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
};

class PERFETTO_EXPORT BlockGetrqFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockDirtyBufferFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_size() const { return at<3>().valid(); }
    uint64_t size() const { return at<3>().as_uint64(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_size(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class PERFETTO_EXPORT BlockBioRemapFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kOldDevFieldNumber = 4,
    kOldSectorFieldNumber = 5,
    kRwbsFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_old_dev() const { return at<4>().valid(); }
    uint64_t old_dev() const { return at<4>().as_uint64(); }
    bool has_old_sector() const { return at<5>().valid(); }
    uint64_t old_sector() const { return at<5>().as_uint64(); }
    bool has_rwbs() const { return at<6>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<6>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_old_dev(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_old_sector(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_rwbs(const char* value) {
    AppendString(6, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(6, value, size);
  }
};

class PERFETTO_EXPORT BlockBioQueueFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockBioFrontmergeFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockBioCompleteFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kErrorFieldNumber = 4,
    kRwbsFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_error() const { return at<4>().valid(); }
    int32_t error() const { return at<4>().as_int32(); }
    bool has_rwbs() const { return at<5>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_error(int32_t value) {
    AppendVarInt(4, value);
  }
  void set_rwbs(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockBioBounceFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockBioBackmergeFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kRwbsFieldNumber = 4,
    kCommFieldNumber = 5,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_rwbs() const { return at<4>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<4>().as_string(); }
    bool has_comm() const { return at<5>().valid(); }
    ::protozero::ConstChars comm() const { return at<5>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_rwbs(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
  void set_comm(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
};

class PERFETTO_EXPORT BlockRqIssueFtraceEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kDevFieldNumber = 1,
    kSectorFieldNumber = 2,
    kNrSectorFieldNumber = 3,
    kBytesFieldNumber = 4,
    kRwbsFieldNumber = 5,
    kCommFieldNumber = 6,
    kCmdFieldNumber = 7,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dev() const { return at<1>().valid(); }
    uint64_t dev() const { return at<1>().as_uint64(); }
    bool has_sector() const { return at<2>().valid(); }
    uint64_t sector() const { return at<2>().as_uint64(); }
    bool has_nr_sector() const { return at<3>().valid(); }
    uint32_t nr_sector() const { return at<3>().as_uint32(); }
    bool has_bytes() const { return at<4>().valid(); }
    uint32_t bytes() const { return at<4>().as_uint32(); }
    bool has_rwbs() const { return at<5>().valid(); }
    ::protozero::ConstChars rwbs() const { return at<5>().as_string(); }
    bool has_comm() const { return at<6>().valid(); }
    ::protozero::ConstChars comm() const { return at<6>().as_string(); }
    bool has_cmd() const { return at<7>().valid(); }
    ::protozero::ConstChars cmd() const { return at<7>().as_string(); }
  };
  void set_dev(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_sector(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_nr_sector(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_bytes(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_rwbs(const char* value) {
    AppendString(5, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_rwbs(const char* value, size_t size) {
    AppendBytes(5, value, size);
  }
  void set_comm(const char* value) {
    AppendString(6, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_comm(const char* value, size_t size) {
    AppendBytes(6, value, size);
  }
  void set_cmd(const char* value) {
    AppendString(7, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_cmd(const char* value, size_t size) {
    AppendBytes(7, value, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
