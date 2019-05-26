// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trace_log.proto

#ifndef PROTOBUF_INCLUDED_trace_5flog_2eproto
#define PROTOBUF_INCLUDED_trace_5flog_2eproto

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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_trace_5flog_2eproto 

namespace protobuf_trace_5flog_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_trace_5flog_2eproto
namespace metrics {
class TraceLog;
class TraceLogDefaultTypeInternal;
extern TraceLogDefaultTypeInternal _TraceLog_default_instance_;
}  // namespace metrics
namespace google {
namespace protobuf {
template<> ::metrics::TraceLog* Arena::CreateMaybeMessage<::metrics::TraceLog>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace metrics {

// ===================================================================

class TraceLog : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:metrics.TraceLog) */ {
 public:
  TraceLog();
  virtual ~TraceLog();

  TraceLog(const TraceLog& from);

  inline TraceLog& operator=(const TraceLog& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TraceLog(TraceLog&& from) noexcept
    : TraceLog() {
    *this = ::std::move(from);
  }

  inline TraceLog& operator=(TraceLog&& from) noexcept {
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

  static const TraceLog& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TraceLog* internal_default_instance() {
    return reinterpret_cast<const TraceLog*>(
               &_TraceLog_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(TraceLog* other);
  friend void swap(TraceLog& a, TraceLog& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TraceLog* New() const final {
    return CreateMaybeMessage<TraceLog>(NULL);
  }

  TraceLog* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TraceLog>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const TraceLog& from);
  void MergeFrom(const TraceLog& from);
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
  void InternalSwap(TraceLog* other);
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

  // optional bytes raw_data = 1;
  bool has_raw_data() const;
  void clear_raw_data();
  static const int kRawDataFieldNumber = 1;
  const ::std::string& raw_data() const;
  void set_raw_data(const ::std::string& value);
  #if LANG_CXX11
  void set_raw_data(::std::string&& value);
  #endif
  void set_raw_data(const char* value);
  void set_raw_data(const void* value, size_t size);
  ::std::string* mutable_raw_data();
  ::std::string* release_raw_data();
  void set_allocated_raw_data(::std::string* raw_data);

  // @@protoc_insertion_point(class_scope:metrics.TraceLog)
 private:
  void set_has_raw_data();
  void clear_has_raw_data();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr raw_data_;
  friend struct ::protobuf_trace_5flog_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TraceLog

// optional bytes raw_data = 1;
inline bool TraceLog::has_raw_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TraceLog::set_has_raw_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TraceLog::clear_has_raw_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TraceLog::clear_raw_data() {
  raw_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_raw_data();
}
inline const ::std::string& TraceLog::raw_data() const {
  // @@protoc_insertion_point(field_get:metrics.TraceLog.raw_data)
  return raw_data_.GetNoArena();
}
inline void TraceLog::set_raw_data(const ::std::string& value) {
  set_has_raw_data();
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:metrics.TraceLog.raw_data)
}
#if LANG_CXX11
inline void TraceLog::set_raw_data(::std::string&& value) {
  set_has_raw_data();
  raw_data_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:metrics.TraceLog.raw_data)
}
#endif
inline void TraceLog::set_raw_data(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_raw_data();
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:metrics.TraceLog.raw_data)
}
inline void TraceLog::set_raw_data(const void* value, size_t size) {
  set_has_raw_data();
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:metrics.TraceLog.raw_data)
}
inline ::std::string* TraceLog::mutable_raw_data() {
  set_has_raw_data();
  // @@protoc_insertion_point(field_mutable:metrics.TraceLog.raw_data)
  return raw_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TraceLog::release_raw_data() {
  // @@protoc_insertion_point(field_release:metrics.TraceLog.raw_data)
  if (!has_raw_data()) {
    return NULL;
  }
  clear_has_raw_data();
  return raw_data_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TraceLog::set_allocated_raw_data(::std::string* raw_data) {
  if (raw_data != NULL) {
    set_has_raw_data();
  } else {
    clear_has_raw_data();
  }
  raw_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw_data);
  // @@protoc_insertion_point(field_set_allocated:metrics.TraceLog.raw_data)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace metrics

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_trace_5flog_2eproto