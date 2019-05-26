// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/process_stats/process_stats_config.proto

#ifndef PROTOBUF_INCLUDED_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto
#define PROTOBUF_INCLUDED_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto 

namespace protobuf_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto
namespace perfetto {
namespace protos {
class ProcessStatsConfig;
class ProcessStatsConfigDefaultTypeInternal;
extern ProcessStatsConfigDefaultTypeInternal _ProcessStatsConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> ::perfetto::protos::ProcessStatsConfig* Arena::CreateMaybeMessage<::perfetto::protos::ProcessStatsConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace perfetto {
namespace protos {

enum ProcessStatsConfig_Quirks {
  ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED = 0,
  ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP PROTOBUF_DEPRECATED = 1,
  ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND = 2
};
bool ProcessStatsConfig_Quirks_IsValid(int value);
const ProcessStatsConfig_Quirks ProcessStatsConfig_Quirks_Quirks_MIN = ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED;
const ProcessStatsConfig_Quirks ProcessStatsConfig_Quirks_Quirks_MAX = ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND;
const int ProcessStatsConfig_Quirks_Quirks_ARRAYSIZE = ProcessStatsConfig_Quirks_Quirks_MAX + 1;

// ===================================================================

class ProcessStatsConfig : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ProcessStatsConfig) */ {
 public:
  ProcessStatsConfig();
  virtual ~ProcessStatsConfig();

  ProcessStatsConfig(const ProcessStatsConfig& from);

  inline ProcessStatsConfig& operator=(const ProcessStatsConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ProcessStatsConfig(ProcessStatsConfig&& from) noexcept
    : ProcessStatsConfig() {
    *this = ::std::move(from);
  }

  inline ProcessStatsConfig& operator=(ProcessStatsConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ProcessStatsConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProcessStatsConfig* internal_default_instance() {
    return reinterpret_cast<const ProcessStatsConfig*>(
               &_ProcessStatsConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(ProcessStatsConfig* other);
  friend void swap(ProcessStatsConfig& a, ProcessStatsConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ProcessStatsConfig* New() const final {
    return CreateMaybeMessage<ProcessStatsConfig>(NULL);
  }

  ProcessStatsConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ProcessStatsConfig>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const ProcessStatsConfig& from);
  void MergeFrom(const ProcessStatsConfig& from);
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
  void InternalSwap(ProcessStatsConfig* other);
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

  typedef ProcessStatsConfig_Quirks Quirks;
  static const Quirks QUIRKS_UNSPECIFIED =
    ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const Quirks DISABLE_INITIAL_DUMP =
    ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP;
  static const Quirks DISABLE_ON_DEMAND =
    ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND;
  static inline bool Quirks_IsValid(int value) {
    return ProcessStatsConfig_Quirks_IsValid(value);
  }
  static const Quirks Quirks_MIN =
    ProcessStatsConfig_Quirks_Quirks_MIN;
  static const Quirks Quirks_MAX =
    ProcessStatsConfig_Quirks_Quirks_MAX;
  static const int Quirks_ARRAYSIZE =
    ProcessStatsConfig_Quirks_Quirks_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
  int quirks_size() const;
  void clear_quirks();
  static const int kQuirksFieldNumber = 1;
  ::perfetto::protos::ProcessStatsConfig_Quirks quirks(int index) const;
  void set_quirks(int index, ::perfetto::protos::ProcessStatsConfig_Quirks value);
  void add_quirks(::perfetto::protos::ProcessStatsConfig_Quirks value);
  const ::google::protobuf::RepeatedField<int>& quirks() const;
  ::google::protobuf::RepeatedField<int>* mutable_quirks();

  // optional bool scan_all_processes_on_start = 2;
  bool has_scan_all_processes_on_start() const;
  void clear_scan_all_processes_on_start();
  static const int kScanAllProcessesOnStartFieldNumber = 2;
  bool scan_all_processes_on_start() const;
  void set_scan_all_processes_on_start(bool value);

  // optional bool record_thread_names = 3;
  bool has_record_thread_names() const;
  void clear_record_thread_names();
  static const int kRecordThreadNamesFieldNumber = 3;
  bool record_thread_names() const;
  void set_record_thread_names(bool value);

  // optional uint32 proc_stats_poll_ms = 4;
  bool has_proc_stats_poll_ms() const;
  void clear_proc_stats_poll_ms();
  static const int kProcStatsPollMsFieldNumber = 4;
  ::google::protobuf::uint32 proc_stats_poll_ms() const;
  void set_proc_stats_poll_ms(::google::protobuf::uint32 value);

  // optional uint32 proc_stats_cache_ttl_ms = 6;
  bool has_proc_stats_cache_ttl_ms() const;
  void clear_proc_stats_cache_ttl_ms();
  static const int kProcStatsCacheTtlMsFieldNumber = 6;
  ::google::protobuf::uint32 proc_stats_cache_ttl_ms() const;
  void set_proc_stats_cache_ttl_ms(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.ProcessStatsConfig)
 private:
  void set_has_scan_all_processes_on_start();
  void clear_has_scan_all_processes_on_start();
  void set_has_record_thread_names();
  void clear_has_record_thread_names();
  void set_has_proc_stats_poll_ms();
  void clear_has_proc_stats_poll_ms();
  void set_has_proc_stats_cache_ttl_ms();
  void clear_has_proc_stats_cache_ttl_ms();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField<int> quirks_;
  bool scan_all_processes_on_start_;
  bool record_thread_names_;
  ::google::protobuf::uint32 proc_stats_poll_ms_;
  ::google::protobuf::uint32 proc_stats_cache_ttl_ms_;
  friend struct ::protobuf_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProcessStatsConfig

// repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
inline int ProcessStatsConfig::quirks_size() const {
  return quirks_.size();
}
inline void ProcessStatsConfig::clear_quirks() {
  quirks_.Clear();
}
inline ::perfetto::protos::ProcessStatsConfig_Quirks ProcessStatsConfig::quirks(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.quirks)
  return static_cast< ::perfetto::protos::ProcessStatsConfig_Quirks >(quirks_.Get(index));
}
inline void ProcessStatsConfig::set_quirks(int index, ::perfetto::protos::ProcessStatsConfig_Quirks value) {
  assert(::perfetto::protos::ProcessStatsConfig_Quirks_IsValid(value));
  quirks_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.quirks)
}
inline void ProcessStatsConfig::add_quirks(::perfetto::protos::ProcessStatsConfig_Quirks value) {
  assert(::perfetto::protos::ProcessStatsConfig_Quirks_IsValid(value));
  quirks_.Add(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessStatsConfig.quirks)
}
inline const ::google::protobuf::RepeatedField<int>&
ProcessStatsConfig::quirks() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ProcessStatsConfig.quirks)
  return quirks_;
}
inline ::google::protobuf::RepeatedField<int>*
ProcessStatsConfig::mutable_quirks() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ProcessStatsConfig.quirks)
  return &quirks_;
}

// optional bool scan_all_processes_on_start = 2;
inline bool ProcessStatsConfig::has_scan_all_processes_on_start() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProcessStatsConfig::set_has_scan_all_processes_on_start() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ProcessStatsConfig::clear_has_scan_all_processes_on_start() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ProcessStatsConfig::clear_scan_all_processes_on_start() {
  scan_all_processes_on_start_ = false;
  clear_has_scan_all_processes_on_start();
}
inline bool ProcessStatsConfig::scan_all_processes_on_start() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.scan_all_processes_on_start)
  return scan_all_processes_on_start_;
}
inline void ProcessStatsConfig::set_scan_all_processes_on_start(bool value) {
  set_has_scan_all_processes_on_start();
  scan_all_processes_on_start_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.scan_all_processes_on_start)
}

