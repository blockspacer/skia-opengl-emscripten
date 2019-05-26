// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: variations_seed.proto

#include "variations_seed.pb.h"

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

namespace protobuf_study_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_study_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Study;
}  // namespace protobuf_study_2eproto
namespace variations {
class VariationsSeedDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VariationsSeed>
      _instance;
} _VariationsSeed_default_instance_;
}  // namespace variations
namespace protobuf_variations_5fseed_2eproto {
static void InitDefaultsVariationsSeed() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::variations::_VariationsSeed_default_instance_;
    new (ptr) ::variations::VariationsSeed();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::variations::VariationsSeed::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_VariationsSeed =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVariationsSeed}, {
      &protobuf_study_2eproto::scc_info_Study.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VariationsSeed.base);
}

}  // namespace protobuf_variations_5fseed_2eproto
namespace variations {

// ===================================================================

void VariationsSeed::InitAsDefaultInstance() {
}
void VariationsSeed::clear_study() {
  study_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VariationsSeed::kSerialNumberFieldNumber;
const int VariationsSeed::kStudyFieldNumber;
const int VariationsSeed::kCountryCodeFieldNumber;
const int VariationsSeed::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VariationsSeed::VariationsSeed()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_variations_5fseed_2eproto::scc_info_VariationsSeed.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:variations.VariationsSeed)
}
VariationsSeed::VariationsSeed(const VariationsSeed& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      study_(from.study_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  serial_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_serial_number()) {
    serial_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serial_number_);
  }
  country_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_country_code()) {
    country_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.country_code_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_version()) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  // @@protoc_insertion_point(copy_constructor:variations.VariationsSeed)
}

void VariationsSeed::SharedCtor() {
  serial_number_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  country_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

VariationsSeed::~VariationsSeed() {
  // @@protoc_insertion_point(destructor:variations.VariationsSeed)
  SharedDtor();
}

void VariationsSeed::SharedDtor() {
  serial_number_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  country_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VariationsSeed::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VariationsSeed& VariationsSeed::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_variations_5fseed_2eproto::scc_info_VariationsSeed.base);
  return *internal_default_instance();
}


void VariationsSeed::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.VariationsSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  study_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      serial_number_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      country_code_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      version_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VariationsSeed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:variations.VariationsSeed)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string serial_number = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serial_number()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .variations.Study study = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_study()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string country_code = 3 [deprecated = true];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_country_code()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string version = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
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
  // @@protoc_insertion_point(parse_success:variations.VariationsSeed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:variations.VariationsSeed)
  return false;
#undef DO_
}

void VariationsSeed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:variations.VariationsSeed)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string serial_number = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->serial_number(), output);
  }

  // repeated .variations.Study study = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->study_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2,
      this->study(static_cast<int>(i)),
      output);
  }

  // optional string country_code = 3 [deprecated = true];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->country_code(), output);
  }

  // optional string version = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->version(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:variations.VariationsSeed)
}

size_t VariationsSeed::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.VariationsSeed)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .variations.Study study = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->study_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->study(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 7u) {
    // optional string serial_number = 1;
    if (has_serial_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serial_number());
    }

    // optional string country_code = 3 [deprecated = true];
    if (has_country_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->country_code());
    }

    // optional string version = 4;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->version());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VariationsSeed::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const VariationsSeed*>(&from));
}

void VariationsSeed::MergeFrom(const VariationsSeed& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.VariationsSeed)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  study_.MergeFrom(from.study_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_serial_number();
      serial_number_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.serial_number_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_country_code();
      country_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.country_code_);
    }
    if (cached_has_bits & 0x00000004u) {
      set_has_version();
      version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
    }
  }
}

void VariationsSeed::CopyFrom(const VariationsSeed& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.VariationsSeed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VariationsSeed::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->study())) return false;
  return true;
}

void VariationsSeed::Swap(VariationsSeed* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VariationsSeed::InternalSwap(VariationsSeed* other) {
  using std::swap;
  CastToBase(&study_)->InternalSwap(CastToBase(&other->study_));
  serial_number_.Swap(&other->serial_number_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  country_code_.Swap(&other->country_code_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  version_.Swap(&other->version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string VariationsSeed::GetTypeName() const {
  return "variations.VariationsSeed";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace variations
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::variations::VariationsSeed* Arena::CreateMaybeMessage< ::variations::VariationsSeed >(Arena* arena) {
  return Arena::CreateInternal< ::variations::VariationsSeed >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)