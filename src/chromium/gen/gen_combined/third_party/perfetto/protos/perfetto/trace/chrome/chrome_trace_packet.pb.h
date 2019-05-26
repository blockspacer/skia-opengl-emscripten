// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/trace/chrome/chrome_trace_packet.proto

#ifndef PROTOBUF_INCLUDED_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto
#define PROTOBUF_INCLUDED_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "perfetto/common/trace_stats.pb.h"
#include "perfetto/config/trace_config.pb.h"
#include "perfetto/trace/chrome/chrome_trace_event.pb.h"
#include "perfetto/trace/clock_snapshot.pb.h"
#include "perfetto/trace/interned_data/interned_data.pb.h"
#include "perfetto/trace/track_event/process_descriptor.pb.h"
#include "perfetto/trace/track_event/thread_descriptor.pb.h"
#include "perfetto/trace/track_event/track_event.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto 

namespace protobuf_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto
namespace perfetto {
namespace protos {
class ChromeTracePacket;
class ChromeTracePacketDefaultTypeInternal;
extern ChromeTracePacketDefaultTypeInternal _ChromeTracePacket_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> ::perfetto::protos::ChromeTracePacket* Arena::CreateMaybeMessage<::perfetto::protos::ChromeTracePacket>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace perfetto {
namespace protos {

// ===================================================================

class ChromeTracePacket : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeTracePacket) */ {
 public:
  ChromeTracePacket();
  virtual ~ChromeTracePacket();

  ChromeTracePacket(const ChromeTracePacket& from);

  inline ChromeTracePacket& operator=(const ChromeTracePacket& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ChromeTracePacket(ChromeTracePacket&& from) noexcept
    : ChromeTracePacket() {
    *this = ::std::move(from);
  }

  inline ChromeTracePacket& operator=(ChromeTracePacket&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ChromeTracePacket& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ChromeTracePacket* internal_default_instance() {
    return reinterpret_cast<const ChromeTracePacket*>(
               &_ChromeTracePacket_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ChromeTracePacket* other);
  friend void swap(ChromeTracePacket& a, ChromeTracePacket& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ChromeTracePacket* New() const final {
    return CreateMaybeMessage<ChromeTracePacket>(NULL);
  }

  ChromeTracePacket* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ChromeTracePacket>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const ChromeTracePacket& from);
  void MergeFrom(const ChromeTracePacket& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ChromeTracePacket* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .perfetto.protos.ChromeEventBundle chrome_events = 5;
  bool has_chrome_events() const;
  void clear_chrome_events();
  static const int kChromeEventsFieldNumber = 5;
  private:
  const ::perfetto::protos::ChromeEventBundle& _internal_chrome_events() const;
  public:
  const ::perfetto::protos::ChromeEventBundle& chrome_events() const;
  ::perfetto::protos::ChromeEventBundle* release_chrome_events();
  ::perfetto::protos::ChromeEventBundle* mutable_chrome_events();
  void set_allocated_chrome_events(::perfetto::protos::ChromeEventBundle* chrome_events);

  // .perfetto.protos.ClockSnapshot clock_snapshot = 6;
  bool has_clock_snapshot() const;
  void clear_clock_snapshot();
  static const int kClockSnapshotFieldNumber = 6;
  private:
  const ::perfetto::protos::ClockSnapshot& _internal_clock_snapshot() const;
  public:
  const ::perfetto::protos::ClockSnapshot& clock_snapshot() const;
  ::perfetto::protos::ClockSnapshot* release_clock_snapshot();
  ::perfetto::protos::ClockSnapshot* mutable_clock_snapshot();
  void set_allocated_clock_snapshot(::perfetto::protos::ClockSnapshot* clock_snapshot);

  // .perfetto.protos.TrackEvent track_event = 11;
  bool has_track_event() const;
  void clear_track_event();
  static const int kTrackEventFieldNumber = 11;
  private:
  const ::perfetto::protos::TrackEvent& _internal_track_event() const;
  public:
  const ::perfetto::protos::TrackEvent& track_event() const;
  ::perfetto::protos::TrackEvent* release_track_event();
  ::perfetto::protos::TrackEvent* mutable_track_event();
  void set_allocated_track_event(::perfetto::protos::TrackEvent* track_event);

  // .perfetto.protos.InternedData interned_data = 12;
  bool has_interned_data() const;
  void clear_interned_data();
  static const int kInternedDataFieldNumber = 12;
  private:
  const ::perfetto::protos::InternedData& _internal_interned_data() const;
  public:
  const ::perfetto::protos::InternedData& interned_data() const;
  ::perfetto::protos::InternedData* release_interned_data();
  ::perfetto::protos::InternedData* mutable_interned_data();
  void set_allocated_interned_data(::perfetto::protos::InternedData* interned_data);

  // .perfetto.protos.TraceConfig trace_config = 33;
  bool has_trace_config() const;
  void clear_trace_config();
  static const int kTraceConfigFieldNumber = 33;
  private:
  const ::perfetto::protos::TraceConfig& _internal_trace_config() const;
  public:
  const ::perfetto::protos::TraceConfig& trace_config() const;
  ::perfetto::protos::TraceConfig* release_trace_config();
  ::perfetto::protos::TraceConfig* mutable_trace_config();
  void set_allocated_trace_config(::perfetto::protos::TraceConfig* trace_config);

  // .perfetto.protos.TraceStats trace_stats = 35;
  bool has_trace_stats() const;
  void clear_trace_stats();
  static const int kTraceStatsFieldNumber = 35;
  private:
  const ::perfetto::protos::TraceStats& _internal_trace_stats() const;
  public:
  const ::perfetto::protos::TraceStats& trace_stats() const;
  ::perfetto::protos::TraceStats* release_trace_stats();
  ::perfetto::protos::TraceStats* mutable_trace_stats();
  void set_allocated_trace_stats(::perfetto::protos::TraceStats* trace_stats);

  // .perfetto.protos.ProcessDescriptor process_descriptor = 43;
  bool has_process_descriptor() const;
  void clear_process_descriptor();
  static const int kProcessDescriptorFieldNumber = 43;
  private:
  const ::perfetto::protos::ProcessDescriptor& _internal_process_descriptor() const;
  public:
  const ::perfetto::protos::ProcessDescriptor& process_descriptor() const;
  ::perfetto::protos::ProcessDescriptor* release_process_descriptor();
  ::perfetto::protos::ProcessDescriptor* mutable_process_descriptor();
  void set_allocated_process_descriptor(::perfetto::protos::ProcessDescriptor* process_descriptor);

  // .perfetto.protos.ThreadDescriptor thread_descriptor = 44;
  bool has_thread_descriptor() const;
  void clear_thread_descriptor();
  static const int kThreadDescriptorFieldNumber = 44;
  private:
  const ::perfetto::protos::ThreadDescriptor& _internal_thread_descriptor() const;
  public:
  const ::perfetto::protos::ThreadDescriptor& thread_descriptor() const;
  ::perfetto::protos::ThreadDescriptor* release_thread_descriptor();
  ::perfetto::protos::ThreadDescriptor* mutable_thread_descriptor();
  void set_allocated_thread_descriptor(::perfetto::protos::ThreadDescriptor* thread_descriptor);

  // uint32 trusted_packet_sequence_id = 10;
  void clear_trusted_packet_sequence_id();
  static const int kTrustedPacketSequenceIdFieldNumber = 10;
  ::google::protobuf::uint32 trusted_packet_sequence_id() const;
  void set_trusted_packet_sequence_id(::google::protobuf::uint32 value);

  // bool incremental_state_cleared = 41;
  void clear_incremental_state_cleared();
  static const int kIncrementalStateClearedFieldNumber = 41;
  bool incremental_state_cleared() const;
  void set_incremental_state_cleared(bool value);

  // bool previous_packet_dropped = 42;
  void clear_previous_packet_dropped();
  static const int kPreviousPacketDroppedFieldNumber = 42;
  bool previous_packet_dropped() const;
  void set_previous_packet_dropped(bool value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeTracePacket)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::perfetto::protos::ChromeEventBundle* chrome_events_;
  ::perfetto::protos::ClockSnapshot* clock_snapshot_;
  ::perfetto::protos::TrackEvent* track_event_;
  ::perfetto::protos::InternedData* interned_data_;
  ::perfetto::protos::TraceConfig* trace_config_;
  ::perfetto::protos::TraceStats* trace_stats_;
  ::perfetto::protos::ProcessDescriptor* process_descriptor_;
  ::perfetto::protos::ThreadDescriptor* thread_descriptor_;
  ::google::protobuf::uint32 trusted_packet_sequence_id_;
  bool incremental_state_cleared_;
  bool previous_packet_dropped_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChromeTracePacket

// .perfetto.protos.ChromeEventBundle chrome_events = 5;
inline bool ChromeTracePacket::has_chrome_events() const {
  return this != internal_default_instance() && chrome_events_ != NULL;
}
inline const ::perfetto::protos::ChromeEventBundle& ChromeTracePacket::_internal_chrome_events() const {
  return *chrome_events_;
}
inline const ::perfetto::protos::ChromeEventBundle& ChromeTracePacket::chrome_events() const {
  const ::perfetto::protos::ChromeEventBundle* p = chrome_events_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.chrome_events)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::ChromeEventBundle*>(
      &::perfetto::protos::_ChromeEventBundle_default_instance_);
}
inline ::perfetto::protos::ChromeEventBundle* ChromeTracePacket::release_chrome_events() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.chrome_events)
  
  ::perfetto::protos::ChromeEventBundle* temp = chrome_events_;
  chrome_events_ = NULL;
  return temp;
}
inline ::perfetto::protos::ChromeEventBundle* ChromeTracePacket::mutable_chrome_events() {
  
  if (chrome_events_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ChromeEventBundle>(GetArenaNoVirtual());
    chrome_events_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.chrome_events)
  return chrome_events_;
}
inline void ChromeTracePacket::set_allocated_chrome_events(::perfetto::protos::ChromeEventBundle* chrome_events) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(chrome_events_);
  }
  if (chrome_events) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      chrome_events = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, chrome_events, submessage_arena);
    }
    
  } else {
    
  }
  chrome_events_ = chrome_events;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.chrome_events)
}

