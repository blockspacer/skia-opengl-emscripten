// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_MOJOM_SHARED_H_
#define UI_DISPLAY_MOJO_DISPLAY_MOJOM_SHARED_H_

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
#include "ui/display/mojo/display.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace display {
namespace mojom {
class DisplayDataView;



}  // namespace mojom
}  // namespace display

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::display::mojom::DisplayDataView> {
  using Data = ::display::mojom::internal::Display_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace display {
namespace mojom {


enum class Rotation : int32_t {
  
  VALUE_0,
  
  VALUE_90,
  
  VALUE_180,
  
  VALUE_270,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, Rotation value);
inline bool IsKnownEnumValue(Rotation value) {
  return internal::Rotation_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TouchSupport : int32_t {
  
  UNKNOWN,
  
  AVAILABLE,
  
  UNAVAILABLE,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, TouchSupport value);
inline bool IsKnownEnumValue(TouchSupport value) {
  return internal::TouchSupport_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AccelerometerSupport : int32_t {
  
  UNKNOWN,
  
  AVAILABLE,
  
  UNAVAILABLE,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, AccelerometerSupport value);
inline bool IsKnownEnumValue(AccelerometerSupport value) {
  return internal::AccelerometerSupport_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class DisplayDataView {
 public:
  DisplayDataView() {}

  DisplayDataView(
      internal::Display_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t id() const {
    return data_->id;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizeInPixels(UserType* output) {
    auto* pointer = data_->size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetWorkAreaDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWorkArea(UserType* output) {
    auto* pointer = data_->work_area.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRotation(UserType* output) const {
    auto data_value = data_->rotation;
    return mojo::internal::Deserialize<::display::mojom::Rotation>(
        data_value, output);
  }

  Rotation rotation() const {
    return static_cast<Rotation>(data_->rotation);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTouchSupport(UserType* output) const {
    auto data_value = data_->touch_support;
    return mojo::internal::Deserialize<::display::mojom::TouchSupport>(
        data_value, output);
  }

  TouchSupport touch_support() const {
    return static_cast<TouchSupport>(data_->touch_support);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccelerometerSupport(UserType* output) const {
    auto data_value = data_->accelerometer_support;
    return mojo::internal::Deserialize<::display::mojom::AccelerometerSupport>(
        data_value, output);
  }

  AccelerometerSupport accelerometer_support() const {
    return static_cast<AccelerometerSupport>(data_->accelerometer_support);
  }
  inline void GetMaximumCursorSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaximumCursorSize(UserType* output) {
    auto* pointer = data_->maximum_cursor_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  int32_t color_depth() const {
    return data_->color_depth;
  }
  int32_t depth_per_component() const {
    return data_->depth_per_component;
  }
  bool is_monochrome() const {
    return data_->is_monochrome;
  }
 private:
  internal::Display_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace display

namespace std {

template <>
struct hash<::display::mojom::Rotation>
    : public mojo::internal::EnumHashImpl<::display::mojom::Rotation> {};

template <>
struct hash<::display::mojom::TouchSupport>
    : public mojo::internal::EnumHashImpl<::display::mojom::TouchSupport> {};

template <>
struct hash<::display::mojom::AccelerometerSupport>
    : public mojo::internal::EnumHashImpl<::display::mojom::AccelerometerSupport> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::display::mojom::Rotation, ::display::mojom::Rotation> {
  static ::display::mojom::Rotation ToMojom(::display::mojom::Rotation input) { return input; }
  static bool FromMojom(::display::mojom::Rotation input, ::display::mojom::Rotation* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::Rotation, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::Rotation, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::Rotation>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::display::mojom::TouchSupport, ::display::mojom::TouchSupport> {
  static ::display::mojom::TouchSupport ToMojom(::display::mojom::TouchSupport input) { return input; }
  static bool FromMojom(::display::mojom::TouchSupport input, ::display::mojom::TouchSupport* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::TouchSupport, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::TouchSupport, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::TouchSupport>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::display::mojom::AccelerometerSupport, ::display::mojom::AccelerometerSupport> {
  static ::display::mojom::AccelerometerSupport ToMojom(::display::mojom::AccelerometerSupport input) { return input; }
  static bool FromMojom(::display::mojom::AccelerometerSupport input, ::display::mojom::AccelerometerSupport* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::AccelerometerSupport, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::AccelerometerSupport, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::AccelerometerSupport>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::DisplayDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::display::mojom::DisplayDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::display::mojom::internal::Display_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::bounds(input)) in_bounds = Traits::bounds(input);
    typename decltype((*output)->bounds)::BaseType::BufferWriter
        bounds_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_bounds, buffer, &bounds_writer, context);
    (*output)->bounds.Set(
        bounds_writer.is_null() ? nullptr : bounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bounds in Display struct");
    decltype(Traits::size_in_pixels(input)) in_size_in_pixels = Traits::size_in_pixels(input);
    typename decltype((*output)->size_in_pixels)::BaseType::BufferWriter
        size_in_pixels_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_size_in_pixels, buffer, &size_in_pixels_writer, context);
    (*output)->size_in_pixels.Set(
        size_in_pixels_writer.is_null() ? nullptr : size_in_pixels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->size_in_pixels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null size_in_pixels in Display struct");
    decltype(Traits::work_area(input)) in_work_area = Traits::work_area(input);
    typename decltype((*output)->work_area)::BaseType::BufferWriter
        work_area_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_work_area, buffer, &work_area_writer, context);
    (*output)->work_area.Set(
        work_area_writer.is_null() ? nullptr : work_area_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->work_area.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null work_area in Display struct");
    (*output)->device_scale_factor = Traits::device_scale_factor(input);
    mojo::internal::Serialize<::display::mojom::Rotation>(
        Traits::rotation(input), &(*output)->rotation);
    mojo::internal::Serialize<::display::mojom::TouchSupport>(
        Traits::touch_support(input), &(*output)->touch_support);
    mojo::internal::Serialize<::display::mojom::AccelerometerSupport>(
        Traits::accelerometer_support(input), &(*output)->accelerometer_support);
    decltype(Traits::maximum_cursor_size(input)) in_maximum_cursor_size = Traits::maximum_cursor_size(input);
    typename decltype((*output)->maximum_cursor_size)::BaseType::BufferWriter
        maximum_cursor_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_maximum_cursor_size, buffer, &maximum_cursor_size_writer, context);
    (*output)->maximum_cursor_size.Set(
        maximum_cursor_size_writer.is_null() ? nullptr : maximum_cursor_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->maximum_cursor_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null maximum_cursor_size in Display struct");
    (*output)->color_depth = Traits::color_depth(input);
    (*output)->depth_per_component = Traits::depth_per_component(input);
    (*output)->is_monochrome = Traits::is_monochrome(input);
  }

  static bool Deserialize(::display::mojom::internal::Display_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::display::mojom::DisplayDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace display {
namespace mojom {

inline void DisplayDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DisplayDataView::GetSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void DisplayDataView::GetWorkAreaDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->work_area.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DisplayDataView::GetMaximumCursorSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->maximum_cursor_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_MOJOM_SHARED_H_