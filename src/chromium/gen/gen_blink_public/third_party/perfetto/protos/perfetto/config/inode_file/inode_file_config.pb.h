// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/inode_file/inode_file_config.proto

#ifndef PROTOBUF_INCLUDED_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto
#define PROTOBUF_INCLUDED_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto 

namespace protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto
namespace perfetto {
namespace protos {
class InodeFileConfig;
class InodeFileConfigDefaultTypeInternal;
extern InodeFileConfigDefaultTypeInternal _InodeFileConfig_default_instance_;
class InodeFileConfig_MountPointMappingEntry;
class InodeFileConfig_MountPointMappingEntryDefaultTypeInternal;
extern InodeFileConfig_MountPointMappingEntryDefaultTypeInternal _InodeFileConfig_MountPointMappingEntry_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> ::perfetto::protos::InodeFileConfig* Arena::CreateMaybeMessage<::perfetto::protos::InodeFileConfig>(Arena*);
template<> ::perfetto::protos::InodeFileConfig_MountPointMappingEntry* Arena::CreateMaybeMessage<::perfetto::protos::InodeFileConfig_MountPointMappingEntry>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace perfetto {
namespace protos {

// ===================================================================

class InodeFileConfig_MountPointMappingEntry : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.InodeFileConfig.MountPointMappingEntry) */ {
 public:
  InodeFileConfig_MountPointMappingEntry();
  virtual ~InodeFileConfig_MountPointMappingEntry();

  InodeFileConfig_MountPointMappingEntry(const InodeFileConfig_MountPointMappingEntry& from);

  inline InodeFileConfig_MountPointMappingEntry& operator=(const InodeFileConfig_MountPointMappingEntry& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InodeFileConfig_MountPointMappingEntry(InodeFileConfig_MountPointMappingEntry&& from) noexcept
    : InodeFileConfig_MountPointMappingEntry() {
    *this = ::std::move(from);
  }

  inline InodeFileConfig_MountPointMappingEntry& operator=(InodeFileConfig_MountPointMappingEntry&& from) noexcept {
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

  static const InodeFileConfig_MountPointMappingEntry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InodeFileConfig_MountPointMappingEntry* internal_default_instance() {
    return reinterpret_cast<const InodeFileConfig_MountPointMappingEntry*>(
               &_InodeFileConfig_MountPointMappingEntry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(InodeFileConfig_MountPointMappingEntry* other);
  friend void swap(InodeFileConfig_MountPointMappingEntry& a, InodeFileConfig_MountPointMappingEntry& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InodeFileConfig_MountPointMappingEntry* New() const final {
    return CreateMaybeMessage<InodeFileConfig_MountPointMappingEntry>(NULL);
  }

  InodeFileConfig_MountPointMappingEntry* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InodeFileConfig_MountPointMappingEntry>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const InodeFileConfig_MountPointMappingEntry& from);
  void MergeFrom(const InodeFileConfig_MountPointMappingEntry& from);
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
  void InternalSwap(InodeFileConfig_MountPointMappingEntry* other);
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

  // repeated string scan_roots = 2;
  int scan_roots_size() const;
  void clear_scan_roots();
  static const int kScanRootsFieldNumber = 2;
  const ::std::string& scan_roots(int index) const;
  ::std::string* mutable_scan_roots(int index);
  void set_scan_roots(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_scan_roots(int index, ::std::string&& value);
  #endif
  void set_scan_roots(int index, const char* value);
  void set_scan_roots(int index, const char* value, size_t size);
  ::std::string* add_scan_roots();
  void add_scan_roots(const ::std::string& value);
  #if LANG_CXX11
  void add_scan_roots(::std::string&& value);
  #endif
  void add_scan_roots(const char* value);
  void add_scan_roots(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& scan_roots() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_scan_roots();

  // optional string mountpoint = 1;
  bool has_mountpoint() const;
  void clear_mountpoint();
  static const int kMountpointFieldNumber = 1;
  const ::std::string& mountpoint() const;
  void set_mountpoint(const ::std::string& value);
  #if LANG_CXX11
  void set_mountpoint(::std::string&& value);
  #endif
  void set_mountpoint(const char* value);
  void set_mountpoint(const char* value, size_t size);
  ::std::string* mutable_mountpoint();
  ::std::string* release_mountpoint();
  void set_allocated_mountpoint(::std::string* mountpoint);

  // @@protoc_insertion_point(class_scope:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
 private:
  void set_has_mountpoint();
  void clear_has_mountpoint();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> scan_roots_;
  ::google::protobuf::internal::ArenaStringPtr mountpoint_;
  friend struct ::protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class InodeFileConfig : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.InodeFileConfig) */ {
 public:
  InodeFileConfig();
  virtual ~InodeFileConfig();

  InodeFileConfig(const InodeFileConfig& from);

  inline InodeFileConfig& operator=(const InodeFileConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InodeFileConfig(InodeFileConfig&& from) noexcept
    : InodeFileConfig() {
    *this = ::std::move(from);
  }

  inline InodeFileConfig& operator=(InodeFileConfig&& from) noexcept {
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

  static const InodeFileConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InodeFileConfig* internal_default_instance() {
    return reinterpret_cast<const InodeFileConfig*>(
               &_InodeFileConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(InodeFileConfig* other);
  friend void swap(InodeFileConfig& a, InodeFileConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InodeFileConfig* New() const final {
    return CreateMaybeMessage<InodeFileConfig>(NULL);
  }

  InodeFileConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InodeFileConfig>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const InodeFileConfig& from);
  void MergeFrom(const InodeFileConfig& from);
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
  void InternalSwap(InodeFileConfig* other);
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

  typedef InodeFileConfig_MountPointMappingEntry MountPointMappingEntry;

  // accessors -------------------------------------------------------

  // repeated string scan_mount_points = 5;
  int scan_mount_points_size() const;
  void clear_scan_mount_points();
  static const int kScanMountPointsFieldNumber = 5;
  const ::std::string& scan_mount_points(int index) const;
  ::std::string* mutable_scan_mount_points(int index);
  void set_scan_mount_points(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_scan_mount_points(int index, ::std::string&& value);
  #endif
  void set_scan_mount_points(int index, const char* value);
  void set_scan_mount_points(int index, const char* value, size_t size);
  ::std::string* add_scan_mount_points();
  void add_scan_mount_points(const ::std::string& value);
  #if LANG_CXX11
  void add_scan_mount_points(::std::string&& value);
  #endif
  void add_scan_mount_points(const char* value);
  void add_scan_mount_points(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& scan_mount_points() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_scan_mount_points();

  // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
  int mount_point_mapping_size() const;
  void clear_mount_point_mapping();
  static const int kMountPointMappingFieldNumber = 6;
  ::perfetto::protos::InodeFileConfig_MountPointMappingEntry* mutable_mount_point_mapping(int index);
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >*
      mutable_mount_point_mapping();
  const ::perfetto::protos::InodeFileConfig_MountPointMappingEntry& mount_point_mapping(int index) const;
  ::perfetto::protos::InodeFileConfig_MountPointMappingEntry* add_mount_point_mapping();
  const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >&
      mount_point_mapping() const;

  // optional uint32 scan_interval_ms = 1;
  bool has_scan_interval_ms() const;
  void clear_scan_interval_ms();
  static const int kScanIntervalMsFieldNumber = 1;
  ::google::protobuf::uint32 scan_interval_ms() const;
  void set_scan_interval_ms(::google::protobuf::uint32 value);

  // optional uint32 scan_delay_ms = 2;
  bool has_scan_delay_ms() const;
  void clear_scan_delay_ms();
  static const int kScanDelayMsFieldNumber = 2;
  ::google::protobuf::uint32 scan_delay_ms() const;
  void set_scan_delay_ms(::google::protobuf::uint32 value);

  // optional uint32 scan_batch_size = 3;
  bool has_scan_batch_size() const;
  void clear_scan_batch_size();
  static const int kScanBatchSizeFieldNumber = 3;
  ::google::protobuf::uint32 scan_batch_size() const;
  void set_scan_batch_size(::google::protobuf::uint32 value);

  // optional bool do_not_scan = 4;
  bool has_do_not_scan() const;
  void clear_do_not_scan();
  static const int kDoNotScanFieldNumber = 4;
  bool do_not_scan() const;
  void set_do_not_scan(bool value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.InodeFileConfig)
 private:
  void set_has_scan_interval_ms();
  void clear_has_scan_interval_ms();
  void set_has_scan_delay_ms();
  void clear_has_scan_delay_ms();
  void set_has_scan_batch_size();
  void clear_has_scan_batch_size();
  void set_has_do_not_scan();
  void clear_has_do_not_scan();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> scan_mount_points_;
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry > mount_point_mapping_;
  ::google::protobuf::uint32 scan_interval_ms_;
  ::google::protobuf::uint32 scan_delay_ms_;
  ::google::protobuf::uint32 scan_batch_size_;
  bool do_not_scan_;
  friend struct ::protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InodeFileConfig_MountPointMappingEntry

// optional string mountpoint = 1;
inline bool InodeFileConfig_MountPointMappingEntry::has_mountpoint() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InodeFileConfig_MountPointMappingEntry::set_has_mountpoint() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InodeFileConfig_MountPointMappingEntry::clear_has_mountpoint() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InodeFileConfig_MountPointMappingEntry::clear_mountpoint() {
  mountpoint_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_mountpoint();
}
inline const ::std::string& InodeFileConfig_MountPointMappingEntry::mountpoint() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
  return mountpoint_.GetNoArena();
}
inline void InodeFileConfig_MountPointMappingEntry::set_mountpoint(const ::std::string& value) {
  set_has_mountpoint();
  mountpoint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
}
#if LANG_CXX11
inline void InodeFileConfig_MountPointMappingEntry::set_mountpoint(::std::string&& value) {
  set_has_mountpoint();
  mountpoint_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
}
#endif
inline void InodeFileConfig_MountPointMappingEntry::set_mountpoint(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_mountpoint();
  mountpoint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
}
inline void InodeFileConfig_MountPointMappingEntry::set_mountpoint(const char* value, size_t size) {
  set_has_mountpoint();
  mountpoint_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
}
inline ::std::string* InodeFileConfig_MountPointMappingEntry::mutable_mountpoint() {
  set_has_mountpoint();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
  return mountpoint_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* InodeFileConfig_MountPointMappingEntry::release_mountpoint() {
  // @@protoc_insertion_point(field_release:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
  if (!has_mountpoint()) {
    return NULL;
  }
  clear_has_mountpoint();
  return mountpoint_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void InodeFileConfig_MountPointMappingEntry::set_allocated_mountpoint(::std::string* mountpoint) {
  if (mountpoint != NULL) {
    set_has_mountpoint();
  } else {
    clear_has_mountpoint();
  }
  mountpoint_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mountpoint);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.InodeFileConfig.MountPointMappingEntry.mountpoint)
}

// repeated string scan_roots = 2;
inline int InodeFileConfig_MountPointMappingEntry::scan_roots_size() const {
  return scan_roots_.size();
}
inline void InodeFileConfig_MountPointMappingEntry::clear_scan_roots() {
  scan_roots_.Clear();
}
inline const ::std::string& InodeFileConfig_MountPointMappingEntry::scan_roots(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  return scan_roots_.Get(index);
}
inline ::std::string* InodeFileConfig_MountPointMappingEntry::mutable_scan_roots(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  return scan_roots_.Mutable(index);
}
inline void InodeFileConfig_MountPointMappingEntry::set_scan_roots(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  scan_roots_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void InodeFileConfig_MountPointMappingEntry::set_scan_roots(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  scan_roots_.Mutable(index)->assign(std::move(value));
}
#endif
inline void InodeFileConfig_MountPointMappingEntry::set_scan_roots(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  scan_roots_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
}
inline void InodeFileConfig_MountPointMappingEntry::set_scan_roots(int index, const char* value, size_t size) {
  scan_roots_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
}
inline ::std::string* InodeFileConfig_MountPointMappingEntry::add_scan_roots() {
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  return scan_roots_.Add();
}
inline void InodeFileConfig_MountPointMappingEntry::add_scan_roots(const ::std::string& value) {
  scan_roots_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
}
#if LANG_CXX11
inline void InodeFileConfig_MountPointMappingEntry::add_scan_roots(::std::string&& value) {
  scan_roots_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
}
#endif
inline void InodeFileConfig_MountPointMappingEntry::add_scan_roots(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  scan_roots_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
}
inline void InodeFileConfig_MountPointMappingEntry::add_scan_roots(const char* value, size_t size) {
  scan_roots_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
InodeFileConfig_MountPointMappingEntry::scan_roots() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  return scan_roots_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
InodeFileConfig_MountPointMappingEntry::mutable_scan_roots() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InodeFileConfig.MountPointMappingEntry.scan_roots)
  return &scan_roots_;
}

// -------------------------------------------------------------------

// InodeFileConfig

// optional uint32 scan_interval_ms = 1;
inline bool InodeFileConfig::has_scan_interval_ms() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InodeFileConfig::set_has_scan_interval_ms() {
  _has_bits_[0] |= 0x00000001u;
}
inline void InodeFileConfig::clear_has_scan_interval_ms() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void InodeFileConfig::clear_scan_interval_ms() {
  scan_interval_ms_ = 0u;
  clear_has_scan_interval_ms();
}
inline ::google::protobuf::uint32 InodeFileConfig::scan_interval_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.scan_interval_ms)
  return scan_interval_ms_;
}
inline void InodeFileConfig::set_scan_interval_ms(::google::protobuf::uint32 value) {
  set_has_scan_interval_ms();
  scan_interval_ms_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.scan_interval_ms)
}

// optional uint32 scan_delay_ms = 2;
inline bool InodeFileConfig::has_scan_delay_ms() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InodeFileConfig::set_has_scan_delay_ms() {
  _has_bits_[0] |= 0x00000002u;
}
inline void InodeFileConfig::clear_has_scan_delay_ms() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void InodeFileConfig::clear_scan_delay_ms() {
  scan_delay_ms_ = 0u;
  clear_has_scan_delay_ms();
}
inline ::google::protobuf::uint32 InodeFileConfig::scan_delay_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.scan_delay_ms)
  return scan_delay_ms_;
}
inline void InodeFileConfig::set_scan_delay_ms(::google::protobuf::uint32 value) {
  set_has_scan_delay_ms();
  scan_delay_ms_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.scan_delay_ms)
}

// optional uint32 scan_batch_size = 3;
inline bool InodeFileConfig::has_scan_batch_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void InodeFileConfig::set_has_scan_batch_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void InodeFileConfig::clear_has_scan_batch_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void InodeFileConfig::clear_scan_batch_size() {
  scan_batch_size_ = 0u;
  clear_has_scan_batch_size();
}
inline ::google::protobuf::uint32 InodeFileConfig::scan_batch_size() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.scan_batch_size)
  return scan_batch_size_;
}
inline void InodeFileConfig::set_scan_batch_size(::google::protobuf::uint32 value) {
  set_has_scan_batch_size();
  scan_batch_size_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.scan_batch_size)
}

// optional bool do_not_scan = 4;
inline bool InodeFileConfig::has_do_not_scan() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void InodeFileConfig::set_has_do_not_scan() {
  _has_bits_[0] |= 0x00000008u;
}
inline void InodeFileConfig::clear_has_do_not_scan() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void InodeFileConfig::clear_do_not_scan() {
  do_not_scan_ = false;
  clear_has_do_not_scan();
}
inline bool InodeFileConfig::do_not_scan() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.do_not_scan)
  return do_not_scan_;
}
inline void InodeFileConfig::set_do_not_scan(bool value) {
  set_has_do_not_scan();
  do_not_scan_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.do_not_scan)
}

// repeated string scan_mount_points = 5;
inline int InodeFileConfig::scan_mount_points_size() const {
  return scan_mount_points_.size();
}
inline void InodeFileConfig::clear_scan_mount_points() {
  scan_mount_points_.Clear();
}
inline const ::std::string& InodeFileConfig::scan_mount_points(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.scan_mount_points)
  return scan_mount_points_.Get(index);
}
inline ::std::string* InodeFileConfig::mutable_scan_mount_points(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileConfig.scan_mount_points)
  return scan_mount_points_.Mutable(index);
}
inline void InodeFileConfig::set_scan_mount_points(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.scan_mount_points)
  scan_mount_points_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void InodeFileConfig::set_scan_mount_points(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileConfig.scan_mount_points)
  scan_mount_points_.Mutable(index)->assign(std::move(value));
}
#endif
inline void InodeFileConfig::set_scan_mount_points(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  scan_mount_points_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.InodeFileConfig.scan_mount_points)
}
inline void InodeFileConfig::set_scan_mount_points(int index, const char* value, size_t size) {
  scan_mount_points_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.InodeFileConfig.scan_mount_points)
}
inline ::std::string* InodeFileConfig::add_scan_mount_points() {
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.InodeFileConfig.scan_mount_points)
  return scan_mount_points_.Add();
}
inline void InodeFileConfig::add_scan_mount_points(const ::std::string& value) {
  scan_mount_points_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileConfig.scan_mount_points)
}
#if LANG_CXX11
inline void InodeFileConfig::add_scan_mount_points(::std::string&& value) {
  scan_mount_points_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileConfig.scan_mount_points)
}
#endif
inline void InodeFileConfig::add_scan_mount_points(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  scan_mount_points_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.InodeFileConfig.scan_mount_points)
}
inline void InodeFileConfig::add_scan_mount_points(const char* value, size_t size) {
  scan_mount_points_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.InodeFileConfig.scan_mount_points)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
