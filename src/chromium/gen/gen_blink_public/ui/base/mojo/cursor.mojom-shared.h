// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CURSOR_MOJOM_SHARED_H_
#define UI_BASE_MOJO_CURSOR_MOJOM_SHARED_H_

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
#include "ui/base/mojo/cursor.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class CursorDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::CursorDataView> {
  using Data = ::ui::mojom::internal::Cursor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {


enum class CursorType : int32_t {
  
  kNull = 0,
  
  kPointer,
  
  kCross,
  
  kHand,
  
  kIBeam,
  
  kWait,
  
  kHelp,
  
  kEastResize,
  
  kNorthResize,
  
  kNorthEastResize,
  
  kNorthWestResize,
  
  kSouthResize,
  
  kSouthEastResize,
  
  kSouthWestResize,
  
  kWestResize,
  
  kNorthSouthResize,
  
  kEastWestResize,
  
  kNorthEastSouthWestResize,
  
  kNorthWestSouthEastResize,
  
  kColumnResize,
  
  kRowResize,
  
  kMiddlePanning,
  
  kEastPanning,
  
  kNorthPanning,
  
  kNorthEastPanning,
  
  kNorthWestPanning,
  
  kSouthPanning,
  
  kSouthEastPanning,
  
  kSouthWestPanning,
  
  kWestPanning,
  
  kMove,
  
  kVerticalText,
  
  kCell,
  
  kContextMenu,
  
  kAlias,
  
  kProgress,
  
  kNoDrop,
  
  kCopy,
  
  kNone,
  
  kNotAllowed,
  
  kZoomIn,
  
  kZoomOut,
  
  kGrab,
  
  kGrabbing,
  
  kCustom,
  kMinValue = 0,
  kMaxValue = 44,
};

 std::ostream& operator<<(std::ostream& os, CursorType value);
inline bool IsKnownEnumValue(CursorType value) {
  return internal::CursorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CursorSize : int32_t {
  
  kNormal,
  
  kLarge,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, CursorSize value);
inline bool IsKnownEnumValue(CursorSize value) {
  return internal::CursorSize_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class CursorDataView {
 public:
  CursorDataView() {}

  CursorDataView(
      internal::Cursor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNativeType(UserType* output) const {
    auto data_value = data_->native_type;
    return mojo::internal::Deserialize<::ui::mojom::CursorType>(
        data_value, output);
  }

  CursorType native_type() const {
    return static_cast<CursorType>(data_->native_type);
  }
  inline void GetHotspotDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHotspot(UserType* output) {
    auto* pointer = data_->hotspot.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  inline void GetBitmapDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmap(UserType* output) {
    auto* pointer = data_->bitmap.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
 private:
  internal::Cursor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::CursorType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::CursorType> {};

template <>
struct hash<::ui::mojom::CursorSize>
    : public mojo::internal::EnumHashImpl<::ui::mojom::CursorSize> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::CursorType, ::ui::mojom::CursorType> {
  static ::ui::mojom::CursorType ToMojom(::ui::mojom::CursorType input) { return input; }
  static bool FromMojom(::ui::mojom::CursorType input, ::ui::mojom::CursorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CursorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::CursorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::CursorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::CursorSize, ::ui::mojom::CursorSize> {
  static ::ui::mojom::CursorSize ToMojom(::ui::mojom::CursorSize input) { return input; }
  static bool FromMojom(::ui::mojom::CursorSize input, ::ui::mojom::CursorSize* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CursorSize, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::CursorSize, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::CursorSize>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CursorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::CursorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::Cursor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::CursorType>(
        Traits::native_type(input), &(*output)->native_type);
    decltype(Traits::hotspot(input)) in_hotspot = Traits::hotspot(input);
    typename decltype((*output)->hotspot)::BaseType::BufferWriter
        hotspot_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_hotspot, buffer, &hotspot_writer, context);
    (*output)->hotspot.Set(
        hotspot_writer.is_null() ? nullptr : hotspot_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hotspot.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hotspot in Cursor struct");
    decltype(Traits::bitmap(input)) in_bitmap = Traits::bitmap(input);
    typename decltype((*output)->bitmap)::BaseType::BufferWriter
        bitmap_writer;
    mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
        in_bitmap, buffer, &bitmap_writer, context);
    (*output)->bitmap.Set(
        bitmap_writer.is_null() ? nullptr : bitmap_writer.data());
    (*output)->device_scale_factor = Traits::device_scale_factor(input);
  }

  static bool Deserialize(::ui::mojom::internal::Cursor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::CursorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void CursorDataView::GetHotspotDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->hotspot.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void CursorDataView::GetBitmapDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->bitmap.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_MOJO_CURSOR_MOJOM_SHARED_H_