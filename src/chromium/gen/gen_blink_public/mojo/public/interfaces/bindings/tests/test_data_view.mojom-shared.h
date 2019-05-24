// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_data_view.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
namespace data_view {
class NestedStructDataView;

using TestNativeStructDataView = mojo::native::NativeStructDataView;

class TestStructDataView;

class TestUnionDataView;


}  // namespace data_view
}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::data_view::NestedStructDataView> {
  using Data = ::mojo::test::data_view::internal::NestedStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::data_view::TestStructDataView> {
  using Data = ::mojo::test::data_view::internal::TestStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::data_view::TestUnionDataView> {
  using Data = ::mojo::test::data_view::internal::TestUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {
namespace data_view {


enum class TestEnum : int32_t {
  
  VALUE_0,
  
  VALUE_1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, TestEnum value);
inline bool IsKnownEnumValue(TestEnum value) {
  return internal::TestEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class TestInterfaceInterfaceBase {};

using TestInterfacePtrDataView =
    mojo::InterfacePtrDataView<TestInterfaceInterfaceBase>;
using TestInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<TestInterfaceInterfaceBase>;
using TestInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TestInterfaceInterfaceBase>;
using TestInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TestInterfaceInterfaceBase>;
class NestedStructDataView {
 public:
  NestedStructDataView() {}

  NestedStructDataView(
      internal::NestedStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
 private:
  internal::NestedStruct_Data* data_ = nullptr;
};

class TestStructDataView {
 public:
  TestStructDataView() {}

  TestStructDataView(
      internal::TestStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFString(UserType* output) {
    auto* pointer = data_->f_string.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFStructDataView(
      NestedStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFStruct(UserType* output) {
    auto* pointer = data_->f_struct.Get();
    return mojo::internal::Deserialize<::mojo::test::data_view::NestedStructDataView>(
        pointer, output, context_);
  }
  inline void GetFNativeStructDataView(
      TestNativeStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFNativeStruct(UserType* output) {
    auto* pointer = data_->f_native_struct.Get();
    return mojo::internal::Deserialize<::mojo::test::data_view::TestNativeStructDataView>(
        pointer, output, context_);
  }
  inline void GetFBoolArrayDataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFBoolArray(UserType* output) {
    auto* pointer = data_->f_bool_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
  inline void GetFInt32ArrayDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFInt32Array(UserType* output) {
    auto* pointer = data_->f_int32_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetFEnumArrayDataView(
      mojo::ArrayDataView<TestEnum>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFEnumArray(UserType* output) {
    auto* pointer = data_->f_enum_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::data_view::TestEnum>>(
        pointer, output, context_);
  }
  inline void GetFInterfaceArrayDataView(
      mojo::ArrayDataView<mojo::InterfacePtrDataView<TestInterfaceInterfaceBase>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFInterfaceArray(UserType* output) {
    auto* pointer = data_->f_interface_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::mojo::test::data_view::TestInterfaceInterfaceBase>>>(
        pointer, output, context_);
  }
  inline void GetFNestedArrayDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFNestedArray(UserType* output) {
    auto* pointer = data_->f_nested_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>>(
        pointer, output, context_);
  }
  inline void GetFStructArrayDataView(
      mojo::ArrayDataView<NestedStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFStructArray(UserType* output) {
    auto* pointer = data_->f_struct_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::data_view::NestedStructDataView>>(
        pointer, output, context_);
  }
  inline void GetFUnionArrayDataView(
      mojo::ArrayDataView<TestUnionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFUnionArray(UserType* output) {
    auto* pointer = data_->f_union_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::data_view::TestUnionDataView>>(
        pointer, output, context_);
  }
  inline void GetFMapDataView(
      mojo::MapDataView<mojo::StringDataView, int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFMap(UserType* output) {
    auto* pointer = data_->f_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, int32_t>>(
        pointer, output, context_);
  }
 private:
  internal::TestStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestUnionDataView {
 public:
  using Tag = internal::TestUnion_Data::TestUnion_Tag;

  TestUnionDataView() {}

  TestUnionDataView(
      internal::TestUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_f_bool() const { return data_->tag == Tag::F_BOOL; }
  bool f_bool() const {
    DCHECK(is_f_bool());
    return data_->data.f_f_bool;
  }
  bool is_f_int32() const { return data_->tag == Tag::F_INT32; }
  int32_t f_int32() const {
    DCHECK(is_f_int32());
    return data_->data.f_f_int32;
  }

 private:
  internal::TestUnion_Data* data_ = nullptr;
};



}  // namespace data_view
}  // namespace test
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::test::data_view::TestEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::data_view::TestEnum> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::test::data_view::TestEnum, ::mojo::test::data_view::TestEnum> {
  static ::mojo::test::data_view::TestEnum ToMojom(::mojo::test::data_view::TestEnum input) { return input; }
  static bool FromMojom(::mojo::test::data_view::TestEnum input, ::mojo::test::data_view::TestEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::data_view::TestEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::data_view::TestEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::data_view::TestEnum>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::data_view::NestedStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::data_view::NestedStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::data_view::internal::NestedStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
  }

  static bool Deserialize(::mojo::test::data_view::internal::NestedStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::data_view::NestedStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::data_view::TestStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::data_view::TestStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::data_view::internal::TestStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::f_string(input)) in_f_string = Traits::f_string(input);
    typename decltype((*output)->f_string)::BaseType::BufferWriter
        f_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f_string, buffer, &f_string_writer, context);
    (*output)->f_string.Set(
        f_string_writer.is_null() ? nullptr : f_string_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_string.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_string in TestStruct struct");
    decltype(Traits::f_struct(input)) in_f_struct = Traits::f_struct(input);
    typename decltype((*output)->f_struct)::BaseType::BufferWriter
        f_struct_writer;
    mojo::internal::Serialize<::mojo::test::data_view::NestedStructDataView>(
        in_f_struct, buffer, &f_struct_writer, context);
    (*output)->f_struct.Set(
        f_struct_writer.is_null() ? nullptr : f_struct_writer.data());
    decltype(Traits::f_native_struct(input)) in_f_native_struct = Traits::f_native_struct(input);
    typename decltype((*output)->f_native_struct)::BaseType::BufferWriter
        f_native_struct_writer;
    mojo::internal::Serialize<::mojo::test::data_view::TestNativeStructDataView>(
        in_f_native_struct, buffer, &f_native_struct_writer, context);
    (*output)->f_native_struct.Set(
        f_native_struct_writer.is_null() ? nullptr : f_native_struct_writer.data());
    decltype(Traits::f_bool_array(input)) in_f_bool_array = Traits::f_bool_array(input);
    typename decltype((*output)->f_bool_array)::BaseType::BufferWriter
        f_bool_array_writer;
    const mojo::internal::ContainerValidateParams f_bool_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_f_bool_array, buffer, &f_bool_array_writer, &f_bool_array_validate_params,
        context);
    (*output)->f_bool_array.Set(
        f_bool_array_writer.is_null() ? nullptr : f_bool_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_bool_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_bool_array in TestStruct struct");
    decltype(Traits::f_int32_array(input)) in_f_int32_array = Traits::f_int32_array(input);
    typename decltype((*output)->f_int32_array)::BaseType::BufferWriter
        f_int32_array_writer;
    const mojo::internal::ContainerValidateParams f_int32_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_f_int32_array, buffer, &f_int32_array_writer, &f_int32_array_validate_params,
        context);
    (*output)->f_int32_array.Set(
        f_int32_array_writer.is_null() ? nullptr : f_int32_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_int32_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_int32_array in TestStruct struct");
    decltype(Traits::f_enum_array(input)) in_f_enum_array = Traits::f_enum_array(input);
    typename decltype((*output)->f_enum_array)::BaseType::BufferWriter
        f_enum_array_writer;
    const mojo::internal::ContainerValidateParams f_enum_array_validate_params(
        0, ::mojo::test::data_view::internal::TestEnum_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::data_view::TestEnum>>(
        in_f_enum_array, buffer, &f_enum_array_writer, &f_enum_array_validate_params,
        context);
    (*output)->f_enum_array.Set(
        f_enum_array_writer.is_null() ? nullptr : f_enum_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_enum_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_enum_array in TestStruct struct");
    decltype(Traits::f_interface_array(input)) in_f_interface_array = Traits::f_interface_array(input);
    typename decltype((*output)->f_interface_array)::BaseType::BufferWriter
        f_interface_array_writer;
    const mojo::internal::ContainerValidateParams f_interface_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::mojo::test::data_view::TestInterfaceInterfaceBase>>>(
        in_f_interface_array, buffer, &f_interface_array_writer, &f_interface_array_validate_params,
        context);
    (*output)->f_interface_array.Set(
        f_interface_array_writer.is_null() ? nullptr : f_interface_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_interface_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_interface_array in TestStruct struct");
    decltype(Traits::f_nested_array(input)) in_f_nested_array = Traits::f_nested_array(input);
    typename decltype((*output)->f_nested_array)::BaseType::BufferWriter
        f_nested_array_writer;
    const mojo::internal::ContainerValidateParams f_nested_array_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>>(
        in_f_nested_array, buffer, &f_nested_array_writer, &f_nested_array_validate_params,
        context);
    (*output)->f_nested_array.Set(
        f_nested_array_writer.is_null() ? nullptr : f_nested_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_nested_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_nested_array in TestStruct struct");
    decltype(Traits::f_struct_array(input)) in_f_struct_array = Traits::f_struct_array(input);
    typename decltype((*output)->f_struct_array)::BaseType::BufferWriter
        f_struct_array_writer;
    const mojo::internal::ContainerValidateParams f_struct_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::data_view::NestedStructDataView>>(
        in_f_struct_array, buffer, &f_struct_array_writer, &f_struct_array_validate_params,
        context);
    (*output)->f_struct_array.Set(
        f_struct_array_writer.is_null() ? nullptr : f_struct_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_struct_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_struct_array in TestStruct struct");
    decltype(Traits::f_union_array(input)) in_f_union_array = Traits::f_union_array(input);
    typename decltype((*output)->f_union_array)::BaseType::BufferWriter
        f_union_array_writer;
    const mojo::internal::ContainerValidateParams f_union_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::data_view::TestUnionDataView>>(
        in_f_union_array, buffer, &f_union_array_writer, &f_union_array_validate_params,
        context);
    (*output)->f_union_array.Set(
        f_union_array_writer.is_null() ? nullptr : f_union_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_union_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_union_array in TestStruct struct");
    decltype(Traits::f_map(input)) in_f_map = Traits::f_map(input);
    typename decltype((*output)->f_map)::BaseType::BufferWriter
        f_map_writer;
    const mojo::internal::ContainerValidateParams f_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, int32_t>>(
        in_f_map, buffer, &f_map_writer, &f_map_validate_params,
        context);
    (*output)->f_map.Set(
        f_map_writer.is_null() ? nullptr : f_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f_map in TestStruct struct");
  }

  static bool Deserialize(::mojo::test::data_view::internal::TestStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::data_view::TestStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::data_view::TestUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::data_view::TestUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::data_view::internal::TestUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::data_view::internal::TestUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::data_view::TestUnionDataView::Tag::F_BOOL: {
        decltype(Traits::f_bool(input))
            in_f_bool = Traits::f_bool(input);
        result->data.f_f_bool = in_f_bool;
        break;
      }
      case ::mojo::test::data_view::TestUnionDataView::Tag::F_INT32: {
        decltype(Traits::f_int32(input))
            in_f_int32 = Traits::f_int32(input);
        result->data.f_f_int32 = in_f_int32;
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::data_view::internal::TestUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::data_view::TestUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {
namespace data_view {



inline void TestStructDataView::GetFStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->f_string.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestStructDataView::GetFStructDataView(
    NestedStructDataView* output) {
  auto pointer = data_->f_struct.Get();
  *output = NestedStructDataView(pointer, context_);
}
inline void TestStructDataView::GetFNativeStructDataView(
    TestNativeStructDataView* output) {
  auto pointer = data_->f_native_struct.Get();
  *output = TestNativeStructDataView(pointer, context_);
}
inline void TestStructDataView::GetFBoolArrayDataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->f_bool_array.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}
inline void TestStructDataView::GetFInt32ArrayDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->f_int32_array.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void TestStructDataView::GetFEnumArrayDataView(
    mojo::ArrayDataView<TestEnum>* output) {
  auto pointer = data_->f_enum_array.Get();
  *output = mojo::ArrayDataView<TestEnum>(pointer, context_);
}
inline void TestStructDataView::GetFInterfaceArrayDataView(
    mojo::ArrayDataView<mojo::InterfacePtrDataView<TestInterfaceInterfaceBase>>* output) {
  auto pointer = data_->f_interface_array.Get();
  *output = mojo::ArrayDataView<mojo::InterfacePtrDataView<TestInterfaceInterfaceBase>>(pointer, context_);
}
inline void TestStructDataView::GetFNestedArrayDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>* output) {
  auto pointer = data_->f_nested_array.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<int32_t>>(pointer, context_);
}
inline void TestStructDataView::GetFStructArrayDataView(
    mojo::ArrayDataView<NestedStructDataView>* output) {
  auto pointer = data_->f_struct_array.Get();
  *output = mojo::ArrayDataView<NestedStructDataView>(pointer, context_);
}
inline void TestStructDataView::GetFUnionArrayDataView(
    mojo::ArrayDataView<TestUnionDataView>* output) {
  auto pointer = data_->f_union_array.Get();
  *output = mojo::ArrayDataView<TestUnionDataView>(pointer, context_);
}
inline void TestStructDataView::GetFMapDataView(
    mojo::MapDataView<mojo::StringDataView, int32_t>* output) {
  auto pointer = data_->f_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, int32_t>(pointer, context_);
}




}  // namespace data_view
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_SHARED_H_