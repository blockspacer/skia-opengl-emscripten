// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class HeapprofdConfig_ContinuousDumpConfig;

class PERFETTO_EXPORT HeapprofdConfig : public ::protozero::Message {
 public:
  enum : int32_t {
    kSamplingIntervalBytesFieldNumber = 1,
    kProcessCmdlineFieldNumber = 2,
    kPidFieldNumber = 4,
    kAllFieldNumber = 5,
    kSkipSymbolPrefixFieldNumber = 7,
    kContinuousDumpConfigFieldNumber = 6,
    kShmemSizeBytesFieldNumber = 8,
    kBlockClientFieldNumber = 9,
    kNoStartupFieldNumber = 10,
    kNoRunningFieldNumber = 11,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/11, /*HAS_REPEATED_FIELDS=*/true> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_sampling_interval_bytes() const { return at<1>().valid(); }
    uint64_t sampling_interval_bytes() const { return at<1>().as_uint64(); }
    bool has_process_cmdline() const { return at<2>().valid(); }
    ::protozero::RepeatedFieldIterator process_cmdline() const { return GetRepeated(2); }
    bool has_pid() const { return at<4>().valid(); }
    ::protozero::RepeatedFieldIterator pid() const { return GetRepeated(4); }
    bool has_all() const { return at<5>().valid(); }
    bool all() const { return at<5>().as_bool(); }
    bool has_skip_symbol_prefix() const { return at<7>().valid(); }
    ::protozero::RepeatedFieldIterator skip_symbol_prefix() const { return GetRepeated(7); }
    bool has_continuous_dump_config() const { return at<6>().valid(); }
    ::protozero::ConstBytes continuous_dump_config() const { return at<6>().as_bytes(); }
    bool has_shmem_size_bytes() const { return at<8>().valid(); }
    uint64_t shmem_size_bytes() const { return at<8>().as_uint64(); }
    bool has_block_client() const { return at<9>().valid(); }
    bool block_client() const { return at<9>().as_bool(); }
    bool has_no_startup() const { return at<10>().valid(); }
    bool no_startup() const { return at<10>().as_bool(); }
    bool has_no_running() const { return at<11>().valid(); }
    bool no_running() const { return at<11>().as_bool(); }
  };
  using ContinuousDumpConfig = ::perfetto::protos::pbzero::HeapprofdConfig_ContinuousDumpConfig;
  void set_sampling_interval_bytes(uint64_t value) {
    AppendVarInt(1, value);
  }
  void add_process_cmdline(const char* value) {
    AppendString(2, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void add_process_cmdline(const char* value, size_t size) {
    AppendBytes(2, value, size);
  }
  void add_pid(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_all(bool value) {
    AppendTinyVarInt(5, value);
  }
  void add_skip_symbol_prefix(const char* value) {
    AppendString(7, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void add_skip_symbol_prefix(const char* value, size_t size) {
    AppendBytes(7, value, size);
  }
  template <typename T = HeapprofdConfig_ContinuousDumpConfig> T* set_continuous_dump_config() {
    return BeginNestedMessage<T>(6);
  }

  void set_shmem_size_bytes(uint64_t value) {
    AppendVarInt(8, value);
  }
  void set_block_client(bool value) {
    AppendTinyVarInt(9, value);
  }
  void set_no_startup(bool value) {
    AppendTinyVarInt(10, value);
  }
  void set_no_running(bool value) {
    AppendTinyVarInt(11, value);
  }
};

class PERFETTO_EXPORT HeapprofdConfig_ContinuousDumpConfig : public ::protozero::Message {
 public:
  enum : int32_t {
    kDumpPhaseMsFieldNumber = 5,
    kDumpIntervalMsFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_dump_phase_ms() const { return at<5>().valid(); }
    uint32_t dump_phase_ms() const { return at<5>().as_uint32(); }
    bool has_dump_interval_ms() const { return at<6>().valid(); }
    uint32_t dump_interval_ms() const { return at<6>().as_uint32(); }
  };
  void set_dump_phase_ms(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_dump_interval_ms(uint32_t value) {
    AppendVarInt(6, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
