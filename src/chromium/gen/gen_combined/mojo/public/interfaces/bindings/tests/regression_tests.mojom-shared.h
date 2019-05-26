// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/regression_tests.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace regression_tests {
class EdgeDataView;

class VertexDataView;

class EmptyStructDataView;

class ADataView;

class BDataView;

class HandlesNameCollisionStructDataView;

class HandlesHandleNameCollisionStructDataView;

class HandlesUnionNameCollisionStructDataView;

class HandlesNameCollisionUnionDataView;


}  // namespace regression_tests

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::regression_tests::EdgeDataView> {
  using Data = ::regression_tests::internal::Edge_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::VertexDataView> {
  using Data = ::regression_tests::internal::Vertex_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::EmptyStructDataView> {
  using Data = ::regression_tests::internal::EmptyStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::ADataView> {
  using Data = ::regression_tests::internal::A_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::BDataView> {
  using Data = ::regression_tests::internal::B_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::HandlesNameCollisionStructDataView> {
  using Data = ::regression_tests::internal::HandlesNameCollisionStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::HandlesHandleNameCollisionStructDataView> {
  using Data = ::regression_tests::internal::HandlesHandleNameCollisionStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::HandlesUnionNameCollisionStructDataView> {
  using Data = ::regression_tests::internal::HandlesUnionNameCollisionStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::regression_tests::HandlesNameCollisionUnionDataView> {
  using Data = ::regression_tests::internal::HandlesNameCollisionUnion_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace regression_tests {


enum class EnumWithReference : int32_t {
  
  k_STEREO_AND_KEYBOARD_MIC = 30,
  
  k_MAX = EnumWithReference::k_STEREO_AND_KEYBOARD_MIC,
  kMinValue = 30,
  kMaxValue = 30,
};

 std::ostream& operator<<(std::ostream& os, EnumWithReference value);
inline bool IsKnownEnumValue(EnumWithReference value) {
  return internal::EnumWithReference_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EnumWithLowercase : int32_t {
  
  PlanarF16,
  
  PlanarF32,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, EnumWithLowercase value);
inline bool IsKnownEnumValue(EnumWithLowercase value) {
  return internal::EnumWithLowercase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EnumWithNumbers : int32_t {
  
  k_2_1 = 4,
  kMinValue = 4,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, EnumWithNumbers value);
inline bool IsKnownEnumValue(EnumWithNumbers value) {
  return internal::EnumWithNumbers_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EnumWithK : int32_t {
  
  K = 0,
  kMinValue = 0,
  kMaxValue = 0,
};

 std::ostream& operator<<(std::ostream& os, EnumWithK value);
inline bool IsKnownEnumValue(EnumWithK value) {
  return internal::EnumWithK_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CheckMethodWithEmptyResponseInterfaceBase {};

using CheckMethodWithEmptyResponsePtrDataView =
    mojo::InterfacePtrDataView<CheckMethodWithEmptyResponseInterfaceBase>;
using CheckMethodWithEmptyResponseRequestDataView =
    mojo::InterfaceRequestDataView<CheckMethodWithEmptyResponseInterfaceBase>;
using CheckMethodWithEmptyResponseAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CheckMethodWithEmptyResponseInterfaceBase>;
using CheckMethodWithEmptyResponseAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CheckMethodWithEmptyResponseInterfaceBase>;
class CheckNameCollisionInterfaceBase {};

using CheckNameCollisionPtrDataView =
    mojo::InterfacePtrDataView<CheckNameCollisionInterfaceBase>;
using CheckNameCollisionRequestDataView =
    mojo::InterfaceRequestDataView<CheckNameCollisionInterfaceBase>;
using CheckNameCollisionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CheckNameCollisionInterfaceBase>;
using CheckNameCollisionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CheckNameCollisionInterfaceBase>;
class HandlesNameCollisionInterfaceInterfaceBase {};

using HandlesNameCollisionInterfacePtrDataView =
    mojo::InterfacePtrDataView<HandlesNameCollisionInterfaceInterfaceBase>;
using HandlesNameCollisionInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<HandlesNameCollisionInterfaceInterfaceBase>;
using HandlesNameCollisionInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HandlesNameCollisionInterfaceInterfaceBase>;
using HandlesNameCollisionInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HandlesNameCollisionInterfaceInterfaceBase>;
class EdgeDataView {
 public:
  EdgeDataView() {}

  EdgeDataView(
      internal::Edge_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetVDataView(
      VertexDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadV(UserType* output) {
    auto* pointer = data_->v.Get();
    return mojo::internal::Deserialize<::regression_tests::VertexDataView>(
        pointer, output, context_);
  }
 private:
  internal::Edge_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VertexDataView {
 public:
  VertexDataView() {}

  VertexDataView(
      internal::Vertex_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEDataView(
      EmptyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadE(UserType* output) {
    auto* pointer = data_->e.Get();
    return mojo::internal::Deserialize<::regression_tests::EmptyStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::Vertex_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmptyStructDataView {
 public:
  EmptyStructDataView() {}

  EmptyStructDataView(
      internal::EmptyStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::EmptyStruct_Data* data_ = nullptr;
};

class ADataView {
 public:
  ADataView() {}

  ADataView(
      internal::A_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBDataView(
      BDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadB(UserType* output) {
    auto* pointer = data_->b.Get();
    return mojo::internal::Deserialize<::regression_tests::BDataView>(
        pointer, output, context_);
  }
 private:
  internal::A_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BDataView {
 public:
  BDataView() {}

  BDataView(
      internal::B_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetADataView(
      ADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadA(UserType* output) {
    auto* pointer = data_->a.Get();
    return mojo::internal::Deserialize<::regression_tests::ADataView>(
        pointer, output, context_);
  }
 private:
  internal::B_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandlesNameCollisionStructDataView {
 public:
  HandlesNameCollisionStructDataView() {}

  HandlesNameCollisionStructDataView(
      internal::HandlesNameCollisionStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHandlesDataView(
      EmptyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<::regression_tests::EmptyStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::HandlesNameCollisionStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandlesHandleNameCollisionStructDataView {
 public:
  HandlesHandleNameCollisionStructDataView() {}

  HandlesHandleNameCollisionStructDataView(
      internal::HandlesHandleNameCollisionStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeHandles() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handles, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HandlesHandleNameCollisionStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandlesUnionNameCollisionStructDataView {
 public:
  HandlesUnionNameCollisionStructDataView() {}

  HandlesUnionNameCollisionStructDataView(
      internal::HandlesUnionNameCollisionStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHandlesDataView(
      HandlesNameCollisionUnionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = !data_->handles.is_null() ? &data_->handles : nullptr;
    return mojo::internal::Deserialize<::regression_tests::HandlesNameCollisionUnionDataView>(
        pointer, output, context_);
  }
 private:
  internal::HandlesUnionNameCollisionStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandlesNameCollisionUnionDataView {
 public:
  using Tag = internal::HandlesNameCollisionUnion_Data::HandlesNameCollisionUnion_Tag;

  HandlesNameCollisionUnionDataView() {}

  HandlesNameCollisionUnionDataView(
      internal::HandlesNameCollisionUnion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_handles() const { return data_->tag == Tag::HANDLES; }
  int32_t handles() const {
    DCHECK(is_handles());
    return data_->data.f_handles;
  }

 private:
  internal::HandlesNameCollisionUnion_Data* data_ = nullptr;
};



}  // namespace regression_tests

namespace std {

template <>
struct hash<::regression_tests::EnumWithReference>
    : public mojo::internal::EnumHashImpl<::regression_tests::EnumWithReference> {};

template <>
struct hash<::regression_tests::EnumWithLowercase>
    : public mojo::internal::EnumHashImpl<::regression_tests::EnumWithLowercase> {};

template <>
struct hash<::regression_tests::EnumWithNumbers>
    : public mojo::internal::EnumHashImpl<::regression_tests::EnumWithNumbers> {};

template <>
struct hash<::regression_tests::EnumWithK>
    : public mojo::internal::EnumHashImpl<::regression_tests::EnumWithK> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::regression_tests::EnumWithReference, ::regression_tests::EnumWithReference> {
  static ::regression_tests::EnumWithReference ToMojom(::regression_tests::EnumWithReference input) { return input; }
  static bool FromMojom(::regression_tests::EnumWithReference input, ::regression_tests::EnumWithReference* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::EnumWithReference, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::regression_tests::EnumWithReference, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::regression_tests::EnumWithReference>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::regression_tests::EnumWithLowercase, ::regression_tests::EnumWithLowercase> {
  static ::regression_tests::EnumWithLowercase ToMojom(::regression_tests::EnumWithLowercase input) { return input; }
  static bool FromMojom(::regression_tests::EnumWithLowercase input, ::regression_tests::EnumWithLowercase* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::EnumWithLowercase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::regression_tests::EnumWithLowercase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::regression_tests::EnumWithLowercase>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::regression_tests::EnumWithNumbers, ::regression_tests::EnumWithNumbers> {
  static ::regression_tests::EnumWithNumbers ToMojom(::regression_tests::EnumWithNumbers input) { return input; }
  static bool FromMojom(::regression_tests::EnumWithNumbers input, ::regression_tests::EnumWithNumbers* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::EnumWithNumbers, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::regression_tests::EnumWithNumbers, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::regression_tests::EnumWithNumbers>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::regression_tests::EnumWithK, ::regression_tests::EnumWithK> {
  static ::regression_tests::EnumWithK ToMojom(::regression_tests::EnumWithK input) { return input; }
  static bool FromMojom(::regression_tests::EnumWithK input, ::regression_tests::EnumWithK* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::EnumWithK, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::regression_tests::EnumWithK, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::regression_tests::EnumWithK>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::EdgeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::EdgeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::Edge_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::v(input)) in_v = Traits::v(input);
    typename decltype((*output)->v)::BaseType::BufferWriter
        v_writer;
    mojo::internal::Serialize<::regression_tests::VertexDataView>(
        in_v, buffer, &v_writer, context);
    (*output)->v.Set(
        v_writer.is_null() ? nullptr : v_writer.data());
  }

  static bool Deserialize(::regression_tests::internal::Edge_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::EdgeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::VertexDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::VertexDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::Vertex_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::e(input)) in_e = Traits::e(input);
    typename decltype((*output)->e)::BaseType::BufferWriter
        e_writer;
    mojo::internal::Serialize<::regression_tests::EmptyStructDataView>(
        in_e, buffer, &e_writer, context);
    (*output)->e.Set(
        e_writer.is_null() ? nullptr : e_writer.data());
  }

  static bool Deserialize(::regression_tests::internal::Vertex_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::VertexDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::EmptyStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::EmptyStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::EmptyStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
  }

  static bool Deserialize(::regression_tests::internal::EmptyStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::EmptyStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::ADataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::ADataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::A_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::b(input)) in_b = Traits::b(input);
    typename decltype((*output)->b)::BaseType::BufferWriter
        b_writer;
    mojo::internal::Serialize<::regression_tests::BDataView>(
        in_b, buffer, &b_writer, context);
    (*output)->b.Set(
        b_writer.is_null() ? nullptr : b_writer.data());
  }

  static bool Deserialize(::regression_tests::internal::A_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::ADataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::BDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::BDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::B_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::a(input)) in_a = Traits::a(input);
    typename decltype((*output)->a)::BaseType::BufferWriter
        a_writer;
    mojo::internal::Serialize<::regression_tests::ADataView>(
        in_a, buffer, &a_writer, context);
    (*output)->a.Set(
        a_writer.is_null() ? nullptr : a_writer.data());
  }

  static bool Deserialize(::regression_tests::internal::B_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::BDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::HandlesNameCollisionStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::HandlesNameCollisionStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::HandlesNameCollisionStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::handles(input)) in_handles = Traits::handles(input);
    typename decltype((*output)->handles)::BaseType::BufferWriter
        handles_writer;
    mojo::internal::Serialize<::regression_tests::EmptyStructDataView>(
        in_handles, buffer, &handles_writer, context);
    (*output)->handles.Set(
        handles_writer.is_null() ? nullptr : handles_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->handles.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null handles in HandlesNameCollisionStruct struct");
  }

  static bool Deserialize(::regression_tests::internal::HandlesNameCollisionStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::HandlesNameCollisionStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::HandlesHandleNameCollisionStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::HandlesHandleNameCollisionStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::HandlesHandleNameCollisionStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::handles(input)) in_handles = Traits::handles(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_handles, &(*output)->handles, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->handles),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid handles in HandlesHandleNameCollisionStruct struct");
  }

  static bool Deserialize(::regression_tests::internal::HandlesHandleNameCollisionStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::HandlesHandleNameCollisionStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::HandlesUnionNameCollisionStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::regression_tests::HandlesUnionNameCollisionStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::HandlesUnionNameCollisionStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::handles(input)) in_handles = Traits::handles(input);
    typename decltype((*output)->handles)::BufferWriter handles_writer;
    handles_writer.AllocateInline(buffer, &(*output)->handles);
    mojo::internal::Serialize<::regression_tests::HandlesNameCollisionUnionDataView>(
        in_handles, buffer, &handles_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->handles.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null handles in HandlesUnionNameCollisionStruct struct");
  }

  static bool Deserialize(::regression_tests::internal::HandlesUnionNameCollisionStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::HandlesUnionNameCollisionStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::regression_tests::HandlesNameCollisionUnionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::regression_tests::HandlesNameCollisionUnionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::regression_tests::internal::HandlesNameCollisionUnion_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::regression_tests::internal::HandlesNameCollisionUnion_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::regression_tests::HandlesNameCollisionUnionDataView::Tag::HANDLES: {
        decltype(Traits::handles(input))
            in_handles = Traits::handles(input);
        result->data.f_handles = in_handles;
        break;
      }
    }
  }

  static bool Deserialize(::regression_tests::internal::HandlesNameCollisionUnion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::regression_tests::HandlesNameCollisionUnionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace regression_tests {

inline void EdgeDataView::GetVDataView(
    VertexDataView* output) {
  auto pointer = data_->v.Get();
  *output = VertexDataView(pointer, context_);
}


inline void VertexDataView::GetEDataView(
    EmptyStructDataView* output) {
  auto pointer = data_->e.Get();
  *output = EmptyStructDataView(pointer, context_);
}




inline void ADataView::GetBDataView(
    BDataView* output) {
  auto pointer = data_->b.Get();
  *output = BDataView(pointer, context_);
}


inline void BDataView::GetADataView(
    ADataView* output) {
  auto pointer = data_->a.Get();
  *output = ADataView(pointer, context_);
}


inline void HandlesNameCollisionStructDataView::GetHandlesDataView(
    EmptyStructDataView* output) {
  auto pointer = data_->handles.Get();
  *output = EmptyStructDataView(pointer, context_);
}




inline void HandlesUnionNameCollisionStructDataView::GetHandlesDataView(
    HandlesNameCollisionUnionDataView* output) {
  auto pointer = &data_->handles;
  *output = HandlesNameCollisionUnionDataView(pointer, context_);
}




}  // namespace regression_tests

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_SHARED_H_