InodeFileConfig::scan_mount_points() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InodeFileConfig.scan_mount_points)
  return scan_mount_points_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
InodeFileConfig::mutable_scan_mount_points() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InodeFileConfig.scan_mount_points)
  return &scan_mount_points_;
}

// repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
inline int InodeFileConfig::mount_point_mapping_size() const {
  return mount_point_mapping_.size();
}
inline void InodeFileConfig::clear_mount_point_mapping() {
  mount_point_mapping_.Clear();
}
inline ::perfetto::protos::InodeFileConfig_MountPointMappingEntry* InodeFileConfig::mutable_mount_point_mapping(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileConfig.mount_point_mapping)
  return mount_point_mapping_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >*
InodeFileConfig::mutable_mount_point_mapping() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InodeFileConfig.mount_point_mapping)
  return &mount_point_mapping_;
}
inline const ::perfetto::protos::InodeFileConfig_MountPointMappingEntry& InodeFileConfig::mount_point_mapping(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileConfig.mount_point_mapping)
  return mount_point_mapping_.Get(index);
}
inline ::perfetto::protos::InodeFileConfig_MountPointMappingEntry* InodeFileConfig::add_mount_point_mapping() {
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileConfig.mount_point_mapping)
  return mount_point_mapping_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >&
InodeFileConfig::mount_point_mapping() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InodeFileConfig.mount_point_mapping)
  return mount_point_mapping_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto
