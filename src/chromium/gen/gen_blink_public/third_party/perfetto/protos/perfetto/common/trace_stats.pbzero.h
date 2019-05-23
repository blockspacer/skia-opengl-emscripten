// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_COMMON_TRACE_STATS_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_COMMON_TRACE_STATS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class TraceStats_BufferStats;

class PERFETTO_EXPORT TraceStats : public ::protozero::Message {
 public:
  enum : int32_t {
    kBufferStatsFieldNumber = 1,
    kProducersConnectedFieldNumber = 2,
    kProducersSeenFieldNumber = 3,
    kDataSourcesRegisteredFieldNumber = 4,
    kDataSourcesSeenFieldNumber = 5,
    kTracingSessionsFieldNumber = 6,
    kTotalBuffersFieldNumber = 7,
    kChunksDiscardedFieldNumber = 8,
    kPatchesDiscardedFieldNumber = 9,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/9, /*HAS_REPEATED_FIELDS=*/true> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_buffer_stats() const { return at<1>().valid(); }
    ::protozero::RepeatedFieldIterator buffer_stats() const { return GetRepeated(1); }
    bool has_producers_connected() const { return at<2>().valid(); }
    uint32_t producers_connected() const { return at<2>().as_uint32(); }
    bool has_producers_seen() const { return at<3>().valid(); }
    uint64_t producers_seen() const { return at<3>().as_uint64(); }
    bool has_data_sources_registered() const { return at<4>().valid(); }
    uint32_t data_sources_registered() const { return at<4>().as_uint32(); }
    bool has_data_sources_seen() const { return at<5>().valid(); }
    uint64_t data_sources_seen() const { return at<5>().as_uint64(); }
    bool has_tracing_sessions() const { return at<6>().valid(); }
    uint32_t tracing_sessions() const { return at<6>().as_uint32(); }
    bool has_total_buffers() const { return at<7>().valid(); }
    uint32_t total_buffers() const { return at<7>().as_uint32(); }
    bool has_chunks_discarded() const { return at<8>().valid(); }
    uint64_t chunks_discarded() const { return at<8>().as_uint64(); }
    bool has_patches_discarded() const { return at<9>().valid(); }
    uint64_t patches_discarded() const { return at<9>().as_uint64(); }
  };
  using BufferStats = ::perfetto::protos::pbzero::TraceStats_BufferStats;
  template <typename T = TraceStats_BufferStats> T* add_buffer_stats() {
    return BeginNestedMessage<T>(1);
  }

