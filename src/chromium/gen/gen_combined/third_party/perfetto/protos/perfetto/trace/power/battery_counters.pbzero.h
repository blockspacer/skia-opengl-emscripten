// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_POWER_BATTERY_COUNTERS_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_POWER_BATTERY_COUNTERS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class PERFETTO_EXPORT BatteryCounters : public ::protozero::Message {
 public:
  enum : int32_t {
    kChargeCounterUahFieldNumber = 1,
    kCapacityPercentFieldNumber = 2,
    kCurrentUaFieldNumber = 3,
    kCurrentAvgUaFieldNumber = 4,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_charge_counter_uah() const { return at<1>().valid(); }
    int64_t charge_counter_uah() const { return at<1>().as_int64(); }
    bool has_capacity_percent() const { return at<2>().valid(); }
    float capacity_percent() const { return at<2>().as_float(); }
    bool has_current_ua() const { return at<3>().valid(); }
    int64_t current_ua() const { return at<3>().as_int64(); }
    bool has_current_avg_ua() const { return at<4>().valid(); }
    int64_t current_avg_ua() const { return at<4>().as_int64(); }
  };
  void set_charge_counter_uah(int64_t value) {
    AppendVarInt(1, value);
  }
  void set_capacity_percent(float value) {
    AppendFixed(2, value);
  }
  void set_current_ua(int64_t value) {
    AppendVarInt(3, value);
  }
  void set_current_avg_ua(int64_t value) {
    AppendVarInt(4, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.