// .perfetto.protos.ClockSnapshot clock_snapshot = 6;
inline bool ChromeTracePacket::has_clock_snapshot() const {
  return this != internal_default_instance() && clock_snapshot_ != NULL;
}
inline const ::perfetto::protos::ClockSnapshot& ChromeTracePacket::_internal_clock_snapshot() const {
  return *clock_snapshot_;
}
inline const ::perfetto::protos::ClockSnapshot& ChromeTracePacket::clock_snapshot() const {
  const ::perfetto::protos::ClockSnapshot* p = clock_snapshot_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.clock_snapshot)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::ClockSnapshot*>(
      &::perfetto::protos::_ClockSnapshot_default_instance_);
}
inline ::perfetto::protos::ClockSnapshot* ChromeTracePacket::release_clock_snapshot() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.clock_snapshot)
  
  ::perfetto::protos::ClockSnapshot* temp = clock_snapshot_;
  clock_snapshot_ = NULL;
  return temp;
}
inline ::perfetto::protos::ClockSnapshot* ChromeTracePacket::mutable_clock_snapshot() {
  
  if (clock_snapshot_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ClockSnapshot>(GetArenaNoVirtual());
    clock_snapshot_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.clock_snapshot)
  return clock_snapshot_;
}
inline void ChromeTracePacket::set_allocated_clock_snapshot(::perfetto::protos::ClockSnapshot* clock_snapshot) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(clock_snapshot_);
  }
  if (clock_snapshot) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      clock_snapshot = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, clock_snapshot, submessage_arena);
    }
    
  } else {
    
  }
  clock_snapshot_ = clock_snapshot;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.clock_snapshot)
}

