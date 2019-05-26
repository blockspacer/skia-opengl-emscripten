// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/trace/trigger.proto

#include "perfetto/trace/trigger.pb.h"

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
class TriggerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Trigger>
      _instance;
} _Trigger_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace protobuf_perfetto_2ftrace_2ftrigger_2eproto {
static void InitDefaultsTrigger() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::perfetto::protos::_Trigger_default_instance_;
    new (ptr) ::perfetto::protos::Trigger();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::perfetto::protos::Trigger::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Trigger =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsTrigger}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Trigger.base);
}

}  // namespace protobuf_perfetto_2ftrace_2ftrigger_2eproto
namespace perfetto {
namespace protos {

// ===================================================================

void Trigger::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Trigger::kTriggerNameFieldNumber;
const int Trigger::kProducerNameFieldNumber;
const int Trigger::kTrustedProducerUidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Trigger::Trigger()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_perfetto_2ftrace_2ftrigger_2eproto::scc_info_Trigger.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:perfetto.protos.Trigger)
}
Trigger::Trigger(const Trigger& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  trigger_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_trigger_name()) {
    trigger_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trigger_name_);
  }
  producer_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_producer_name()) {
    producer_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.producer_name_);
  }
  trusted_producer_uid_ = from.trusted_producer_uid_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.Trigger)
}

void Trigger::SharedCtor() {
  trigger_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  producer_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  trusted_producer_uid_ = 0;
}

Trigger::~Trigger() {
  // @@protoc_insertion_point(destructor:perfetto.protos.Trigger)
  SharedDtor();
}

void Trigger::SharedDtor() {
  trigger_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  producer_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Trigger::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Trigger& Trigger::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_perfetto_2ftrace_2ftrigger_2eproto::scc_info_Trigger.base);
  return *internal_default_instance();
}


void Trigger::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.Trigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      trigger_name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      producer_name_.ClearNonDefaultToEmptyNoArena();
    }
  }
  trusted_producer_uid_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Trigger::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:perfetto.protos.Trigger)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string trigger_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_trigger_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string producer_name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_producer_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 trusted_producer_uid = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_trusted_producer_uid();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &trusted_producer_uid_)));
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
  // @@protoc_insertion_point(parse_success:perfetto.protos.Trigger)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:perfetto.protos.Trigger)
  return false;
#undef DO_
}

void Trigger::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:perfetto.protos.Trigger)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string trigger_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->trigger_name(), output);
  }

  // optional string producer_name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->producer_name(), output);
  }

  // optional int32 trusted_producer_uid = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->trusted_producer_uid(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:perfetto.protos.Trigger)
}

size_t Trigger::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.Trigger)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional string trigger_name = 1;
    if (has_trigger_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->trigger_name());
    }

    // optional string producer_name = 2;
    if (has_producer_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->producer_name());
    }

    // optional int32 trusted_producer_uid = 3;
    if (has_trusted_producer_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->trusted_producer_uid());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Trigger::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Trigger*>(&from));
}

void Trigger::MergeFrom(const Trigger& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.Trigger)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_trigger_name();
      trigger_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.trigger_name_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_producer_name();
      producer_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.producer_name_);
    }
    if (cached_has_bits & 0x00000004u) {
      trusted_producer_uid_ = from.trusted_producer_uid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Trigger::CopyFrom(const Trigger& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.Trigger)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Trigger::IsInitialized() const {
  return true;
}

void Trigger::Swap(Trigger* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Trigger::InternalSwap(Trigger* other) {
  using std::swap;
  trigger_name_.Swap(&other->trigger_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  producer_name_.Swap(&other->producer_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(trusted_producer_uid_, other->trusted_producer_uid_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string Trigger::GetTypeName() const {
  return "perfetto.protos.Trigger";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::perfetto::protos::Trigger* Arena::CreateMaybeMessage< ::perfetto::protos::Trigger >(Arena* arena) {
  return Arena::CreateInternal< ::perfetto::protos::Trigger >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)