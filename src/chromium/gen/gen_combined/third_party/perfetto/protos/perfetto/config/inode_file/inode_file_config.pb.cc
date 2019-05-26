// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/inode_file/inode_file_config.proto

#include "perfetto/config/inode_file/inode_file_config.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_InodeFileConfig_MountPointMappingEntry;
}  // namespace protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto
namespace perfetto {
namespace protos {
class InodeFileConfig_MountPointMappingEntryDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<InodeFileConfig_MountPointMappingEntry>
      _instance;
} _InodeFileConfig_MountPointMappingEntry_default_instance_;
class InodeFileConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<InodeFileConfig>
      _instance;
} _InodeFileConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto {
static void InitDefaultsInodeFileConfig_MountPointMappingEntry() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_InodeFileConfig_MountPointMappingEntry_default_instance_;
    new (ptr) ::perfetto::protos::InodeFileConfig_MountPointMappingEntry();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::InodeFileConfig_MountPointMappingEntry::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_InodeFileConfig_MountPointMappingEntry =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsInodeFileConfig_MountPointMappingEntry}, {}};

static void InitDefaultsInodeFileConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_InodeFileConfig_default_instance_;
    new (ptr) ::perfetto::protos::InodeFileConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::InodeFileConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_InodeFileConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsInodeFileConfig}, {
      &protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::scc_info_InodeFileConfig_MountPointMappingEntry.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_InodeFileConfig_MountPointMappingEntry.base);
  ::google::protobuf::internal::InitSCC(&scc_info_InodeFileConfig.base);
}

}  // namespace protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto
namespace perfetto {
namespace protos {

// ===================================================================

void InodeFileConfig_MountPointMappingEntry::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InodeFileConfig_MountPointMappingEntry::kMountpointFieldNumber;
const int InodeFileConfig_MountPointMappingEntry::kScanRootsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InodeFileConfig_MountPointMappingEntry::InodeFileConfig_MountPointMappingEntry()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::scc_info_InodeFileConfig_MountPointMappingEntry.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
}
InodeFileConfig_MountPointMappingEntry::InodeFileConfig_MountPointMappingEntry(const InodeFileConfig_MountPointMappingEntry& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      scan_roots_(from.scan_roots_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  mountpoint_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_mountpoint()) {
    mountpoint_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mountpoint_);
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
}

void InodeFileConfig_MountPointMappingEntry::SharedCtor() {
  mountpoint_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

InodeFileConfig_MountPointMappingEntry::~InodeFileConfig_MountPointMappingEntry() {
  // @@protoc_insertion_point(destructor:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  SharedDtor();
}

void InodeFileConfig_MountPointMappingEntry::SharedDtor() {
  mountpoint_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void InodeFileConfig_MountPointMappingEntry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InodeFileConfig_MountPointMappingEntry& InodeFileConfig_MountPointMappingEntry::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::scc_info_InodeFileConfig_MountPointMappingEntry.base);
  return *internal_default_instance();
}


void InodeFileConfig_MountPointMappingEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scan_roots_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    mountpoint_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool InodeFileConfig_MountPointMappingEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string mountpoint = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_mountpoint()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string scan_roots = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_scan_roots()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  return false;
#undef DO_
}

void InodeFileConfig_MountPointMappingEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string mountpoint = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->mountpoint(), output);
  }

  // repeated string scan_roots = 2;
  for (int i = 0, n = this->scan_roots_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->scan_roots(i), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
}

size_t InodeFileConfig_MountPointMappingEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string scan_roots = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->scan_roots_size());
  for (int i = 0, n = this->scan_roots_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->scan_roots(i));
  }

  // optional string mountpoint = 1;
  if (has_mountpoint()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->mountpoint());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InodeFileConfig_MountPointMappingEntry::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InodeFileConfig_MountPointMappingEntry*>(&from));
}

void InodeFileConfig_MountPointMappingEntry::MergeFrom(const InodeFileConfig_MountPointMappingEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  scan_roots_.MergeFrom(from.scan_roots_);
  if (from.has_mountpoint()) {
    set_has_mountpoint();
    mountpoint_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.mountpoint_);
  }
}

void InodeFileConfig_MountPointMappingEntry::CopyFrom(const InodeFileConfig_MountPointMappingEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InodeFileConfig_MountPointMappingEntry::IsInitialized() const {
  return true;
}

void InodeFileConfig_MountPointMappingEntry::Swap(InodeFileConfig_MountPointMappingEntry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InodeFileConfig_MountPointMappingEntry::InternalSwap(InodeFileConfig_MountPointMappingEntry* other) {
  using std::swap;
  scan_roots_.InternalSwap(CastToBase(&other->scan_roots_));
  mountpoint_.Swap(&other->mountpoint_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string InodeFileConfig_MountPointMappingEntry::GetTypeName() const {
  return "perfetto.protos.InodeFileConfig.MountPointMappingEntry";
}


// ===================================================================

void InodeFileConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InodeFileConfig::kScanIntervalMsFieldNumber;
const int InodeFileConfig::kScanDelayMsFieldNumber;
const int InodeFileConfig::kScanBatchSizeFieldNumber;
const int InodeFileConfig::kDoNotScanFieldNumber;
const int InodeFileConfig::kScanMountPointsFieldNumber;
const int InodeFileConfig::kMountPointMappingFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InodeFileConfig::InodeFileConfig()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::scc_info_InodeFileConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.InodeFileConfig)
}
InodeFileConfig::InodeFileConfig(const InodeFileConfig& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      scan_mount_points_(from.scan_mount_points_),
      mount_point_mapping_(from.mount_point_mapping_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&scan_interval_ms_, &from.scan_interval_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&do_not_scan_) -
    reinterpret_cast<char*>(&scan_interval_ms_)) + sizeof(do_not_scan_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.InodeFileConfig)
}

void InodeFileConfig::SharedCtor() {
  ::memset(&scan_interval_ms_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&do_not_scan_) -
      reinterpret_cast<char*>(&scan_interval_ms_)) + sizeof(do_not_scan_));
}

