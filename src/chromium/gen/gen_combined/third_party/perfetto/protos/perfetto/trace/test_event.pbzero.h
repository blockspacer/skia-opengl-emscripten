// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_TEST_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_TEST_EVENT_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT TestEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kStrFieldNumber = 1,
    kSeqValueFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_str() const { return at<1>().valid(); }
    ::protozero::ConstChars str() const { return at<1>().as_string(); }
    bool has_seq_value() const { return at<2>().valid(); }
    uint32_t seq_value() const { return at<2>().as_uint32(); }
  };
  void set_str(const char* value) {
    AppendString(1, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_str(const char* value, size_t size) {
    AppendBytes(1, value, size);
  }
  void set_seq_value(uint32_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.