// .perfetto.protos.TrackEvent track_event = 11;
inline bool ChromeTracePacket::has_track_event() const {
  return this != internal_default_instance() && track_event_ != NULL;
}
inline const ::perfetto::protos::TrackEvent& ChromeTracePacket::_internal_track_event() const {
  return *track_event_;
}
inline const ::perfetto::protos::TrackEvent& ChromeTracePacket::track_event() const {
  const ::perfetto::protos::TrackEvent* p = track_event_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.track_event)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::TrackEvent*>(
      &::perfetto::protos::_TrackEvent_default_instance_);
}
inline ::perfetto::protos::TrackEvent* ChromeTracePacket::release_track_event() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.track_event)
  
  ::perfetto::protos::TrackEvent* temp = track_event_;
  track_event_ = NULL;
  return temp;
}
inline ::perfetto::protos::TrackEvent* ChromeTracePacket::mutable_track_event() {
  
  if (track_event_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TrackEvent>(GetArenaNoVirtual());
    track_event_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.track_event)
  return track_event_;
}
inline void ChromeTracePacket::set_allocated_track_event(::perfetto::protos::TrackEvent* track_event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(track_event_);
  }
  if (track_event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      track_event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, track_event, submessage_arena);
    }
    
  } else {
    
  }
  track_event_ = track_event;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.track_event)
}

