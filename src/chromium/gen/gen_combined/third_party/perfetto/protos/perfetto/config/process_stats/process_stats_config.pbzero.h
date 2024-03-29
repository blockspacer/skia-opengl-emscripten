// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_CONFIG_PROCESS_STATS_PROCESS_STATS_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_CONFIG_PROCESS_STATS_PROCESS_STATS_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

enum ProcessStatsConfig_Quirks : int32_t;

enum ProcessStatsConfig_Quirks : int32_t {
  ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED = 0,
  ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP = 1,
  ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND = 2,
};

class PERFETTO_EXPORT ProcessStatsConfig : public ::protozero::Message {
 public:
  enum : int32_t {
    kQuirksFieldNumber = 1,
    kScanAllProcessesOnStartFieldNumber = 2,
    kRecordThreadNamesFieldNumber = 3,
    kProcStatsPollMsFieldNumber = 4,
    kProcStatsCacheTtlMsFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_REPEATED_FIELDS=*/true> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_quirks() const { return at<1>().valid(); }
    ::protozero::RepeatedFieldIterator quirks() const { return GetRepeated(1); }
    bool has_scan_all_processes_on_start() const { return at<2>().valid(); }
    bool scan_all_processes_on_start() const { return at<2>().as_bool(); }
    bool has_record_thread_names() const { return at<3>().valid(); }
    bool record_thread_names() const { return at<3>().as_bool(); }
    bool has_proc_stats_poll_ms() const { return at<4>().valid(); }
    uint32_t proc_stats_poll_ms() const { return at<4>().as_uint32(); }
    bool has_proc_stats_cache_ttl_ms() const { return at<6>().valid(); }
    uint32_t proc_stats_cache_ttl_ms() const { return at<6>().as_uint32(); }
  };
  using Quirks = ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks;
  static const Quirks QUIRKS_UNSPECIFIED = ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED;
  static const Quirks DISABLE_INITIAL_DUMP = ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP;
  static const Quirks DISABLE_ON_DEMAND = ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND;
  void add_quirks(::perfetto::protos::pbzero::ProcessStatsConfig_Quirks value) {
    AppendTinyVarInt(1, value);
  }
  void set_scan_all_processes_on_start(bool value) {
    AppendTinyVarInt(2, value);
  }
  void set_record_thread_names(bool value) {
    AppendTinyVarInt(3, value);
  }
  void set_proc_stats_poll_ms(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_proc_stats_cache_ttl_ms(uint32_t value) {
    AppendVarInt(6, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
