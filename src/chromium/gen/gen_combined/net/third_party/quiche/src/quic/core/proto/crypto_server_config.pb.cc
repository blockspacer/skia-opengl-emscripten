// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: crypto_server_config.proto

#include "crypto_server_config.pb.h"

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

namespace protobuf_crypto_5fserver_5fconfig_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_crypto_5fserver_5fconfig_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_QuicServerConfigProtobuf_PrivateKey;
}  // namespace protobuf_crypto_5fserver_5fconfig_2eproto
namespace quic {
class QuicServerConfigProtobuf_PrivateKeyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<QuicServerConfigProtobuf_PrivateKey>
      _instance;
} _QuicServerConfigProtobuf_PrivateKey_default_instance_;
class QuicServerConfigProtobufDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<QuicServerConfigProtobuf>
      _instance;
} _QuicServerConfigProtobuf_default_instance_;
}  // namespace quic
namespace protobuf_crypto_5fserver_5fconfig_2eproto {
static void InitDefaultsQuicServerConfigProtobuf_PrivateKey() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::quic::_QuicServerConfigProtobuf_PrivateKey_default_instance_;
    new (ptr) ::quic::QuicServerConfigProtobuf_PrivateKey();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::quic::QuicServerConfigProtobuf_PrivateKey::InitAsDefaultInstance();
}

NET_EXPORT_PRIVATE ::google::protobuf::internal::SCCInfo<0> scc_info_QuicServerConfigProtobuf_PrivateKey =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsQuicServerConfigProtobuf_PrivateKey}, {}};

static void InitDefaultsQuicServerConfigProtobuf() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::quic::_QuicServerConfigProtobuf_default_instance_;
    new (ptr) ::quic::QuicServerConfigProtobuf();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::quic::QuicServerConfigProtobuf::InitAsDefaultInstance();
}

NET_EXPORT_PRIVATE ::google::protobuf::internal::SCCInfo<1> scc_info_QuicServerConfigProtobuf =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsQuicServerConfigProtobuf}, {
      &protobuf_crypto_5fserver_5fconfig_2eproto::scc_info_QuicServerConfigProtobuf_PrivateKey.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_QuicServerConfigProtobuf_PrivateKey.base);
  ::google::protobuf::internal::InitSCC(&scc_info_QuicServerConfigProtobuf.base);
}

}  // namespace protobuf_crypto_5fserver_5fconfig_2eproto
namespace quic {

// ===================================================================

void QuicServerConfigProtobuf_PrivateKey::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QuicServerConfigProtobuf_PrivateKey::kTagFieldNumber;
const int QuicServerConfigProtobuf_PrivateKey::kPrivateKeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QuicServerConfigProtobuf_PrivateKey::QuicServerConfigProtobuf_PrivateKey()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_crypto_5fserver_5fconfig_2eproto::scc_info_QuicServerConfigProtobuf_PrivateKey.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:quic.QuicServerConfigProtobuf.PrivateKey)
}
QuicServerConfigProtobuf_PrivateKey::QuicServerConfigProtobuf_PrivateKey(const QuicServerConfigProtobuf_PrivateKey& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  private_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_private_key()) {
    private_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.private_key_);
  }
  tag_ = from.tag_;
  // @@protoc_insertion_point(copy_constructor:quic.QuicServerConfigProtobuf.PrivateKey)
}

void QuicServerConfigProtobuf_PrivateKey::SharedCtor() {
  private_key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  tag_ = 0u;
}

QuicServerConfigProtobuf_PrivateKey::~QuicServerConfigProtobuf_PrivateKey() {
  // @@protoc_insertion_point(destructor:quic.QuicServerConfigProtobuf.PrivateKey)
  SharedDtor();
}

void QuicServerConfigProtobuf_PrivateKey::SharedDtor() {
  private_key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void QuicServerConfigProtobuf_PrivateKey::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const QuicServerConfigProtobuf_PrivateKey& QuicServerConfigProtobuf_PrivateKey::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_crypto_5fserver_5fconfig_2eproto::scc_info_QuicServerConfigProtobuf_PrivateKey.base);
  return *internal_default_instance();
}