InodeFileConfig::~InodeFileConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.InodeFileConfig)
  SharedDtor();
}

void InodeFileConfig::SharedDtor() {
}

void InodeFileConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const InodeFileConfig& InodeFileConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2fconfig_2finode_5ffile_2finode_5ffile_5fconfig_2eproto::scc_info_InodeFileConfig.base);
  return *internal_default_instance();
}


void InodeFileConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.InodeFileConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scan_mount_points_.Clear();
  mount_point_mapping_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    ::memset(&scan_interval_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&do_not_scan_) -
        reinterpret_cast<char*>(&scan_interval_ms_)) + sizeof(do_not_scan_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool InodeFileConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.InodeFileConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 scan_interval_ms = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_scan_interval_ms();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scan_interval_ms_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 scan_delay_ms = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_scan_delay_ms();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scan_delay_ms_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 scan_batch_size = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_scan_batch_size();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &scan_batch_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool do_not_scan = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_do_not_scan();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &do_not_scan_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string scan_mount_points = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_scan_mount_points()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_mount_point_mapping()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:perfetto.protos.InodeFileConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.InodeFileConfig)
  return false;
#undef DO_
}

void InodeFileConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.InodeFileConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 scan_interval_ms = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->scan_interval_ms(), output);
  }

  // optional uint32 scan_delay_ms = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->scan_delay_ms(), output);
  }

  // optional uint32 scan_batch_size = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->scan_batch_size(), output);
  }

  // optional bool do_not_scan = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->do_not_scan(), output);
  }

  // repeated string scan_mount_points = 5;
  for (int i = 0, n = this->scan_mount_points_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->scan_mount_points(i), output);
  }

  // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->mount_point_mapping_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      6,
      this->mount_point_mapping(static_cast<int>(i)),
      output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.InodeFileConfig)
}

size_t InodeFileConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.InodeFileConfig)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated string scan_mount_points = 5;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->scan_mount_points_size());
  for (int i = 0, n = this->scan_mount_points_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->scan_mount_points(i));
  }

  // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
  {
    unsigned int count = static_cast<unsigned int>(this->mount_point_mapping_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->mount_point_mapping(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 15u) {
    // optional uint32 scan_interval_ms = 1;
    if (has_scan_interval_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->scan_interval_ms());
    }

    // optional uint32 scan_delay_ms = 2;
    if (has_scan_delay_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->scan_delay_ms());
    }

    // optional uint32 scan_batch_size = 3;
    if (has_scan_batch_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->scan_batch_size());
    }

    // optional bool do_not_scan = 4;
    if (has_do_not_scan()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InodeFileConfig::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const InodeFileConfig*>(&from));
}

void InodeFileConfig::MergeFrom(const InodeFileConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.InodeFileConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  scan_mount_points_.MergeFrom(from.scan_mount_points_);
  mount_point_mapping_.MergeFrom(from.mount_point_mapping_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      scan_interval_ms_ = from.scan_interval_ms_;
    }
    if (cached_has_bits & 0x00000002u) {
      scan_delay_ms_ = from.scan_delay_ms_;
    }
    if (cached_has_bits & 0x00000004u) {
      scan_batch_size_ = from.scan_batch_size_;
    }
    if (cached_has_bits & 0x00000008u) {
      do_not_scan_ = from.do_not_scan_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void InodeFileConfig::CopyFrom(const InodeFileConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.InodeFileConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InodeFileConfig::IsInitialized() const {
  return true;
}

void InodeFileConfig::Swap(InodeFileConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InodeFileConfig::InternalSwap(InodeFileConfig* other) {
  using std::swap;
  scan_mount_points_.InternalSwap(CastToBase(&other->scan_mount_points_));
  CastToBase(&mount_point_mapping_)->InternalSwap(CastToBase(&other->mount_point_mapping_));
  swap(scan_interval_ms_, other->scan_interval_ms_);
  swap(scan_delay_ms_, other->scan_delay_ms_);
  swap(scan_batch_size_, other->scan_batch_size_);
  swap(do_not_scan_, other->do_not_scan_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string InodeFileConfig::GetTypeName() const {
  return "perfetto.protos.InodeFileConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::InodeFileConfig_MountPointMappingEntry* Arena::CreateMaybeMessage< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::InodeFileConfig* Arena::CreateMaybeMessage< ::perfetto::protos::InodeFileConfig >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::InodeFileConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)