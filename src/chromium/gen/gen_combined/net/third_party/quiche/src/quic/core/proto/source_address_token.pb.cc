// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: source_address_token.proto

#include "source_address_token.pb.h"

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

namespace protobuf_cached_5fnetwork_5fparameters_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_cached_5fnetwork_5fparameters_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_CachedNetworkParameters;
}  // namespace protobuf_cached_5fnetwork_5fparameters_2eproto
namespace protobuf_source_5faddress_5ftoken_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_source_5faddress_5ftoken_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_SourceAddressToken;
}  // namespace protobuf_source_5faddress_5ftoken_2eproto
namespace quic {
class SourceAddressTokenDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SourceAddressToken>
      _instance;
} _SourceAddressToken_default_instance_;
class SourceAddressTokensDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SourceAddressTokens>
      _instance;
} _SourceAddressTokens_default_instance_;
}  // namespace quic
namespace protobuf_source_5faddress_5ftoken_2eproto {
static void InitDefaultsSourceAddressToken() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::quic::_SourceAddressToken_default_instance_;
    new (ptr) ::quic::SourceAddressToken();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::quic::SourceAddressToken::InitAsDefaultInstance();
}

NET_EXPORT_PRIVATE ::google::protobuf::internal::SCCInfo<1> scc_info_SourceAddressToken =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSourceAddressToken}, {
      &protobuf_cached_5fnetwork_5fparameters_2eproto::scc_info_CachedNetworkParameters.base,}};

static void InitDefaultsSourceAddressTokens() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::quic::_SourceAddressTokens_default_instance_;
    new (ptr) ::quic::SourceAddressTokens();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::quic::SourceAddressTokens::InitAsDefaultInstance();
}

NET_EXPORT_PRIVATE ::google::protobuf::internal::SCCInfo<1> scc_info_SourceAddressTokens =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSourceAddressTokens}, {
      &protobuf_source_5faddress_5ftoken_2eproto::scc_info_SourceAddressToken.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SourceAddressToken.base);
  ::google::protobuf::internal::InitSCC(&scc_info_SourceAddressTokens.base);
}

}  // namespace protobuf_source_5faddress_5ftoken_2eproto
namespace quic {

// ===================================================================

void SourceAddressToken::InitAsDefaultInstance() {
  ::quic::_SourceAddressToken_default_instance_._instance.get_mutable()->cached_network_parameters_ = const_cast< ::quic::CachedNetworkParameters*>(
      ::quic::CachedNetworkParameters::internal_default_instance());
}
void SourceAddressToken::clear_cached_network_parameters() {
  if (cached_network_parameters_ != NULL) cached_network_parameters_->Clear();
  clear_has_cached_network_parameters();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SourceAddressToken::kIpFieldNumber;
const int SourceAddressToken::kTimestampFieldNumber;
const int SourceAddressToken::kCachedNetworkParametersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SourceAddressToken::SourceAddressToken()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_source_5faddress_5ftoken_2eproto::scc_info_SourceAddressToken.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:quic.SourceAddressToken)
}
SourceAddressToken::SourceAddressToken(const SourceAddressToken& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_ip()) {
    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  if (from.has_cached_network_parameters()) {
    cached_network_parameters_ = new ::quic::CachedNetworkParameters(*from.cached_network_parameters_);
  } else {
    cached_network_parameters_ = NULL;
  }
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:quic.SourceAddressToken)
}

void SourceAddressToken::SharedCtor() {
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&cached_network_parameters_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&timestamp_) -
      reinterpret_cast<char*>(&cached_network_parameters_)) + sizeof(timestamp_));
}

SourceAddressToken::~SourceAddressToken() {
  // @@protoc_insertion_point(destructor:quic.SourceAddressToken)
  SharedDtor();
}

void SourceAddressToken::SharedDtor() {
  ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete cached_network_parameters_;
}

void SourceAddressToken::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SourceAddressToken& SourceAddressToken::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_source_5faddress_5ftoken_2eproto::scc_info_SourceAddressToken.base);
  return *internal_default_instance();
}


void SourceAddressToken::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.SourceAddressToken)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      ip_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(cached_network_parameters_ != NULL);
      cached_network_parameters_->Clear();
    }
  }
  timestamp_ = GOOGLE_LONGLONG(0);
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SourceAddressToken::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:quic.SourceAddressToken)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes ip = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_ip()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 timestamp = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .quic.CachedNetworkParameters cached_network_parameters = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_cached_network_parameters()));
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
  // @@protoc_insertion_point(parse_success:quic.SourceAddressToken)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:quic.SourceAddressToken)
  return false;
#undef DO_
}

