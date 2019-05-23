// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/interfaces/bindings/tests/test_unions.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class WrapperStructDataView;

class DummyStructDataView;

class SmallStructDataView;

class SmallStructNonNullableUnionDataView;

class SmallObjStructDataView;

class TryNonNullStructDataView;

class ImportedUnionStructDataView;

class PodUnionDataView;
class ObjectUnionDataView;
class HandleUnionDataView;
class OldUnionDataView;
class NewUnionDataView;
class ImportedUnionUnionDataView;


}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::WrapperStructDataView> {
  using Data = ::mojo::test::internal::WrapperStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::DummyStructDataView> {
  using Data = ::mojo::test::internal::DummyStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::SmallStructDataView> {
  using Data = ::mojo::test::internal::SmallStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::SmallStructNonNullableUnionDataView> {
  using Data = ::mojo::test::internal::SmallStructNonNullableUnion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::SmallObjStructDataView> {
  using Data = ::mojo::test::internal::SmallObjStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::TryNonNullStructDataView> {
  using Data = ::mojo::test::internal::TryNonNullStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ImportedUnionStructDataView> {
  using Data = ::mojo::test::internal::ImportedUnionStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::PodUnionDataView> {
  using Data = ::mojo::test::internal::PodUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::mojo::test::ObjectUnionDataView> {
  using Data = ::mojo::test::internal::ObjectUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::mojo::test::HandleUnionDataView> {
  using Data = ::mojo::test::internal::HandleUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::mojo::test::OldUnionDataView> {
  using Data = ::mojo::test::internal::OldUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::mojo::test::NewUnionDataView> {
  using Data = ::mojo::test::internal::NewUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

template <>
struct MojomTypeTraits<::mojo::test::ImportedUnionUnionDataView> {
  using Data = ::mojo::test::internal::ImportedUnionUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {


enum class AnEnum : int32_t {
  
  FIRST,
  
  SECOND,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, AnEnum value);
inline bool IsKnownEnumValue(AnEnum value) {
  return internal::AnEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AnExtensibleEnum : int32_t {
  
  FIRST,
  
  SECOND,
  
  THIRD,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AnExtensibleEnum value);
inline bool IsKnownEnumValue(AnExtensibleEnum value) {
  return internal::AnExtensibleEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SmallCacheInterfaceBase {};

using SmallCachePtrDataView =
    mojo::InterfacePtrDataView<SmallCacheInterfaceBase>;
using SmallCacheRequestDataView =
    mojo::InterfaceRequestDataView<SmallCacheInterfaceBase>;
using SmallCacheAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SmallCacheInterfaceBase>;
using SmallCacheAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SmallCacheInterfaceBase>;
class UnionInterfaceInterfaceBase {};

using UnionInterfacePtrDataView =
    mojo::InterfacePtrDataView<UnionInterfaceInterfaceBase>;
using UnionInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<UnionInterfaceInterfaceBase>;
using UnionInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UnionInterfaceInterfaceBase>;
using UnionInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UnionInterfaceInterfaceBase>;
class WrapperStructDataView {
 public:
  WrapperStructDataView() {}

  WrapperStructDataView(
      internal::WrapperStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetObjectUnionDataView(
      ObjectUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectUnion(UserType* output) {
    auto* pointer = !data_->object_union.is_null() ? &data_->object_union : nullptr;
    return mojo::internal::Deserialize<::mojo::test::ObjectUnionDataView>(
        pointer, output, context_);
  }
  inline void GetPodUnionDataView(
      PodUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPodUnion(UserType* output) {
    auto* pointer = !data_->pod_union.is_null() ? &data_->pod_union : nullptr;
    return mojo::internal::Deserialize<::mojo::test::PodUnionDataView>(
        pointer, output, context_);
  }
  inline void GetHandleUnionDataView(
      HandleUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandleUnion(UserType* output) {
    auto* pointer = !data_->handle_union.is_null() ? &data_->handle_union : nullptr;
    return mojo::internal::Deserialize<::mojo::test::HandleUnionDataView>(
        pointer, output, context_);
  }
 private:
  internal::WrapperStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DummyStructDataView {
 public:
  DummyStructDataView() {}

  DummyStructDataView(
      internal::DummyStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int8_t f_int8() const {
    return data_->f_int8;
  }
 private:
  internal::DummyStruct_Data* data_ = nullptr;
};

class SmallStructDataView {
 public:
  SmallStructDataView() {}

  SmallStructDataView(
      internal::SmallStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDummyStructDataView(
      DummyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDummyStruct(UserType* output) {
    auto* pointer = data_->dummy_struct.Get();
    return mojo::internal::Deserialize<::mojo::test::DummyStructDataView>(
        pointer, output, context_);
  }
  inline void GetPodUnionDataView(
      PodUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPodUnion(UserType* output) {
    auto* pointer = !data_->pod_union.is_null() ? &data_->pod_union : nullptr;
    return mojo::internal::Deserialize<::mojo::test::PodUnionDataView>(
        pointer, output, context_);
  }
  inline void GetPodUnionArrayDataView(
      mojo::ArrayDataView<PodUnionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPodUnionArray(UserType* output) {
    auto* pointer = data_->pod_union_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::PodUnionDataView>>(
        pointer, output, context_);
  }
  inline void GetNullablePodUnionArrayDataView(
      mojo::ArrayDataView<PodUnionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNullablePodUnionArray(UserType* output) {
    auto* pointer = data_->nullable_pod_union_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::PodUnionDataView>>(
        pointer, output, context_);
  }
  inline void GetSArrayDataView(
      mojo::ArrayDataView<DummyStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSArray(UserType* output) {
    auto* pointer = data_->s_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::DummyStructDataView>>(
        pointer, output, context_);
  }
  inline void GetPodUnionMapDataView(
      mojo::MapDataView<mojo::StringDataView, PodUnionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPodUnionMap(UserType* output) {
    auto* pointer = data_->pod_union_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::mojo::test::PodUnionDataView>>(
        pointer, output, context_);
  }
  inline void GetNullablePodUnionMapDataView(
      mojo::MapDataView<mojo::StringDataView, PodUnionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNullablePodUnionMap(UserType* output) {
    auto* pointer = data_->nullable_pod_union_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::mojo::test::PodUnionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SmallStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SmallStructNonNullableUnionDataView {
 public:
  SmallStructNonNullableUnionDataView() {}

  SmallStructNonNullableUnionDataView(
      internal::SmallStructNonNullableUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPodUnionDataView(
      PodUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPodUnion(UserType* output) {
    auto* pointer = !data_->pod_union.is_null() ? &data_->pod_union : nullptr;
    return mojo::internal::Deserialize<::mojo::test::PodUnionDataView>(
        pointer, output, context_);
  }
 private:
  internal::SmallStructNonNullableUnion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SmallObjStructDataView {
 public:
  SmallObjStructDataView() {}

  SmallObjStructDataView(
      internal::SmallObjStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetObjUnionDataView(
      ObjectUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjUnion(UserType* output) {
    auto* pointer = !data_->obj_union.is_null() ? &data_->obj_union : nullptr;
    return mojo::internal::Deserialize<::mojo::test::ObjectUnionDataView>(
        pointer, output, context_);
  }
  int8_t f_int8() const {
    return data_->f_int8;
  }
 private:
  internal::SmallObjStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TryNonNullStructDataView {
 public:
  TryNonNullStructDataView() {}

  TryNonNullStructDataView(
      internal::TryNonNullStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNullableDataView(
      DummyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNullable(UserType* output) {
    auto* pointer = data_->nullable.Get();
    return mojo::internal::Deserialize<::mojo::test::DummyStructDataView>(
        pointer, output, context_);
  }
  inline void GetNonNullableDataView(
      DummyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNonNullable(UserType* output) {
    auto* pointer = data_->non_nullable.Get();
    return mojo::internal::Deserialize<::mojo::test::DummyStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::TryNonNullStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImportedUnionStructDataView {
 public:
  ImportedUnionStructDataView() {}

  ImportedUnionStructDataView(
      internal::ImportedUnionStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointOrShapeDataView(
      ::imported::PointOrShapeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointOrShape(UserType* output) {
    auto* pointer = !data_->point_or_shape.is_null() ? &data_->point_or_shape : nullptr;
    return mojo::internal::Deserialize<::imported::PointOrShapeDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImportedUnionStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PodUnionDataView {
 public:
  using Tag = internal::PodUnion_Data::PodUnion_Tag;

  PodUnionDataView() {}

  PodUnionDataView(
      internal::PodUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_f_int8() const { return data_->tag == Tag::F_INT8; }
  int8_t f_int8() const {
    DCHECK(is_f_int8());
    return data_->data.f_f_int8;
  }
  bool is_f_int8_other() const { return data_->tag == Tag::F_INT8_OTHER; }
  int8_t f_int8_other() const {
    DCHECK(is_f_int8_other());
    return data_->data.f_f_int8_other;
  }
  bool is_f_uint8() const { return data_->tag == Tag::F_UINT8; }
  uint8_t f_uint8() const {
    DCHECK(is_f_uint8());
    return data_->data.f_f_uint8;
  }
  bool is_f_int16() const { return data_->tag == Tag::F_INT16; }
  int16_t f_int16() const {
    DCHECK(is_f_int16());
    return data_->data.f_f_int16;
  }
  bool is_f_uint16() const { return data_->tag == Tag::F_UINT16; }
  uint16_t f_uint16() const {
    DCHECK(is_f_uint16());
    return data_->data.f_f_uint16;
  }
  bool is_f_int32() const { return data_->tag == Tag::F_INT32; }
  int32_t f_int32() const {
    DCHECK(is_f_int32());
    return data_->data.f_f_int32;
  }
  bool is_f_uint32() const { return data_->tag == Tag::F_UINT32; }
  uint32_t f_uint32() const {
    DCHECK(is_f_uint32());
    return data_->data.f_f_uint32;
  }
  bool is_f_int64() const { return data_->tag == Tag::F_INT64; }
  int64_t f_int64() const {
    DCHECK(is_f_int64());
    return data_->data.f_f_int64;
  }
  bool is_f_uint64() const { return data_->tag == Tag::F_UINT64; }
  uint64_t f_uint64() const {
    DCHECK(is_f_uint64());
    return data_->data.f_f_uint64;
  }
  bool is_f_float() const { return data_->tag == Tag::F_FLOAT; }
  float f_float() const {
    DCHECK(is_f_float());
    return data_->data.f_f_float;
  }
  bool is_f_double() const { return data_->tag == Tag::F_DOUBLE; }
  double f_double() const {
    DCHECK(is_f_double());
    return data_->data.f_f_double;
  }
  bool is_f_bool() const { return data_->tag == Tag::F_BOOL; }
  bool f_bool() const {
    DCHECK(is_f_bool());
    return data_->data.f_f_bool;
  }
  bool is_f_enum() const { return data_->tag == Tag::F_ENUM; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFEnum(UserType* output) const {
    DCHECK(is_f_enum());
    return mojo::internal::Deserialize<::mojo::test::AnEnum>(
        data_->data.f_f_enum, output);
  }

  AnEnum f_enum() const {
    DCHECK(is_f_enum());
    return static_cast<AnEnum>(
        data_->data.f_f_enum);
  }
  bool is_f_extensible_enum() const { return data_->tag == Tag::F_EXTENSIBLE_ENUM; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFExtensibleEnum(UserType* output) const {
    DCHECK(is_f_extensible_enum());
    return mojo::internal::Deserialize<::mojo::test::AnExtensibleEnum>(
        data_->data.f_f_extensible_enum, output);
  }

  AnExtensibleEnum f_extensible_enum() const {
    DCHECK(is_f_extensible_enum());
    return static_cast<AnExtensibleEnum>(
        data_->data.f_f_extensible_enum);
  }

 private:
  internal::PodUnion_Data* data_ = nullptr;
};

class ObjectUnionDataView {
 public:
  using Tag = internal::ObjectUnion_Data::ObjectUnion_Tag;

  ObjectUnionDataView() {}

  ObjectUnionDataView(
      internal::ObjectUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_f_int8() const { return data_->tag == Tag::F_INT8; }
  int8_t f_int8() const {
    DCHECK(is_f_int8());
    return data_->data.f_f_int8;
  }
  bool is_f_string() const { return data_->tag == Tag::F_STRING; }
  inline void GetFStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFString(UserType* output) {
    DCHECK(is_f_string());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_f_string.Get(), output, context_);
  }
  bool is_f_dummy() const { return data_->tag == Tag::F_DUMMY; }
  inline void GetFDummyDataView(
      DummyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFDummy(UserType* output) {
    DCHECK(is_f_dummy());
    return mojo::internal::Deserialize<::mojo::test::DummyStructDataView>(
        data_->data.f_f_dummy.Get(), output, context_);
  }
  bool is_f_nullable() const { return data_->tag == Tag::F_NULLABLE; }
  inline void GetFNullableDataView(
      DummyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFNullable(UserType* output) {
    DCHECK(is_f_nullable());
    return mojo::internal::Deserialize<::mojo::test::DummyStructDataView>(
        data_->data.f_f_nullable.Get(), output, context_);
  }
  bool is_f_array_int8() const { return data_->tag == Tag::F_ARRAY_INT8; }
  inline void GetFArrayInt8DataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFArrayInt8(UserType* output) {
    DCHECK(is_f_array_int8());
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        data_->data.f_f_array_int8.Get(), output, context_);
  }
  bool is_f_map_int8() const { return data_->tag == Tag::F_MAP_INT8; }
  inline void GetFMapInt8DataView(
      mojo::MapDataView<mojo::StringDataView, int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFMapInt8(UserType* output) {
    DCHECK(is_f_map_int8());
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, int8_t>>(
        data_->data.f_f_map_int8.Get(), output, context_);
  }
  bool is_f_pod_union() const { return data_->tag == Tag::F_POD_UNION; }
  inline void GetFPodUnionDataView(
      PodUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFPodUnion(UserType* output) {
    DCHECK(is_f_pod_union());
    return mojo::internal::Deserialize<::mojo::test::PodUnionDataView>(
        data_->data.f_f_pod_union.Get(), output, context_);
  }
  bool is_f_small_structs() const { return data_->tag == Tag::F_SMALL_STRUCTS; }
  inline void GetFSmallStructsDataView(
      mojo::ArrayDataView<SmallStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFSmallStructs(UserType* output) {
    DCHECK(is_f_small_structs());
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::SmallStructDataView>>(
        data_->data.f_f_small_structs.Get(), output, context_);
  }

 private:
  internal::ObjectUnion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandleUnionDataView {
 public:
  using Tag = internal::HandleUnion_Data::HandleUnion_Tag;

  HandleUnionDataView() {}

  HandleUnionDataView(
      internal::HandleUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_f_handle() const { return data_->tag == Tag::F_HANDLE; }
  mojo::ScopedHandle TakeFHandle() {
    DCHECK(is_f_handle());
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->data.f_f_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_f_message_pipe() const { return data_->tag == Tag::F_MESSAGE_PIPE; }
  mojo::ScopedMessagePipeHandle TakeFMessagePipe() {
    DCHECK(is_f_message_pipe());
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->data.f_f_message_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_f_data_pipe_consumer() const { return data_->tag == Tag::F_DATA_PIPE_CONSUMER; }
  mojo::ScopedDataPipeConsumerHandle TakeFDataPipeConsumer() {
    DCHECK(is_f_data_pipe_consumer());
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->data.f_f_data_pipe_consumer, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_f_data_pipe_producer() const { return data_->tag == Tag::F_DATA_PIPE_PRODUCER; }
  mojo::ScopedDataPipeProducerHandle TakeFDataPipeProducer() {
    DCHECK(is_f_data_pipe_producer());
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->data.f_f_data_pipe_producer, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_f_shared_buffer() const { return data_->tag == Tag::F_SHARED_BUFFER; }
  mojo::ScopedSharedBufferHandle TakeFSharedBuffer() {
    DCHECK(is_f_shared_buffer());
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->data.f_f_shared_buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_f_small_cache() const { return data_->tag == Tag::F_SMALL_CACHE; }
  template <typename UserType>
  UserType TakeFSmallCache() {
    DCHECK(is_f_small_cache());
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::mojo::test::SmallCacheInterfaceBase>>(
            &data_->data.f_f_small_cache, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_f_small_cache_receiver() const { return data_->tag == Tag::F_SMALL_CACHE_RECEIVER; }
  template <typename UserType>
  UserType TakeFSmallCacheReceiver() {
    DCHECK(is_f_small_cache_receiver());
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::mojo::test::SmallCacheInterfaceBase>>(
            &data_->data.f_f_small_cache_receiver, &result, context_);
    DCHECK(ret);
    return result;
  }

 private:
  internal::HandleUnion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OldUnionDataView {
 public:
  using Tag = internal::OldUnion_Data::OldUnion_Tag;

  OldUnionDataView() {}

  OldUnionDataView(
      internal::OldUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_f_int8() const { return data_->tag == Tag::F_INT8; }
  int8_t f_int8() const {
    DCHECK(is_f_int8());
    return data_->data.f_f_int8;
  }

 private:
  internal::OldUnion_Data* data_ = nullptr;
};

class NewUnionDataView {
 public:
  using Tag = internal::NewUnion_Data::NewUnion_Tag;

  NewUnionDataView() {}

  NewUnionDataView(
      internal::NewUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_f_int8() const { return data_->tag == Tag::F_INT8; }
  int8_t f_int8() const {
    DCHECK(is_f_int8());
    return data_->data.f_f_int8;
  }
  bool is_f_int16() const { return data_->tag == Tag::F_INT16; }
  int16_t f_int16() const {
    DCHECK(is_f_int16());
    return data_->data.f_f_int16;
  }

 private:
  internal::NewUnion_Data* data_ = nullptr;
};

class ImportedUnionUnionDataView {
 public:
  using Tag = internal::ImportedUnionUnion_Data::ImportedUnionUnion_Tag;

  ImportedUnionUnionDataView() {}

  ImportedUnionUnionDataView(
      internal::ImportedUnionUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_point_or_shape() const { return data_->tag == Tag::POINT_OR_SHAPE; }
  inline void GetPointOrShapeDataView(
      ::imported::PointOrShapeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPointOrShape(UserType* output) {
    DCHECK(is_point_or_shape());
    return mojo::internal::Deserialize<::imported::PointOrShapeDataView>(
        data_->data.f_point_or_shape.Get(), output, context_);
  }

 private:
  internal::ImportedUnionUnion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace test
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::test::AnEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::AnEnum> {};

template <>
struct hash<::mojo::test::AnExtensibleEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::AnExtensibleEnum> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::test::AnEnum, ::mojo::test::AnEnum> {
  static ::mojo::test::AnEnum ToMojom(::mojo::test::AnEnum input) { return input; }
  static bool FromMojom(::mojo::test::AnEnum input, ::mojo::test::AnEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::AnEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::AnEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::AnEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::AnExtensibleEnum, ::mojo::test::AnExtensibleEnum> {
  static ::mojo::test::AnExtensibleEnum ToMojom(::mojo::test::AnExtensibleEnum input) { return input; }
  static bool FromMojom(::mojo::test::AnExtensibleEnum input, ::mojo::test::AnExtensibleEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::AnExtensibleEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::AnExtensibleEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::AnExtensibleEnum>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::WrapperStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::WrapperStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::WrapperStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::object_union(input)) in_object_union = Traits::object_union(input);
    typename decltype((*output)->object_union)::BufferWriter object_union_writer;
    object_union_writer.AllocateInline(buffer, &(*output)->object_union);
    mojo::internal::Serialize<::mojo::test::ObjectUnionDataView>(
        in_object_union, buffer, &object_union_writer, true, context);
    decltype(Traits::pod_union(input)) in_pod_union = Traits::pod_union(input);
    typename decltype((*output)->pod_union)::BufferWriter pod_union_writer;
    pod_union_writer.AllocateInline(buffer, &(*output)->pod_union);
    mojo::internal::Serialize<::mojo::test::PodUnionDataView>(
        in_pod_union, buffer, &pod_union_writer, true, context);
    decltype(Traits::handle_union(input)) in_handle_union = Traits::handle_union(input);
    typename decltype((*output)->handle_union)::BufferWriter handle_union_writer;
    handle_union_writer.AllocateInline(buffer, &(*output)->handle_union);
    mojo::internal::Serialize<::mojo::test::HandleUnionDataView>(
        in_handle_union, buffer, &handle_union_writer, true, context);
  }

  static bool Deserialize(::mojo::test::internal::WrapperStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::WrapperStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::DummyStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::DummyStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::DummyStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int8 = Traits::f_int8(input);
  }

  static bool Deserialize(::mojo::test::internal::DummyStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::DummyStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::SmallStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::SmallStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::SmallStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::dummy_struct(input)) in_dummy_struct = Traits::dummy_struct(input);
    typename decltype((*output)->dummy_struct)::BaseType::BufferWriter
        dummy_struct_writer;
    mojo::internal::Serialize<::mojo::test::DummyStructDataView>(
        in_dummy_struct, buffer, &dummy_struct_writer, context);
    (*output)->dummy_struct.Set(
        dummy_struct_writer.is_null() ? nullptr : dummy_struct_writer.data());
    decltype(Traits::pod_union(input)) in_pod_union = Traits::pod_union(input);
    typename decltype((*output)->pod_union)::BufferWriter pod_union_writer;
    pod_union_writer.AllocateInline(buffer, &(*output)->pod_union);
    mojo::internal::Serialize<::mojo::test::PodUnionDataView>(
        in_pod_union, buffer, &pod_union_writer, true, context);
    decltype(Traits::pod_union_array(input)) in_pod_union_array = Traits::pod_union_array(input);
    typename decltype((*output)->pod_union_array)::BaseType::BufferWriter
        pod_union_array_writer;
    const mojo::internal::ContainerValidateParams pod_union_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::PodUnionDataView>>(
        in_pod_union_array, buffer, &pod_union_array_writer, &pod_union_array_validate_params,
        context);
    (*output)->pod_union_array.Set(
        pod_union_array_writer.is_null() ? nullptr : pod_union_array_writer.data());
    decltype(Traits::nullable_pod_union_array(input)) in_nullable_pod_union_array = Traits::nullable_pod_union_array(input);
    typename decltype((*output)->nullable_pod_union_array)::BaseType::BufferWriter
        nullable_pod_union_array_writer;
    const mojo::internal::ContainerValidateParams nullable_pod_union_array_validate_params(
        0, true, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::PodUnionDataView>>(
        in_nullable_pod_union_array, buffer, &nullable_pod_union_array_writer, &nullable_pod_union_array_validate_params,
        context);
    (*output)->nullable_pod_union_array.Set(
        nullable_pod_union_array_writer.is_null() ? nullptr : nullable_pod_union_array_writer.data());
    decltype(Traits::s_array(input)) in_s_array = Traits::s_array(input);
    typename decltype((*output)->s_array)::BaseType::BufferWriter
        s_array_writer;
    const mojo::internal::ContainerValidateParams s_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::DummyStructDataView>>(
        in_s_array, buffer, &s_array_writer, &s_array_validate_params,
        context);
    (*output)->s_array.Set(
        s_array_writer.is_null() ? nullptr : s_array_writer.data());
    decltype(Traits::pod_union_map(input)) in_pod_union_map = Traits::pod_union_map(input);
    typename decltype((*output)->pod_union_map)::BaseType::BufferWriter
        pod_union_map_writer;
    const mojo::internal::ContainerValidateParams pod_union_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::mojo::test::PodUnionDataView>>(
        in_pod_union_map, buffer, &pod_union_map_writer, &pod_union_map_validate_params,
        context);
    (*output)->pod_union_map.Set(
        pod_union_map_writer.is_null() ? nullptr : pod_union_map_writer.data());
    decltype(Traits::nullable_pod_union_map(input)) in_nullable_pod_union_map = Traits::nullable_pod_union_map(input);
    typename decltype((*output)->nullable_pod_union_map)::BaseType::BufferWriter
        nullable_pod_union_map_writer;
    const mojo::internal::ContainerValidateParams nullable_pod_union_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::mojo::test::PodUnionDataView>>(
        in_nullable_pod_union_map, buffer, &nullable_pod_union_map_writer, &nullable_pod_union_map_validate_params,
        context);
    (*output)->nullable_pod_union_map.Set(
        nullable_pod_union_map_writer.is_null() ? nullptr : nullable_pod_union_map_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::SmallStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::SmallStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::SmallStructNonNullableUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::SmallStructNonNullableUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::SmallStructNonNullableUnion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::pod_union(input)) in_pod_union = Traits::pod_union(input);
    typename decltype((*output)->pod_union)::BufferWriter pod_union_writer;
    pod_union_writer.AllocateInline(buffer, &(*output)->pod_union);
    mojo::internal::Serialize<::mojo::test::PodUnionDataView>(
        in_pod_union, buffer, &pod_union_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pod_union.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pod_union in SmallStructNonNullableUnion struct");
  }

  static bool Deserialize(::mojo::test::internal::SmallStructNonNullableUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::SmallStructNonNullableUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::SmallObjStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::SmallObjStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::SmallObjStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::obj_union(input)) in_obj_union = Traits::obj_union(input);
    typename decltype((*output)->obj_union)::BufferWriter obj_union_writer;
    obj_union_writer.AllocateInline(buffer, &(*output)->obj_union);
    mojo::internal::Serialize<::mojo::test::ObjectUnionDataView>(
        in_obj_union, buffer, &obj_union_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->obj_union.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null obj_union in SmallObjStruct struct");
    (*output)->f_int8 = Traits::f_int8(input);
  }

  static bool Deserialize(::mojo::test::internal::SmallObjStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::SmallObjStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TryNonNullStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::TryNonNullStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::TryNonNullStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::nullable(input)) in_nullable = Traits::nullable(input);
    typename decltype((*output)->nullable)::BaseType::BufferWriter
        nullable_writer;
    mojo::internal::Serialize<::mojo::test::DummyStructDataView>(
        in_nullable, buffer, &nullable_writer, context);
    (*output)->nullable.Set(
        nullable_writer.is_null() ? nullptr : nullable_writer.data());
    decltype(Traits::non_nullable(input)) in_non_nullable = Traits::non_nullable(input);
    typename decltype((*output)->non_nullable)::BaseType::BufferWriter
        non_nullable_writer;
    mojo::internal::Serialize<::mojo::test::DummyStructDataView>(
        in_non_nullable, buffer, &non_nullable_writer, context);
    (*output)->non_nullable.Set(
        non_nullable_writer.is_null() ? nullptr : non_nullable_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->non_nullable.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null non_nullable in TryNonNullStruct struct");
  }

  static bool Deserialize(::mojo::test::internal::TryNonNullStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::TryNonNullStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ImportedUnionStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ImportedUnionStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ImportedUnionStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::point_or_shape(input)) in_point_or_shape = Traits::point_or_shape(input);
    typename decltype((*output)->point_or_shape)::BufferWriter point_or_shape_writer;
    point_or_shape_writer.AllocateInline(buffer, &(*output)->point_or_shape);
    mojo::internal::Serialize<::imported::PointOrShapeDataView>(
        in_point_or_shape, buffer, &point_or_shape_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->point_or_shape.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null point_or_shape in ImportedUnionStruct struct");
  }

  static bool Deserialize(::mojo::test::internal::ImportedUnionStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ImportedUnionStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::PodUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::PodUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::PodUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::PodUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::PodUnionDataView::Tag::F_INT8: {
        decltype(Traits::f_int8(input))
            in_f_int8 = Traits::f_int8(input);
        result->data.f_f_int8 = in_f_int8;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_INT8_OTHER: {
        decltype(Traits::f_int8_other(input))
            in_f_int8_other = Traits::f_int8_other(input);
        result->data.f_f_int8_other = in_f_int8_other;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_UINT8: {
        decltype(Traits::f_uint8(input))
            in_f_uint8 = Traits::f_uint8(input);
        result->data.f_f_uint8 = in_f_uint8;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_INT16: {
        decltype(Traits::f_int16(input))
            in_f_int16 = Traits::f_int16(input);
        result->data.f_f_int16 = in_f_int16;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_UINT16: {
        decltype(Traits::f_uint16(input))
            in_f_uint16 = Traits::f_uint16(input);
        result->data.f_f_uint16 = in_f_uint16;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_INT32: {
        decltype(Traits::f_int32(input))
            in_f_int32 = Traits::f_int32(input);
        result->data.f_f_int32 = in_f_int32;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_UINT32: {
        decltype(Traits::f_uint32(input))
            in_f_uint32 = Traits::f_uint32(input);
        result->data.f_f_uint32 = in_f_uint32;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_INT64: {
        decltype(Traits::f_int64(input))
            in_f_int64 = Traits::f_int64(input);
        result->data.f_f_int64 = in_f_int64;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_UINT64: {
        decltype(Traits::f_uint64(input))
            in_f_uint64 = Traits::f_uint64(input);
        result->data.f_f_uint64 = in_f_uint64;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_FLOAT: {
        decltype(Traits::f_float(input))
            in_f_float = Traits::f_float(input);
        result->data.f_f_float = in_f_float;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_DOUBLE: {
        decltype(Traits::f_double(input))
            in_f_double = Traits::f_double(input);
        result->data.f_f_double = in_f_double;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_BOOL: {
        decltype(Traits::f_bool(input))
            in_f_bool = Traits::f_bool(input);
        result->data.f_f_bool = in_f_bool;
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_ENUM: {
        decltype(Traits::f_enum(input))
            in_f_enum = Traits::f_enum(input);
        mojo::internal::Serialize<::mojo::test::AnEnum>(
            in_f_enum, &result->data.f_f_enum);
        break;
      }
      case ::mojo::test::PodUnionDataView::Tag::F_EXTENSIBLE_ENUM: {
        decltype(Traits::f_extensible_enum(input))
            in_f_extensible_enum = Traits::f_extensible_enum(input);
        mojo::internal::Serialize<::mojo::test::AnExtensibleEnum>(
            in_f_extensible_enum, &result->data.f_f_extensible_enum);
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::PodUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::PodUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ObjectUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::ObjectUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ObjectUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::ObjectUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::ObjectUnionDataView::Tag::F_INT8: {
        decltype(Traits::f_int8(input))
            in_f_int8 = Traits::f_int8(input);
        result->data.f_f_int8 = in_f_int8;
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_STRING: {
        decltype(Traits::f_string(input))
            in_f_string = Traits::f_string(input);
        typename decltype(result->data.f_f_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_f_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null f_string in ObjectUnion union");
        result->data.f_f_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_DUMMY: {
        decltype(Traits::f_dummy(input))
            in_f_dummy = Traits::f_dummy(input);
        typename decltype(result->data.f_f_dummy)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo::test::DummyStructDataView>(
            in_f_dummy, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null f_dummy in ObjectUnion union");
        result->data.f_f_dummy.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_NULLABLE: {
        decltype(Traits::f_nullable(input))
            in_f_nullable = Traits::f_nullable(input);
        typename decltype(result->data.f_f_nullable)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo::test::DummyStructDataView>(
            in_f_nullable, buffer, &value_writer, context);
        result->data.f_f_nullable.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_ARRAY_INT8: {
        decltype(Traits::f_array_int8(input))
            in_f_array_int8 = Traits::f_array_int8(input);
        typename decltype(result->data.f_f_array_int8)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams f_array_int8_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
            in_f_array_int8, buffer, &value_writer, &f_array_int8_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null f_array_int8 in ObjectUnion union");
        result->data.f_f_array_int8.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_MAP_INT8: {
        decltype(Traits::f_map_int8(input))
            in_f_map_int8 = Traits::f_map_int8(input);
        typename decltype(result->data.f_f_map_int8)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams f_map_int8_validate_params(
            new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
        mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, int8_t>>(
            in_f_map_int8, buffer, &value_writer, &f_map_int8_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null f_map_int8 in ObjectUnion union");
        result->data.f_f_map_int8.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_POD_UNION: {
        decltype(Traits::f_pod_union(input))
            in_f_pod_union = Traits::f_pod_union(input);
        typename decltype(result->data.f_f_pod_union)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo::test::PodUnionDataView>(
            in_f_pod_union, buffer, &value_writer, false, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null f_pod_union in ObjectUnion union");
        result->data.f_f_pod_union.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::ObjectUnionDataView::Tag::F_SMALL_STRUCTS: {
        decltype(Traits::f_small_structs(input))
            in_f_small_structs = Traits::f_small_structs(input);
        typename decltype(result->data.f_f_small_structs)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams f_small_structs_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::SmallStructDataView>>(
            in_f_small_structs, buffer, &value_writer, &f_small_structs_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null f_small_structs in ObjectUnion union");
        result->data.f_f_small_structs.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::ObjectUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ObjectUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::HandleUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::HandleUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::HandleUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::HandleUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::HandleUnionDataView::Tag::F_HANDLE: {
        decltype(Traits::f_handle(input))
            in_f_handle = Traits::f_handle(input);
        mojo::internal::Serialize<mojo::ScopedHandle>(
            in_f_handle, &result->data.f_f_handle, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_handle),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_handle in HandleUnion union");
        break;
      }
      case ::mojo::test::HandleUnionDataView::Tag::F_MESSAGE_PIPE: {
        decltype(Traits::f_message_pipe(input))
            in_f_message_pipe = Traits::f_message_pipe(input);
        mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
            in_f_message_pipe, &result->data.f_f_message_pipe, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_message_pipe),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_message_pipe in HandleUnion union");
        break;
      }
      case ::mojo::test::HandleUnionDataView::Tag::F_DATA_PIPE_CONSUMER: {
        decltype(Traits::f_data_pipe_consumer(input))
            in_f_data_pipe_consumer = Traits::f_data_pipe_consumer(input);
        mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
            in_f_data_pipe_consumer, &result->data.f_f_data_pipe_consumer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_data_pipe_consumer),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_data_pipe_consumer in HandleUnion union");
        break;
      }
      case ::mojo::test::HandleUnionDataView::Tag::F_DATA_PIPE_PRODUCER: {
        decltype(Traits::f_data_pipe_producer(input))
            in_f_data_pipe_producer = Traits::f_data_pipe_producer(input);
        mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
            in_f_data_pipe_producer, &result->data.f_f_data_pipe_producer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_data_pipe_producer),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_data_pipe_producer in HandleUnion union");
        break;
      }
      case ::mojo::test::HandleUnionDataView::Tag::F_SHARED_BUFFER: {
        decltype(Traits::f_shared_buffer(input))
            in_f_shared_buffer = Traits::f_shared_buffer(input);
        mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
            in_f_shared_buffer, &result->data.f_f_shared_buffer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_shared_buffer),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_shared_buffer in HandleUnion union");
        break;
      }
      case ::mojo::test::HandleUnionDataView::Tag::F_SMALL_CACHE: {
        decltype(Traits::f_small_cache(input))
            in_f_small_cache = Traits::f_small_cache(input);
        mojo::internal::Serialize<mojo::InterfacePtrDataView<::mojo::test::SmallCacheInterfaceBase>>(
            in_f_small_cache, &result->data.f_f_small_cache, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_small_cache),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_small_cache in HandleUnion union");
        break;
      }
      case ::mojo::test::HandleUnionDataView::Tag::F_SMALL_CACHE_RECEIVER: {
        decltype(Traits::f_small_cache_receiver(input))
            in_f_small_cache_receiver = Traits::f_small_cache_receiver(input);
        mojo::internal::Serialize<mojo::InterfaceRequestDataView<::mojo::test::SmallCacheInterfaceBase>>(
            in_f_small_cache_receiver, &result->data.f_f_small_cache_receiver, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_f_small_cache_receiver),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid f_small_cache_receiver in HandleUnion union");
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::HandleUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::HandleUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::OldUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::OldUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::OldUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::OldUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::OldUnionDataView::Tag::F_INT8: {
        decltype(Traits::f_int8(input))
            in_f_int8 = Traits::f_int8(input);
        result->data.f_f_int8 = in_f_int8;
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::OldUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::OldUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::NewUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::NewUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::NewUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::NewUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::NewUnionDataView::Tag::F_INT8: {
        decltype(Traits::f_int8(input))
            in_f_int8 = Traits::f_int8(input);
        result->data.f_f_int8 = in_f_int8;
        break;
      }
      case ::mojo::test::NewUnionDataView::Tag::F_INT16: {
        decltype(Traits::f_int16(input))
            in_f_int16 = Traits::f_int16(input);
        result->data.f_f_int16 = in_f_int16;
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::NewUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::NewUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ImportedUnionUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::ImportedUnionUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ImportedUnionUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::ImportedUnionUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::ImportedUnionUnionDataView::Tag::POINT_OR_SHAPE: {
        decltype(Traits::point_or_shape(input))
            in_point_or_shape = Traits::point_or_shape(input);
        typename decltype(result->data.f_point_or_shape)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::imported::PointOrShapeDataView>(
            in_point_or_shape, buffer, &value_writer, false, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null point_or_shape in ImportedUnionUnion union");
        result->data.f_point_or_shape.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::ImportedUnionUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ImportedUnionUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {

inline void WrapperStructDataView::GetObjectUnionDataView(
    ObjectUnionDataView* output) {
  auto pointer = &data_->object_union;
  *output = ObjectUnionDataView(pointer, context_);
}
inline void WrapperStructDataView::GetPodUnionDataView(
    PodUnionDataView* output) {
  auto pointer = &data_->pod_union;
  *output = PodUnionDataView(pointer, context_);
}
inline void WrapperStructDataView::GetHandleUnionDataView(
    HandleUnionDataView* output) {
  auto pointer = &data_->handle_union;
  *output = HandleUnionDataView(pointer, context_);
}




inline void SmallStructDataView::GetDummyStructDataView(
    DummyStructDataView* output) {
  auto pointer = data_->dummy_struct.Get();
  *output = DummyStructDataView(pointer, context_);
}
inline void SmallStructDataView::GetPodUnionDataView(
    PodUnionDataView* output) {
  auto pointer = &data_->pod_union;
  *output = PodUnionDataView(pointer, context_);
}
inline void SmallStructDataView::GetPodUnionArrayDataView(
    mojo::ArrayDataView<PodUnionDataView>* output) {
  auto pointer = data_->pod_union_array.Get();
  *output = mojo::ArrayDataView<PodUnionDataView>(pointer, context_);
}
inline void SmallStructDataView::GetNullablePodUnionArrayDataView(
    mojo::ArrayDataView<PodUnionDataView>* output) {
  auto pointer = data_->nullable_pod_union_array.Get();
  *output = mojo::ArrayDataView<PodUnionDataView>(pointer, context_);
}
inline void SmallStructDataView::GetSArrayDataView(
    mojo::ArrayDataView<DummyStructDataView>* output) {
  auto pointer = data_->s_array.Get();
  *output = mojo::ArrayDataView<DummyStructDataView>(pointer, context_);
}
inline void SmallStructDataView::GetPodUnionMapDataView(
    mojo::MapDataView<mojo::StringDataView, PodUnionDataView>* output) {
  auto pointer = data_->pod_union_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, PodUnionDataView>(pointer, context_);
}
inline void SmallStructDataView::GetNullablePodUnionMapDataView(
    mojo::MapDataView<mojo::StringDataView, PodUnionDataView>* output) {
  auto pointer = data_->nullable_pod_union_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, PodUnionDataView>(pointer, context_);
}


inline void SmallStructNonNullableUnionDataView::GetPodUnionDataView(
    PodUnionDataView* output) {
  auto pointer = &data_->pod_union;
  *output = PodUnionDataView(pointer, context_);
}


inline void SmallObjStructDataView::GetObjUnionDataView(
    ObjectUnionDataView* output) {
  auto pointer = &data_->obj_union;
  *output = ObjectUnionDataView(pointer, context_);
}


inline void TryNonNullStructDataView::GetNullableDataView(
    DummyStructDataView* output) {
  auto pointer = data_->nullable.Get();
  *output = DummyStructDataView(pointer, context_);
}
inline void TryNonNullStructDataView::GetNonNullableDataView(
    DummyStructDataView* output) {
  auto pointer = data_->non_nullable.Get();
  *output = DummyStructDataView(pointer, context_);
}


inline void ImportedUnionStructDataView::GetPointOrShapeDataView(
    ::imported::PointOrShapeDataView* output) {
  auto pointer = &data_->point_or_shape;
  *output = ::imported::PointOrShapeDataView(pointer, context_);
}



inline void ObjectUnionDataView::GetFStringDataView(
    mojo::StringDataView* output) {
  DCHECK(is_f_string());
  *output = mojo::StringDataView(data_->data.f_f_string.Get(), context_);
}
inline void ObjectUnionDataView::GetFDummyDataView(
    DummyStructDataView* output) {
  DCHECK(is_f_dummy());
  *output = DummyStructDataView(data_->data.f_f_dummy.Get(), context_);
}
inline void ObjectUnionDataView::GetFNullableDataView(
    DummyStructDataView* output) {
  DCHECK(is_f_nullable());
  *output = DummyStructDataView(data_->data.f_f_nullable.Get(), context_);
}
inline void ObjectUnionDataView::GetFArrayInt8DataView(
    mojo::ArrayDataView<int8_t>* output) {
  DCHECK(is_f_array_int8());
  *output = mojo::ArrayDataView<int8_t>(data_->data.f_f_array_int8.Get(), context_);
}
inline void ObjectUnionDataView::GetFMapInt8DataView(
    mojo::MapDataView<mojo::StringDataView, int8_t>* output) {
  DCHECK(is_f_map_int8());
  *output = mojo::MapDataView<mojo::StringDataView, int8_t>(data_->data.f_f_map_int8.Get(), context_);
}
inline void ObjectUnionDataView::GetFPodUnionDataView(
    PodUnionDataView* output) {
  DCHECK(is_f_pod_union());
  *output = PodUnionDataView(data_->data.f_f_pod_union.Get(), context_);
}
inline void ObjectUnionDataView::GetFSmallStructsDataView(
    mojo::ArrayDataView<SmallStructDataView>* output) {
  DCHECK(is_f_small_structs());
  *output = mojo::ArrayDataView<SmallStructDataView>(data_->data.f_f_small_structs.Get(), context_);
}




inline void ImportedUnionUnionDataView::GetPointOrShapeDataView(
    ::imported::PointOrShapeDataView* output) {
  DCHECK(is_point_or_shape());
  *output = ::imported::PointOrShapeDataView(data_->data.f_point_or_shape.Get(), context_);
}


}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_H_