void QuicServerConfigProtobuf_PrivateKey::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.QuicServerConfigProtobuf.PrivateKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    private_key_.ClearNonDefaultToEmptyNoArena();
  }
  tag_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool QuicServerConfigProtobuf_PrivateKey::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:quic.QuicServerConfigProtobuf.PrivateKey)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 tag = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_tag();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tag_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bytes private_key = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_private_key()));
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
  // @@protoc_insertion_point(parse_success:quic.QuicServerConfigProtobuf.PrivateKey)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:quic.QuicServerConfigProtobuf.PrivateKey)
  return false;
#undef DO_
}

void QuicServerConfigProtobuf_PrivateKey::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:quic.QuicServerConfigProtobuf.PrivateKey)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 tag = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->tag(), output);
  }

  // required bytes private_key = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->private_key(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:quic.QuicServerConfigProtobuf.PrivateKey)
}

size_t QuicServerConfigProtobuf_PrivateKey::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:quic.QuicServerConfigProtobuf.PrivateKey)
  size_t total_size = 0;

  if (has_private_key()) {
    // required bytes private_key = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->private_key());
  }

  if (has_tag()) {
    // required uint32 tag = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->tag());
  }

  return total_size;
}
size_t QuicServerConfigProtobuf_PrivateKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.QuicServerConfigProtobuf.PrivateKey)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required bytes private_key = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->private_key());

    // required uint32 tag = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->tag());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void QuicServerConfigProtobuf_PrivateKey::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const QuicServerConfigProtobuf_PrivateKey*>(&from));
}

void QuicServerConfigProtobuf_PrivateKey::MergeFrom(const QuicServerConfigProtobuf_PrivateKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:quic.QuicServerConfigProtobuf.PrivateKey)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_private_key();
      private_key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.private_key_);
    }
    if (cached_has_bits & 0x00000002u) {
      tag_ = from.tag_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void QuicServerConfigProtobuf_PrivateKey::CopyFrom(const QuicServerConfigProtobuf_PrivateKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.QuicServerConfigProtobuf.PrivateKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QuicServerConfigProtobuf_PrivateKey::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void QuicServerConfigProtobuf_PrivateKey::Swap(QuicServerConfigProtobuf_PrivateKey* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QuicServerConfigProtobuf_PrivateKey::InternalSwap(QuicServerConfigProtobuf_PrivateKey* other) {
  using std::swap;
  private_key_.Swap(&other->private_key_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(tag_, other->tag_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string QuicServerConfigProtobuf_PrivateKey::GetTypeName() const {
  return "quic.QuicServerConfigProtobuf.PrivateKey";
}


// ===================================================================

void QuicServerConfigProtobuf::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QuicServerConfigProtobuf::kConfigFieldNumber;
const int QuicServerConfigProtobuf::kKeyFieldNumber;
const int QuicServerConfigProtobuf::kPrimaryTimeFieldNumber;
const int QuicServerConfigProtobuf::kPriorityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QuicServerConfigProtobuf::QuicServerConfigProtobuf()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_crypto_5fserver_5fconfig_2eproto::scc_info_QuicServerConfigProtobuf.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:quic.QuicServerConfigProtobuf)
}
QuicServerConfigProtobuf::QuicServerConfigProtobuf(const QuicServerConfigProtobuf& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      key_(from.key_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  config_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_config()) {
    config_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.config_);
  }
  ::memcpy(&primary_time_, &from.primary_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&priority_) -
    reinterpret_cast<char*>(&primary_time_)) + sizeof(priority_));
  // @@protoc_insertion_point(copy_constructor:quic.QuicServerConfigProtobuf)
}

void QuicServerConfigProtobuf::SharedCtor() {
  config_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&primary_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&priority_) -
      reinterpret_cast<char*>(&primary_time_)) + sizeof(priority_));
}

