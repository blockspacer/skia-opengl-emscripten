// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trace_log.proto

#include "trace_log.pb.h"

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

namespace metrics {
class TraceLogDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TraceLog>
      _instance;
} _TraceLog_default_instance_;
}  // namespace metrics
namespace protobuf_trace_5flog_2eproto {
static void InitDefaultsTraceLog() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::metrics::_TraceLog_default_instance_;
    new (ptr) ::metrics::TraceLog();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::metrics::TraceLog::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_TraceLog =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTraceLog}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_TraceLog.base);
}

}  // namespace protobuf_trace_5flog_2eproto
namespace metrics {

// ===================================================================

void TraceLog::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TraceLog::kRawDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TraceLog::TraceLog()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_trace_5flog_2eproto::scc_info_TraceLog.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:metrics.TraceLog)
}
TraceLog::TraceLog(const TraceLog& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  raw_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_raw_data()) {
    raw_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.raw_data_);
  }
  // @@protoc_insertion_point(copy_constructor:metrics.TraceLog)
}

void TraceLog::SharedCtor() {
  raw_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

TraceLog::~TraceLog() {
  // @@protoc_insertion_point(destructor:metrics.TraceLog)
  SharedDtor();
}

void TraceLog::SharedDtor() {
  raw_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void TraceLog::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TraceLog& TraceLog::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_trace_5flog_2eproto::scc_info_TraceLog.base);
  return *internal_default_instance();
}


void TraceLog::Clear() {
// @@protoc_insertion_point(message_clear_start:metrics.TraceLog)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    raw_data_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool TraceLog::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:metrics.TraceLog)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes raw_data = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_raw_data()));
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
  // @@protoc_insertion_point(parse_success:metrics.TraceLog)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:metrics.TraceLog)
  return false;
#undef DO_
}

void TraceLog::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:metrics.TraceLog)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes raw_data = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->raw_data(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:metrics.TraceLog)
}

size_t TraceLog::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:metrics.TraceLog)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // optional bytes raw_data = 1;
  if (has_raw_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->raw_data());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TraceLog::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const TraceLog*>(&from));
}

void TraceLog::MergeFrom(const TraceLog& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:metrics.TraceLog)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_raw_data()) {
    set_has_raw_data();
    raw_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.raw_data_);
  }
}

void TraceLog::CopyFrom(const TraceLog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:metrics.TraceLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TraceLog::IsInitialized() const {
  return true;
}

void TraceLog::Swap(TraceLog* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TraceLog::InternalSwap(TraceLog* other) {
  using std::swap;
  raw_data_.Swap(&other->raw_data_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string TraceLog::GetTypeName() const {
  return "metrics.TraceLog";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace metrics
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::metrics::TraceLog* Arena::CreateMaybeMessage< ::metrics::TraceLog >(Arena* arena) {
  return Arena::CreateInternal< ::metrics::TraceLog >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)