// .perfetto.protos.ProcessDescriptor process_descriptor = 43;
inline bool ChromeTracePacket::has_process_descriptor() const {
  return this != internal_default_instance() && process_descriptor_ != NULL;
}
inline const ::perfetto::protos::ProcessDescriptor& ChromeTracePacket::_internal_process_descriptor() const {
  return *process_descriptor_;
}
inline const ::perfetto::protos::ProcessDescriptor& ChromeTracePacket::process_descriptor() const {
  const ::perfetto::protos::ProcessDescriptor* p = process_descriptor_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.process_descriptor)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::ProcessDescriptor*>(
      &::perfetto::protos::_ProcessDescriptor_default_instance_);
}
inline ::perfetto::protos::ProcessDescriptor* ChromeTracePacket::release_process_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.process_descriptor)
  
  ::perfetto::protos::ProcessDescriptor* temp = process_descriptor_;
  process_descriptor_ = NULL;
  return temp;
}
inline ::perfetto::protos::ProcessDescriptor* ChromeTracePacket::mutable_process_descriptor() {
  
  if (process_descriptor_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ProcessDescriptor>(GetArenaNoVirtual());
    process_descriptor_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.process_descriptor)
  return process_descriptor_;
}
inline void ChromeTracePacket::set_allocated_process_descriptor(::perfetto::protos::ProcessDescriptor* process_descriptor) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(process_descriptor_);
  }
  if (process_descriptor) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      process_descriptor = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, process_descriptor, submessage_arena);
    }
    
  } else {
    
  }
  process_descriptor_ = process_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.process_descriptor)
}

// .perfetto.protos.ThreadDescriptor thread_descriptor = 44;
inline bool ChromeTracePacket::has_thread_descriptor() const {
  return this != internal_default_instance() && thread_descriptor_ != NULL;
}
inline const ::perfetto::protos::ThreadDescriptor& ChromeTracePacket::_internal_thread_descriptor() const {
  return *thread_descriptor_;
}
inline const ::perfetto::protos::ThreadDescriptor& ChromeTracePacket::thread_descriptor() const {
  const ::perfetto::protos::ThreadDescriptor* p = thread_descriptor_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.thread_descriptor)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::ThreadDescriptor*>(
      &::perfetto::protos::_ThreadDescriptor_default_instance_);
}
inline ::perfetto::protos::ThreadDescriptor* ChromeTracePacket::release_thread_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.thread_descriptor)
  
  ::perfetto::protos::ThreadDescriptor* temp = thread_descriptor_;
  thread_descriptor_ = NULL;
  return temp;
}
inline ::perfetto::protos::ThreadDescriptor* ChromeTracePacket::mutable_thread_descriptor() {
  
  if (thread_descriptor_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ThreadDescriptor>(GetArenaNoVirtual());
    thread_descriptor_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.thread_descriptor)
  return thread_descriptor_;
}
inline void ChromeTracePacket::set_allocated_thread_descriptor(::perfetto::protos::ThreadDescriptor* thread_descriptor) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(thread_descriptor_);
  }
  if (thread_descriptor) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      thread_descriptor = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, thread_descriptor, submessage_arena);
    }
    
  } else {
    
  }
  thread_descriptor_ = thread_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.thread_descriptor)
}

// .perfetto.protos.TraceConfig trace_config = 33;
inline bool ChromeTracePacket::has_trace_config() const {
  return this != internal_default_instance() && trace_config_ != NULL;
}
inline const ::perfetto::protos::TraceConfig& ChromeTracePacket::_internal_trace_config() const {
  return *trace_config_;
}
inline const ::perfetto::protos::TraceConfig& ChromeTracePacket::trace_config() const {
  const ::perfetto::protos::TraceConfig* p = trace_config_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.trace_config)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::TraceConfig*>(
      &::perfetto::protos::_TraceConfig_default_instance_);
}
inline ::perfetto::protos::TraceConfig* ChromeTracePacket::release_trace_config() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.trace_config)
  
  ::perfetto::protos::TraceConfig* temp = trace_config_;
  trace_config_ = NULL;
  return temp;
}
inline ::perfetto::protos::TraceConfig* ChromeTracePacket::mutable_trace_config() {
  
  if (trace_config_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TraceConfig>(GetArenaNoVirtual());
    trace_config_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.trace_config)
  return trace_config_;
}
inline void ChromeTracePacket::set_allocated_trace_config(::perfetto::protos::TraceConfig* trace_config) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(trace_config_);
  }
  if (trace_config) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      trace_config = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, trace_config, submessage_arena);
    }
    
  } else {
    
  }
  trace_config_ = trace_config;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.trace_config)
}