void SourceAddressToken::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:quic.SourceAddressToken)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes ip = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->ip(), output);
  }

  // required int64 timestamp = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->timestamp(), output);
  }

  // optional .quic.CachedNetworkParameters cached_network_parameters = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->_internal_cached_network_parameters(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:quic.SourceAddressToken)
}

size_t SourceAddressToken::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:quic.SourceAddressToken)
  size_t total_size = 0;

  if (has_ip()) {
    // required bytes ip = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->ip());
  }

  if (has_timestamp()) {
    // required int64 timestamp = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  return total_size;
}
size_t SourceAddressToken::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.SourceAddressToken)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (((_has_bits_[0] & 0x00000005) ^ 0x00000005) == 0) {  // All required fields are present.
    // required bytes ip = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->ip());

    // required int64 timestamp = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional .quic.CachedNetworkParameters cached_network_parameters = 3;
  if (has_cached_network_parameters()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *cached_network_parameters_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SourceAddressToken::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SourceAddressToken*>(&from));
}

void SourceAddressToken::MergeFrom(const SourceAddressToken& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:quic.SourceAddressToken)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_ip();
      ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_cached_network_parameters()->::quic::CachedNetworkParameters::MergeFrom(from.cached_network_parameters());
    }
    if (cached_has_bits & 0x00000004u) {
      timestamp_ = from.timestamp_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SourceAddressToken::CopyFrom(const SourceAddressToken& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.SourceAddressToken)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceAddressToken::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000005) != 0x00000005) return false;
  return true;
}

void SourceAddressToken::Swap(SourceAddressToken* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SourceAddressToken::InternalSwap(SourceAddressToken* other) {
  using std::swap;
  ip_.Swap(&other->ip_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(cached_network_parameters_, other->cached_network_parameters_);
  swap(timestamp_, other->timestamp_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string SourceAddressToken::GetTypeName() const {
  return "quic.SourceAddressToken";
}


// ===================================================================

void SourceAddressTokens::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SourceAddressTokens::kTokensFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SourceAddressTokens::SourceAddressTokens()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_source_5faddress_5ftoken_2eproto::scc_info_SourceAddressTokens.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:quic.SourceAddressTokens)
}
SourceAddressTokens::SourceAddressTokens(const SourceAddressTokens& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      tokens_(from.tokens_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:quic.SourceAddressTokens)
}

void SourceAddressTokens::SharedCtor() {
}

SourceAddressTokens::~SourceAddressTokens() {
  // @@protoc_insertion_point(destructor:quic.SourceAddressTokens)
  SharedDtor();
}

void SourceAddressTokens::SharedDtor() {
}

void SourceAddressTokens::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SourceAddressTokens& SourceAddressTokens::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_source_5faddress_5ftoken_2eproto::scc_info_SourceAddressTokens.base);
  return *internal_default_instance();
}


void SourceAddressTokens::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.SourceAddressTokens)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  tokens_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SourceAddressTokens::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:quic.SourceAddressTokens)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .quic.SourceAddressToken tokens = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_tokens()));
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
  // @@protoc_insertion_point(parse_success:quic.SourceAddressTokens)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:quic.SourceAddressTokens)
  return false;
#undef DO_
}

void SourceAddressTokens::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:quic.SourceAddressTokens)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .quic.SourceAddressToken tokens = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->tokens_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      4,
      this->tokens(static_cast<int>(i)),
      output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:quic.SourceAddressTokens)
}

size_t SourceAddressTokens::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.SourceAddressTokens)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .quic.SourceAddressToken tokens = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->tokens_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->tokens(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SourceAddressTokens::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SourceAddressTokens*>(&from));
}

void SourceAddressTokens::MergeFrom(const SourceAddressTokens& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:quic.SourceAddressTokens)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  tokens_.MergeFrom(from.tokens_);
}

void SourceAddressTokens::CopyFrom(const SourceAddressTokens& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.SourceAddressTokens)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SourceAddressTokens::IsInitialized() const {
  if (!::google::protobuf::internal::AllAreInitialized(this->tokens())) return false;
  return true;
}

void SourceAddressTokens::Swap(SourceAddressTokens* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SourceAddressTokens::InternalSwap(SourceAddressTokens* other) {
  using std::swap;
  CastToBase(&tokens_)->InternalSwap(CastToBase(&other->tokens_));
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string SourceAddressTokens::GetTypeName() const {
  return "quic.SourceAddressTokens";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace quic
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::quic::SourceAddressToken* Arena::CreateMaybeMessage< ::quic::SourceAddressToken >(Arena* arena) {
  return Arena::CreateInternal< ::quic::SourceAddressToken >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::quic::SourceAddressTokens* Arena::CreateMaybeMessage< ::quic::SourceAddressTokens >(Arena* arena) {
  return Arena::CreateInternal< ::quic::SourceAddressTokens >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)