// optional bool record_thread_names = 3;
inline bool ProcessStatsConfig::has_record_thread_names() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProcessStatsConfig::set_has_record_thread_names() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ProcessStatsConfig::clear_has_record_thread_names() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ProcessStatsConfig::clear_record_thread_names() {
  record_thread_names_ = false;
  clear_has_record_thread_names();
}
inline bool ProcessStatsConfig::record_thread_names() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.record_thread_names)
  return record_thread_names_;
}
inline void ProcessStatsConfig::set_record_thread_names(bool value) {
  set_has_record_thread_names();
  record_thread_names_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.record_thread_names)
}

// optional uint32 proc_stats_poll_ms = 4;
inline bool ProcessStatsConfig::has_proc_stats_poll_ms() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProcessStatsConfig::set_has_proc_stats_poll_ms() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ProcessStatsConfig::clear_has_proc_stats_poll_ms() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ProcessStatsConfig::clear_proc_stats_poll_ms() {
  proc_stats_poll_ms_ = 0u;
  clear_has_proc_stats_poll_ms();
}
inline ::google::protobuf::uint32 ProcessStatsConfig::proc_stats_poll_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.proc_stats_poll_ms)
  return proc_stats_poll_ms_;
}
inline void ProcessStatsConfig::set_proc_stats_poll_ms(::google::protobuf::uint32 value) {
  set_has_proc_stats_poll_ms();
  proc_stats_poll_ms_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.proc_stats_poll_ms)
}

// optional uint32 proc_stats_cache_ttl_ms = 6;
inline bool ProcessStatsConfig::has_proc_stats_cache_ttl_ms() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProcessStatsConfig::set_has_proc_stats_cache_ttl_ms() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ProcessStatsConfig::clear_has_proc_stats_cache_ttl_ms() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ProcessStatsConfig::clear_proc_stats_cache_ttl_ms() {
  proc_stats_cache_ttl_ms_ = 0u;
  clear_has_proc_stats_cache_ttl_ms();
}
inline ::google::protobuf::uint32 ProcessStatsConfig::proc_stats_cache_ttl_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.proc_stats_cache_ttl_ms)
  return proc_stats_cache_ttl_ms_;
}
inline void ProcessStatsConfig::set_proc_stats_cache_ttl_ms(::google::protobuf::uint32 value) {
  set_has_proc_stats_cache_ttl_ms();
  proc_stats_cache_ttl_ms_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.proc_stats_cache_ttl_ms)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::perfetto::protos::ProcessStatsConfig_Quirks> : ::std::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_perfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto