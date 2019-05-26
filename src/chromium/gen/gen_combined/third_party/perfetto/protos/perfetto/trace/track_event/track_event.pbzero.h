// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PERFETTO_TRACE_TRACK_EVENT_TRACK_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PERFETTO_TRACE_TRACK_EVENT_TRACK_EVENT_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/base/export.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/message.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class DebugAnnotation;
class TaskExecution;
class TrackEvent_LegacyEvent;
enum TrackEvent_LegacyEvent_FlowDirection : int32_t;
enum TrackEvent_LegacyEvent_InstantEventScope : int32_t;

enum TrackEvent_LegacyEvent_FlowDirection : int32_t {
  TrackEvent_LegacyEvent_FlowDirection_FLOW_UNSPECIFIED = 0,
  TrackEvent_LegacyEvent_FlowDirection_FLOW_IN = 1,
  TrackEvent_LegacyEvent_FlowDirection_FLOW_OUT = 2,
  TrackEvent_LegacyEvent_FlowDirection_FLOW_INOUT = 3,
};

enum TrackEvent_LegacyEvent_InstantEventScope : int32_t {
  TrackEvent_LegacyEvent_InstantEventScope_SCOPE_UNSPECIFIED = 0,
  TrackEvent_LegacyEvent_InstantEventScope_SCOPE_GLOBAL = 1,
  TrackEvent_LegacyEvent_InstantEventScope_SCOPE_PROCESS = 2,
  TrackEvent_LegacyEvent_InstantEventScope_SCOPE_THREAD = 3,
};

class PERFETTO_EXPORT LegacyEventName : public ::protozero::Message {
 public:
  enum : int32_t {
    kIidFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_iid() const { return at<1>().valid(); }
    uint32_t iid() const { return at<1>().as_uint32(); }
    bool has_name() const { return at<2>().valid(); }
    ::protozero::ConstChars name() const { return at<2>().as_string(); }
  };
  void set_iid(uint32_t value) {
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
};

class PERFETTO_EXPORT EventCategory : public ::protozero::Message {
 public:
  enum : int32_t {
    kIidFieldNumber = 1,
    kNameFieldNumber = 2,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_iid() const { return at<1>().valid(); }
    uint32_t iid() const { return at<1>().as_uint32(); }
    bool has_name() const { return at<2>().valid(); }
    ::protozero::ConstChars name() const { return at<2>().as_string(); }
  };
  void set_iid(uint32_t value) {
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
};

class PERFETTO_EXPORT TrackEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kTimestampDeltaUsFieldNumber = 1,
    kTimestampAbsoluteUsFieldNumber = 16,
    kThreadTimeDeltaUsFieldNumber = 2,
    kThreadTimeAbsoluteUsFieldNumber = 17,
    kCategoryIidsFieldNumber = 3,
    kDebugAnnotationsFieldNumber = 4,
    kTaskExecutionFieldNumber = 5,
    kLegacyEventFieldNumber = 6,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/17, /*HAS_REPEATED_FIELDS=*/true> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_timestamp_delta_us() const { return at<1>().valid(); }
    int64_t timestamp_delta_us() const { return at<1>().as_int64(); }
    bool has_timestamp_absolute_us() const { return at<16>().valid(); }
    int64_t timestamp_absolute_us() const { return at<16>().as_int64(); }
    bool has_thread_time_delta_us() const { return at<2>().valid(); }
    int64_t thread_time_delta_us() const { return at<2>().as_int64(); }
    bool has_thread_time_absolute_us() const { return at<17>().valid(); }
    int64_t thread_time_absolute_us() const { return at<17>().as_int64(); }
    bool has_category_iids() const { return at<3>().valid(); }
    ::protozero::RepeatedFieldIterator category_iids() const { return GetRepeated(3); }
    bool has_debug_annotations() const { return at<4>().valid(); }
    ::protozero::RepeatedFieldIterator debug_annotations() const { return GetRepeated(4); }
    bool has_task_execution() const { return at<5>().valid(); }
    ::protozero::ConstBytes task_execution() const { return at<5>().as_bytes(); }
    bool has_legacy_event() const { return at<6>().valid(); }
    ::protozero::ConstBytes legacy_event() const { return at<6>().as_bytes(); }
  };
  using LegacyEvent = ::perfetto::protos::pbzero::TrackEvent_LegacyEvent;
  void set_timestamp_delta_us(int64_t value) {
    AppendVarInt(1, value);
  }
  void set_timestamp_absolute_us(int64_t value) {
    AppendVarInt(16, value);
  }
  void set_thread_time_delta_us(int64_t value) {
    AppendVarInt(2, value);
  }
  void set_thread_time_absolute_us(int64_t value) {
    AppendVarInt(17, value);
  }
  void add_category_iids(uint32_t value) {
    AppendVarInt(3, value);
  }
  template <typename T = DebugAnnotation> T* add_debug_annotations() {
    return BeginNestedMessage<T>(4);
  }

  template <typename T = TaskExecution> T* set_task_execution() {
    return BeginNestedMessage<T>(5);
  }

  template <typename T = TrackEvent_LegacyEvent> T* set_legacy_event() {
    return BeginNestedMessage<T>(6);
  }

};

class PERFETTO_EXPORT TrackEvent_LegacyEvent : public ::protozero::Message {
 public:
  enum : int32_t {
    kNameIidFieldNumber = 1,
    kPhaseFieldNumber = 2,
    kDurationUsFieldNumber = 3,
    kThreadDurationUsFieldNumber = 4,
    kUnscopedIdFieldNumber = 6,
    kLocalIdFieldNumber = 10,
    kGlobalIdFieldNumber = 11,
    kIdScopeFieldNumber = 7,
    kUseAsyncTtsFieldNumber = 9,
    kBindIdFieldNumber = 8,
    kBindToEnclosingFieldNumber = 12,
    kFlowDirectionFieldNumber = 13,
    kInstantEventScopeFieldNumber = 14,
    kPidOverrideFieldNumber = 18,
    kTidOverrideFieldNumber = 19,
  };
  class Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/19, /*HAS_REPEATED_FIELDS=*/false> {
   public:
    Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
    bool has_name_iid() const { return at<1>().valid(); }
    uint32_t name_iid() const { return at<1>().as_uint32(); }
    bool has_phase() const { return at<2>().valid(); }
    int32_t phase() const { return at<2>().as_int32(); }
    bool has_duration_us() const { return at<3>().valid(); }
    int64_t duration_us() const { return at<3>().as_int64(); }
    bool has_thread_duration_us() const { return at<4>().valid(); }
    int64_t thread_duration_us() const { return at<4>().as_int64(); }
    bool has_unscoped_id() const { return at<6>().valid(); }
    uint64_t unscoped_id() const { return at<6>().as_uint64(); }
    bool has_local_id() const { return at<10>().valid(); }
    uint64_t local_id() const { return at<10>().as_uint64(); }
    bool has_global_id() const { return at<11>().valid(); }
    uint64_t global_id() const { return at<11>().as_uint64(); }
    bool has_id_scope() const { return at<7>().valid(); }
    ::protozero::ConstChars id_scope() const { return at<7>().as_string(); }
    bool has_use_async_tts() const { return at<9>().valid(); }
    bool use_async_tts() const { return at<9>().as_bool(); }
    bool has_bind_id() const { return at<8>().valid(); }
    uint64_t bind_id() const { return at<8>().as_uint64(); }
    bool has_bind_to_enclosing() const { return at<12>().valid(); }
    bool bind_to_enclosing() const { return at<12>().as_bool(); }
    bool has_flow_direction() const { return at<13>().valid(); }
    int32_t flow_direction() const { return at<13>().as_int32(); }
    bool has_instant_event_scope() const { return at<14>().valid(); }
    int32_t instant_event_scope() const { return at<14>().as_int32(); }
    bool has_pid_override() const { return at<18>().valid(); }
    int32_t pid_override() const { return at<18>().as_int32(); }
    bool has_tid_override() const { return at<19>().valid(); }
    int32_t tid_override() const { return at<19>().as_int32(); }
  };
  using FlowDirection = ::perfetto::protos::pbzero::TrackEvent_LegacyEvent_FlowDirection;
  using InstantEventScope = ::perfetto::protos::pbzero::TrackEvent_LegacyEvent_InstantEventScope;
  static const FlowDirection FLOW_UNSPECIFIED = TrackEvent_LegacyEvent_FlowDirection_FLOW_UNSPECIFIED;
  static const FlowDirection FLOW_IN = TrackEvent_LegacyEvent_FlowDirection_FLOW_IN;
  static const FlowDirection FLOW_OUT = TrackEvent_LegacyEvent_FlowDirection_FLOW_OUT;
  static const FlowDirection FLOW_INOUT = TrackEvent_LegacyEvent_FlowDirection_FLOW_INOUT;
  static const InstantEventScope SCOPE_UNSPECIFIED = TrackEvent_LegacyEvent_InstantEventScope_SCOPE_UNSPECIFIED;
  static const InstantEventScope SCOPE_GLOBAL = TrackEvent_LegacyEvent_InstantEventScope_SCOPE_GLOBAL;
  static const InstantEventScope SCOPE_PROCESS = TrackEvent_LegacyEvent_InstantEventScope_SCOPE_PROCESS;
  static const InstantEventScope SCOPE_THREAD = TrackEvent_LegacyEvent_InstantEventScope_SCOPE_THREAD;
  void set_name_iid(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_phase(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_duration_us(int64_t value) {
    AppendVarInt(3, value);
  }
  void set_thread_duration_us(int64_t value) {
    AppendVarInt(4, value);
  }
  void set_unscoped_id(uint64_t value) {
    AppendVarInt(6, value);
  }
  void set_local_id(uint64_t value) {
    AppendVarInt(10, value);
  }
  void set_global_id(uint64_t value) {
    AppendVarInt(11, value);
  }
  void set_id_scope(const char* value) {
    AppendString(7, value);
  }
  // Doesn't check for null terminator.
  // Expects |value| to be at least |size| long.
  void set_id_scope(const char* value, size_t size) {
    AppendBytes(7, value, size);
  }
  void set_use_async_tts(bool value) {
    AppendTinyVarInt(9, value);
  }
  void set_bind_id(uint64_t value) {
    AppendVarInt(8, value);
  }
  void set_bind_to_enclosing(bool value) {
    AppendTinyVarInt(12, value);
  }
  void set_flow_direction(::perfetto::protos::pbzero::TrackEvent_LegacyEvent_FlowDirection value) {
    AppendTinyVarInt(13, value);
  }
  void set_instant_event_scope(::perfetto::protos::pbzero::TrackEvent_LegacyEvent_InstantEventScope value) {
    AppendTinyVarInt(14, value);
  }
  void set_pid_override(int32_t value) {
    AppendVarInt(18, value);
  }
  void set_tid_override(int32_t value) {
    AppendVarInt(19, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.