  void set_producers_connected(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_producers_seen(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_data_sources_registered(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_data_sources_seen(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_tracing_sessions(uint32_t value) {
    AppendVarInt(6, value);
  }
  void set_total_buffers(uint32_t value) {
    AppendVarInt(7, value);
  }
  void set_chunks_discarded(uint64_t value) {
    AppendVarInt(8, value);
  }
  void set_patches_discarded(uint64_t value) {
    AppendVarInt(9, value);
  }
};

class PERFETTO_EXPORT TraceStats_BufferStats : public ::protozero::Message {
 public:
  enum : int32_t {
    kBufferSizeFieldNumber = 12,
    kBytesWrittenFieldNumber = 1,
    kBytesOverwrittenFieldNumber = 13,
    kBytesReadFieldNumber = 14,
    kPaddingBytesWrittenFieldNumber = 15,
    kPaddingBytesClearedFieldNumber = 16,
    kChunksWrittenFieldNumber = 2,
    kChunksRewrittenFieldNumber = 10,
    kChunksOverwrittenFieldNumber = 3,
    kChunksDiscardedFieldNumber = 18,
    kChunksReadFieldNumber = 17,
    kChunksCommittedOutOfOrderFieldNumber = 11,
    kWriteWrapCountFieldNumber = 4,
    kPatchesSucceededFieldNumber = 5,
    kPatchesFailedFieldNumber = 6,
    kReadaheadsSucceededFieldNumber = 7,
    kReadaheadsFailedFieldNumber = 8,
    kAbiViolationsFieldNumber = 9,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/18, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_buffer_size() const { return at<12>().valid(); }
    uint64_t buffer_size() const { return at<12>().as_uint64(); }
    bool has_bytes_written() const { return at<1>().valid(); }
    uint64_t bytes_written() const { return at<1>().as_uint64(); }
    bool has_bytes_overwritten() const { return at<13>().valid(); }
    uint64_t bytes_overwritten() const { return at<13>().as_uint64(); }
    bool has_bytes_read() const { return at<14>().valid(); }
    uint64_t bytes_read() const { return at<14>().as_uint64(); }
    bool has_padding_bytes_written() const { return at<15>().valid(); }
    uint64_t padding_bytes_written() const { return at<15>().as_uint64(); }
    bool has_padding_bytes_cleared() const { return at<16>().valid(); }
    uint64_t padding_bytes_cleared() const { return at<16>().as_uint64(); }
    bool has_chunks_written() const { return at<2>().valid(); }
    uint64_t chunks_written() const { return at<2>().as_uint64(); }
    bool has_chunks_rewritten() const { return at<10>().valid(); }
    uint64_t chunks_rewritten() const { return at<10>().as_uint64(); }
    bool has_chunks_overwritten() const { return at<3>().valid(); }
    uint64_t chunks_overwritten() const { return at<3>().as_uint64(); }
    bool has_chunks_discarded() const { return at<18>().valid(); }
    uint64_t chunks_discarded() const { return at<18>().as_uint64(); }
    bool has_chunks_read() const { return at<17>().valid(); }
    uint64_t chunks_read() const { return at<17>().as_uint64(); }
    bool has_chunks_committed_out_of_order() const { return at<11>().valid(); }
    uint64_t chunks_committed_out_of_order() const { return at<11>().as_uint64(); }
    bool has_write_wrap_count() const { return at<4>().valid(); }
    uint64_t write_wrap_count() const { return at<4>().as_uint64(); }
    bool has_patches_succeeded() const { return at<5>().valid(); }
    uint64_t patches_succeeded() const { return at<5>().as_uint64(); }
    bool has_patches_failed() const { return at<6>().valid(); }
    uint64_t patches_failed() const { return at<6>().as_uint64(); }
    bool has_readaheads_succeeded() const { return at<7>().valid(); }
    uint64_t readaheads_succeeded() const { return at<7>().as_uint64(); }
    bool has_readaheads_failed() const { return at<8>().valid(); }
    uint64_t readaheads_failed() const { return at<8>().as_uint64(); }
    bool has_abi_violations() const { return at<9>().valid(); }
    uint64_t abi_violations() const { return at<9>().as_uint64(); }
  };
  void set_buffer_size(uint64_t value) {
    AppendVarInt(12, value);
  }
  void set_bytes_written(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_bytes_overwritten(uint64_t value) {
    AppendVarInt(13, value);
  }
  void set_bytes_read(uint64_t value) {
    AppendVarInt(14, value);
  }
  void set_padding_bytes_written(uint64_t value) {
    AppendVarInt(15, value);
  }
  void set_padding_bytes_cleared(uint64_t value) {
    AppendVarInt(16, value);
  }
  void set_chunks_written(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_chunks_rewritten(uint64_t value) {
    AppendVarInt(10, value);
  }
  void set_chunks_overwritten(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_chunks_discarded(uint64_t value) {
    AppendVarInt(18, value);
  }
  void set_chunks_read(uint64_t value) {
    AppendVarInt(17, value);
  }
  void set_chunks_committed_out_of_order(uint64_t value) {
    AppendVarInt(11, value);
  }
  void set_write_wrap_count(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_patches_succeeded(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_patches_failed(uint64_t value) {
    AppendVarInt(6, value);
  }
  void set_readaheads_succeeded(uint64_t value) {
    AppendVarInt(7, value);
  }
  void set_readaheads_failed(uint64_t value) {
    AppendVarInt(8, value);
  }
  void set_abi_violations(uint64_t value) {
    AppendVarInt(9, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
