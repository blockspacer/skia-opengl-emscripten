// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/trace/track_event/task_execution.proto

#include "perfetto/trace/track_event/task_execution.pb.h"

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

namespace perfetto {
namespace protos {
class TaskExecutionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TaskExecution>
      _instance;
} _TaskExecution_default_instance_;
class SourceLocationDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SourceLocation>
      _instance;
} _SourceLocation_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace protobuf_perfetto_2ftrace_2ftrack_5fevent_2ftask_5fexecution_2eproto {
static void InitDefaultsTaskExecution() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_TaskExecution_default_instance_;
    new (ptr) ::perfetto::protos::TaskExecution();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::TaskExecution::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TaskExecution =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTaskExecution}, {}};

static void InitDefaultsSourceLocation() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_SourceLocation_default_instance_;
    new (ptr) ::perfetto::protos::SourceLocation();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::SourceLocation::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_SourceLocation =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsSourceLocation}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TaskExecution.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SourceLocation.base);
}

}  // namespace protobuf_perfetto_2ftrace_2ftrack_5fevent_2ftask_5fexecution_2eproto
namespace perfetto {
namespace protos {

// ===================================================================

void TaskExecution::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TaskExecution::kPostedFromIidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TaskExecution::TaskExecution()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2ftrace_2ftrack_5fevent_2ftask_5fexecution_2eproto::scc_info_TaskExecution.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.TaskExecution)
}
TaskExecution::TaskExecution(const TaskExecution& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  posted_from_iid_ = from.posted_from_iid_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.TaskExecution)
}

void TaskExecution::SharedCtor() {
  posted_from_iid_ = 0u;
}

TaskExecution::~TaskExecution() {
  // @@protoc_insertion_point(destructor:perfetto.protos.TaskExecution)
  SharedDtor();
}

void TaskExecution::SharedDtor() {
}

void TaskExecution::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TaskExecution& TaskExecution::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2ftrace_2ftrack_5fevent_2ftask_5fexecution_2eproto::scc_info_TaskExecution.base);
  return *internal_default_instance();
}


void TaskExecution::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.TaskExecution)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  posted_from_iid_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TaskExecution::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.TaskExecution)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 posted_from_iid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_posted_from_iid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &posted_from_iid_)));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.TaskExecution)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.TaskExecution)
  return false;
#undef DO_
}

void TaskExecution::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.TaskExecution)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 posted_from_iid = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->posted_from_iid(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.TaskExecution)
}

size_t TaskExecution::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.TaskExecution)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // optional uint32 posted_from_iid = 1;
  if (has_posted_from_iid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->posted_from_iid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TaskExecution::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TaskExecution*>(&from));
}

void TaskExecution::MergeFrom(const TaskExecution& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.TaskExecution)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_posted_from_iid()) {
    set_posted_from_iid(from.posted_from_iid());
  }
}

void TaskExecution::CopyFrom(const TaskExecution& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.TaskExecution)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TaskExecution::IsInitialized() const {
  return true;
}

void TaskExecution::Swap(TaskExecution* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TaskExecution::InternalSwap(TaskExecution* other) {
  using std::swap;
  swap(posted_from_iid_, other->posted_from_iid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string TaskExecution::GetTypeName() const {
  return "perfetto.protos.TaskExecution";
}


// ===================================================================

void SourceLocation::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SourceLocation::kIidFieldNumber;
const int SourceLocation::kFileNameFieldNumber;
const int SourceLocation::kFunctionNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SourceLocation::SourceLocation()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2ftrace_2ftrack_5fevent_2ftask_5fexecution_2eproto::scc_info_SourceLocation.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.SourceLocation)
}
SourceLocation::SourceLocation(const SourceLocation& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  file_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_file_name()) {
    file_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_name_);
  }
  function_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_function_name()) {
    function_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.function_name_);
  }
  iid_ = from.iid_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SourceLocation)
}

void SourceLocation::SharedCtor() {
  file_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  function_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  iid_ = 0u;
}

SourceLocation::~SourceLocation() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SourceLocation)
  SharedDtor();
}

void SourceLocation::SharedDtor() {
  file_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  function_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SourceLocation::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SourceLocation& SourceLocation::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2ftrace_2ftrack_5fevent_2ftask_5fexecution_2eproto::scc_info_SourceLocation.base);
  return *internal_default_instance();
}


void SourceLocation::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SourceLocation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      file_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      function_name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  iid_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SourceLocation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.SourceLocation)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 iid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_iid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &iid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string file_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_file_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string function_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_function_name()));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.SourceLocation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.SourceLocation)
  return false;
#undef DO_
}

void SourceLocation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.SourceLocation)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 iid = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->iid(), output);
  }

  // optional string file_name = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->file_name(), output);
  }

  // optional string function_name = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->function_name(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.SourceLocation)
}

size_t SourceLocation::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SourceLocation)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional string file_name = 2;
    if (has_file_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->file_name());
    }

    // optional string function_name = 3;
    if (has_function_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->function_name());
    }

    // optional uint32 iid = 1;
    if (has_iid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->iid());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SourceLocation::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SourceLocation*>(&from));
}

void SourceLocation::MergeFrom(const SourceLocation& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SourceLocation)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_file_name();
      file_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.file_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_function_name();
      function_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.function_name_);
    }
    if (cached_has_bits & 0x00000004u) {
      iid_ = from.iid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SourceLocation::CopyFrom(const SourceLocation& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SourceLocation)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceLocation::IsInitialized() const {
  return true;
}

void SourceLocation::Swap(SourceLocation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SourceLocation::InternalSwap(SourceLocation* other) {
  using std::swap;
  file_name_.Swap(&other->file_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  function_name_.Swap(&other->function_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(iid_, other->iid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string SourceLocation::GetTypeName() const {
  return "perfetto.protos.SourceLocation";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::TaskExecution* Arena::CreateMaybeMessage< ::perfetto::protos::TaskExecution >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::TaskExecution >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::SourceLocation* Arena::CreateMaybeMessage< ::perfetto::protos::SourceLocation >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::SourceLocation >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
