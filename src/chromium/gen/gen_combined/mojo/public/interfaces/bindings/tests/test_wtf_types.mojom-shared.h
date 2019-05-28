// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_wtf_types.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class TestWTFCodeGenerationDataView;

class TestWTFStructDataView;

class TestWTFStructWrapperDataView;

class TestWTFCodeGeneration2DataView;


}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::TestWTFCodeGenerationDataView> {
  using Data = ::mojo::test::internal::TestWTFCodeGeneration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::TestWTFStructDataView> {
  using Data = ::mojo::test::internal::TestWTFStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::TestWTFStructWrapperDataView> {
  using Data = ::mojo::test::internal::TestWTFStructWrapper_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::TestWTFCodeGeneration2DataView> {
  using Data = ::mojo::test::internal::TestWTFCodeGeneration2_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {


enum class TopLevelEnum : int32_t {
  
  E0,
  
  E1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, TopLevelEnum value);
inline bool IsKnownEnumValue(TopLevelEnum value) {
  return internal::TopLevelEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TestWTFStruct_NestedEnum : int32_t {
  
  E0,
  
  E1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, TestWTFStruct_NestedEnum value);
inline bool IsKnownEnumValue(TestWTFStruct_NestedEnum value) {
  return internal::TestWTFStruct_NestedEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TestWTF_NestedEnum : int32_t {
  
  E0,
  
  E1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, TestWTF_NestedEnum value);
inline bool IsKnownEnumValue(TestWTF_NestedEnum value) {
  return internal::TestWTF_NestedEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class TestWTFInterfaceBase {};

using TestWTFPtrDataView =
    mojo::InterfacePtrDataView<TestWTFInterfaceBase>;
using TestWTFRequestDataView =
    mojo::InterfaceRequestDataView<TestWTFInterfaceBase>;
using TestWTFAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TestWTFInterfaceBase>;
using TestWTFAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TestWTFInterfaceBase>;
class TestWTFCodeGenerationDataView {
 public:
  TestWTFCodeGenerationDataView() {}

  TestWTFCodeGenerationDataView(
      internal::TestWTFCodeGeneration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStr(UserType* output) {
    auto* pointer = data_->str.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNullableStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNullableStr(UserType* output) {
    auto* pointer = data_->nullable_str.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStrsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrs(UserType* output) {
    auto* pointer = data_->strs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetNullableStrsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNullableStrs(UserType* output) {
    auto* pointer = data_->nullable_strs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetArraysDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrays(UserType* output) {
    auto* pointer = data_->arrays.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>>(
        pointer, output, context_);
  }
  inline void GetBoolsDataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBools(UserType* output) {
    auto* pointer = data_->bools.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
  inline void GetHandlesDataView(
      mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
  inline void GetStrMapDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrMap(UserType* output) {
    auto* pointer = data_->str_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetArrayMapDataView(
      mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayMap(UserType* output) {
    auto* pointer = data_->array_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>>(
        pointer, output, context_);
  }
  inline void GetHandleMapDataView(
      mojo::MapDataView<int32_t, mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandleMap(UserType* output) {
    auto* pointer = data_->handle_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
  inline void GetStrMapsDataView(
      mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrMaps(UserType* output) {
    auto* pointer = data_->str_maps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::TestWTFCodeGeneration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTFStructDataView {
 public:
  TestWTFStructDataView() {}

  TestWTFStructDataView(
      internal::TestWTFStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStr(UserType* output) {
    auto* pointer = data_->str.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t integer() const {
    return data_->integer;
  }
 private:
  internal::TestWTFStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTFStructWrapperDataView {
 public:
  TestWTFStructWrapperDataView() {}

  TestWTFStructWrapperDataView(
      internal::TestWTFStructWrapper_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNestedStructDataView(
      TestWTFStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNestedStruct(UserType* output) {
    auto* pointer = data_->nested_struct.Get();
    return mojo::internal::Deserialize<::mojo::test::TestWTFStructDataView>(
        pointer, output, context_);
  }
  inline void GetArrayStructDataView(
      mojo::ArrayDataView<TestWTFStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayStruct(UserType* output) {
    auto* pointer = data_->array_struct.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::TestWTFStructDataView>>(
        pointer, output, context_);
  }
  inline void GetMapStructDataView(
      mojo::MapDataView<TestWTFStructDataView, TestWTFStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMapStruct(UserType* output) {
    auto* pointer = data_->map_struct.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo::test::TestWTFStructDataView, ::mojo::test::TestWTFStructDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TestWTFStructWrapper_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTFCodeGeneration2DataView {
 public:
  using Tag = internal::TestWTFCodeGeneration2_Data::TestWTFCodeGeneration2_Tag;

  TestWTFCodeGeneration2DataView() {}

  TestWTFCodeGeneration2DataView(
      internal::TestWTFCodeGeneration2_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_str() const { return data_->tag == Tag::STR; }
  inline void GetStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStr(UserType* output) {
    DCHECK(is_str());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_str.Get(), output, context_);
  }
  bool is_strs() const { return data_->tag == Tag::STRS; }
  inline void GetStrsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrs(UserType* output) {
    DCHECK(is_strs());
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        data_->data.f_strs.Get(), output, context_);
  }
  bool is_str_map() const { return data_->tag == Tag::STR_MAP; }
  inline void GetStrMapDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrMap(UserType* output) {
    DCHECK(is_str_map());
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        data_->data.f_str_map.Get(), output, context_);
  }

 private:
  internal::TestWTFCodeGeneration2_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace test
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::test::TopLevelEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::TopLevelEnum> {};

template <>
struct hash<::mojo::test::TestWTFStruct_NestedEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::TestWTFStruct_NestedEnum> {};

template <>
struct hash<::mojo::test::TestWTF_NestedEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::TestWTF_NestedEnum> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::test::TopLevelEnum, ::mojo::test::TopLevelEnum> {
  static ::mojo::test::TopLevelEnum ToMojom(::mojo::test::TopLevelEnum input) { return input; }
  static bool FromMojom(::mojo::test::TopLevelEnum input, ::mojo::test::TopLevelEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TopLevelEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::TopLevelEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::TopLevelEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::TestWTFStruct_NestedEnum, ::mojo::test::TestWTFStruct_NestedEnum> {
  static ::mojo::test::TestWTFStruct_NestedEnum ToMojom(::mojo::test::TestWTFStruct_NestedEnum input) { return input; }
  static bool FromMojom(::mojo::test::TestWTFStruct_NestedEnum input, ::mojo::test::TestWTFStruct_NestedEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TestWTFStruct_NestedEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::TestWTFStruct_NestedEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::TestWTFStruct_NestedEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::TestWTF_NestedEnum, ::mojo::test::TestWTF_NestedEnum> {
  static ::mojo::test::TestWTF_NestedEnum ToMojom(::mojo::test::TestWTF_NestedEnum input) { return input; }
  static bool FromMojom(::mojo::test::TestWTF_NestedEnum input, ::mojo::test::TestWTF_NestedEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TestWTF_NestedEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::TestWTF_NestedEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::TestWTF_NestedEnum>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TestWTFCodeGenerationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::TestWTFCodeGenerationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::TestWTFCodeGeneration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::str(input)) in_str = Traits::str(input);
    typename decltype((*output)->str)::BaseType::BufferWriter
        str_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_str, buffer, &str_writer, context);
    (*output)->str.Set(
        str_writer.is_null() ? nullptr : str_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->str.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null str in TestWTFCodeGeneration struct");
    decltype(Traits::nullable_str(input)) in_nullable_str = Traits::nullable_str(input);
    typename decltype((*output)->nullable_str)::BaseType::BufferWriter
        nullable_str_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_nullable_str, buffer, &nullable_str_writer, context);
    (*output)->nullable_str.Set(
        nullable_str_writer.is_null() ? nullptr : nullable_str_writer.data());
    decltype(Traits::strs(input)) in_strs = Traits::strs(input);
    typename decltype((*output)->strs)::BaseType::BufferWriter
        strs_writer;
    const mojo::internal::ContainerValidateParams strs_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_strs, buffer, &strs_writer, &strs_validate_params,
        context);
    (*output)->strs.Set(
        strs_writer.is_null() ? nullptr : strs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->strs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null strs in TestWTFCodeGeneration struct");
    decltype(Traits::nullable_strs(input)) in_nullable_strs = Traits::nullable_strs(input);
    typename decltype((*output)->nullable_strs)::BaseType::BufferWriter
        nullable_strs_writer;
    const mojo::internal::ContainerValidateParams nullable_strs_validate_params(
        0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_nullable_strs, buffer, &nullable_strs_writer, &nullable_strs_validate_params,
        context);
    (*output)->nullable_strs.Set(
        nullable_strs_writer.is_null() ? nullptr : nullable_strs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->nullable_strs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null nullable_strs in TestWTFCodeGeneration struct");
    decltype(Traits::arrays(input)) in_arrays = Traits::arrays(input);
    typename decltype((*output)->arrays)::BaseType::BufferWriter
        arrays_writer;
    const mojo::internal::ContainerValidateParams arrays_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>>(
        in_arrays, buffer, &arrays_writer, &arrays_validate_params,
        context);
    (*output)->arrays.Set(
        arrays_writer.is_null() ? nullptr : arrays_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->arrays.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null arrays in TestWTFCodeGeneration struct");
    decltype(Traits::bools(input)) in_bools = Traits::bools(input);
    typename decltype((*output)->bools)::BaseType::BufferWriter
        bools_writer;
    const mojo::internal::ContainerValidateParams bools_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_bools, buffer, &bools_writer, &bools_validate_params,
        context);
    (*output)->bools.Set(
        bools_writer.is_null() ? nullptr : bools_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bools.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bools in TestWTFCodeGeneration struct");
    decltype(Traits::handles(input)) in_handles = Traits::handles(input);
    typename decltype((*output)->handles)::BaseType::BufferWriter
        handles_writer;
    const mojo::internal::ContainerValidateParams handles_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        in_handles, buffer, &handles_writer, &handles_validate_params,
        context);
    (*output)->handles.Set(
        handles_writer.is_null() ? nullptr : handles_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->handles.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null handles in TestWTFCodeGeneration struct");
    decltype(Traits::str_map(input)) in_str_map = Traits::str_map(input);
    typename decltype((*output)->str_map)::BaseType::BufferWriter
        str_map_writer;
    const mojo::internal::ContainerValidateParams str_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_str_map, buffer, &str_map_writer, &str_map_validate_params,
        context);
    (*output)->str_map.Set(
        str_map_writer.is_null() ? nullptr : str_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->str_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null str_map in TestWTFCodeGeneration struct");
    decltype(Traits::array_map(input)) in_array_map = Traits::array_map(input);
    typename decltype((*output)->array_map)::BaseType::BufferWriter
        array_map_writer;
    const mojo::internal::ContainerValidateParams array_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>>(
        in_array_map, buffer, &array_map_writer, &array_map_validate_params,
        context);
    (*output)->array_map.Set(
        array_map_writer.is_null() ? nullptr : array_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->array_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null array_map in TestWTFCodeGeneration struct");
    decltype(Traits::handle_map(input)) in_handle_map = Traits::handle_map(input);
    typename decltype((*output)->handle_map)::BaseType::BufferWriter
        handle_map_writer;
    const mojo::internal::ContainerValidateParams handle_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, mojo::ScopedMessagePipeHandle>>(
        in_handle_map, buffer, &handle_map_writer, &handle_map_validate_params,
        context);
    (*output)->handle_map.Set(
        handle_map_writer.is_null() ? nullptr : handle_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->handle_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null handle_map in TestWTFCodeGeneration struct");
    decltype(Traits::str_maps(input)) in_str_maps = Traits::str_maps(input);
    typename decltype((*output)->str_maps)::BaseType::BufferWriter
        str_maps_writer;
    const mojo::internal::ContainerValidateParams str_maps_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>(
        in_str_maps, buffer, &str_maps_writer, &str_maps_validate_params,
        context);
    (*output)->str_maps.Set(
        str_maps_writer.is_null() ? nullptr : str_maps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->str_maps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null str_maps in TestWTFCodeGeneration struct");
  }

  static bool Deserialize(::mojo::test::internal::TestWTFCodeGeneration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::TestWTFCodeGenerationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TestWTFStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::TestWTFStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::TestWTFStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::str(input)) in_str = Traits::str(input);
    typename decltype((*output)->str)::BaseType::BufferWriter
        str_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_str, buffer, &str_writer, context);
    (*output)->str.Set(
        str_writer.is_null() ? nullptr : str_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->str.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null str in TestWTFStruct struct");
    (*output)->integer = Traits::integer(input);
  }

  static bool Deserialize(::mojo::test::internal::TestWTFStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::TestWTFStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TestWTFStructWrapperDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::TestWTFStructWrapperDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::TestWTFStructWrapper_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::nested_struct(input)) in_nested_struct = Traits::nested_struct(input);
    typename decltype((*output)->nested_struct)::BaseType::BufferWriter
        nested_struct_writer;
    mojo::internal::Serialize<::mojo::test::TestWTFStructDataView>(
        in_nested_struct, buffer, &nested_struct_writer, context);
    (*output)->nested_struct.Set(
        nested_struct_writer.is_null() ? nullptr : nested_struct_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->nested_struct.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null nested_struct in TestWTFStructWrapper struct");
    decltype(Traits::array_struct(input)) in_array_struct = Traits::array_struct(input);
    typename decltype((*output)->array_struct)::BaseType::BufferWriter
        array_struct_writer;
    const mojo::internal::ContainerValidateParams array_struct_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::TestWTFStructDataView>>(
        in_array_struct, buffer, &array_struct_writer, &array_struct_validate_params,
        context);
    (*output)->array_struct.Set(
        array_struct_writer.is_null() ? nullptr : array_struct_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->array_struct.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null array_struct in TestWTFStructWrapper struct");
    decltype(Traits::map_struct(input)) in_map_struct = Traits::map_struct(input);
    typename decltype((*output)->map_struct)::BaseType::BufferWriter
        map_struct_writer;
    const mojo::internal::ContainerValidateParams map_struct_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<::mojo::test::TestWTFStructDataView, ::mojo::test::TestWTFStructDataView>>(
        in_map_struct, buffer, &map_struct_writer, &map_struct_validate_params,
        context);
    (*output)->map_struct.Set(
        map_struct_writer.is_null() ? nullptr : map_struct_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->map_struct.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null map_struct in TestWTFStructWrapper struct");
  }

  static bool Deserialize(::mojo::test::internal::TestWTFStructWrapper_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::TestWTFStructWrapperDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::TestWTFCodeGeneration2DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::TestWTFCodeGeneration2DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::TestWTFCodeGeneration2_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::TestWTFCodeGeneration2_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::TestWTFCodeGeneration2DataView::Tag::STR: {
        decltype(Traits::str(input))
            in_str = Traits::str(input);
        typename decltype(result->data.f_str)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_str, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null str in TestWTFCodeGeneration2 union");
        result->data.f_str.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::TestWTFCodeGeneration2DataView::Tag::STRS: {
        decltype(Traits::strs(input))
            in_strs = Traits::strs(input);
        typename decltype(result->data.f_strs)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams strs_validate_params(
            0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
        mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
            in_strs, buffer, &value_writer, &strs_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null strs in TestWTFCodeGeneration2 union");
        result->data.f_strs.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::TestWTFCodeGeneration2DataView::Tag::STR_MAP: {
        decltype(Traits::str_map(input))
            in_str_map = Traits::str_map(input);
        typename decltype(result->data.f_str_map)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams str_map_validate_params(
            new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
        mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
            in_str_map, buffer, &value_writer, &str_map_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null str_map in TestWTFCodeGeneration2 union");
        result->data.f_str_map.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::TestWTFCodeGeneration2_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::TestWTFCodeGeneration2DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {

inline void TestWTFCodeGenerationDataView::GetStrDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->str.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetNullableStrDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->nullable_str.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetStrsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->strs.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetNullableStrsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->nullable_strs.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetArraysDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>* output) {
  auto pointer = data_->arrays.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetBoolsDataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->bools.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetHandlesDataView(
    mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->handles.Get();
  *output = mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetStrMapDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->str_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetArrayMapDataView(
    mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>* output) {
  auto pointer = data_->array_map.Get();
  *output = mojo::MapDataView<int32_t, mojo::ArrayDataView<int32_t>>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetHandleMapDataView(
    mojo::MapDataView<int32_t, mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->handle_map.Get();
  *output = mojo::MapDataView<int32_t, mojo::ScopedMessagePipeHandle>(pointer, context_);
}
inline void TestWTFCodeGenerationDataView::GetStrMapsDataView(
    mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>* output) {
  auto pointer = data_->str_maps.Get();
  *output = mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(pointer, context_);
}


inline void TestWTFStructDataView::GetStrDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->str.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void TestWTFStructWrapperDataView::GetNestedStructDataView(
    TestWTFStructDataView* output) {
  auto pointer = data_->nested_struct.Get();
  *output = TestWTFStructDataView(pointer, context_);
}
inline void TestWTFStructWrapperDataView::GetArrayStructDataView(
    mojo::ArrayDataView<TestWTFStructDataView>* output) {
  auto pointer = data_->array_struct.Get();
  *output = mojo::ArrayDataView<TestWTFStructDataView>(pointer, context_);
}
inline void TestWTFStructWrapperDataView::GetMapStructDataView(
    mojo::MapDataView<TestWTFStructDataView, TestWTFStructDataView>* output) {
  auto pointer = data_->map_struct.Get();
  *output = mojo::MapDataView<TestWTFStructDataView, TestWTFStructDataView>(pointer, context_);
}


inline void TestWTFCodeGeneration2DataView::GetStrDataView(
    mojo::StringDataView* output) {
  DCHECK(is_str());
  *output = mojo::StringDataView(data_->data.f_str.Get(), context_);
}
inline void TestWTFCodeGeneration2DataView::GetStrsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  DCHECK(is_strs());
  *output = mojo::ArrayDataView<mojo::StringDataView>(data_->data.f_strs.Get(), context_);
}
inline void TestWTFCodeGeneration2DataView::GetStrMapDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  DCHECK(is_str_map());
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(data_->data.f_str_map.Get(), context_);
}


}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_H_