// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perfetto/trace/interned_data/interned_data.proto

#ifndef PROTOBUF_INCLUDED_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto
#define PROTOBUF_INCLUDED_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto

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
#include "perfetto/trace/track_event/debug_annotation.pb.h"
#include "perfetto/trace/track_event/task_execution.pb.h"
#include "perfetto/trace/track_event/track_event.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto 

namespace protobuf_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
}  // namespace protobuf_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto
namespace perfetto {
namespace protos {
class InternedData;
class InternedDataDefaultTypeInternal;
extern InternedDataDefaultTypeInternal _InternedData_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace google {
namespace protobuf {
template<> ::perfetto::protos::InternedData* Arena::CreateMaybeMessage<::perfetto::protos::InternedData>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace perfetto {
namespace protos {

// ===================================================================

class InternedData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.InternedData) */ {
 public:
  InternedData();
  virtual ~InternedData();

  InternedData(const InternedData& from);

  inline InternedData& operator=(const InternedData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InternedData(InternedData&& from) noexcept
    : InternedData() {
    *this = ::std::move(from);
  }

  inline InternedData& operator=(InternedData&& from) noexcept {
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

  static const InternedData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InternedData* internal_default_instance() {
    return reinterpret_cast<const InternedData*>(
               &_InternedData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  GOOGLE_ATTRIBUTE_NOINLINE void Swap(InternedData* other);
  friend void swap(InternedData& a, InternedData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InternedData* New() const final {
    return CreateMaybeMessage<InternedData>(NULL);
  }

  InternedData* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<InternedData>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const InternedData& from);
  void MergeFrom(const InternedData& from);
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
  void InternalSwap(InternedData* other);
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

  // repeated .perfetto.protos.EventCategory event_categories = 1;
  int event_categories_size() const;
  void clear_event_categories();
  static const int kEventCategoriesFieldNumber = 1;
  ::perfetto::protos::EventCategory* mutable_event_categories(int index);
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::EventCategory >*
      mutable_event_categories();
  const ::perfetto::protos::EventCategory& event_categories(int index) const;
  ::perfetto::protos::EventCategory* add_event_categories();
  const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::EventCategory >&
      event_categories() const;

  // repeated .perfetto.protos.LegacyEventName legacy_event_names = 2;
  int legacy_event_names_size() const;
  void clear_legacy_event_names();
  static const int kLegacyEventNamesFieldNumber = 2;
  ::perfetto::protos::LegacyEventName* mutable_legacy_event_names(int index);
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::LegacyEventName >*
      mutable_legacy_event_names();
  const ::perfetto::protos::LegacyEventName& legacy_event_names(int index) const;
  ::perfetto::protos::LegacyEventName* add_legacy_event_names();
  const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::LegacyEventName >&
      legacy_event_names() const;

  // repeated .perfetto.protos.DebugAnnotationName debug_annotation_names = 3;
  int debug_annotation_names_size() const;
  void clear_debug_annotation_names();
  static const int kDebugAnnotationNamesFieldNumber = 3;
  ::perfetto::protos::DebugAnnotationName* mutable_debug_annotation_names(int index);
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::DebugAnnotationName >*
      mutable_debug_annotation_names();
  const ::perfetto::protos::DebugAnnotationName& debug_annotation_names(int index) const;
  ::perfetto::protos::DebugAnnotationName* add_debug_annotation_names();
  const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::DebugAnnotationName >&
      debug_annotation_names() const;

  // repeated .perfetto.protos.SourceLocation source_locations = 4;
  int source_locations_size() const;
  void clear_source_locations();
  static const int kSourceLocationsFieldNumber = 4;
  ::perfetto::protos::SourceLocation* mutable_source_locations(int index);
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::SourceLocation >*
      mutable_source_locations();
  const ::perfetto::protos::SourceLocation& source_locations(int index) const;
  ::perfetto::protos::SourceLocation* add_source_locations();
  const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::SourceLocation >&
      source_locations() const;

  // @@protoc_insertion_point(class_scope:perfetto.protos.InternedData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::EventCategory > event_categories_;
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::LegacyEventName > legacy_event_names_;
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::DebugAnnotationName > debug_annotation_names_;
  ::google::protobuf::RepeatedPtrField< ::perfetto::protos::SourceLocation > source_locations_;
  friend struct ::protobuf_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InternedData

// repeated .perfetto.protos.EventCategory event_categories = 1;
inline int InternedData::event_categories_size() const {
  return event_categories_.size();
}
inline ::perfetto::protos::EventCategory* InternedData::mutable_event_categories(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InternedData.event_categories)
  return event_categories_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::perfetto::protos::EventCategory >*
InternedData::mutable_event_categories() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InternedData.event_categories)
  return &event_categories_;
}
inline const ::perfetto::protos::EventCategory& InternedData::event_categories(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InternedData.event_categories)
  return event_categories_.Get(index);
}
inline ::perfetto::protos::EventCategory* InternedData::add_event_categories() {
  // @@protoc_insertion_point(field_add:perfetto.protos.InternedData.event_categories)
  return event_categories_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::EventCategory >&
InternedData::event_categories() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InternedData.event_categories)
  return event_categories_;
}

// repeated .perfetto.protos.LegacyEventName legacy_event_names = 2;
inline int InternedData::legacy_event_names_size() const {
  return legacy_event_names_.size();
}
inline ::perfetto::protos::LegacyEventName* InternedData::mutable_legacy_event_names(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InternedData.legacy_event_names)
  return legacy_event_names_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::perfetto::protos::LegacyEventName >*
InternedData::mutable_legacy_event_names() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InternedData.legacy_event_names)
  return &legacy_event_names_;
}
inline const ::perfetto::protos::LegacyEventName& InternedData::legacy_event_names(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InternedData.legacy_event_names)
  return legacy_event_names_.Get(index);
}
inline ::perfetto::protos::LegacyEventName* InternedData::add_legacy_event_names() {
  // @@protoc_insertion_point(field_add:perfetto.protos.InternedData.legacy_event_names)
  return legacy_event_names_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::LegacyEventName >&
InternedData::legacy_event_names() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InternedData.legacy_event_names)
  return legacy_event_names_;
}

// repeated .perfetto.protos.DebugAnnotationName debug_annotation_names = 3;
inline int InternedData::debug_annotation_names_size() const {
  return debug_annotation_names_.size();
}
inline ::perfetto::protos::DebugAnnotationName* InternedData::mutable_debug_annotation_names(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InternedData.debug_annotation_names)
  return debug_annotation_names_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::perfetto::protos::DebugAnnotationName >*
InternedData::mutable_debug_annotation_names() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InternedData.debug_annotation_names)
  return &debug_annotation_names_;
}
inline const ::perfetto::protos::DebugAnnotationName& InternedData::debug_annotation_names(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InternedData.debug_annotation_names)
  return debug_annotation_names_.Get(index);
}
inline ::perfetto::protos::DebugAnnotationName* InternedData::add_debug_annotation_names() {
  // @@protoc_insertion_point(field_add:perfetto.protos.InternedData.debug_annotation_names)
  return debug_annotation_names_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::DebugAnnotationName >&
InternedData::debug_annotation_names() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InternedData.debug_annotation_names)
  return debug_annotation_names_;
}

// repeated .perfetto.protos.SourceLocation source_locations = 4;
inline int InternedData::source_locations_size() const {
  return source_locations_.size();
}
inline ::perfetto::protos::SourceLocation* InternedData::mutable_source_locations(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InternedData.source_locations)
  return source_locations_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::perfetto::protos::SourceLocation >*
InternedData::mutable_source_locations() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InternedData.source_locations)
  return &source_locations_;
}
inline const ::perfetto::protos::SourceLocation& InternedData::source_locations(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InternedData.source_locations)
  return source_locations_.Get(index);
}
inline ::perfetto::protos::SourceLocation* InternedData::add_source_locations() {
  // @@protoc_insertion_point(field_add:perfetto.protos.InternedData.source_locations)
  return source_locations_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::perfetto::protos::SourceLocation >&
InternedData::source_locations() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InternedData.source_locations)
  return source_locations_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_perfetto_2ftrace_2finterned_5fdata_2finterned_5fdata_2eproto