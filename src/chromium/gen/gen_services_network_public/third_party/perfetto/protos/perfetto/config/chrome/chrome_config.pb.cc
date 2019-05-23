// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/config/chrome/chrome_config.proto

#include "perfetto/config/chrome/chrome_config.pb.h"

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
class ChromeConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ChromeConfig>
      _instance;
} _ChromeConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto {
static void InitDefaultsChromeConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_ChromeConfig_default_instance_;
    new (ptr) ::perfetto::protos::ChromeConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::ChromeConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ChromeConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsChromeConfig}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ChromeConfig.base);
}

}  // namespace protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto
namespace perfetto {
namespace protos {

// ===================================================================

void ChromeConfig::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChromeConfig::kTraceConfigFieldNumber;
const int ChromeConfig::kPrivacyFilteringEnabledFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChromeConfig::ChromeConfig()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto::scc_info_ChromeConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.ChromeConfig)
}
ChromeConfig::ChromeConfig(const ChromeConfig& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  trace_config_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_trace_config()) {
    trace_config_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trace_config_);
  }
  privacy_filtering_enabled_ = from.privacy_filtering_enabled_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeConfig)
}

void ChromeConfig::SharedCtor() {
  trace_config_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  privacy_filtering_enabled_ = false;
}

ChromeConfig::~ChromeConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeConfig)
  SharedDtor();
}

void ChromeConfig::SharedDtor() {
  trace_config_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ChromeConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ChromeConfig& ChromeConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2fconfig_2fchrome_2fchrome_5fconfig_2eproto::scc_info_ChromeConfig.base);
  return *internal_default_instance();
}


void ChromeConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    trace_config_.ClearNonDefaultToEmptyNoArena();
  }
  privacy_filtering_enabled_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChromeConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.ChromeConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string trace_config = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_trace_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool privacy_filtering_enabled = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_privacy_filtering_enabled();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &privacy_filtering_enabled_)));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.ChromeConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.ChromeConfig)
  return false;
#undef DO_
}

void ChromeConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.ChromeConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string trace_config = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->trace_config(), output);
  }

  // optional bool privacy_filtering_enabled = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->privacy_filtering_enabled(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.ChromeConfig)
}

size_t ChromeConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeConfig)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 3u) {
    // optional string trace_config = 1;
    if (has_trace_config()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->trace_config());
    }

    // optional bool privacy_filtering_enabled = 2;
    if (has_privacy_filtering_enabled()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChromeConfig::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ChromeConfig*>(&from));
}

void ChromeConfig::MergeFrom(const ChromeConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_trace_config();
      trace_config_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trace_config_);
    }
    if (cached_has_bits & 0x00000002u) {
      privacy_filtering_enabled_ = from.privacy_filtering_enabled_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChromeConfig::CopyFrom(const ChromeConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeConfig::IsInitialized() const {
  return true;
}

void ChromeConfig::Swap(ChromeConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChromeConfig::InternalSwap(ChromeConfig* other) {
  using std::swap;
  trace_config_.Swap(&other->trace_config_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(privacy_filtering_enabled_, other->privacy_filtering_enabled_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string ChromeConfig::GetTypeName() const {
  return "perfetto.protos.ChromeConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::ChromeConfig* Arena::CreateMaybeMessage< ::perfetto::protos::ChromeConfig >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::ChromeConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
