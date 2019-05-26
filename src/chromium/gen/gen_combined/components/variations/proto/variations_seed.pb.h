// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: variations_seed.proto

#ifndef PROTOBUF_INCLUDED_variations_5fseed_2eproto
#define PROTOBUF_INCLUDED_variations_5fseed_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "study.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_variations_5fseed_2eproto 

namespace protobuf_variations_5fseed_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_variations_5fseed_2eproto
namespace variations {
class VariationsSeed;
class VariationsSeedDefaultTypeInternal;
extern VariationsSeedDefaultTypeInternal _VariationsSeed_default_instance_;
}  // namespace variations
namespace google {
namespace protobuf {
template<> ::variations::VariationsSeed* Arena::CreateMaybeMessage<::variations::VariationsSeed>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace variations {

// ===================================================================

class VariationsSeed : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:variations.VariationsSeed) */ {
 public:
  VariationsSeed();
  virtual ~VariationsSeed();

  VariationsSeed(const VariationsSeed& from);

  inline VariationsSeed& operator=(const VariationsSeed& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VariationsSeed(VariationsSeed&& from) noexcept
    : VariationsSeed() {
    *this = ::std::move(from);
  }

  inline VariationsSeed& operator=(VariationsSeed&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const VariationsSeed& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VariationsSeed* internal_default_instance() {
    return reinterpret_cast<const VariationsSeed*>(
               &_VariationsSeed_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(VariationsSeed* other);
  friend void swap(VariationsSeed& a, VariationsSeed& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VariationsSeed* New() const final {
    return CreateMaybeMessage<VariationsSeed>(NULL);
  }

  VariationsSeed* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VariationsSeed>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const VariationsSeed& from);
  void MergeFrom(const VariationsSeed& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(VariationsSeed* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .variations.Study study = 2;
  int study_size() const;
  void clear_study();
  static const int kStudyFieldNumber = 2;
  ::variations::Study* mutable_study(int index);
  ::google::protobuf::RepeatedPtrField< ::variations::Study >*
      mutable_study();
  const ::variations::Study& study(int index) const;
  ::variations::Study* add_study();
  const ::google::protobuf::RepeatedPtrField< ::variations::Study >&
      study() const;

  // optional string serial_number = 1;
  bool has_serial_number() const;
  void clear_serial_number();
  static const int kSerialNumberFieldNumber = 1;
  const ::std::string& serial_number() const;
  void set_serial_number(const ::std::string& value);
  #if LANG_CXX11
  void set_serial_number(::std::string&& value);
  #endif
  void set_serial_number(const char* value);
  void set_serial_number(const char* value, size_t size);
  ::std::string* mutable_serial_number();
  ::std::string* release_serial_number();
  void set_allocated_serial_number(::std::string* serial_number);

  // optional string country_code = 3 [deprecated = true];
  GOOGLE_PROTOBUF_DEPRECATED_ATTR bool has_country_code() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void clear_country_code();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR static const int kCountryCodeFieldNumber = 3;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR const ::std::string& country_code() const;
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_country_code(const ::std::string& value);
  #if LANG_CXX11
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_country_code(::std::string&& value);
  #endif
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_country_code(const char* value);
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_country_code(const char* value, size_t size);
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::std::string* mutable_country_code();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR ::std::string* release_country_code();
  GOOGLE_PROTOBUF_DEPRECATED_ATTR void set_allocated_country_code(::std::string* country_code);

  // optional string version = 4;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 4;
  const ::std::string& version() const;
  void set_version(const ::std::string& value);
  #if LANG_CXX11
  void set_version(::std::string&& value);
  #endif
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  ::std::string* mutable_version();
  ::std::string* release_version();
  void set_allocated_version(::std::string* version);

  // @@protoc_insertion_point(class_scope:variations.VariationsSeed)
 private:
  void set_has_serial_number();
  void clear_has_serial_number();
  void set_has_country_code();
  void clear_has_country_code();
  void set_has_version();
  void clear_has_version();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::variations::Study > study_;
  ::google::protobuf::internal::ArenaStringPtr serial_number_;
  ::google::protobuf::internal::ArenaStringPtr country_code_;
  ::google::protobuf::internal::ArenaStringPtr version_;
  friend struct ::protobuf_variations_5fseed_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VariationsSeed

// optional string serial_number = 1;
inline bool VariationsSeed::has_serial_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VariationsSeed::set_has_serial_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VariationsSeed::clear_has_serial_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VariationsSeed::clear_serial_number() {
  serial_number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_serial_number();
}
inline const ::std::string& VariationsSeed::serial_number() const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.serial_number)
  return serial_number_.GetNoArena();
}
inline void VariationsSeed::set_serial_number(const ::std::string& value) {
  set_has_serial_number();
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:variations.VariationsSeed.serial_number)
}
#if LANG_CXX11
inline void VariationsSeed::set_serial_number(::std::string&& value) {
  set_has_serial_number();
  serial_number_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:variations.VariationsSeed.serial_number)
}
#endif
inline void VariationsSeed::set_serial_number(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_serial_number();
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:variations.VariationsSeed.serial_number)
}
inline void VariationsSeed::set_serial_number(const char* value, size_t size) {
  set_has_serial_number();
  serial_number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:variations.VariationsSeed.serial_number)
}
inline ::std::string* VariationsSeed::mutable_serial_number() {
  set_has_serial_number();
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.serial_number)
  return serial_number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VariationsSeed::release_serial_number() {
  // @@protoc_insertion_point(field_release:variations.VariationsSeed.serial_number)
  if (!has_serial_number()) {
    return NULL;
  }
  clear_has_serial_number();
  return serial_number_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VariationsSeed::set_allocated_serial_number(::std::string* serial_number) {
  if (serial_number != NULL) {
    set_has_serial_number();
  } else {
    clear_has_serial_number();
  }
  serial_number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serial_number);
  // @@protoc_insertion_point(field_set_allocated:variations.VariationsSeed.serial_number)
}

// repeated .variations.Study study = 2;
inline int VariationsSeed::study_size() const {
  return study_.size();
}
inline ::variations::Study* VariationsSeed::mutable_study(int index) {
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.study)
  return study_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::variations::Study >*
VariationsSeed::mutable_study() {
  // @@protoc_insertion_point(field_mutable_list:variations.VariationsSeed.study)
  return &study_;
}
inline const ::variations::Study& VariationsSeed::study(int index) const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.study)
  return study_.Get(index);
}
inline ::variations::Study* VariationsSeed::add_study() {
  // @@protoc_insertion_point(field_add:variations.VariationsSeed.study)
  return study_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::variations::Study >&
VariationsSeed::study() const {
  // @@protoc_insertion_point(field_list:variations.VariationsSeed.study)
  return study_;
}

// optional string country_code = 3 [deprecated = true];
inline bool VariationsSeed::has_country_code() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VariationsSeed::set_has_country_code() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VariationsSeed::clear_has_country_code() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VariationsSeed::clear_country_code() {
  country_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_country_code();
}
inline const ::std::string& VariationsSeed::country_code() const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.country_code)
  return country_code_.GetNoArena();
}
inline void VariationsSeed::set_country_code(const ::std::string& value) {
  set_has_country_code();
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:variations.VariationsSeed.country_code)
}
#if LANG_CXX11
inline void VariationsSeed::set_country_code(::std::string&& value) {
  set_has_country_code();
  country_code_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:variations.VariationsSeed.country_code)
}
#endif
inline void VariationsSeed::set_country_code(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_country_code();
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:variations.VariationsSeed.country_code)
}
inline void VariationsSeed::set_country_code(const char* value, size_t size) {
  set_has_country_code();
  country_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:variations.VariationsSeed.country_code)
}
inline ::std::string* VariationsSeed::mutable_country_code() {
  set_has_country_code();
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.country_code)
  return country_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VariationsSeed::release_country_code() {
  // @@protoc_insertion_point(field_release:variations.VariationsSeed.country_code)
  if (!has_country_code()) {
    return NULL;
  }
  clear_has_country_code();
  return country_code_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VariationsSeed::set_allocated_country_code(::std::string* country_code) {
  if (country_code != NULL) {
    set_has_country_code();
  } else {
    clear_has_country_code();
  }
  country_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), country_code);
  // @@protoc_insertion_point(field_set_allocated:variations.VariationsSeed.country_code)
}

