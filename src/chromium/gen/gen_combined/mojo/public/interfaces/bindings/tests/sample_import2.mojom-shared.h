// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace imported {
class SizeDataView;

class ThingDataView;



}  // namespace imported

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::imported::SizeDataView> {
  using Data = ::imported::internal::Size_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::imported::ThingDataView> {
  using Data = ::imported::internal::Thing_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace imported {


enum class Color : int32_t {
  
  RED,
  
  BLACK,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, Color value);
inline bool IsKnownEnumValue(Color value) {
  return internal::Color_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SizeDataView {
 public:
  SizeDataView() {}

  SizeDataView(
      internal::Size_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::Size_Data* data_ = nullptr;
};

class ThingDataView {
 public:
  ThingDataView() {}

  ThingDataView(
      internal::Thing_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShape(UserType* output) const {
    auto data_value = data_->shape;
    return mojo::internal::Deserialize<::imported::Shape>(
        data_value, output);
  }

  ::imported::Shape shape() const {
    return static_cast<::imported::Shape>(data_->shape);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColor(UserType* output) const {
    auto data_value = data_->color;
    return mojo::internal::Deserialize<::imported::Color>(
        data_value, output);
  }

  Color color() const {
    return static_cast<Color>(data_->color);
  }
  inline void GetLocationDataView(
      ::imported::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::imported::PointDataView>(
        pointer, output, context_);
  }
  inline void GetSizeDataView(
      SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::imported::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::Thing_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace imported

namespace std {

template <>
struct hash<::imported::Color>
    : public mojo::internal::EnumHashImpl<::imported::Color> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::imported::Color, ::imported::Color> {
  static ::imported::Color ToMojom(::imported::Color input) { return input; }
  static bool FromMojom(::imported::Color input, ::imported::Color* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::Color, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::imported::Color, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::imported::Color>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::SizeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::imported::SizeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::imported::internal::Size_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->width = Traits::width(input);
    (*output)->height = Traits::height(input);
  }

  static bool Deserialize(::imported::internal::Size_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::imported::SizeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::imported::ThingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::imported::ThingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::imported::internal::Thing_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::imported::Shape>(
        Traits::shape(input), &(*output)->shape);
    mojo::internal::Serialize<::imported::Color>(
        Traits::color(input), &(*output)->color);
    decltype(Traits::location(input)) in_location = Traits::location(input);
    typename decltype((*output)->location)::BaseType::BufferWriter
        location_writer;
    mojo::internal::Serialize<::imported::PointDataView>(
        in_location, buffer, &location_writer, context);
    (*output)->location.Set(
        location_writer.is_null() ? nullptr : location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null location in Thing struct");
    decltype(Traits::size(input)) in_size = Traits::size(input);
    typename decltype((*output)->size)::BaseType::BufferWriter
        size_writer;
    mojo::internal::Serialize<::imported::SizeDataView>(
        in_size, buffer, &size_writer, context);
    (*output)->size.Set(
        size_writer.is_null() ? nullptr : size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null size in Thing struct");
  }

  static bool Deserialize(::imported::internal::Thing_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::imported::ThingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace imported {



inline void ThingDataView::GetLocationDataView(
    ::imported::PointDataView* output) {
  auto pointer = data_->location.Get();
  *output = ::imported::PointDataView(pointer, context_);
}
inline void ThingDataView::GetSizeDataView(
    SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = SizeDataView(pointer, context_);
}



}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT2_MOJOM_SHARED_H_