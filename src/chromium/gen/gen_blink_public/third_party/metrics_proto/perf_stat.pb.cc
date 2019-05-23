// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perf_stat.proto

#include "perf_stat.pb.h"

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

namespace protobuf_perf_5fstat_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_perf_5fstat_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_PerfStatProto_PerfStatLine;
}  // namespace protobuf_perf_5fstat_2eproto
namespace metrics {
class PerfStatProto_PerfStatLineDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PerfStatProto_PerfStatLine>
      _instance;
} _PerfStatProto_PerfStatLine_default_instance_;
class PerfStatProtoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PerfStatProto>
      _instance;
} _PerfStatProto_default_instance_;
}  // namespace metrics
namespace protobuf_perf_5fstat_2eproto {
static void InitDefaultsPerfStatProto_PerfStatLine() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metrics::_PerfStatProto_PerfStatLine_default_instance_;
    new (ptr) ::metrics::PerfStatProto_PerfStatLine();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metrics::PerfStatProto_PerfStatLine::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PerfStatProto_PerfStatLine =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPerfStatProto_PerfStatLine}, {}};

static void InitDefaultsPerfStatProto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metrics::_PerfStatProto_default_instance_;
    new (ptr) ::metrics::PerfStatProto();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metrics::PerfStatProto::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_PerfStatProto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsPerfStatProto}, {
      &protobuf_perf_5fstat_2eproto::scc_info_PerfStatProto_PerfStatLine.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_PerfStatProto_PerfStatLine.base);
  ::google::protobuf::internal::InitSCC(&scc_info_PerfStatProto.base);
}

}  // namespace protobuf_perf_5fstat_2eproto
namespace metrics {

// ===================================================================

void PerfStatProto_PerfStatLine::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PerfStatProto_PerfStatLine::kTimeMsFieldNumber;
const int PerfStatProto_PerfStatLine::kCountFieldNumber;
const int PerfStatProto_PerfStatLine::kEventNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PerfStatProto_PerfStatLine::PerfStatProto_PerfStatLine()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perf_5fstat_2eproto::scc_info_PerfStatProto_PerfStatLine.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PerfStatProto.PerfStatLine)
}
PerfStatProto_PerfStatLine::PerfStatProto_PerfStatLine(const PerfStatProto_PerfStatLine& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  event_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_event_name()) {
    event_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_name_);
  }
  ::memcpy(&time_ms_, &from.time_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&count_) -
    reinterpret_cast<char*>(&time_ms_)) + sizeof(count_));
  // @@protoc_insertion_point(copy_constructor:metrics.PerfStatProto.PerfStatLine)
}

void PerfStatProto_PerfStatLine::SharedCtor() {
  event_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&time_ms_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&count_) -
      reinterpret_cast<char*>(&time_ms_)) + sizeof(count_));
}

PerfStatProto_PerfStatLine::~PerfStatProto_PerfStatLine() {
  // @@protoc_insertion_point(destructor:metrics.PerfStatProto.PerfStatLine)
  SharedDtor();
}

void PerfStatProto_PerfStatLine::SharedDtor() {
  event_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PerfStatProto_PerfStatLine::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PerfStatProto_PerfStatLine& PerfStatProto_PerfStatLine::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perf_5fstat_2eproto::scc_info_PerfStatProto_PerfStatLine.base);
  return *internal_default_instance();
}


void PerfStatProto_PerfStatLine::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PerfStatProto.PerfStatLine)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    event_name_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 6u) {
    ::memset(&time_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&count_) -
        reinterpret_cast<char*>(&time_ms_)) + sizeof(count_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PerfStatProto_PerfStatLine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:metrics.PerfStatProto.PerfStatLine)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 time_ms = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_time_ms();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_ms_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 count = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_count();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string event_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_event_name()));
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
  // @@protoc_insertion_point(parse_success:metrics.PerfStatProto.PerfStatLine)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PerfStatProto.PerfStatLine)
  return false;
#undef DO_
}

void PerfStatProto_PerfStatLine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PerfStatProto.PerfStatLine)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 time_ms = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->time_ms(), output);
  }

  // optional uint64 count = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->count(), output);
  }

  // optional string event_name = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->event_name(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PerfStatProto.PerfStatLine)
}