QuicServerConfigProtobuf::~QuicServerConfigProtobuf() {
  // @@protoc_insertion_point(destructor:quic.QuicServerConfigProtobuf)
  SharedDtor();
}

void QuicServerConfigProtobuf::SharedDtor() {
  config_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void QuicServerConfigProtobuf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const QuicServerConfigProtobuf& QuicServerConfigProtobuf::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_crypto_5fserver_5fconfig_2eproto::scc_info_QuicServerConfigProtobuf.base);
  return *internal_default_instance();
}


void QuicServerConfigProtobuf::Clear() {
// @@protoc_insertion_point(message_clear_start:quic.QuicServerConfigProtobuf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    config_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 6u) {
    ::memset(&primary_time_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&priority_) -
        reinterpret_cast<char*>(&primary_time_)) + sizeof(priority_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool QuicServerConfigProtobuf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:quic.QuicServerConfigProtobuf)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes config = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_config()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .quic.QuicServerConfigProtobuf.PrivateKey key = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int64 primary_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_primary_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &primary_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 priority = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_priority();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &priority_)));
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
  // @@protoc_insertion_point(parse_success:quic.QuicServerConfigProtobuf)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:quic.QuicServerConfigProtobuf)
  return false;
#undef DO_
}

void QuicServerConfigProtobuf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:quic.QuicServerConfigProtobuf)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes config = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->config(), output);
  }

  // repeated .quic.QuicServerConfigProtobuf.PrivateKey key = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->key_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2,
      this->key(static_cast<int>(i)),
      output);
  }

  // optional int64 primary_time = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->primary_time(), output);
  }

  // optional uint64 priority = 4;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->priority(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:quic.QuicServerConfigProtobuf)
}

size_t QuicServerConfigProtobuf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:quic.QuicServerConfigProtobuf)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // required bytes config = 1;
  if (has_config()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->config());
  }
  // repeated .quic.QuicServerConfigProtobuf.PrivateKey key = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->key_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->key(static_cast<int>(i)));
    }
  }

  if (_has_bits_[0 / 32] & 6u) {
    // optional int64 primary_time = 3;
    if (has_primary_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->primary_time());
    }

    // optional uint64 priority = 4;
    if (has_priority()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->priority());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void QuicServerConfigProtobuf::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const QuicServerConfigProtobuf*>(&from));
}

void QuicServerConfigProtobuf::MergeFrom(const QuicServerConfigProtobuf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:quic.QuicServerConfigProtobuf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  key_.MergeFrom(from.key_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_config();
      config_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.config_);
    }
    if (cached_has_bits & 0x00000002u) {
      primary_time_ = from.primary_time_;
    }
    if (cached_has_bits & 0x00000004u) {
      priority_ = from.priority_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void QuicServerConfigProtobuf::CopyFrom(const QuicServerConfigProtobuf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:quic.QuicServerConfigProtobuf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QuicServerConfigProtobuf::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->key())) return false;
  return true;
}

void QuicServerConfigProtobuf::Swap(QuicServerConfigProtobuf* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QuicServerConfigProtobuf::InternalSwap(QuicServerConfigProtobuf* other) {
  using std::swap;
  CastToBase(&key_)->InternalSwap(CastToBase(&other->key_));
  config_.Swap(&other->config_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(primary_time_, other->primary_time_);
  swap(priority_, other->priority_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string QuicServerConfigProtobuf::GetTypeName() const {
  return "quic.QuicServerConfigProtobuf";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace quic
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::quic::QuicServerConfigProtobuf_PrivateKey* Arena::CreateMaybeMessage< ::quic::QuicServerConfigProtobuf_PrivateKey >(Arena* arena) {
  return Arena::CreateInternal< ::quic::QuicServerConfigProtobuf_PrivateKey >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::quic::QuicServerConfigProtobuf* Arena::CreateMaybeMessage< ::quic::QuicServerConfigProtobuf >(Arena* arena) {
  return Arena::CreateInternal< ::quic::QuicServerConfigProtobuf >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)