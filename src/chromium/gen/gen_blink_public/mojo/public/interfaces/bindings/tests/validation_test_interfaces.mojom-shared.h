// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/validation_test_interfaces.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class StructADataView;

class StructBDataView;

class StructCDataView;

class StructDDataView;

class StructEDataView;

class StructFDataView;

class StructGDataView;

class BasicStructDataView;

class StructWithEnumDataView;

class RecursiveDataView;

class UnionADataView;


}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::StructADataView> {
  using Data = ::mojo::test::internal::StructA_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructBDataView> {
  using Data = ::mojo::test::internal::StructB_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructCDataView> {
  using Data = ::mojo::test::internal::StructC_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructDDataView> {
  using Data = ::mojo::test::internal::StructD_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructEDataView> {
  using Data = ::mojo::test::internal::StructE_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructFDataView> {
  using Data = ::mojo::test::internal::StructF_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructGDataView> {
  using Data = ::mojo::test::internal::StructG_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::BasicStructDataView> {
  using Data = ::mojo::test::internal::BasicStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::StructWithEnumDataView> {
  using Data = ::mojo::test::internal::StructWithEnum_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::RecursiveDataView> {
  using Data = ::mojo::test::internal::Recursive_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::UnionADataView> {
  using Data = ::mojo::test::internal::UnionA_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {


enum class EnumA : int32_t {
  
  ENUM_A_0,
  
  ENUM_A_1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, EnumA value);
inline bool IsKnownEnumValue(EnumA value) {
  return internal::EnumA_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EnumB : int32_t {
  
  ENUM_B_0,
  
  ENUM_B_1,
  
  ENUM_B_2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, EnumB value);
inline bool IsKnownEnumValue(EnumB value) {
  return internal::EnumB_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EmptyEnum : int32_t {
};

 std::ostream& operator<<(std::ostream& os, EmptyEnum value);
inline bool IsKnownEnumValue(EmptyEnum value) {
  return internal::EmptyEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ExtensibleEmptyEnum : int32_t {
};

 std::ostream& operator<<(std::ostream& os, ExtensibleEmptyEnum value);
inline bool IsKnownEnumValue(ExtensibleEmptyEnum value) {
  return internal::ExtensibleEmptyEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BasicEnum : int32_t {
  
  A,
  
  B,
  
  C = BasicEnum::A,
  
  D = -3,
  
  E = 0xA,
  kMinValue = -3,
  kMaxValue = 10,
};

 std::ostream& operator<<(std::ostream& os, BasicEnum value);
inline bool IsKnownEnumValue(BasicEnum value) {
  return internal::BasicEnum_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class StructWithEnum_EnumWithin : int32_t {
  
  A,
  
  B,
  
  C,
  
  D,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, StructWithEnum_EnumWithin value);
inline bool IsKnownEnumValue(StructWithEnum_EnumWithin value) {
  return internal::StructWithEnum_EnumWithin_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class InterfaceAInterfaceBase {};

using InterfaceAPtrDataView =
    mojo::InterfacePtrDataView<InterfaceAInterfaceBase>;
using InterfaceARequestDataView =
    mojo::InterfaceRequestDataView<InterfaceAInterfaceBase>;
using InterfaceAAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterfaceAInterfaceBase>;
using InterfaceAAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterfaceAInterfaceBase>;
class BoundsCheckTestInterfaceInterfaceBase {};

using BoundsCheckTestInterfacePtrDataView =
    mojo::InterfacePtrDataView<BoundsCheckTestInterfaceInterfaceBase>;
using BoundsCheckTestInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<BoundsCheckTestInterfaceInterfaceBase>;
using BoundsCheckTestInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BoundsCheckTestInterfaceInterfaceBase>;
using BoundsCheckTestInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BoundsCheckTestInterfaceInterfaceBase>;
class ConformanceTestInterfaceInterfaceBase {};

using ConformanceTestInterfacePtrDataView =
    mojo::InterfacePtrDataView<ConformanceTestInterfaceInterfaceBase>;
using ConformanceTestInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<ConformanceTestInterfaceInterfaceBase>;
using ConformanceTestInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ConformanceTestInterfaceInterfaceBase>;
using ConformanceTestInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ConformanceTestInterfaceInterfaceBase>;
class IntegrationTestInterfaceInterfaceBase {};

using IntegrationTestInterfacePtrDataView =
    mojo::InterfacePtrDataView<IntegrationTestInterfaceInterfaceBase>;
using IntegrationTestInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<IntegrationTestInterfaceInterfaceBase>;
using IntegrationTestInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IntegrationTestInterfaceInterfaceBase>;
using IntegrationTestInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IntegrationTestInterfaceInterfaceBase>;
class StructADataView {
 public:
  StructADataView() {}

  StructADataView(
      internal::StructA_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t i() const {
    return data_->i;
  }
 private:
  internal::StructA_Data* data_ = nullptr;
};

class StructBDataView {
 public:
  StructBDataView() {}

  StructBDataView(
      internal::StructB_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStructADataView(
      StructADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStructA(UserType* output) {
    auto* pointer = data_->struct_a.Get();
    return mojo::internal::Deserialize<::mojo::test::StructADataView>(
        pointer, output, context_);
  }
 private:
  internal::StructB_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StructCDataView {
 public:
  StructCDataView() {}

  StructCDataView(
      internal::StructC_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::StructC_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StructDDataView {
 public:
  StructDDataView() {}

  StructDDataView(
      internal::StructD_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessagePipesDataView(
      mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessagePipes(UserType* output) {
    auto* pointer = data_->message_pipes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
 private:
  internal::StructD_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StructEDataView {
 public:
  StructEDataView() {}

  StructEDataView(
      internal::StructE_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStructDDataView(
      StructDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStructD(UserType* output) {
    auto* pointer = data_->struct_d.Get();
    return mojo::internal::Deserialize<::mojo::test::StructDDataView>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeConsumerHandle TakeDataPipeConsumer() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->data_pipe_consumer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::StructE_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StructFDataView {
 public:
  StructFDataView() {}

  StructFDataView(
      internal::StructF_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFixedSizeArrayDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFixedSizeArray(UserType* output) {
    auto* pointer = data_->fixed_size_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::StructF_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StructGDataView {
 public:
  StructGDataView() {}

  StructGDataView(
      internal::StructG_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t i() const {
    return data_->i;
  }
  inline void GetStructADataView(
      StructADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStructA(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->struct_a.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo::test::StructADataView>(
        pointer, output, context_);
  }
  inline void GetStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStr(UserType* output) {
    auto* pointer = data_->header_.version >= 3
                    ? data_->str.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool b() const {
    if (data_->header_.version < 3)
      return bool{};
    return data_->b;
  }
 private:
  internal::StructG_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BasicStructDataView {
 public:
  BasicStructDataView() {}

  BasicStructDataView(
      internal::BasicStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t a() const {
    return data_->a;
  }
 private:
  internal::BasicStruct_Data* data_ = nullptr;
};

class StructWithEnumDataView {
 public:
  StructWithEnumDataView() {}

  StructWithEnumDataView(
      internal::StructWithEnum_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::StructWithEnum_Data* data_ = nullptr;
};

class RecursiveDataView {
 public:
  RecursiveDataView() {}

  RecursiveDataView(
      internal::Recursive_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecursiveDataView(
      RecursiveDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecursive(UserType* output) {
    auto* pointer = data_->recursive.Get();
    return mojo::internal::Deserialize<::mojo::test::RecursiveDataView>(
        pointer, output, context_);
  }
 private:
  internal::Recursive_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UnionADataView {
 public:
  using Tag = internal::UnionA_Data::UnionA_Tag;

  UnionADataView() {}

  UnionADataView(
      internal::UnionA_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_struct_a() const { return data_->tag == Tag::STRUCT_A; }
  inline void GetStructADataView(
      StructADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStructA(UserType* output) {
    DCHECK(is_struct_a());
    return mojo::internal::Deserialize<::mojo::test::StructADataView>(
        data_->data.f_struct_a.Get(), output, context_);
  }
  bool is_b() const { return data_->tag == Tag::B; }
  bool b() const {
    DCHECK(is_b());
    return data_->data.f_b;
  }

 private:
  internal::UnionA_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace test
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::test::EnumA>
    : public mojo::internal::EnumHashImpl<::mojo::test::EnumA> {};

template <>
struct hash<::mojo::test::EnumB>
    : public mojo::internal::EnumHashImpl<::mojo::test::EnumB> {};

template <>
struct hash<::mojo::test::EmptyEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::EmptyEnum> {};

template <>
struct hash<::mojo::test::ExtensibleEmptyEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::ExtensibleEmptyEnum> {};

template <>
struct hash<::mojo::test::BasicEnum>
    : public mojo::internal::EnumHashImpl<::mojo::test::BasicEnum> {};

template <>
struct hash<::mojo::test::StructWithEnum_EnumWithin>
    : public mojo::internal::EnumHashImpl<::mojo::test::StructWithEnum_EnumWithin> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::test::EnumA, ::mojo::test::EnumA> {
  static ::mojo::test::EnumA ToMojom(::mojo::test::EnumA input) { return input; }
  static bool FromMojom(::mojo::test::EnumA input, ::mojo::test::EnumA* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::EnumA, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::EnumA, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::EnumA>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::EnumB, ::mojo::test::EnumB> {
  static ::mojo::test::EnumB ToMojom(::mojo::test::EnumB input) { return input; }
  static bool FromMojom(::mojo::test::EnumB input, ::mojo::test::EnumB* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::EnumB, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::EnumB, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::EnumB>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::EmptyEnum, ::mojo::test::EmptyEnum> {
  static ::mojo::test::EmptyEnum ToMojom(::mojo::test::EmptyEnum input) { return input; }
  static bool FromMojom(::mojo::test::EmptyEnum input, ::mojo::test::EmptyEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::EmptyEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::EmptyEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::EmptyEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::ExtensibleEmptyEnum, ::mojo::test::ExtensibleEmptyEnum> {
  static ::mojo::test::ExtensibleEmptyEnum ToMojom(::mojo::test::ExtensibleEmptyEnum input) { return input; }
  static bool FromMojom(::mojo::test::ExtensibleEmptyEnum input, ::mojo::test::ExtensibleEmptyEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ExtensibleEmptyEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::ExtensibleEmptyEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::ExtensibleEmptyEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::BasicEnum, ::mojo::test::BasicEnum> {
  static ::mojo::test::BasicEnum ToMojom(::mojo::test::BasicEnum input) { return input; }
  static bool FromMojom(::mojo::test::BasicEnum input, ::mojo::test::BasicEnum* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::BasicEnum, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::BasicEnum, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::BasicEnum>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::test::StructWithEnum_EnumWithin, ::mojo::test::StructWithEnum_EnumWithin> {
  static ::mojo::test::StructWithEnum_EnumWithin ToMojom(::mojo::test::StructWithEnum_EnumWithin input) { return input; }
  static bool FromMojom(::mojo::test::StructWithEnum_EnumWithin input, ::mojo::test::StructWithEnum_EnumWithin* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructWithEnum_EnumWithin, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::StructWithEnum_EnumWithin, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::StructWithEnum_EnumWithin>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructADataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructADataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructA_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->i = Traits::i(input);
  }

  static bool Deserialize(::mojo::test::internal::StructA_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructADataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructBDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructBDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructB_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::struct_a(input)) in_struct_a = Traits::struct_a(input);
    typename decltype((*output)->struct_a)::BaseType::BufferWriter
        struct_a_writer;
    mojo::internal::Serialize<::mojo::test::StructADataView>(
        in_struct_a, buffer, &struct_a_writer, context);
    (*output)->struct_a.Set(
        struct_a_writer.is_null() ? nullptr : struct_a_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->struct_a.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null struct_a in StructB struct");
  }

  static bool Deserialize(::mojo::test::internal::StructB_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructBDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructCDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructCDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructC_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in StructC struct");
  }

  static bool Deserialize(::mojo::test::internal::StructC_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructCDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructDDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructDDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructD_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::message_pipes(input)) in_message_pipes = Traits::message_pipes(input);
    typename decltype((*output)->message_pipes)::BaseType::BufferWriter
        message_pipes_writer;
    const mojo::internal::ContainerValidateParams message_pipes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        in_message_pipes, buffer, &message_pipes_writer, &message_pipes_validate_params,
        context);
    (*output)->message_pipes.Set(
        message_pipes_writer.is_null() ? nullptr : message_pipes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message_pipes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message_pipes in StructD struct");
  }

  static bool Deserialize(::mojo::test::internal::StructD_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructDDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructEDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructEDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructE_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::struct_d(input)) in_struct_d = Traits::struct_d(input);
    typename decltype((*output)->struct_d)::BaseType::BufferWriter
        struct_d_writer;
    mojo::internal::Serialize<::mojo::test::StructDDataView>(
        in_struct_d, buffer, &struct_d_writer, context);
    (*output)->struct_d.Set(
        struct_d_writer.is_null() ? nullptr : struct_d_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->struct_d.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null struct_d in StructE struct");
    decltype(Traits::data_pipe_consumer(input)) in_data_pipe_consumer = Traits::data_pipe_consumer(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
        in_data_pipe_consumer, &(*output)->data_pipe_consumer, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->data_pipe_consumer),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid data_pipe_consumer in StructE struct");
  }

  static bool Deserialize(::mojo::test::internal::StructE_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructEDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructFDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructFDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructF_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::fixed_size_array(input)) in_fixed_size_array = Traits::fixed_size_array(input);
    typename decltype((*output)->fixed_size_array)::BaseType::BufferWriter
        fixed_size_array_writer;
    const mojo::internal::ContainerValidateParams fixed_size_array_validate_params(
        3, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_fixed_size_array, buffer, &fixed_size_array_writer, &fixed_size_array_validate_params,
        context);
    (*output)->fixed_size_array.Set(
        fixed_size_array_writer.is_null() ? nullptr : fixed_size_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fixed_size_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fixed_size_array in StructF struct");
  }

  static bool Deserialize(::mojo::test::internal::StructF_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructFDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructGDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructGDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructG_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->i = Traits::i(input);
    decltype(Traits::struct_a(input)) in_struct_a = Traits::struct_a(input);
    typename decltype((*output)->struct_a)::BaseType::BufferWriter
        struct_a_writer;
    mojo::internal::Serialize<::mojo::test::StructADataView>(
        in_struct_a, buffer, &struct_a_writer, context);
    (*output)->struct_a.Set(
        struct_a_writer.is_null() ? nullptr : struct_a_writer.data());
    decltype(Traits::str(input)) in_str = Traits::str(input);
    typename decltype((*output)->str)::BaseType::BufferWriter
        str_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_str, buffer, &str_writer, context);
    (*output)->str.Set(
        str_writer.is_null() ? nullptr : str_writer.data());
    (*output)->b = Traits::b(input);
  }

  static bool Deserialize(::mojo::test::internal::StructG_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructGDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::BasicStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::BasicStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::BasicStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->a = Traits::a(input);
  }

  static bool Deserialize(::mojo::test::internal::BasicStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::BasicStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructWithEnumDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructWithEnumDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructWithEnum_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
  }

  static bool Deserialize(::mojo::test::internal::StructWithEnum_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructWithEnumDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::RecursiveDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::RecursiveDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::Recursive_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::recursive(input)) in_recursive = Traits::recursive(input);
    typename decltype((*output)->recursive)::BaseType::BufferWriter
        recursive_writer;
    mojo::internal::Serialize<::mojo::test::RecursiveDataView>(
        in_recursive, buffer, &recursive_writer, context);
    (*output)->recursive.Set(
        recursive_writer.is_null() ? nullptr : recursive_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::Recursive_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::RecursiveDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::UnionADataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo::test::UnionADataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::UnionA_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo::test::internal::UnionA_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo::test::UnionADataView::Tag::STRUCT_A: {
        decltype(Traits::struct_a(input))
            in_struct_a = Traits::struct_a(input);
        typename decltype(result->data.f_struct_a)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo::test::StructADataView>(
            in_struct_a, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null struct_a in UnionA union");
        result->data.f_struct_a.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo::test::UnionADataView::Tag::B: {
        decltype(Traits::b(input))
            in_b = Traits::b(input);
        result->data.f_b = in_b;
        break;
      }
    }
  }

  static bool Deserialize(::mojo::test::internal::UnionA_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::UnionADataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {



inline void StructBDataView::GetStructADataView(
    StructADataView* output) {
  auto pointer = data_->struct_a.Get();
  *output = StructADataView(pointer, context_);
}


inline void StructCDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void StructDDataView::GetMessagePipesDataView(
    mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->message_pipes.Get();
  *output = mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>(pointer, context_);
}


inline void StructEDataView::GetStructDDataView(
    StructDDataView* output) {
  auto pointer = data_->struct_d.Get();
  *output = StructDDataView(pointer, context_);
}


inline void StructFDataView::GetFixedSizeArrayDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->fixed_size_array.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void StructGDataView::GetStructADataView(
    StructADataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->struct_a.Get() : nullptr;
  *output = StructADataView(pointer, context_);
}
inline void StructGDataView::GetStrDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_.version >= 3
                 ? data_->str.Get() : nullptr;
  *output = mojo::StringDataView(pointer, context_);
}






inline void RecursiveDataView::GetRecursiveDataView(
    RecursiveDataView* output) {
  auto pointer = data_->recursive.Get();
  *output = RecursiveDataView(pointer, context_);
}


inline void UnionADataView::GetStructADataView(
    StructADataView* output) {
  DCHECK(is_struct_a());
  *output = StructADataView(data_->data.f_struct_a.Get(), context_);
}


}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_SHARED_H_