// .perfetto.protos.TraceStats trace_stats = 35;
inline bool ChromeTracePacket::has_trace_stats() const {
  return this != internal_default_instance() && trace_stats_ != NULL;
}
inline const ::perfetto::protos::TraceStats& ChromeTracePacket::_internal_trace_stats() const {
  return *trace_stats_;
}
inline const ::perfetto::protos::TraceStats& ChromeTracePacket::trace_stats() const {
  const ::perfetto::protos::TraceStats* p = trace_stats_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.trace_stats)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::TraceStats*>(
      &::perfetto::protos::_TraceStats_default_instance_);
}
inline ::perfetto::protos::TraceStats* ChromeTracePacket::release_trace_stats() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.trace_stats)
  
  ::perfetto::protos::TraceStats* temp = trace_stats_;
  trace_stats_ = NULL;
  return temp;
}
inline ::perfetto::protos::TraceStats* ChromeTracePacket::mutable_trace_stats() {
  
  if (trace_stats_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TraceStats>(GetArenaNoVirtual());
    trace_stats_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.trace_stats)
  return trace_stats_;
}
inline void ChromeTracePacket::set_allocated_trace_stats(::perfetto::protos::TraceStats* trace_stats) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(trace_stats_);
  }
  if (trace_stats) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      trace_stats = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, trace_stats, submessage_arena);
    }
    
  } else {
    
  }
  trace_stats_ = trace_stats;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.trace_stats)
}

// uint32 trusted_packet_sequence_id = 10;
inline void ChromeTracePacket::clear_trusted_packet_sequence_id() {
  trusted_packet_sequence_id_ = 0u;
}
inline ::google::protobuf::uint32 ChromeTracePacket::trusted_packet_sequence_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.trusted_packet_sequence_id)
  return trusted_packet_sequence_id_;
}
inline void ChromeTracePacket::set_trusted_packet_sequence_id(::google::protobuf::uint32 value) {
  
  trusted_packet_sequence_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeTracePacket.trusted_packet_sequence_id)
}

// .perfetto.protos.InternedData interned_data = 12;
inline bool ChromeTracePacket::has_interned_data() const {
  return this != internal_default_instance() && interned_data_ != NULL;
}
inline const ::perfetto::protos::InternedData& ChromeTracePacket::_internal_interned_data() const {
  return *interned_data_;
}
inline const ::perfetto::protos::InternedData& ChromeTracePacket::interned_data() const {
  const ::perfetto::protos::InternedData* p = interned_data_;
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.interned_data)
  return p != NULL ? *p : *reinterpret_cast<const ::perfetto::protos::InternedData*>(
      &::perfetto::protos::_InternedData_default_instance_);
}
inline ::perfetto::protos::InternedData* ChromeTracePacket::release_interned_data() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeTracePacket.interned_data)
  
  ::perfetto::protos::InternedData* temp = interned_data_;
  interned_data_ = NULL;
  return temp;
}
inline ::perfetto::protos::InternedData* ChromeTracePacket::mutable_interned_data() {
  
  if (interned_data_ == NULL) {
    auto* p = CreateMaybeMessage<::perfetto::protos::InternedData>(GetArenaNoVirtual());
    interned_data_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeTracePacket.interned_data)
  return interned_data_;
}
inline void ChromeTracePacket::set_allocated_interned_data(::perfetto::protos::InternedData* interned_data) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(interned_data_);
  }
  if (interned_data) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      interned_data = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, interned_data, submessage_arena);
    }
    
  } else {
    
  }
  interned_data_ = interned_data;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeTracePacket.interned_data)
}

// bool incremental_state_cleared = 41;
inline void ChromeTracePacket::clear_incremental_state_cleared() {
  incremental_state_cleared_ = false;
}
inline bool ChromeTracePacket::incremental_state_cleared() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.incremental_state_cleared)
  return incremental_state_cleared_;
}
inline void ChromeTracePacket::set_incremental_state_cleared(bool value) {
  
  incremental_state_cleared_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeTracePacket.incremental_state_cleared)
}

// bool previous_packet_dropped = 42;
inline void ChromeTracePacket::clear_previous_packet_dropped() {
  previous_packet_dropped_ = false;
}
inline bool ChromeTracePacket::previous_packet_dropped() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeTracePacket.previous_packet_dropped)
  return previous_packet_dropped_;
}
inline void ChromeTracePacket::set_previous_packet_dropped(bool value) {
  
  previous_packet_dropped_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeTracePacket.previous_packet_dropped)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_perfetto_2ftrace_2fchrome_2fchrome_5ftrace_5fpacket_2eproto