// optional string version = 4;
inline bool VariationsSeed::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VariationsSeed::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VariationsSeed::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VariationsSeed::clear_version() {
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_version();
}
inline const ::std::string& VariationsSeed::version() const {
  // @@protoc_insertion_point(field_get:variations.VariationsSeed.version)
  return version_.GetNoArena();
}
inline void VariationsSeed::set_version(const ::std::string& value) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:variations.VariationsSeed.version)
}
#if LANG_CXX11
inline void VariationsSeed::set_version(::std::string&& value) {
  set_has_version();
  version_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:variations.VariationsSeed.version)
}
#endif
inline void VariationsSeed::set_version(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:variations.VariationsSeed.version)
}
inline void VariationsSeed::set_version(const char* value, size_t size) {
  set_has_version();
  version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:variations.VariationsSeed.version)
}
inline ::std::string* VariationsSeed::mutable_version() {
  set_has_version();
  // @@protoc_insertion_point(field_mutable:variations.VariationsSeed.version)
  return version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VariationsSeed::release_version() {
  // @@protoc_insertion_point(field_release:variations.VariationsSeed.version)
  if (!has_version()) {
    return NULL;
  }
  clear_has_version();
  return version_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VariationsSeed::set_allocated_version(::std::string* version) {
  if (version != NULL) {
    set_has_version();
  } else {
    clear_has_version();
  }
  version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:variations.VariationsSeed.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace variations

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_variations_5fseed_2eproto