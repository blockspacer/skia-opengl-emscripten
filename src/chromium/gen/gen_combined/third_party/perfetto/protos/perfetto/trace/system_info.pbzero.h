// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_SYSTEM_INFO_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class Utsname;

class PERFETTO_EXPORT SystemInfo : public ::protozero::Message {
 public:
  enum : int32_t {
    kUtsnameFieldNumber = 1,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_utsname() const { return at<1>().valid(); }
    ::protozero::ConstBytes utsname() const { return at<1>().as_bytes(); }
  };
  template <typename T = Utsname> T* set_utsname() {
    return BeginNestedMessage<T>(1);
  }

};

class PERFETTO_EXPORT Utsname : public ::protozero::Message {
 public:
  enum : int32_t {
    kSysnameFieldNumber = 1,
    kVersionFieldNumber = 2,
    kReleaseFieldNumber = 3,
    kMachineFieldNumber = 4,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_sysname() const { return at<1>().valid(); }
    ::protozero::ConstChars sysname() const { return at<1>().as_string(); }
    bool has_version() const { return at<2>().valid(); }
    ::protozero::ConstChars version() const { return at<2>().as_string(); }
    bool has_release() const { return at<3>().valid(); }
    ::protozero::ConstChars release() const { return at<3>().as_string(); }
    bool has_machine() const { return at<4>().valid(); }
    ::protozero::ConstChars machine() const { return at<4>().as_string(); }
  };
  void set_sysname(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_sysname(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_version(const char* value) {
    AppendString(2, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_version(const char* value, size_t size) {
    AppendBytes(2, value, size);
  }
  void set_release(const char* value) {
    AppendString(3, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_release(const char* value, size_t size) {
    AppendBytes(3, value, size);
  }
  void set_machine(const char* value) {
    AppendString(4, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_machine(const char* value, size_t size) {
    AppendBytes(4, value, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.