size_t PerfStatProto_PerfStatLine::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PerfStatProto.PerfStatLine)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional string event_name = 3;
    if (has_event_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->event_name());
    }

    // optional uint64 time_ms = 1;
    if (has_time_ms()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->time_ms());
    }

    // optional uint64 count = 2;
    if (has_count()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->count());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PerfStatProto_PerfStatLine::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PerfStatProto_PerfStatLine*>(&from));
}

void PerfStatProto_PerfStatLine::MergeFrom(const PerfStatProto_PerfStatLine& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PerfStatProto.PerfStatLine)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_event_name();
      event_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.event_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      time_ms_ = from.time_ms_;
    }
    if (cached_has_bits & 0x00000004u) {
      count_ = from.count_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PerfStatProto_PerfStatLine::CopyFrom(const PerfStatProto_PerfStatLine& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PerfStatProto.PerfStatLine)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerfStatProto_PerfStatLine::IsInitialized() const {
  return true;
}

void PerfStatProto_PerfStatLine::Swap(PerfStatProto_PerfStatLine* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PerfStatProto_PerfStatLine::InternalSwap(PerfStatProto_PerfStatLine* other) {
  using std::swap;
  event_name_.Swap(&other->event_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(time_ms_, other->time_ms_);
  swap(count_, other->count_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string PerfStatProto_PerfStatLine::GetTypeName() const {
  return "metrics.PerfStatProto.PerfStatLine";
}


// ===================================================================

void PerfStatProto::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PerfStatProto::kLineFieldNumber;
const int PerfStatProto::kCommandLineFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PerfStatProto::PerfStatProto()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perf_5fstat_2eproto::scc_info_PerfStatProto.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.PerfStatProto)
}
PerfStatProto::PerfStatProto(const PerfStatProto& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      line_(from.line_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  command_line_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_command_line()) {
    command_line_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.command_line_);
  }
  // @@protoc_insertion_point(copy_constructor:metrics.PerfStatProto)
}

void PerfStatProto::SharedCtor() {
  command_line_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PerfStatProto::~PerfStatProto() {
  // @@protoc_insertion_point(destructor:metrics.PerfStatProto)
  SharedDtor();
}

void PerfStatProto::SharedDtor() {
  command_line_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PerfStatProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PerfStatProto& PerfStatProto::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perf_5fstat_2eproto::scc_info_PerfStatProto.base);
  return *internal_default_instance();
}


void PerfStatProto::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.PerfStatProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  line_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    command_line_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PerfStatProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:metrics.PerfStatProto)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .metrics.PerfStatProto.PerfStatLine line = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_line()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string command_line = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_command_line()));
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
  // @@protoc_insertion_point(parse_success:metrics.PerfStatProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.PerfStatProto)
  return false;
#undef DO_
}

void PerfStatProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.PerfStatProto)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .metrics.PerfStatProto.PerfStatLine line = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->line_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1,
      this->line(static_cast<int>(i)),
      output);
  }

  cached_has_bits = _has_bits_[0];
  // optional string command_line = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->command_line(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.PerfStatProto)
}

size_t PerfStatProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.PerfStatProto)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .metrics.PerfStatProto.PerfStatLine line = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->line_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->line(static_cast<int>(i)));
    }
  }

  // optional string command_line = 2;
  if (has_command_line()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->command_line());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PerfStatProto::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PerfStatProto*>(&from));
}

void PerfStatProto::MergeFrom(const PerfStatProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.PerfStatProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  line_.MergeFrom(from.line_);
  if (from.has_command_line()) {
    set_has_command_line();
    command_line_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.command_line_);
  }
}

void PerfStatProto::CopyFrom(const PerfStatProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.PerfStatProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PerfStatProto::IsInitialized() const {
  return true;
}

void PerfStatProto::Swap(PerfStatProto* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PerfStatProto::InternalSwap(PerfStatProto* other) {
  using std::swap;
  CastToBase(&line_)->InternalSwap(CastToBase(&other->line_));
  command_line_.Swap(&other->command_line_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string PerfStatProto::GetTypeName() const {
  return "metrics.PerfStatProto";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace metrics
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metrics::PerfStatProto_PerfStatLine* Arena::CreateMaybeMessage< ::metrics::PerfStatProto_PerfStatLine >(Arena* arena) {
  return Arena::CreateInternal< ::metrics::PerfStatProto_PerfStatLine >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metrics::PerfStatProto* Arena::CreateMaybeMessage< ::metrics::PerfStatProto >(Arena* arena) {
  return Arena::CreateInternal< ::metrics::PerfStatProto >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
