// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/android/android_log_config.proto

#include "perfetto/config/android/android_log_config.pb.h"

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
class AndroidLogConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AndroidLogConfig>
      _instance;
} _AndroidLogConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace protobuf_perfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto {
static void InitDefaultsAndroidLogConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_AndroidLogConfig_default_instance_;
    new (ptr) ::perfetto::protos::AndroidLogConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::AndroidLogConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AndroidLogConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAndroidLogConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AndroidLogConfig.base);
}

}  // namespace protobuf_perfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto
namespace perfetto {
namespace protos {

// ===================================================================

void AndroidLogConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AndroidLogConfig::kLogIdsFieldNumber;
const int AndroidLogConfig::kMinPrioFieldNumber;
const int AndroidLogConfig::kFilterTagsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AndroidLogConfig::AndroidLogConfig()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto::scc_info_AndroidLogConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.AndroidLogConfig)
}
AndroidLogConfig::AndroidLogConfig(const AndroidLogConfig& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      log_ids_(from.log_ids_),
      filter_tags_(from.filter_tags_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  min_prio_ = from.min_prio_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.AndroidLogConfig)
}

void AndroidLogConfig::SharedCtor() {
  min_prio_ = 0;
}

AndroidLogConfig::~AndroidLogConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.AndroidLogConfig)
  SharedDtor();
}

void AndroidLogConfig::SharedDtor() {
}

void AndroidLogConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AndroidLogConfig& AndroidLogConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto::scc_info_AndroidLogConfig.base);
  return *internal_default_instance();
}


void AndroidLogConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.AndroidLogConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  log_ids_.Clear();
  filter_tags_.Clear();
  min_prio_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool AndroidLogConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.AndroidLogConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .perfetto.protos.AndroidLogId log_ids = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::perfetto::protos::AndroidLogId_IsValid(value)) {
            add_log_ids(static_cast< ::perfetto::protos::AndroidLogId >(value));
          } else {
            unknown_fields_stream.WriteVarint32(tag);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedEnumPreserveUnknowns(
                 input,
                 1,
                 ::perfetto::protos::AndroidLogId_IsValid,
                 &unknown_fields_stream,
                 this->mutable_log_ids())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .perfetto.protos.AndroidLogPriority min_prio = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::perfetto::protos::AndroidLogPriority_IsValid(value)) {
            set_min_prio(static_cast< ::perfetto::protos::AndroidLogPriority >(value));
          } else {
            unknown_fields_stream.WriteVarint32(24u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string filter_tags = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_filter_tags()));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.AndroidLogConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.AndroidLogConfig)
  return false;
#undef DO_
}

void AndroidLogConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.AndroidLogConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.AndroidLogId log_ids = 1;
  for (int i = 0, n = this->log_ids_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->log_ids(i), output);
  }

  cached_has_bits = _has_bits_[0];
  // optional .perfetto.protos.AndroidLogPriority min_prio = 3;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->min_prio(), output);
  }

  // repeated string filter_tags = 4;
  for (int i = 0, n = this->filter_tags_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->filter_tags(i), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.AndroidLogConfig)
}

size_t AndroidLogConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.AndroidLogConfig)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .perfetto.protos.AndroidLogId log_ids = 1;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->log_ids_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->log_ids(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  // repeated string filter_tags = 4;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->filter_tags_size());
  for (int i = 0, n = this->filter_tags_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->filter_tags(i));
  }

  // optional .perfetto.protos.AndroidLogPriority min_prio = 3;
  if (has_min_prio()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->min_prio());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AndroidLogConfig::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const AndroidLogConfig*>(&from));
}

void AndroidLogConfig::MergeFrom(const AndroidLogConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.AndroidLogConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  log_ids_.MergeFrom(from.log_ids_);
  filter_tags_.MergeFrom(from.filter_tags_);
  if (from.has_min_prio()) {
    set_min_prio(from.min_prio());
  }
}

void AndroidLogConfig::CopyFrom(const AndroidLogConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.AndroidLogConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AndroidLogConfig::IsInitialized() const {
  return true;
}

void AndroidLogConfig::Swap(AndroidLogConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AndroidLogConfig::InternalSwap(AndroidLogConfig* other) {
  using std::swap;
  log_ids_.InternalSwap(&other->log_ids_);
  filter_tags_.InternalSwap(CastToBase(&other->filter_tags_));
  swap(min_prio_, other->min_prio_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string AndroidLogConfig::GetTypeName() const {
  return "perfetto.protos.AndroidLogConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::AndroidLogConfig* Arena::CreateMaybeMessage< ::perfetto::protos::AndroidLogConfig >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::AndroidLogConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)