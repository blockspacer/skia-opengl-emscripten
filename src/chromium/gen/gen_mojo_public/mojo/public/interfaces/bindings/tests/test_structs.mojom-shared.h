// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class NamedRegionDataView;

class RectPairDataView;

class EmptyStructDataView;

using UnmappedNativeStructDataView = mojo::native::NativeStructDataView;

class NoDefaultFieldValuesDataView;

class DefaultFieldValuesDataView;

class ScopedConstantsDataView;

class MapKeyTypesDataView;

class MapValueTypesDataView;

class ArrayValueTypesDataView;

class FloatNumberValuesDataView;

class IntegerNumberValuesDataView;

class UnsignedNumberValuesDataView;

class BitArrayValuesDataView;

class MultiVersionStructDataView;

class MultiVersionStructV0DataView;

class MultiVersionStructV1DataView;

class MultiVersionStructV3DataView;

class MultiVersionStructV5DataView;

class MultiVersionStructV7DataView;

class ReorderedStructDataView;

class ContainsInterfaceDataView;

class ContainsOtherDataView;

class ContainsInterfaceRequestDataView;

class SingleBoolStructDataView;

class ContainsHashableDataView;

class SimpleNestedStructDataView;



}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::NamedRegionDataView> {
  using Data = ::mojo::test::internal::NamedRegion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::RectPairDataView> {
  using Data = ::mojo::test::internal::RectPair_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::EmptyStructDataView> {
  using Data = ::mojo::test::internal::EmptyStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::NoDefaultFieldValuesDataView> {
  using Data = ::mojo::test::internal::NoDefaultFieldValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::DefaultFieldValuesDataView> {
  using Data = ::mojo::test::internal::DefaultFieldValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ScopedConstantsDataView> {
  using Data = ::mojo::test::internal::ScopedConstants_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MapKeyTypesDataView> {
  using Data = ::mojo::test::internal::MapKeyTypes_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MapValueTypesDataView> {
  using Data = ::mojo::test::internal::MapValueTypes_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ArrayValueTypesDataView> {
  using Data = ::mojo::test::internal::ArrayValueTypes_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::FloatNumberValuesDataView> {
  using Data = ::mojo::test::internal::FloatNumberValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::IntegerNumberValuesDataView> {
  using Data = ::mojo::test::internal::IntegerNumberValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::UnsignedNumberValuesDataView> {
  using Data = ::mojo::test::internal::UnsignedNumberValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::BitArrayValuesDataView> {
  using Data = ::mojo::test::internal::BitArrayValues_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MultiVersionStructDataView> {
  using Data = ::mojo::test::internal::MultiVersionStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MultiVersionStructV0DataView> {
  using Data = ::mojo::test::internal::MultiVersionStructV0_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MultiVersionStructV1DataView> {
  using Data = ::mojo::test::internal::MultiVersionStructV1_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MultiVersionStructV3DataView> {
  using Data = ::mojo::test::internal::MultiVersionStructV3_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MultiVersionStructV5DataView> {
  using Data = ::mojo::test::internal::MultiVersionStructV5_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::MultiVersionStructV7DataView> {
  using Data = ::mojo::test::internal::MultiVersionStructV7_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ReorderedStructDataView> {
  using Data = ::mojo::test::internal::ReorderedStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ContainsInterfaceDataView> {
  using Data = ::mojo::test::internal::ContainsInterface_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ContainsOtherDataView> {
  using Data = ::mojo::test::internal::ContainsOther_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ContainsInterfaceRequestDataView> {
  using Data = ::mojo::test::internal::ContainsInterfaceRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::SingleBoolStructDataView> {
  using Data = ::mojo::test::internal::SingleBoolStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::ContainsHashableDataView> {
  using Data = ::mojo::test::internal::ContainsHashable_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::SimpleNestedStructDataView> {
  using Data = ::mojo::test::internal::SimpleNestedStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {


enum class ScopedConstants_EType : int32_t {
  
  E0,
  
  E1,
  
  E2 = 10,
  
  E3 = ScopedConstants_EType::E2,
  
  E4,
  kMinValue = 0,
  kMaxValue = 11,
};

 std::ostream& operator<<(std::ostream& os, ScopedConstants_EType value);
inline bool IsKnownEnumValue(ScopedConstants_EType value) {
  return internal::ScopedConstants_EType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SomeInterfaceInterfaceBase {};

using SomeInterfacePtrDataView =
    mojo::InterfacePtrDataView<SomeInterfaceInterfaceBase>;
using SomeInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<SomeInterfaceInterfaceBase>;
using SomeInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SomeInterfaceInterfaceBase>;
using SomeInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SomeInterfaceInterfaceBase>;
class NamedRegionDataView {
 public:
  NamedRegionDataView() {}

  NamedRegionDataView(
      internal::NamedRegion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRectsDataView(
      mojo::ArrayDataView<::mojo::test::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRects(UserType* output) {
    auto* pointer = data_->rects.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::RectDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NamedRegion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RectPairDataView {
 public:
  RectPairDataView() {}

  RectPairDataView(
      internal::RectPair_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFirstDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirst(UserType* output) {
    auto* pointer = data_->first.Get();
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
  inline void GetSecondDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecond(UserType* output) {
    auto* pointer = data_->second.Get();
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::RectPair_Data* data_ = nullptr;
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

class NoDefaultFieldValuesDataView {
 public:
  NoDefaultFieldValuesDataView() {}

  NoDefaultFieldValuesDataView(
      internal::NoDefaultFieldValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool f0() const {
    return data_->f0;
  }
  int8_t f1() const {
    return data_->f1;
  }
  uint8_t f2() const {
    return data_->f2;
  }
  int16_t f3() const {
    return data_->f3;
  }
  uint16_t f4() const {
    return data_->f4;
  }
  int32_t f5() const {
    return data_->f5;
  }
  uint32_t f6() const {
    return data_->f6;
  }
  int64_t f7() const {
    return data_->f7;
  }
  uint64_t f8() const {
    return data_->f8;
  }
  float f9() const {
    return data_->f9;
  }
  double f10() const {
    return data_->f10;
  }
  inline void GetF11DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF11(UserType* output) {
    auto* pointer = data_->f11.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetF12DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF12(UserType* output) {
    auto* pointer = data_->f12.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeF13() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->f13, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeF14() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->f14, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeF15() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->f15, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedMessagePipeHandle TakeF16() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->f16, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeF17() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->f17, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeF18() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->f18, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedHandle TakeF19() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->f19, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedHandle TakeF20() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->f20, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedSharedBufferHandle TakeF21() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->f21, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedSharedBufferHandle TakeF22() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->f22, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetF23DataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF23(UserType* output) {
    auto* pointer = data_->f23.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetF24DataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF24(UserType* output) {
    auto* pointer = data_->f24.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetF25DataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF25(UserType* output) {
    auto* pointer = data_->f25.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetF26DataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF26(UserType* output) {
    auto* pointer = data_->f26.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetF27DataView(
      EmptyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF27(UserType* output) {
    auto* pointer = data_->f27.Get();
    return mojo::internal::Deserialize<::mojo::test::EmptyStructDataView>(
        pointer, output, context_);
  }
  inline void GetF28DataView(
      EmptyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF28(UserType* output) {
    auto* pointer = data_->f28.Get();
    return mojo::internal::Deserialize<::mojo::test::EmptyStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::NoDefaultFieldValues_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DefaultFieldValuesDataView {
 public:
  DefaultFieldValuesDataView() {}

  DefaultFieldValuesDataView(
      internal::DefaultFieldValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool f0() const {
    return data_->f0;
  }
  int8_t f1() const {
    return data_->f1;
  }
  uint8_t f2() const {
    return data_->f2;
  }
  int16_t f3() const {
    return data_->f3;
  }
  uint16_t f4() const {
    return data_->f4;
  }
  int32_t f5() const {
    return data_->f5;
  }
  uint32_t f6() const {
    return data_->f6;
  }
  int64_t f7() const {
    return data_->f7;
  }
  uint64_t f8() const {
    return data_->f8;
  }
  float f9() const {
    return data_->f9;
  }
  float f10() const {
    return data_->f10;
  }
  double f11() const {
    return data_->f11;
  }
  double f12() const {
    return data_->f12;
  }
  inline void GetF13DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF13(UserType* output) {
    auto* pointer = data_->f13.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetF14DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF14(UserType* output) {
    auto* pointer = data_->f14.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetF15DataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF15(UserType* output) {
    auto* pointer = data_->f15.Get();
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
  inline void GetF16DataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF16(UserType* output) {
    auto* pointer = data_->f16.Get();
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::DefaultFieldValues_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ScopedConstantsDataView {
 public:
  ScopedConstantsDataView() {}

  ScopedConstantsDataView(
      internal::ScopedConstants_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF0(UserType* output) const {
    auto data_value = data_->f0;
    return mojo::internal::Deserialize<::mojo::test::ScopedConstants_EType>(
        data_value, output);
  }

  ScopedConstants_EType f0() const {
    return static_cast<ScopedConstants_EType>(data_->f0);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF1(UserType* output) const {
    auto data_value = data_->f1;
    return mojo::internal::Deserialize<::mojo::test::ScopedConstants_EType>(
        data_value, output);
  }

  ScopedConstants_EType f1() const {
    return static_cast<ScopedConstants_EType>(data_->f1);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF2(UserType* output) const {
    auto data_value = data_->f2;
    return mojo::internal::Deserialize<::mojo::test::ScopedConstants_EType>(
        data_value, output);
  }

  ScopedConstants_EType f2() const {
    return static_cast<ScopedConstants_EType>(data_->f2);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF3(UserType* output) const {
    auto data_value = data_->f3;
    return mojo::internal::Deserialize<::mojo::test::ScopedConstants_EType>(
        data_value, output);
  }

  ScopedConstants_EType f3() const {
    return static_cast<ScopedConstants_EType>(data_->f3);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF4(UserType* output) const {
    auto data_value = data_->f4;
    return mojo::internal::Deserialize<::mojo::test::ScopedConstants_EType>(
        data_value, output);
  }

  ScopedConstants_EType f4() const {
    return static_cast<ScopedConstants_EType>(data_->f4);
  }
  int32_t f5() const {
    return data_->f5;
  }
  int32_t f6() const {
    return data_->f6;
  }
 private:
  internal::ScopedConstants_Data* data_ = nullptr;
};

class MapKeyTypesDataView {
 public:
  MapKeyTypesDataView() {}

  MapKeyTypesDataView(
      internal::MapKeyTypes_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetF1DataView(
      mojo::MapDataView<int8_t, int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF1(UserType* output) {
    auto* pointer = data_->f1.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int8_t, int8_t>>(
        pointer, output, context_);
  }
  inline void GetF2DataView(
      mojo::MapDataView<uint8_t, uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF2(UserType* output) {
    auto* pointer = data_->f2.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint8_t, uint8_t>>(
        pointer, output, context_);
  }
  inline void GetF3DataView(
      mojo::MapDataView<int16_t, int16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF3(UserType* output) {
    auto* pointer = data_->f3.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int16_t, int16_t>>(
        pointer, output, context_);
  }
  inline void GetF4DataView(
      mojo::MapDataView<uint16_t, uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF4(UserType* output) {
    auto* pointer = data_->f4.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint16_t, uint16_t>>(
        pointer, output, context_);
  }
  inline void GetF5DataView(
      mojo::MapDataView<int32_t, int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF5(UserType* output) {
    auto* pointer = data_->f5.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, int32_t>>(
        pointer, output, context_);
  }
  inline void GetF6DataView(
      mojo::MapDataView<uint32_t, uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF6(UserType* output) {
    auto* pointer = data_->f6.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint32_t, uint32_t>>(
        pointer, output, context_);
  }
  inline void GetF7DataView(
      mojo::MapDataView<int64_t, int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF7(UserType* output) {
    auto* pointer = data_->f7.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int64_t, int64_t>>(
        pointer, output, context_);
  }
  inline void GetF8DataView(
      mojo::MapDataView<uint64_t, uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF8(UserType* output) {
    auto* pointer = data_->f8.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint64_t, uint64_t>>(
        pointer, output, context_);
  }
  inline void GetF9DataView(
      mojo::MapDataView<float, float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF9(UserType* output) {
    auto* pointer = data_->f9.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<float, float>>(
        pointer, output, context_);
  }
  inline void GetF10DataView(
      mojo::MapDataView<double, double>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF10(UserType* output) {
    auto* pointer = data_->f10.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<double, double>>(
        pointer, output, context_);
  }
  inline void GetF11DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF11(UserType* output) {
    auto* pointer = data_->f11.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MapKeyTypes_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MapValueTypesDataView {
 public:
  MapValueTypesDataView() {}

  MapValueTypesDataView(
      internal::MapValueTypes_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetF0DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF0(UserType* output) {
    auto* pointer = data_->f0.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
  inline void GetF1DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF1(UserType* output) {
    auto* pointer = data_->f1.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
  inline void GetF2DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF2(UserType* output) {
    auto* pointer = data_->f2.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
  inline void GetF3DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF3(UserType* output) {
    auto* pointer = data_->f3.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
  inline void GetF4DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF4(UserType* output) {
    auto* pointer = data_->f4.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>>(
        pointer, output, context_);
  }
  inline void GetF5DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF5(UserType* output) {
    auto* pointer = data_->f5.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>>(
        pointer, output, context_);
  }
  inline void GetF6DataView(
      mojo::MapDataView<mojo::StringDataView, ::mojo::test::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF6(UserType* output) {
    auto* pointer = data_->f6.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::mojo::test::RectDataView>>(
        pointer, output, context_);
  }
  inline void GetF7DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF7(UserType* output) {
    auto* pointer = data_->f7.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>(
        pointer, output, context_);
  }
  inline void GetF8DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF8(UserType* output) {
    auto* pointer = data_->f8.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>>(
        pointer, output, context_);
  }
  inline void GetF9DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF9(UserType* output) {
    auto* pointer = data_->f9.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>(
        pointer, output, context_);
  }
  inline void GetF10DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ScopedHandle>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF10(UserType* output) {
    auto* pointer = data_->f10.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ScopedHandle>>>(
        pointer, output, context_);
  }
  inline void GetF11DataView(
      mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF11(UserType* output) {
    auto* pointer = data_->f11.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>>(
        pointer, output, context_);
  }
 private:
  internal::MapValueTypes_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ArrayValueTypesDataView {
 public:
  ArrayValueTypesDataView() {}

  ArrayValueTypesDataView(
      internal::ArrayValueTypes_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetF0DataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF0(UserType* output) {
    auto* pointer = data_->f0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        pointer, output, context_);
  }
  inline void GetF1DataView(
      mojo::ArrayDataView<int16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF1(UserType* output) {
    auto* pointer = data_->f1.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int16_t>>(
        pointer, output, context_);
  }
  inline void GetF2DataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF2(UserType* output) {
    auto* pointer = data_->f2.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetF3DataView(
      mojo::ArrayDataView<int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF3(UserType* output) {
    auto* pointer = data_->f3.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int64_t>>(
        pointer, output, context_);
  }
  inline void GetF4DataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF4(UserType* output) {
    auto* pointer = data_->f4.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  inline void GetF5DataView(
      mojo::ArrayDataView<double>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF5(UserType* output) {
    auto* pointer = data_->f5.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<double>>(
        pointer, output, context_);
  }
  inline void GetF6DataView(
      mojo::ArrayDataView<mojo::InterfacePtrDataView<SomeInterfaceInterfaceBase>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF6(UserType* output) {
    auto* pointer = data_->f6.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::mojo::test::SomeInterfaceInterfaceBase>>>(
        pointer, output, context_);
  }
  inline void GetF7DataView(
      mojo::ArrayDataView<mojo::InterfaceRequestDataView<SomeInterfaceInterfaceBase>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF7(UserType* output) {
    auto* pointer = data_->f7.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::InterfaceRequestDataView<::mojo::test::SomeInterfaceInterfaceBase>>>(
        pointer, output, context_);
  }
 private:
  internal::ArrayValueTypes_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FloatNumberValuesDataView {
 public:
  FloatNumberValuesDataView() {}

  FloatNumberValuesDataView(
      internal::FloatNumberValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double f0() const {
    return data_->f0;
  }
  double f1() const {
    return data_->f1;
  }
  double f2() const {
    return data_->f2;
  }
  float f3() const {
    return data_->f3;
  }
  float f4() const {
    return data_->f4;
  }
  float f5() const {
    return data_->f5;
  }
  float f6() const {
    return data_->f6;
  }
  double f7() const {
    return data_->f7;
  }
  double f8() const {
    return data_->f8;
  }
  double f9() const {
    return data_->f9;
  }
 private:
  internal::FloatNumberValues_Data* data_ = nullptr;
};

class IntegerNumberValuesDataView {
 public:
  IntegerNumberValuesDataView() {}

  IntegerNumberValuesDataView(
      internal::IntegerNumberValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int8_t f0() const {
    return data_->f0;
  }
  int8_t f1() const {
    return data_->f1;
  }
  int8_t f2() const {
    return data_->f2;
  }
  int8_t f3() const {
    return data_->f3;
  }
  int8_t f4() const {
    return data_->f4;
  }
  int16_t f5() const {
    return data_->f5;
  }
  int16_t f6() const {
    return data_->f6;
  }
  int16_t f7() const {
    return data_->f7;
  }
  int16_t f8() const {
    return data_->f8;
  }
  int16_t f9() const {
    return data_->f9;
  }
  int32_t f10() const {
    return data_->f10;
  }
  int32_t f11() const {
    return data_->f11;
  }
  int32_t f12() const {
    return data_->f12;
  }
  int32_t f13() const {
    return data_->f13;
  }
  int32_t f14() const {
    return data_->f14;
  }
  int64_t f15() const {
    return data_->f15;
  }
  int64_t f16() const {
    return data_->f16;
  }
  int64_t f17() const {
    return data_->f17;
  }
  int64_t f18() const {
    return data_->f18;
  }
  int64_t f19() const {
    return data_->f19;
  }
 private:
  internal::IntegerNumberValues_Data* data_ = nullptr;
};

class UnsignedNumberValuesDataView {
 public:
  UnsignedNumberValuesDataView() {}

  UnsignedNumberValuesDataView(
      internal::UnsignedNumberValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t f0() const {
    return data_->f0;
  }
  uint8_t f1() const {
    return data_->f1;
  }
  uint8_t f2() const {
    return data_->f2;
  }
  uint16_t f3() const {
    return data_->f3;
  }
  uint16_t f4() const {
    return data_->f4;
  }
  uint16_t f5() const {
    return data_->f5;
  }
  uint32_t f6() const {
    return data_->f6;
  }
  uint32_t f7() const {
    return data_->f7;
  }
  uint32_t f8() const {
    return data_->f8;
  }
  uint64_t f9() const {
    return data_->f9;
  }
  uint64_t f10() const {
    return data_->f10;
  }
  uint64_t f11() const {
    return data_->f11;
  }
 private:
  internal::UnsignedNumberValues_Data* data_ = nullptr;
};

class BitArrayValuesDataView {
 public:
  BitArrayValuesDataView() {}

  BitArrayValuesDataView(
      internal::BitArrayValues_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetF0DataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF0(UserType* output) {
    auto* pointer = data_->f0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
  inline void GetF1DataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF1(UserType* output) {
    auto* pointer = data_->f1.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
  inline void GetF2DataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF2(UserType* output) {
    auto* pointer = data_->f2.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
  inline void GetF3DataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF3(UserType* output) {
    auto* pointer = data_->f3.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
  inline void GetF4DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF4(UserType* output) {
    auto* pointer = data_->f4.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        pointer, output, context_);
  }
  inline void GetF5DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF5(UserType* output) {
    auto* pointer = data_->f5.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        pointer, output, context_);
  }
  inline void GetF6DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadF6(UserType* output) {
    auto* pointer = data_->f6.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        pointer, output, context_);
  }
 private:
  internal::BitArrayValues_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MultiVersionStructDataView {
 public:
  MultiVersionStructDataView() {}

  MultiVersionStructDataView(
      internal::MultiVersionStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
  inline void GetFRectDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFRect(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->f_rect.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
  inline void GetFStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFString(UserType* output) {
    auto* pointer = data_->header_.version >= 3
                    ? data_->f_string.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFArrayDataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFArray(UserType* output) {
    auto* pointer = data_->header_.version >= 5
                    ? data_->f_array.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeFMessagePipe() {
    mojo::ScopedMessagePipeHandle result;
    if (data_->header_.version < 7)
      return result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->f_message_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool f_bool() const {
    if (data_->header_.version < 7)
      return bool{};
    return data_->f_bool;
  }
  int16_t f_int16() const {
    if (data_->header_.version < 9)
      return int16_t{};
    return data_->f_int16;
  }
 private:
  internal::MultiVersionStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MultiVersionStructV0DataView {
 public:
  MultiVersionStructV0DataView() {}

  MultiVersionStructV0DataView(
      internal::MultiVersionStructV0_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
 private:
  internal::MultiVersionStructV0_Data* data_ = nullptr;
};

class MultiVersionStructV1DataView {
 public:
  MultiVersionStructV1DataView() {}

  MultiVersionStructV1DataView(
      internal::MultiVersionStructV1_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
  inline void GetFRectDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFRect(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->f_rect.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
 private:
  internal::MultiVersionStructV1_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MultiVersionStructV3DataView {
 public:
  MultiVersionStructV3DataView() {}

  MultiVersionStructV3DataView(
      internal::MultiVersionStructV3_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
  inline void GetFRectDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFRect(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->f_rect.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
  inline void GetFStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFString(UserType* output) {
    auto* pointer = data_->header_.version >= 3
                    ? data_->f_string.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MultiVersionStructV3_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MultiVersionStructV5DataView {
 public:
  MultiVersionStructV5DataView() {}

  MultiVersionStructV5DataView(
      internal::MultiVersionStructV5_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
  inline void GetFRectDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFRect(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->f_rect.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
  inline void GetFStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFString(UserType* output) {
    auto* pointer = data_->header_.version >= 3
                    ? data_->f_string.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFArrayDataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFArray(UserType* output) {
    auto* pointer = data_->header_.version >= 5
                    ? data_->f_array.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        pointer, output, context_);
  }
 private:
  internal::MultiVersionStructV5_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MultiVersionStructV7DataView {
 public:
  MultiVersionStructV7DataView() {}

  MultiVersionStructV7DataView(
      internal::MultiVersionStructV7_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t f_int32() const {
    return data_->f_int32;
  }
  inline void GetFRectDataView(
      ::mojo::test::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFRect(UserType* output) {
    auto* pointer = data_->header_.version >= 1
                    ? data_->f_rect.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo::test::RectDataView>(
        pointer, output, context_);
  }
  inline void GetFStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFString(UserType* output) {
    auto* pointer = data_->header_.version >= 3
                    ? data_->f_string.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFArrayDataView(
      mojo::ArrayDataView<int8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFArray(UserType* output) {
    auto* pointer = data_->header_.version >= 5
                    ? data_->f_array.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::ArrayDataView<int8_t>>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeFMessagePipe() {
    mojo::ScopedMessagePipeHandle result;
    if (data_->header_.version < 7)
      return result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->f_message_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool f_bool() const {
    if (data_->header_.version < 7)
      return bool{};
    return data_->f_bool;
  }
 private:
  internal::MultiVersionStructV7_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReorderedStructDataView {
 public:
  ReorderedStructDataView() {}

  ReorderedStructDataView(
      internal::ReorderedStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t c() const {
    if (data_->header_.version < 1)
      return int32_t{};
    return data_->c;
  }
  int32_t a() const {
    if (data_->header_.version < 2)
      return int32_t{};
    return data_->a;
  }
  int32_t b() const {
    if (data_->header_.version < 4)
      return int32_t{};
    return data_->b;
  }
 private:
  internal::ReorderedStruct_Data* data_ = nullptr;
};

class ContainsInterfaceDataView {
 public:
  ContainsInterfaceDataView() {}

  ContainsInterfaceDataView(
      internal::ContainsInterface_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSomeInterface() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::mojo::test::SomeInterfaceInterfaceBase>>(
            &data_->some_interface, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContainsInterface_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContainsOtherDataView {
 public:
  ContainsOtherDataView() {}

  ContainsOtherDataView(
      internal::ContainsOther_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t other() const {
    return data_->other;
  }
 private:
  internal::ContainsOther_Data* data_ = nullptr;
};

class ContainsInterfaceRequestDataView {
 public:
  ContainsInterfaceRequestDataView() {}

  ContainsInterfaceRequestDataView(
      internal::ContainsInterfaceRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::mojo::test::SomeInterfaceInterfaceBase>>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContainsInterfaceRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SingleBoolStructDataView {
 public:
  SingleBoolStructDataView() {}

  SingleBoolStructDataView(
      internal::SingleBoolStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool value() const {
    return data_->value;
  }
 private:
  internal::SingleBoolStruct_Data* data_ = nullptr;
};

class ContainsHashableDataView {
 public:
  ContainsHashableDataView() {}

  ContainsHashableDataView(
      internal::ContainsHashable_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRectDataView(
      ::mojo::test::TypemappedRectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::mojo::test::TypemappedRectDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContainsHashable_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SimpleNestedStructDataView {
 public:
  SimpleNestedStructDataView() {}

  SimpleNestedStructDataView(
      internal::SimpleNestedStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNestedDataView(
      ContainsOtherDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNested(UserType* output) {
    auto* pointer = data_->nested.Get();
    return mojo::internal::Deserialize<::mojo::test::ContainsOtherDataView>(
        pointer, output, context_);
  }
 private:
  internal::SimpleNestedStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace test
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::test::ScopedConstants_EType>
    : public mojo::internal::EnumHashImpl<::mojo::test::ScopedConstants_EType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::test::ScopedConstants_EType, ::mojo::test::ScopedConstants_EType> {
  static ::mojo::test::ScopedConstants_EType ToMojom(::mojo::test::ScopedConstants_EType input) { return input; }
  static bool FromMojom(::mojo::test::ScopedConstants_EType input, ::mojo::test::ScopedConstants_EType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ScopedConstants_EType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::test::ScopedConstants_EType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::test::ScopedConstants_EType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::NamedRegionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::NamedRegionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::NamedRegion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::rects(input)) in_rects = Traits::rects(input);
    typename decltype((*output)->rects)::BaseType::BufferWriter
        rects_writer;
    const mojo::internal::ContainerValidateParams rects_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::RectDataView>>(
        in_rects, buffer, &rects_writer, &rects_validate_params,
        context);
    (*output)->rects.Set(
        rects_writer.is_null() ? nullptr : rects_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::NamedRegion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::NamedRegionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::RectPairDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::RectPairDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::RectPair_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::first(input)) in_first = Traits::first(input);
    typename decltype((*output)->first)::BaseType::BufferWriter
        first_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_first, buffer, &first_writer, context);
    (*output)->first.Set(
        first_writer.is_null() ? nullptr : first_writer.data());
    decltype(Traits::second(input)) in_second = Traits::second(input);
    typename decltype((*output)->second)::BaseType::BufferWriter
        second_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_second, buffer, &second_writer, context);
    (*output)->second.Set(
        second_writer.is_null() ? nullptr : second_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::RectPair_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::RectPairDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::EmptyStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::EmptyStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::EmptyStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
  }

  static bool Deserialize(::mojo::test::internal::EmptyStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::EmptyStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::NoDefaultFieldValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::NoDefaultFieldValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::NoDefaultFieldValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f0 = Traits::f0(input);
    (*output)->f1 = Traits::f1(input);
    (*output)->f2 = Traits::f2(input);
    (*output)->f3 = Traits::f3(input);
    (*output)->f4 = Traits::f4(input);
    (*output)->f5 = Traits::f5(input);
    (*output)->f6 = Traits::f6(input);
    (*output)->f7 = Traits::f7(input);
    (*output)->f8 = Traits::f8(input);
    (*output)->f9 = Traits::f9(input);
    (*output)->f10 = Traits::f10(input);
    decltype(Traits::f11(input)) in_f11 = Traits::f11(input);
    typename decltype((*output)->f11)::BaseType::BufferWriter
        f11_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f11, buffer, &f11_writer, context);
    (*output)->f11.Set(
        f11_writer.is_null() ? nullptr : f11_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f11.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f11 in NoDefaultFieldValues struct");
    decltype(Traits::f12(input)) in_f12 = Traits::f12(input);
    typename decltype((*output)->f12)::BaseType::BufferWriter
        f12_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f12, buffer, &f12_writer, context);
    (*output)->f12.Set(
        f12_writer.is_null() ? nullptr : f12_writer.data());
    decltype(Traits::f13(input)) in_f13 = Traits::f13(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_f13, &(*output)->f13, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->f13),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid f13 in NoDefaultFieldValues struct");
    decltype(Traits::f14(input)) in_f14 = Traits::f14(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
        in_f14, &(*output)->f14, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->f14),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid f14 in NoDefaultFieldValues struct");
    decltype(Traits::f15(input)) in_f15 = Traits::f15(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
        in_f15, &(*output)->f15, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->f15),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid f15 in NoDefaultFieldValues struct");
    decltype(Traits::f16(input)) in_f16 = Traits::f16(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_f16, &(*output)->f16, context);
    decltype(Traits::f17(input)) in_f17 = Traits::f17(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
        in_f17, &(*output)->f17, context);
    decltype(Traits::f18(input)) in_f18 = Traits::f18(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
        in_f18, &(*output)->f18, context);
    decltype(Traits::f19(input)) in_f19 = Traits::f19(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_f19, &(*output)->f19, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->f19),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid f19 in NoDefaultFieldValues struct");
    decltype(Traits::f20(input)) in_f20 = Traits::f20(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_f20, &(*output)->f20, context);
    decltype(Traits::f21(input)) in_f21 = Traits::f21(input);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_f21, &(*output)->f21, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->f21),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid f21 in NoDefaultFieldValues struct");
    decltype(Traits::f22(input)) in_f22 = Traits::f22(input);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_f22, &(*output)->f22, context);
    decltype(Traits::f23(input)) in_f23 = Traits::f23(input);
    typename decltype((*output)->f23)::BaseType::BufferWriter
        f23_writer;
    const mojo::internal::ContainerValidateParams f23_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_f23, buffer, &f23_writer, &f23_validate_params,
        context);
    (*output)->f23.Set(
        f23_writer.is_null() ? nullptr : f23_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f23.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f23 in NoDefaultFieldValues struct");
    decltype(Traits::f24(input)) in_f24 = Traits::f24(input);
    typename decltype((*output)->f24)::BaseType::BufferWriter
        f24_writer;
    const mojo::internal::ContainerValidateParams f24_validate_params(
        0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_f24, buffer, &f24_writer, &f24_validate_params,
        context);
    (*output)->f24.Set(
        f24_writer.is_null() ? nullptr : f24_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f24.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f24 in NoDefaultFieldValues struct");
    decltype(Traits::f25(input)) in_f25 = Traits::f25(input);
    typename decltype((*output)->f25)::BaseType::BufferWriter
        f25_writer;
    const mojo::internal::ContainerValidateParams f25_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_f25, buffer, &f25_writer, &f25_validate_params,
        context);
    (*output)->f25.Set(
        f25_writer.is_null() ? nullptr : f25_writer.data());
    decltype(Traits::f26(input)) in_f26 = Traits::f26(input);
    typename decltype((*output)->f26)::BaseType::BufferWriter
        f26_writer;
    const mojo::internal::ContainerValidateParams f26_validate_params(
        0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_f26, buffer, &f26_writer, &f26_validate_params,
        context);
    (*output)->f26.Set(
        f26_writer.is_null() ? nullptr : f26_writer.data());
    decltype(Traits::f27(input)) in_f27 = Traits::f27(input);
    typename decltype((*output)->f27)::BaseType::BufferWriter
        f27_writer;
    mojo::internal::Serialize<::mojo::test::EmptyStructDataView>(
        in_f27, buffer, &f27_writer, context);
    (*output)->f27.Set(
        f27_writer.is_null() ? nullptr : f27_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f27.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f27 in NoDefaultFieldValues struct");
    decltype(Traits::f28(input)) in_f28 = Traits::f28(input);
    typename decltype((*output)->f28)::BaseType::BufferWriter
        f28_writer;
    mojo::internal::Serialize<::mojo::test::EmptyStructDataView>(
        in_f28, buffer, &f28_writer, context);
    (*output)->f28.Set(
        f28_writer.is_null() ? nullptr : f28_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::NoDefaultFieldValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::NoDefaultFieldValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::DefaultFieldValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::DefaultFieldValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::DefaultFieldValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f0 = Traits::f0(input);
    (*output)->f1 = Traits::f1(input);
    (*output)->f2 = Traits::f2(input);
    (*output)->f3 = Traits::f3(input);
    (*output)->f4 = Traits::f4(input);
    (*output)->f5 = Traits::f5(input);
    (*output)->f6 = Traits::f6(input);
    (*output)->f7 = Traits::f7(input);
    (*output)->f8 = Traits::f8(input);
    (*output)->f9 = Traits::f9(input);
    (*output)->f10 = Traits::f10(input);
    (*output)->f11 = Traits::f11(input);
    (*output)->f12 = Traits::f12(input);
    decltype(Traits::f13(input)) in_f13 = Traits::f13(input);
    typename decltype((*output)->f13)::BaseType::BufferWriter
        f13_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f13, buffer, &f13_writer, context);
    (*output)->f13.Set(
        f13_writer.is_null() ? nullptr : f13_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f13.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f13 in DefaultFieldValues struct");
    decltype(Traits::f14(input)) in_f14 = Traits::f14(input);
    typename decltype((*output)->f14)::BaseType::BufferWriter
        f14_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f14, buffer, &f14_writer, context);
    (*output)->f14.Set(
        f14_writer.is_null() ? nullptr : f14_writer.data());
    decltype(Traits::f15(input)) in_f15 = Traits::f15(input);
    typename decltype((*output)->f15)::BaseType::BufferWriter
        f15_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f15, buffer, &f15_writer, context);
    (*output)->f15.Set(
        f15_writer.is_null() ? nullptr : f15_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f15.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f15 in DefaultFieldValues struct");
    decltype(Traits::f16(input)) in_f16 = Traits::f16(input);
    typename decltype((*output)->f16)::BaseType::BufferWriter
        f16_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f16, buffer, &f16_writer, context);
    (*output)->f16.Set(
        f16_writer.is_null() ? nullptr : f16_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::DefaultFieldValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::DefaultFieldValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ScopedConstantsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ScopedConstantsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ScopedConstants_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::mojo::test::ScopedConstants_EType>(
        Traits::f0(input), &(*output)->f0);
    mojo::internal::Serialize<::mojo::test::ScopedConstants_EType>(
        Traits::f1(input), &(*output)->f1);
    mojo::internal::Serialize<::mojo::test::ScopedConstants_EType>(
        Traits::f2(input), &(*output)->f2);
    mojo::internal::Serialize<::mojo::test::ScopedConstants_EType>(
        Traits::f3(input), &(*output)->f3);
    mojo::internal::Serialize<::mojo::test::ScopedConstants_EType>(
        Traits::f4(input), &(*output)->f4);
    (*output)->f5 = Traits::f5(input);
    (*output)->f6 = Traits::f6(input);
  }

  static bool Deserialize(::mojo::test::internal::ScopedConstants_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ScopedConstantsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MapKeyTypesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MapKeyTypesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MapKeyTypes_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::f1(input)) in_f1 = Traits::f1(input);
    typename decltype((*output)->f1)::BaseType::BufferWriter
        f1_writer;
    const mojo::internal::ContainerValidateParams f1_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int8_t, int8_t>>(
        in_f1, buffer, &f1_writer, &f1_validate_params,
        context);
    (*output)->f1.Set(
        f1_writer.is_null() ? nullptr : f1_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f1.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f1 in MapKeyTypes struct");
    decltype(Traits::f2(input)) in_f2 = Traits::f2(input);
    typename decltype((*output)->f2)::BaseType::BufferWriter
        f2_writer;
    const mojo::internal::ContainerValidateParams f2_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<uint8_t, uint8_t>>(
        in_f2, buffer, &f2_writer, &f2_validate_params,
        context);
    (*output)->f2.Set(
        f2_writer.is_null() ? nullptr : f2_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f2.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f2 in MapKeyTypes struct");
    decltype(Traits::f3(input)) in_f3 = Traits::f3(input);
    typename decltype((*output)->f3)::BaseType::BufferWriter
        f3_writer;
    const mojo::internal::ContainerValidateParams f3_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int16_t, int16_t>>(
        in_f3, buffer, &f3_writer, &f3_validate_params,
        context);
    (*output)->f3.Set(
        f3_writer.is_null() ? nullptr : f3_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f3.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f3 in MapKeyTypes struct");
    decltype(Traits::f4(input)) in_f4 = Traits::f4(input);
    typename decltype((*output)->f4)::BaseType::BufferWriter
        f4_writer;
    const mojo::internal::ContainerValidateParams f4_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<uint16_t, uint16_t>>(
        in_f4, buffer, &f4_writer, &f4_validate_params,
        context);
    (*output)->f4.Set(
        f4_writer.is_null() ? nullptr : f4_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f4.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f4 in MapKeyTypes struct");
    decltype(Traits::f5(input)) in_f5 = Traits::f5(input);
    typename decltype((*output)->f5)::BaseType::BufferWriter
        f5_writer;
    const mojo::internal::ContainerValidateParams f5_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, int32_t>>(
        in_f5, buffer, &f5_writer, &f5_validate_params,
        context);
    (*output)->f5.Set(
        f5_writer.is_null() ? nullptr : f5_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f5.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f5 in MapKeyTypes struct");
    decltype(Traits::f6(input)) in_f6 = Traits::f6(input);
    typename decltype((*output)->f6)::BaseType::BufferWriter
        f6_writer;
    const mojo::internal::ContainerValidateParams f6_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<uint32_t, uint32_t>>(
        in_f6, buffer, &f6_writer, &f6_validate_params,
        context);
    (*output)->f6.Set(
        f6_writer.is_null() ? nullptr : f6_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f6.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f6 in MapKeyTypes struct");
    decltype(Traits::f7(input)) in_f7 = Traits::f7(input);
    typename decltype((*output)->f7)::BaseType::BufferWriter
        f7_writer;
    const mojo::internal::ContainerValidateParams f7_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int64_t, int64_t>>(
        in_f7, buffer, &f7_writer, &f7_validate_params,
        context);
    (*output)->f7.Set(
        f7_writer.is_null() ? nullptr : f7_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f7.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f7 in MapKeyTypes struct");
    decltype(Traits::f8(input)) in_f8 = Traits::f8(input);
    typename decltype((*output)->f8)::BaseType::BufferWriter
        f8_writer;
    const mojo::internal::ContainerValidateParams f8_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<uint64_t, uint64_t>>(
        in_f8, buffer, &f8_writer, &f8_validate_params,
        context);
    (*output)->f8.Set(
        f8_writer.is_null() ? nullptr : f8_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f8.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f8 in MapKeyTypes struct");
    decltype(Traits::f9(input)) in_f9 = Traits::f9(input);
    typename decltype((*output)->f9)::BaseType::BufferWriter
        f9_writer;
    const mojo::internal::ContainerValidateParams f9_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<float, float>>(
        in_f9, buffer, &f9_writer, &f9_validate_params,
        context);
    (*output)->f9.Set(
        f9_writer.is_null() ? nullptr : f9_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f9.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f9 in MapKeyTypes struct");
    decltype(Traits::f10(input)) in_f10 = Traits::f10(input);
    typename decltype((*output)->f10)::BaseType::BufferWriter
        f10_writer;
    const mojo::internal::ContainerValidateParams f10_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<double, double>>(
        in_f10, buffer, &f10_writer, &f10_validate_params,
        context);
    (*output)->f10.Set(
        f10_writer.is_null() ? nullptr : f10_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f10.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f10 in MapKeyTypes struct");
    decltype(Traits::f11(input)) in_f11 = Traits::f11(input);
    typename decltype((*output)->f11)::BaseType::BufferWriter
        f11_writer;
    const mojo::internal::ContainerValidateParams f11_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_f11, buffer, &f11_writer, &f11_validate_params,
        context);
    (*output)->f11.Set(
        f11_writer.is_null() ? nullptr : f11_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f11.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f11 in MapKeyTypes struct");
  }

  static bool Deserialize(::mojo::test::internal::MapKeyTypes_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MapKeyTypesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MapValueTypesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MapValueTypesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MapValueTypes_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::f0(input)) in_f0 = Traits::f0(input);
    typename decltype((*output)->f0)::BaseType::BufferWriter
        f0_writer;
    const mojo::internal::ContainerValidateParams f0_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        in_f0, buffer, &f0_writer, &f0_validate_params,
        context);
    (*output)->f0.Set(
        f0_writer.is_null() ? nullptr : f0_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f0.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f0 in MapValueTypes struct");
    decltype(Traits::f1(input)) in_f1 = Traits::f1(input);
    typename decltype((*output)->f1)::BaseType::BufferWriter
        f1_writer;
    const mojo::internal::ContainerValidateParams f1_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        in_f1, buffer, &f1_writer, &f1_validate_params,
        context);
    (*output)->f1.Set(
        f1_writer.is_null() ? nullptr : f1_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f1.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f1 in MapValueTypes struct");
    decltype(Traits::f2(input)) in_f2 = Traits::f2(input);
    typename decltype((*output)->f2)::BaseType::BufferWriter
        f2_writer;
    const mojo::internal::ContainerValidateParams f2_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        in_f2, buffer, &f2_writer, &f2_validate_params,
        context);
    (*output)->f2.Set(
        f2_writer.is_null() ? nullptr : f2_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f2.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f2 in MapValueTypes struct");
    decltype(Traits::f3(input)) in_f3 = Traits::f3(input);
    typename decltype((*output)->f3)::BaseType::BufferWriter
        f3_writer;
    const mojo::internal::ContainerValidateParams f3_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(2, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
        in_f3, buffer, &f3_writer, &f3_validate_params,
        context);
    (*output)->f3.Set(
        f3_writer.is_null() ? nullptr : f3_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f3.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f3 in MapValueTypes struct");
    decltype(Traits::f4(input)) in_f4 = Traits::f4(input);
    typename decltype((*output)->f4)::BaseType::BufferWriter
        f4_writer;
    const mojo::internal::ContainerValidateParams f4_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, true, new mojo::internal::ContainerValidateParams(2, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>>(
        in_f4, buffer, &f4_writer, &f4_validate_params,
        context);
    (*output)->f4.Set(
        f4_writer.is_null() ? nullptr : f4_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f4.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f4 in MapValueTypes struct");
    decltype(Traits::f5(input)) in_f5 = Traits::f5(input);
    typename decltype((*output)->f5)::BaseType::BufferWriter
        f5_writer;
    const mojo::internal::ContainerValidateParams f5_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(1, false, new mojo::internal::ContainerValidateParams(2, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>>(
        in_f5, buffer, &f5_writer, &f5_validate_params,
        context);
    (*output)->f5.Set(
        f5_writer.is_null() ? nullptr : f5_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f5.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f5 in MapValueTypes struct");
    decltype(Traits::f6(input)) in_f6 = Traits::f6(input);
    typename decltype((*output)->f6)::BaseType::BufferWriter
        f6_writer;
    const mojo::internal::ContainerValidateParams f6_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, true, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::mojo::test::RectDataView>>(
        in_f6, buffer, &f6_writer, &f6_validate_params,
        context);
    (*output)->f6.Set(
        f6_writer.is_null() ? nullptr : f6_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f6.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f6 in MapValueTypes struct");
    decltype(Traits::f7(input)) in_f7 = Traits::f7(input);
    typename decltype((*output)->f7)::BaseType::BufferWriter
        f7_writer;
    const mojo::internal::ContainerValidateParams f7_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>(
        in_f7, buffer, &f7_writer, &f7_validate_params,
        context);
    (*output)->f7.Set(
        f7_writer.is_null() ? nullptr : f7_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f7.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f7 in MapValueTypes struct");
    decltype(Traits::f8(input)) in_f8 = Traits::f8(input);
    typename decltype((*output)->f8)::BaseType::BufferWriter
        f8_writer;
    const mojo::internal::ContainerValidateParams f8_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>>(
        in_f8, buffer, &f8_writer, &f8_validate_params,
        context);
    (*output)->f8.Set(
        f8_writer.is_null() ? nullptr : f8_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f8.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f8 in MapValueTypes struct");
    decltype(Traits::f9(input)) in_f9 = Traits::f9(input);
    typename decltype((*output)->f9)::BaseType::BufferWriter
        f9_writer;
    const mojo::internal::ContainerValidateParams f9_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>(
        in_f9, buffer, &f9_writer, &f9_validate_params,
        context);
    (*output)->f9.Set(
        f9_writer.is_null() ? nullptr : f9_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f9.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f9 in MapValueTypes struct");
    decltype(Traits::f10(input)) in_f10 = Traits::f10(input);
    typename decltype((*output)->f10)::BaseType::BufferWriter
        f10_writer;
    const mojo::internal::ContainerValidateParams f10_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ScopedHandle>>>(
        in_f10, buffer, &f10_writer, &f10_validate_params,
        context);
    (*output)->f10.Set(
        f10_writer.is_null() ? nullptr : f10_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f10.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f10 in MapValueTypes struct");
    decltype(Traits::f11(input)) in_f11 = Traits::f11(input);
    typename decltype((*output)->f11)::BaseType::BufferWriter
        f11_writer;
    const mojo::internal::ContainerValidateParams f11_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>>(
        in_f11, buffer, &f11_writer, &f11_validate_params,
        context);
    (*output)->f11.Set(
        f11_writer.is_null() ? nullptr : f11_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f11.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f11 in MapValueTypes struct");
  }

  static bool Deserialize(::mojo::test::internal::MapValueTypes_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MapValueTypesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ArrayValueTypesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ArrayValueTypesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ArrayValueTypes_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::f0(input)) in_f0 = Traits::f0(input);
    typename decltype((*output)->f0)::BaseType::BufferWriter
        f0_writer;
    const mojo::internal::ContainerValidateParams f0_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
        in_f0, buffer, &f0_writer, &f0_validate_params,
        context);
    (*output)->f0.Set(
        f0_writer.is_null() ? nullptr : f0_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f0.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f0 in ArrayValueTypes struct");
    decltype(Traits::f1(input)) in_f1 = Traits::f1(input);
    typename decltype((*output)->f1)::BaseType::BufferWriter
        f1_writer;
    const mojo::internal::ContainerValidateParams f1_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int16_t>>(
        in_f1, buffer, &f1_writer, &f1_validate_params,
        context);
    (*output)->f1.Set(
        f1_writer.is_null() ? nullptr : f1_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f1.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f1 in ArrayValueTypes struct");
    decltype(Traits::f2(input)) in_f2 = Traits::f2(input);
    typename decltype((*output)->f2)::BaseType::BufferWriter
        f2_writer;
    const mojo::internal::ContainerValidateParams f2_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_f2, buffer, &f2_writer, &f2_validate_params,
        context);
    (*output)->f2.Set(
        f2_writer.is_null() ? nullptr : f2_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f2.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f2 in ArrayValueTypes struct");
    decltype(Traits::f3(input)) in_f3 = Traits::f3(input);
    typename decltype((*output)->f3)::BaseType::BufferWriter
        f3_writer;
    const mojo::internal::ContainerValidateParams f3_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int64_t>>(
        in_f3, buffer, &f3_writer, &f3_validate_params,
        context);
    (*output)->f3.Set(
        f3_writer.is_null() ? nullptr : f3_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f3.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f3 in ArrayValueTypes struct");
    decltype(Traits::f4(input)) in_f4 = Traits::f4(input);
    typename decltype((*output)->f4)::BaseType::BufferWriter
        f4_writer;
    const mojo::internal::ContainerValidateParams f4_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_f4, buffer, &f4_writer, &f4_validate_params,
        context);
    (*output)->f4.Set(
        f4_writer.is_null() ? nullptr : f4_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f4.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f4 in ArrayValueTypes struct");
    decltype(Traits::f5(input)) in_f5 = Traits::f5(input);
    typename decltype((*output)->f5)::BaseType::BufferWriter
        f5_writer;
    const mojo::internal::ContainerValidateParams f5_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<double>>(
        in_f5, buffer, &f5_writer, &f5_validate_params,
        context);
    (*output)->f5.Set(
        f5_writer.is_null() ? nullptr : f5_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f5.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f5 in ArrayValueTypes struct");
    decltype(Traits::f6(input)) in_f6 = Traits::f6(input);
    typename decltype((*output)->f6)::BaseType::BufferWriter
        f6_writer;
    const mojo::internal::ContainerValidateParams f6_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::mojo::test::SomeInterfaceInterfaceBase>>>(
        in_f6, buffer, &f6_writer, &f6_validate_params,
        context);
    (*output)->f6.Set(
        f6_writer.is_null() ? nullptr : f6_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f6.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f6 in ArrayValueTypes struct");
    decltype(Traits::f7(input)) in_f7 = Traits::f7(input);
    typename decltype((*output)->f7)::BaseType::BufferWriter
        f7_writer;
    const mojo::internal::ContainerValidateParams f7_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::InterfaceRequestDataView<::mojo::test::SomeInterfaceInterfaceBase>>>(
        in_f7, buffer, &f7_writer, &f7_validate_params,
        context);
    (*output)->f7.Set(
        f7_writer.is_null() ? nullptr : f7_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f7.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f7 in ArrayValueTypes struct");
  }

  static bool Deserialize(::mojo::test::internal::ArrayValueTypes_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ArrayValueTypesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::FloatNumberValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::FloatNumberValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::FloatNumberValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f0 = Traits::f0(input);
    (*output)->f1 = Traits::f1(input);
    (*output)->f2 = Traits::f2(input);
    (*output)->f3 = Traits::f3(input);
    (*output)->f4 = Traits::f4(input);
    (*output)->f5 = Traits::f5(input);
    (*output)->f6 = Traits::f6(input);
    (*output)->f7 = Traits::f7(input);
    (*output)->f8 = Traits::f8(input);
    (*output)->f9 = Traits::f9(input);
  }

  static bool Deserialize(::mojo::test::internal::FloatNumberValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::FloatNumberValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::IntegerNumberValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::IntegerNumberValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::IntegerNumberValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f0 = Traits::f0(input);
    (*output)->f1 = Traits::f1(input);
    (*output)->f2 = Traits::f2(input);
    (*output)->f3 = Traits::f3(input);
    (*output)->f4 = Traits::f4(input);
    (*output)->f5 = Traits::f5(input);
    (*output)->f6 = Traits::f6(input);
    (*output)->f7 = Traits::f7(input);
    (*output)->f8 = Traits::f8(input);
    (*output)->f9 = Traits::f9(input);
    (*output)->f10 = Traits::f10(input);
    (*output)->f11 = Traits::f11(input);
    (*output)->f12 = Traits::f12(input);
    (*output)->f13 = Traits::f13(input);
    (*output)->f14 = Traits::f14(input);
    (*output)->f15 = Traits::f15(input);
    (*output)->f16 = Traits::f16(input);
    (*output)->f17 = Traits::f17(input);
    (*output)->f18 = Traits::f18(input);
    (*output)->f19 = Traits::f19(input);
  }

  static bool Deserialize(::mojo::test::internal::IntegerNumberValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::IntegerNumberValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::UnsignedNumberValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::UnsignedNumberValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::UnsignedNumberValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f0 = Traits::f0(input);
    (*output)->f1 = Traits::f1(input);
    (*output)->f2 = Traits::f2(input);
    (*output)->f3 = Traits::f3(input);
    (*output)->f4 = Traits::f4(input);
    (*output)->f5 = Traits::f5(input);
    (*output)->f6 = Traits::f6(input);
    (*output)->f7 = Traits::f7(input);
    (*output)->f8 = Traits::f8(input);
    (*output)->f9 = Traits::f9(input);
    (*output)->f10 = Traits::f10(input);
    (*output)->f11 = Traits::f11(input);
  }

  static bool Deserialize(::mojo::test::internal::UnsignedNumberValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::UnsignedNumberValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::BitArrayValuesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::BitArrayValuesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::BitArrayValues_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::f0(input)) in_f0 = Traits::f0(input);
    typename decltype((*output)->f0)::BaseType::BufferWriter
        f0_writer;
    const mojo::internal::ContainerValidateParams f0_validate_params(
        1, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_f0, buffer, &f0_writer, &f0_validate_params,
        context);
    (*output)->f0.Set(
        f0_writer.is_null() ? nullptr : f0_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f0.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f0 in BitArrayValues struct");
    decltype(Traits::f1(input)) in_f1 = Traits::f1(input);
    typename decltype((*output)->f1)::BaseType::BufferWriter
        f1_writer;
    const mojo::internal::ContainerValidateParams f1_validate_params(
        7, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_f1, buffer, &f1_writer, &f1_validate_params,
        context);
    (*output)->f1.Set(
        f1_writer.is_null() ? nullptr : f1_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f1.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f1 in BitArrayValues struct");
    decltype(Traits::f2(input)) in_f2 = Traits::f2(input);
    typename decltype((*output)->f2)::BaseType::BufferWriter
        f2_writer;
    const mojo::internal::ContainerValidateParams f2_validate_params(
        9, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_f2, buffer, &f2_writer, &f2_validate_params,
        context);
    (*output)->f2.Set(
        f2_writer.is_null() ? nullptr : f2_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f2.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f2 in BitArrayValues struct");
    decltype(Traits::f3(input)) in_f3 = Traits::f3(input);
    typename decltype((*output)->f3)::BaseType::BufferWriter
        f3_writer;
    const mojo::internal::ContainerValidateParams f3_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_f3, buffer, &f3_writer, &f3_validate_params,
        context);
    (*output)->f3.Set(
        f3_writer.is_null() ? nullptr : f3_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f3.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f3 in BitArrayValues struct");
    decltype(Traits::f4(input)) in_f4 = Traits::f4(input);
    typename decltype((*output)->f4)::BaseType::BufferWriter
        f4_writer;
    const mojo::internal::ContainerValidateParams f4_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        in_f4, buffer, &f4_writer, &f4_validate_params,
        context);
    (*output)->f4.Set(
        f4_writer.is_null() ? nullptr : f4_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f4.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f4 in BitArrayValues struct");
    decltype(Traits::f5(input)) in_f5 = Traits::f5(input);
    typename decltype((*output)->f5)::BaseType::BufferWriter
        f5_writer;
    const mojo::internal::ContainerValidateParams f5_validate_params(
        0, true, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        in_f5, buffer, &f5_writer, &f5_validate_params,
        context);
    (*output)->f5.Set(
        f5_writer.is_null() ? nullptr : f5_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f5.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f5 in BitArrayValues struct");
    decltype(Traits::f6(input)) in_f6 = Traits::f6(input);
    typename decltype((*output)->f6)::BaseType::BufferWriter
        f6_writer;
    const mojo::internal::ContainerValidateParams f6_validate_params(
        0, true, new mojo::internal::ContainerValidateParams(2, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        in_f6, buffer, &f6_writer, &f6_validate_params,
        context);
    (*output)->f6.Set(
        f6_writer.is_null() ? nullptr : f6_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->f6.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null f6 in BitArrayValues struct");
  }

  static bool Deserialize(::mojo::test::internal::BitArrayValues_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::BitArrayValuesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MultiVersionStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MultiVersionStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MultiVersionStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
    decltype(Traits::f_rect(input)) in_f_rect = Traits::f_rect(input);
    typename decltype((*output)->f_rect)::BaseType::BufferWriter
        f_rect_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f_rect, buffer, &f_rect_writer, context);
    (*output)->f_rect.Set(
        f_rect_writer.is_null() ? nullptr : f_rect_writer.data());
    decltype(Traits::f_string(input)) in_f_string = Traits::f_string(input);
    typename decltype((*output)->f_string)::BaseType::BufferWriter
        f_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f_string, buffer, &f_string_writer, context);
    (*output)->f_string.Set(
        f_string_writer.is_null() ? nullptr : f_string_writer.data());
    decltype(Traits::f_array(input)) in_f_array = Traits::f_array(input);
    typename decltype((*output)->f_array)::BaseType::BufferWriter
        f_array_writer;
    const mojo::internal::ContainerValidateParams f_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
        in_f_array, buffer, &f_array_writer, &f_array_validate_params,
        context);
    (*output)->f_array.Set(
        f_array_writer.is_null() ? nullptr : f_array_writer.data());
    decltype(Traits::f_message_pipe(input)) in_f_message_pipe = Traits::f_message_pipe(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_f_message_pipe, &(*output)->f_message_pipe, context);
    (*output)->f_bool = Traits::f_bool(input);
    (*output)->f_int16 = Traits::f_int16(input);
  }

  static bool Deserialize(::mojo::test::internal::MultiVersionStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MultiVersionStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MultiVersionStructV0DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MultiVersionStructV0DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MultiVersionStructV0_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
  }

  static bool Deserialize(::mojo::test::internal::MultiVersionStructV0_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MultiVersionStructV0DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MultiVersionStructV1DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MultiVersionStructV1DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MultiVersionStructV1_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
    decltype(Traits::f_rect(input)) in_f_rect = Traits::f_rect(input);
    typename decltype((*output)->f_rect)::BaseType::BufferWriter
        f_rect_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f_rect, buffer, &f_rect_writer, context);
    (*output)->f_rect.Set(
        f_rect_writer.is_null() ? nullptr : f_rect_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::MultiVersionStructV1_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MultiVersionStructV1DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MultiVersionStructV3DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MultiVersionStructV3DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MultiVersionStructV3_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
    decltype(Traits::f_rect(input)) in_f_rect = Traits::f_rect(input);
    typename decltype((*output)->f_rect)::BaseType::BufferWriter
        f_rect_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f_rect, buffer, &f_rect_writer, context);
    (*output)->f_rect.Set(
        f_rect_writer.is_null() ? nullptr : f_rect_writer.data());
    decltype(Traits::f_string(input)) in_f_string = Traits::f_string(input);
    typename decltype((*output)->f_string)::BaseType::BufferWriter
        f_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f_string, buffer, &f_string_writer, context);
    (*output)->f_string.Set(
        f_string_writer.is_null() ? nullptr : f_string_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::MultiVersionStructV3_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MultiVersionStructV3DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MultiVersionStructV5DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MultiVersionStructV5DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MultiVersionStructV5_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
    decltype(Traits::f_rect(input)) in_f_rect = Traits::f_rect(input);
    typename decltype((*output)->f_rect)::BaseType::BufferWriter
        f_rect_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f_rect, buffer, &f_rect_writer, context);
    (*output)->f_rect.Set(
        f_rect_writer.is_null() ? nullptr : f_rect_writer.data());
    decltype(Traits::f_string(input)) in_f_string = Traits::f_string(input);
    typename decltype((*output)->f_string)::BaseType::BufferWriter
        f_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f_string, buffer, &f_string_writer, context);
    (*output)->f_string.Set(
        f_string_writer.is_null() ? nullptr : f_string_writer.data());
    decltype(Traits::f_array(input)) in_f_array = Traits::f_array(input);
    typename decltype((*output)->f_array)::BaseType::BufferWriter
        f_array_writer;
    const mojo::internal::ContainerValidateParams f_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
        in_f_array, buffer, &f_array_writer, &f_array_validate_params,
        context);
    (*output)->f_array.Set(
        f_array_writer.is_null() ? nullptr : f_array_writer.data());
  }

  static bool Deserialize(::mojo::test::internal::MultiVersionStructV5_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MultiVersionStructV5DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::MultiVersionStructV7DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::MultiVersionStructV7DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::MultiVersionStructV7_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->f_int32 = Traits::f_int32(input);
    decltype(Traits::f_rect(input)) in_f_rect = Traits::f_rect(input);
    typename decltype((*output)->f_rect)::BaseType::BufferWriter
        f_rect_writer;
    mojo::internal::Serialize<::mojo::test::RectDataView>(
        in_f_rect, buffer, &f_rect_writer, context);
    (*output)->f_rect.Set(
        f_rect_writer.is_null() ? nullptr : f_rect_writer.data());
    decltype(Traits::f_string(input)) in_f_string = Traits::f_string(input);
    typename decltype((*output)->f_string)::BaseType::BufferWriter
        f_string_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_f_string, buffer, &f_string_writer, context);
    (*output)->f_string.Set(
        f_string_writer.is_null() ? nullptr : f_string_writer.data());
    decltype(Traits::f_array(input)) in_f_array = Traits::f_array(input);
    typename decltype((*output)->f_array)::BaseType::BufferWriter
        f_array_writer;
    const mojo::internal::ContainerValidateParams f_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
        in_f_array, buffer, &f_array_writer, &f_array_validate_params,
        context);
    (*output)->f_array.Set(
        f_array_writer.is_null() ? nullptr : f_array_writer.data());
    decltype(Traits::f_message_pipe(input)) in_f_message_pipe = Traits::f_message_pipe(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_f_message_pipe, &(*output)->f_message_pipe, context);
    (*output)->f_bool = Traits::f_bool(input);
  }

  static bool Deserialize(::mojo::test::internal::MultiVersionStructV7_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::MultiVersionStructV7DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ReorderedStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ReorderedStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ReorderedStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->c = Traits::c(input);
    (*output)->a = Traits::a(input);
    (*output)->b = Traits::b(input);
  }

  static bool Deserialize(::mojo::test::internal::ReorderedStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ReorderedStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ContainsInterfaceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ContainsInterfaceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ContainsInterface_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::some_interface(input)) in_some_interface = Traits::some_interface(input);
    mojo::internal::Serialize<mojo::InterfacePtrDataView<::mojo::test::SomeInterfaceInterfaceBase>>(
        in_some_interface, &(*output)->some_interface, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->some_interface),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid some_interface in ContainsInterface struct");
  }

  static bool Deserialize(::mojo::test::internal::ContainsInterface_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ContainsInterfaceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ContainsOtherDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ContainsOtherDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ContainsOther_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->other = Traits::other(input);
  }

  static bool Deserialize(::mojo::test::internal::ContainsOther_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ContainsOtherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ContainsInterfaceRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ContainsInterfaceRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ContainsInterfaceRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::request(input)) in_request = Traits::request(input);
    mojo::internal::Serialize<mojo::InterfaceRequestDataView<::mojo::test::SomeInterfaceInterfaceBase>>(
        in_request, &(*output)->request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid request in ContainsInterfaceRequest struct");
  }

  static bool Deserialize(::mojo::test::internal::ContainsInterfaceRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ContainsInterfaceRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::SingleBoolStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::SingleBoolStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::SingleBoolStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->value = Traits::value(input);
  }

  static bool Deserialize(::mojo::test::internal::SingleBoolStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::SingleBoolStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::ContainsHashableDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::ContainsHashableDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::ContainsHashable_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::rect(input)) in_rect = Traits::rect(input);
    typename decltype((*output)->rect)::BaseType::BufferWriter
        rect_writer;
    mojo::internal::Serialize<::mojo::test::TypemappedRectDataView>(
        in_rect, buffer, &rect_writer, context);
    (*output)->rect.Set(
        rect_writer.is_null() ? nullptr : rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rect in ContainsHashable struct");
  }

  static bool Deserialize(::mojo::test::internal::ContainsHashable_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::ContainsHashableDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::SimpleNestedStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::SimpleNestedStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::SimpleNestedStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::nested(input)) in_nested = Traits::nested(input);
    typename decltype((*output)->nested)::BaseType::BufferWriter
        nested_writer;
    mojo::internal::Serialize<::mojo::test::ContainsOtherDataView>(
        in_nested, buffer, &nested_writer, context);
    (*output)->nested.Set(
        nested_writer.is_null() ? nullptr : nested_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->nested.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null nested in SimpleNestedStruct struct");
  }

  static bool Deserialize(::mojo::test::internal::SimpleNestedStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::SimpleNestedStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {

inline void NamedRegionDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NamedRegionDataView::GetRectsDataView(
    mojo::ArrayDataView<::mojo::test::RectDataView>* output) {
  auto pointer = data_->rects.Get();
  *output = mojo::ArrayDataView<::mojo::test::RectDataView>(pointer, context_);
}


inline void RectPairDataView::GetFirstDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->first.Get();
  *output = ::mojo::test::RectDataView(pointer, context_);
}
inline void RectPairDataView::GetSecondDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->second.Get();
  *output = ::mojo::test::RectDataView(pointer, context_);
}




inline void NoDefaultFieldValuesDataView::GetF11DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->f11.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF12DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->f12.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF23DataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->f23.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF24DataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->f24.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF25DataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->f25.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF26DataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->f26.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF27DataView(
    EmptyStructDataView* output) {
  auto pointer = data_->f27.Get();
  *output = EmptyStructDataView(pointer, context_);
}
inline void NoDefaultFieldValuesDataView::GetF28DataView(
    EmptyStructDataView* output) {
  auto pointer = data_->f28.Get();
  *output = EmptyStructDataView(pointer, context_);
}


inline void DefaultFieldValuesDataView::GetF13DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->f13.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DefaultFieldValuesDataView::GetF14DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->f14.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DefaultFieldValuesDataView::GetF15DataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->f15.Get();
  *output = ::mojo::test::RectDataView(pointer, context_);
}
inline void DefaultFieldValuesDataView::GetF16DataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->f16.Get();
  *output = ::mojo::test::RectDataView(pointer, context_);
}




inline void MapKeyTypesDataView::GetF1DataView(
    mojo::MapDataView<int8_t, int8_t>* output) {
  auto pointer = data_->f1.Get();
  *output = mojo::MapDataView<int8_t, int8_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF2DataView(
    mojo::MapDataView<uint8_t, uint8_t>* output) {
  auto pointer = data_->f2.Get();
  *output = mojo::MapDataView<uint8_t, uint8_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF3DataView(
    mojo::MapDataView<int16_t, int16_t>* output) {
  auto pointer = data_->f3.Get();
  *output = mojo::MapDataView<int16_t, int16_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF4DataView(
    mojo::MapDataView<uint16_t, uint16_t>* output) {
  auto pointer = data_->f4.Get();
  *output = mojo::MapDataView<uint16_t, uint16_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF5DataView(
    mojo::MapDataView<int32_t, int32_t>* output) {
  auto pointer = data_->f5.Get();
  *output = mojo::MapDataView<int32_t, int32_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF6DataView(
    mojo::MapDataView<uint32_t, uint32_t>* output) {
  auto pointer = data_->f6.Get();
  *output = mojo::MapDataView<uint32_t, uint32_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF7DataView(
    mojo::MapDataView<int64_t, int64_t>* output) {
  auto pointer = data_->f7.Get();
  *output = mojo::MapDataView<int64_t, int64_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF8DataView(
    mojo::MapDataView<uint64_t, uint64_t>* output) {
  auto pointer = data_->f8.Get();
  *output = mojo::MapDataView<uint64_t, uint64_t>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF9DataView(
    mojo::MapDataView<float, float>* output) {
  auto pointer = data_->f9.Get();
  *output = mojo::MapDataView<float, float>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF10DataView(
    mojo::MapDataView<double, double>* output) {
  auto pointer = data_->f10.Get();
  *output = mojo::MapDataView<double, double>(pointer, context_);
}
inline void MapKeyTypesDataView::GetF11DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->f11.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}


inline void MapValueTypesDataView::GetF0DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->f0.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF1DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->f1.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF2DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->f2.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF3DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->f3.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF4DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>* output) {
  auto pointer = data_->f4.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF5DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>* output) {
  auto pointer = data_->f5.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF6DataView(
    mojo::MapDataView<mojo::StringDataView, ::mojo::test::RectDataView>* output) {
  auto pointer = data_->f6.Get();
  *output = mojo::MapDataView<mojo::StringDataView, ::mojo::test::RectDataView>(pointer, context_);
}
inline void MapValueTypesDataView::GetF7DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>* output) {
  auto pointer = data_->f7.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF8DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>* output) {
  auto pointer = data_->f8.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF9DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>* output) {
  auto pointer = data_->f9.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>(pointer, context_);
}
inline void MapValueTypesDataView::GetF10DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ScopedHandle>>* output) {
  auto pointer = data_->f10.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::ScopedHandle>>(pointer, context_);
}
inline void MapValueTypesDataView::GetF11DataView(
    mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>* output) {
  auto pointer = data_->f11.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::MapDataView<mojo::StringDataView, mojo::ScopedHandle>>(pointer, context_);
}


inline void ArrayValueTypesDataView::GetF0DataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->f0.Get();
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF1DataView(
    mojo::ArrayDataView<int16_t>* output) {
  auto pointer = data_->f1.Get();
  *output = mojo::ArrayDataView<int16_t>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF2DataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->f2.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF3DataView(
    mojo::ArrayDataView<int64_t>* output) {
  auto pointer = data_->f3.Get();
  *output = mojo::ArrayDataView<int64_t>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF4DataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->f4.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF5DataView(
    mojo::ArrayDataView<double>* output) {
  auto pointer = data_->f5.Get();
  *output = mojo::ArrayDataView<double>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF6DataView(
    mojo::ArrayDataView<mojo::InterfacePtrDataView<SomeInterfaceInterfaceBase>>* output) {
  auto pointer = data_->f6.Get();
  *output = mojo::ArrayDataView<mojo::InterfacePtrDataView<SomeInterfaceInterfaceBase>>(pointer, context_);
}
inline void ArrayValueTypesDataView::GetF7DataView(
    mojo::ArrayDataView<mojo::InterfaceRequestDataView<SomeInterfaceInterfaceBase>>* output) {
  auto pointer = data_->f7.Get();
  *output = mojo::ArrayDataView<mojo::InterfaceRequestDataView<SomeInterfaceInterfaceBase>>(pointer, context_);
}








inline void BitArrayValuesDataView::GetF0DataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->f0.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}
inline void BitArrayValuesDataView::GetF1DataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->f1.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}
inline void BitArrayValuesDataView::GetF2DataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->f2.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}
inline void BitArrayValuesDataView::GetF3DataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->f3.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}
inline void BitArrayValuesDataView::GetF4DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output) {
  auto pointer = data_->f4.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<bool>>(pointer, context_);
}
inline void BitArrayValuesDataView::GetF5DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output) {
  auto pointer = data_->f5.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<bool>>(pointer, context_);
}
inline void BitArrayValuesDataView::GetF6DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output) {
  auto pointer = data_->f6.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<bool>>(pointer, context_);
}


inline void MultiVersionStructDataView::GetFRectDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->f_rect.Get() : nullptr;
  *output = ::mojo::test::RectDataView(pointer, context_);
}
inline void MultiVersionStructDataView::GetFStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_.version >= 3
                 ? data_->f_string.Get() : nullptr;
  *output = mojo::StringDataView(pointer, context_);
}
inline void MultiVersionStructDataView::GetFArrayDataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->header_.version >= 5
                 ? data_->f_array.Get() : nullptr;
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}




inline void MultiVersionStructV1DataView::GetFRectDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->f_rect.Get() : nullptr;
  *output = ::mojo::test::RectDataView(pointer, context_);
}


inline void MultiVersionStructV3DataView::GetFRectDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->f_rect.Get() : nullptr;
  *output = ::mojo::test::RectDataView(pointer, context_);
}
inline void MultiVersionStructV3DataView::GetFStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_.version >= 3
                 ? data_->f_string.Get() : nullptr;
  *output = mojo::StringDataView(pointer, context_);
}


inline void MultiVersionStructV5DataView::GetFRectDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->f_rect.Get() : nullptr;
  *output = ::mojo::test::RectDataView(pointer, context_);
}
inline void MultiVersionStructV5DataView::GetFStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_.version >= 3
                 ? data_->f_string.Get() : nullptr;
  *output = mojo::StringDataView(pointer, context_);
}
inline void MultiVersionStructV5DataView::GetFArrayDataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->header_.version >= 5
                 ? data_->f_array.Get() : nullptr;
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}


inline void MultiVersionStructV7DataView::GetFRectDataView(
    ::mojo::test::RectDataView* output) {
  auto pointer = data_->header_.version >= 1
                 ? data_->f_rect.Get() : nullptr;
  *output = ::mojo::test::RectDataView(pointer, context_);
}
inline void MultiVersionStructV7DataView::GetFStringDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_.version >= 3
                 ? data_->f_string.Get() : nullptr;
  *output = mojo::StringDataView(pointer, context_);
}
inline void MultiVersionStructV7DataView::GetFArrayDataView(
    mojo::ArrayDataView<int8_t>* output) {
  auto pointer = data_->header_.version >= 5
                 ? data_->f_array.Get() : nullptr;
  *output = mojo::ArrayDataView<int8_t>(pointer, context_);
}












inline void ContainsHashableDataView::GetRectDataView(
    ::mojo::test::TypemappedRectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::mojo::test::TypemappedRectDataView(pointer, context_);
}


inline void SimpleNestedStructDataView::GetNestedDataView(
    ContainsOtherDataView* output) {
  auto pointer = data_->nested.Get();
  *output = ContainsOtherDataView(pointer, context_);
}



}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_SHARED_H_