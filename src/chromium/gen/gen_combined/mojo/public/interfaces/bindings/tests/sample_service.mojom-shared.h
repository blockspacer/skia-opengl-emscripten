// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace sample {
class BarDataView;

class FooDataView;

class DefaultsTestDataView;

class StructWithHoleV1DataView;

class StructWithHoleV2DataView;



}  // namespace sample

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::sample::BarDataView> {
  using Data = ::sample::internal::Bar_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::sample::FooDataView> {
  using Data = ::sample::internal::Foo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::sample::DefaultsTestDataView> {
  using Data = ::sample::internal::DefaultsTest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::sample::StructWithHoleV1DataView> {
  using Data = ::sample::internal::StructWithHoleV1_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::sample::StructWithHoleV2DataView> {
  using Data = ::sample::internal::StructWithHoleV2_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace sample {


enum class Bar_Type : int32_t {
  
  VERTICAL = 1,
  
  HORIZONTAL,
  
  BOTH,
  
  INVALID,
  kMinValue = 1,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, Bar_Type value);
inline bool IsKnownEnumValue(Bar_Type value) {
  return internal::Bar_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Service_BazOptions : int32_t {
  
  REGULAR = 0,
  
  EXTRA,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, Service_BazOptions value);
inline bool IsKnownEnumValue(Service_BazOptions value) {
  return internal::Service_BazOptions_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceInterfaceBase {};

using ServicePtrDataView =
    mojo::InterfacePtrDataView<ServiceInterfaceBase>;
using ServiceRequestDataView =
    mojo::InterfaceRequestDataView<ServiceInterfaceBase>;
using ServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceInterfaceBase>;
using ServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceInterfaceBase>;
class PortInterfaceBase {};

using PortPtrDataView =
    mojo::InterfacePtrDataView<PortInterfaceBase>;
using PortRequestDataView =
    mojo::InterfaceRequestDataView<PortInterfaceBase>;
using PortAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PortInterfaceBase>;
using PortAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PortInterfaceBase>;
class BarDataView {
 public:
  BarDataView() {}

  BarDataView(
      internal::Bar_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t alpha() const {
    return data_->alpha;
  }
  uint8_t beta() const {
    return data_->beta;
  }
  uint8_t gamma() const {
    return data_->gamma;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::sample::Bar_Type>(
        data_value, output);
  }

  Bar_Type type() const {
    return static_cast<Bar_Type>(data_->type);
  }
 private:
  internal::Bar_Data* data_ = nullptr;
};

class FooDataView {
 public:
  FooDataView() {}

  FooDataView(
      internal::Foo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
  bool a() const {
    return data_->a;
  }
  bool b() const {
    return data_->b;
  }
  bool c() const {
    return data_->c;
  }
  inline void GetBarDataView(
      BarDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBar(UserType* output) {
    auto* pointer = data_->bar.Get();
    return mojo::internal::Deserialize<::sample::BarDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetExtraBarsDataView(
      mojo::ArrayDataView<BarDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtraBars(UserType* output) {
    auto* pointer = data_->extra_bars.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::sample::BarDataView>>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakeSource() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->source, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInputStreamsDataView(
      mojo::ArrayDataView<mojo::ScopedDataPipeConsumerHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputStreams(UserType* output) {
    auto* pointer = data_->input_streams.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedDataPipeConsumerHandle>>(
        pointer, output, context_);
  }
  inline void GetOutputStreamsDataView(
      mojo::ArrayDataView<mojo::ScopedDataPipeProducerHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputStreams(UserType* output) {
    auto* pointer = data_->output_streams.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedDataPipeProducerHandle>>(
        pointer, output, context_);
  }
  inline void GetArrayOfArrayOfBoolsDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayOfArrayOfBools(UserType* output) {
    auto* pointer = data_->array_of_array_of_bools.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        pointer, output, context_);
  }
  inline void GetMultiArrayOfStringsDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMultiArrayOfStrings(UserType* output) {
    auto* pointer = data_->multi_array_of_strings.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>>(
        pointer, output, context_);
  }
  inline void GetArrayOfBoolsDataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayOfBools(UserType* output) {
    auto* pointer = data_->array_of_bools.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
 private:
  internal::Foo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DefaultsTestDataView {
 public:
  DefaultsTestDataView() {}

  DefaultsTestDataView(
      internal::DefaultsTest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int8_t a0() const {
    return data_->a0;
  }
  uint8_t a1() const {
    return data_->a1;
  }
  int16_t a2() const {
    return data_->a2;
  }
  uint16_t a3() const {
    return data_->a3;
  }
  int32_t a4() const {
    return data_->a4;
  }
  uint32_t a5() const {
    return data_->a5;
  }
  int64_t a6() const {
    return data_->a6;
  }
  uint64_t a7() const {
    return data_->a7;
  }
  int32_t a8() const {
    return data_->a8;
  }
  int32_t a9() const {
    return data_->a9;
  }
  int32_t a10() const {
    return data_->a10;
  }
  bool a11() const {
    return data_->a11;
  }
  bool a12() const {
    return data_->a12;
  }
  float a13() const {
    return data_->a13;
  }
  double a14() const {
    return data_->a14;
  }
  double a15() const {
    return data_->a15;
  }
  double a16() const {
    return data_->a16;
  }
  double a17() const {
    return data_->a17;
  }
  inline void GetA18DataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadA18(UserType* output) {
    auto* pointer = data_->a18.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetA19DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadA19(UserType* output) {
    auto* pointer = data_->a19.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadA20(UserType* output) const {
    auto data_value = data_->a20;
    return mojo::internal::Deserialize<::sample::Bar_Type>(
        data_value, output);
  }

  Bar_Type a20() const {
    return static_cast<Bar_Type>(data_->a20);
  }
  inline void GetA21DataView(
      ::imported::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadA21(UserType* output) {
    auto* pointer = data_->a21.Get();
    return mojo::internal::Deserialize<::imported::PointDataView>(
        pointer, output, context_);
  }
  inline void GetA22DataView(
      ::imported::ThingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadA22(UserType* output) {
    auto* pointer = data_->a22.Get();
    return mojo::internal::Deserialize<::imported::ThingDataView>(
        pointer, output, context_);
  }
  uint64_t a23() const {
    return data_->a23;
  }
  int64_t a24() const {
    return data_->a24;
  }
  int64_t a25() const {
    return data_->a25;
  }
  double a26() const {
    return data_->a26;
  }
  double a27() const {
    return data_->a27;
  }
  double a28() const {
    return data_->a28;
  }
  float a29() const {
    return data_->a29;
  }
  float a30() const {
    return data_->a30;
  }
  float a31() const {
    return data_->a31;
  }
 private:
  internal::DefaultsTest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StructWithHoleV1DataView {
 public:
  StructWithHoleV1DataView() {}

  StructWithHoleV1DataView(
      internal::StructWithHoleV1_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t v1() const {
    return data_->v1;
  }
  int64_t v2() const {
    return data_->v2;
  }
 private:
  internal::StructWithHoleV1_Data* data_ = nullptr;
};

class StructWithHoleV2DataView {
 public:
  StructWithHoleV2DataView() {}

  StructWithHoleV2DataView(
      internal::StructWithHoleV2_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t v1() const {
    return data_->v1;
  }
  int64_t v2() const {
    return data_->v2;
  }
  int32_t v3() const {
    return data_->v3;
  }
 private:
  internal::StructWithHoleV2_Data* data_ = nullptr;
};



}  // namespace sample

namespace std {

template <>
struct hash<::sample::Bar_Type>
    : public mojo::internal::EnumHashImpl<::sample::Bar_Type> {};

template <>
struct hash<::sample::Service_BazOptions>
    : public mojo::internal::EnumHashImpl<::sample::Service_BazOptions> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::sample::Bar_Type, ::sample::Bar_Type> {
  static ::sample::Bar_Type ToMojom(::sample::Bar_Type input) { return input; }
  static bool FromMojom(::sample::Bar_Type input, ::sample::Bar_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::Bar_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::sample::Bar_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::sample::Bar_Type>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::sample::Service_BazOptions, ::sample::Service_BazOptions> {
  static ::sample::Service_BazOptions ToMojom(::sample::Service_BazOptions input) { return input; }
  static bool FromMojom(::sample::Service_BazOptions input, ::sample::Service_BazOptions* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::Service_BazOptions, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::sample::Service_BazOptions, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::sample::Service_BazOptions>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::BarDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::BarDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::Bar_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->alpha = Traits::alpha(input);
    (*output)->beta = Traits::beta(input);
    (*output)->gamma = Traits::gamma(input);
    mojo::internal::Serialize<::sample::Bar_Type>(
        Traits::type(input), &(*output)->type);
  }

  static bool Deserialize(::sample::internal::Bar_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::BarDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::FooDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::FooDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::Foo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
    (*output)->a = Traits::a(input);
    (*output)->b = Traits::b(input);
    (*output)->c = Traits::c(input);
    decltype(Traits::bar(input)) in_bar = Traits::bar(input);
    typename decltype((*output)->bar)::BaseType::BufferWriter
        bar_writer;
    mojo::internal::Serialize<::sample::BarDataView>(
        in_bar, buffer, &bar_writer, context);
    (*output)->bar.Set(
        bar_writer.is_null() ? nullptr : bar_writer.data());
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
    decltype(Traits::extra_bars(input)) in_extra_bars = Traits::extra_bars(input);
    typename decltype((*output)->extra_bars)::BaseType::BufferWriter
        extra_bars_writer;
    const mojo::internal::ContainerValidateParams extra_bars_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::sample::BarDataView>>(
        in_extra_bars, buffer, &extra_bars_writer, &extra_bars_validate_params,
        context);
    (*output)->extra_bars.Set(
        extra_bars_writer.is_null() ? nullptr : extra_bars_writer.data());
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in Foo struct");
    decltype(Traits::source(input)) in_source = Traits::source(input);
    mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
        in_source, &(*output)->source, context);
    decltype(Traits::input_streams(input)) in_input_streams = Traits::input_streams(input);
    typename decltype((*output)->input_streams)::BaseType::BufferWriter
        input_streams_writer;
    const mojo::internal::ContainerValidateParams input_streams_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedDataPipeConsumerHandle>>(
        in_input_streams, buffer, &input_streams_writer, &input_streams_validate_params,
        context);
    (*output)->input_streams.Set(
        input_streams_writer.is_null() ? nullptr : input_streams_writer.data());
    decltype(Traits::output_streams(input)) in_output_streams = Traits::output_streams(input);
    typename decltype((*output)->output_streams)::BaseType::BufferWriter
        output_streams_writer;
    const mojo::internal::ContainerValidateParams output_streams_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedDataPipeProducerHandle>>(
        in_output_streams, buffer, &output_streams_writer, &output_streams_validate_params,
        context);
    (*output)->output_streams.Set(
        output_streams_writer.is_null() ? nullptr : output_streams_writer.data());
    decltype(Traits::array_of_array_of_bools(input)) in_array_of_array_of_bools = Traits::array_of_array_of_bools(input);
    typename decltype((*output)->array_of_array_of_bools)::BaseType::BufferWriter
        array_of_array_of_bools_writer;
    const mojo::internal::ContainerValidateParams array_of_array_of_bools_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<bool>>>(
        in_array_of_array_of_bools, buffer, &array_of_array_of_bools_writer, &array_of_array_of_bools_validate_params,
        context);
    (*output)->array_of_array_of_bools.Set(
        array_of_array_of_bools_writer.is_null() ? nullptr : array_of_array_of_bools_writer.data());
    decltype(Traits::multi_array_of_strings(input)) in_multi_array_of_strings = Traits::multi_array_of_strings(input);
    typename decltype((*output)->multi_array_of_strings)::BaseType::BufferWriter
        multi_array_of_strings_writer;
    const mojo::internal::ContainerValidateParams multi_array_of_strings_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>>(
        in_multi_array_of_strings, buffer, &multi_array_of_strings_writer, &multi_array_of_strings_validate_params,
        context);
    (*output)->multi_array_of_strings.Set(
        multi_array_of_strings_writer.is_null() ? nullptr : multi_array_of_strings_writer.data());
    decltype(Traits::array_of_bools(input)) in_array_of_bools = Traits::array_of_bools(input);
    typename decltype((*output)->array_of_bools)::BaseType::BufferWriter
        array_of_bools_writer;
    const mojo::internal::ContainerValidateParams array_of_bools_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<bool>>(
        in_array_of_bools, buffer, &array_of_bools_writer, &array_of_bools_validate_params,
        context);
    (*output)->array_of_bools.Set(
        array_of_bools_writer.is_null() ? nullptr : array_of_bools_writer.data());
  }

  static bool Deserialize(::sample::internal::Foo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::FooDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::DefaultsTestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::DefaultsTestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::DefaultsTest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->a0 = Traits::a0(input);
    (*output)->a1 = Traits::a1(input);
    (*output)->a2 = Traits::a2(input);
    (*output)->a3 = Traits::a3(input);
    (*output)->a4 = Traits::a4(input);
    (*output)->a5 = Traits::a5(input);
    (*output)->a6 = Traits::a6(input);
    (*output)->a7 = Traits::a7(input);
    (*output)->a8 = Traits::a8(input);
    (*output)->a9 = Traits::a9(input);
    (*output)->a10 = Traits::a10(input);
    (*output)->a11 = Traits::a11(input);
    (*output)->a12 = Traits::a12(input);
    (*output)->a13 = Traits::a13(input);
    (*output)->a14 = Traits::a14(input);
    (*output)->a15 = Traits::a15(input);
    (*output)->a16 = Traits::a16(input);
    (*output)->a17 = Traits::a17(input);
    decltype(Traits::a18(input)) in_a18 = Traits::a18(input);
    typename decltype((*output)->a18)::BaseType::BufferWriter
        a18_writer;
    const mojo::internal::ContainerValidateParams a18_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_a18, buffer, &a18_writer, &a18_validate_params,
        context);
    (*output)->a18.Set(
        a18_writer.is_null() ? nullptr : a18_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->a18.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null a18 in DefaultsTest struct");
    decltype(Traits::a19(input)) in_a19 = Traits::a19(input);
    typename decltype((*output)->a19)::BaseType::BufferWriter
        a19_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_a19, buffer, &a19_writer, context);
    (*output)->a19.Set(
        a19_writer.is_null() ? nullptr : a19_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->a19.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null a19 in DefaultsTest struct");
    mojo::internal::Serialize<::sample::Bar_Type>(
        Traits::a20(input), &(*output)->a20);
    decltype(Traits::a21(input)) in_a21 = Traits::a21(input);
    typename decltype((*output)->a21)::BaseType::BufferWriter
        a21_writer;
    mojo::internal::Serialize<::imported::PointDataView>(
        in_a21, buffer, &a21_writer, context);
    (*output)->a21.Set(
        a21_writer.is_null() ? nullptr : a21_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->a21.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null a21 in DefaultsTest struct");
    decltype(Traits::a22(input)) in_a22 = Traits::a22(input);
    typename decltype((*output)->a22)::BaseType::BufferWriter
        a22_writer;
    mojo::internal::Serialize<::imported::ThingDataView>(
        in_a22, buffer, &a22_writer, context);
    (*output)->a22.Set(
        a22_writer.is_null() ? nullptr : a22_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->a22.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null a22 in DefaultsTest struct");
    (*output)->a23 = Traits::a23(input);
    (*output)->a24 = Traits::a24(input);
    (*output)->a25 = Traits::a25(input);
    (*output)->a26 = Traits::a26(input);
    (*output)->a27 = Traits::a27(input);
    (*output)->a28 = Traits::a28(input);
    (*output)->a29 = Traits::a29(input);
    (*output)->a30 = Traits::a30(input);
    (*output)->a31 = Traits::a31(input);
  }

  static bool Deserialize(::sample::internal::DefaultsTest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::DefaultsTestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::StructWithHoleV1DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::StructWithHoleV1DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::StructWithHoleV1_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->v1 = Traits::v1(input);
    (*output)->v2 = Traits::v2(input);
  }

  static bool Deserialize(::sample::internal::StructWithHoleV1_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::StructWithHoleV1DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::sample::StructWithHoleV2DataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::sample::StructWithHoleV2DataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::sample::internal::StructWithHoleV2_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->v1 = Traits::v1(input);
    (*output)->v2 = Traits::v2(input);
    (*output)->v3 = Traits::v3(input);
  }

  static bool Deserialize(::sample::internal::StructWithHoleV2_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::sample::StructWithHoleV2DataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace sample {



inline void FooDataView::GetBarDataView(
    BarDataView* output) {
  auto pointer = data_->bar.Get();
  *output = BarDataView(pointer, context_);
}
inline void FooDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void FooDataView::GetExtraBarsDataView(
    mojo::ArrayDataView<BarDataView>* output) {
  auto pointer = data_->extra_bars.Get();
  *output = mojo::ArrayDataView<BarDataView>(pointer, context_);
}
inline void FooDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FooDataView::GetInputStreamsDataView(
    mojo::ArrayDataView<mojo::ScopedDataPipeConsumerHandle>* output) {
  auto pointer = data_->input_streams.Get();
  *output = mojo::ArrayDataView<mojo::ScopedDataPipeConsumerHandle>(pointer, context_);
}
inline void FooDataView::GetOutputStreamsDataView(
    mojo::ArrayDataView<mojo::ScopedDataPipeProducerHandle>* output) {
  auto pointer = data_->output_streams.Get();
  *output = mojo::ArrayDataView<mojo::ScopedDataPipeProducerHandle>(pointer, context_);
}
inline void FooDataView::GetArrayOfArrayOfBoolsDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<bool>>* output) {
  auto pointer = data_->array_of_array_of_bools.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<bool>>(pointer, context_);
}
inline void FooDataView::GetMultiArrayOfStringsDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>* output) {
  auto pointer = data_->multi_array_of_strings.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>(pointer, context_);
}
inline void FooDataView::GetArrayOfBoolsDataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->array_of_bools.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}


inline void DefaultsTestDataView::GetA18DataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->a18.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void DefaultsTestDataView::GetA19DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->a19.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DefaultsTestDataView::GetA21DataView(
    ::imported::PointDataView* output) {
  auto pointer = data_->a21.Get();
  *output = ::imported::PointDataView(pointer, context_);
}
inline void DefaultsTestDataView::GetA22DataView(
    ::imported::ThingDataView* output) {
  auto pointer = data_->a22.Get();
  *output = ::imported::ThingDataView(pointer, context_);
}







}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_SHARED_H_