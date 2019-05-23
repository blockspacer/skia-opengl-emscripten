// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_SHARED_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_SHARED_H_

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
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "skia/public/interfaces/image_info.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace skia {
namespace mojom {
class BitmapDataView;

class InlineBitmapDataView;



}  // namespace mojom
}  // namespace skia

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::skia::mojom::BitmapDataView> {
  using Data = ::skia::mojom::internal::Bitmap_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::skia::mojom::InlineBitmapDataView> {
  using Data = ::skia::mojom::internal::InlineBitmap_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace skia {
namespace mojom {
class BitmapDataView {
 public:
  BitmapDataView() {}

  BitmapDataView(
      internal::Bitmap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageInfoDataView(
      ::skia::mojom::ImageInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageInfo(UserType* output) {
    auto* pointer = data_->image_info.Get();
    return mojo::internal::Deserialize<::skia::mojom::ImageInfoDataView>(
        pointer, output, context_);
  }
  uint64_t row_bytes() const {
    return data_->row_bytes;
  }
  inline void GetPixelDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelData(UserType* output) {
    auto* pointer = !data_->pixel_data.is_null() ? &data_->pixel_data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::Bitmap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InlineBitmapDataView {
 public:
  InlineBitmapDataView() {}

  InlineBitmapDataView(
      internal::InlineBitmap_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageInfoDataView(
      ::skia::mojom::ImageInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageInfo(UserType* output) {
    auto* pointer = data_->image_info.Get();
    return mojo::internal::Deserialize<::skia::mojom::ImageInfoDataView>(
        pointer, output, context_);
  }
  uint64_t row_bytes() const {
    return data_->row_bytes;
  }
  inline void GetPixelDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelData(UserType* output) {
    auto* pointer = data_->pixel_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::InlineBitmap_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace skia

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::BitmapDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::BitmapDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::skia::mojom::internal::Bitmap_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::image_info(input)) in_image_info = Traits::image_info(input);
    typename decltype((*output)->image_info)::BaseType::BufferWriter
        image_info_writer;
    mojo::internal::Serialize<::skia::mojom::ImageInfoDataView>(
        in_image_info, buffer, &image_info_writer, context);
    (*output)->image_info.Set(
        image_info_writer.is_null() ? nullptr : image_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_info in Bitmap struct");
    (*output)->row_bytes = Traits::row_bytes(input);
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    typename decltype((*output)->pixel_data)::BufferWriter pixel_data_writer;
    pixel_data_writer.AllocateInline(buffer, &(*output)->pixel_data);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_pixel_data, buffer, &pixel_data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in Bitmap struct");
  }

  static bool Deserialize(::skia::mojom::internal::Bitmap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::BitmapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::skia::mojom::InlineBitmapDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::skia::mojom::InlineBitmapDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::skia::mojom::internal::InlineBitmap_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::image_info(input)) in_image_info = Traits::image_info(input);
    typename decltype((*output)->image_info)::BaseType::BufferWriter
        image_info_writer;
    mojo::internal::Serialize<::skia::mojom::ImageInfoDataView>(
        in_image_info, buffer, &image_info_writer, context);
    (*output)->image_info.Set(
        image_info_writer.is_null() ? nullptr : image_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_info in InlineBitmap struct");
    (*output)->row_bytes = Traits::row_bytes(input);
    decltype(Traits::pixel_data(input)) in_pixel_data = Traits::pixel_data(input);
    typename decltype((*output)->pixel_data)::BaseType::BufferWriter
        pixel_data_writer;
    const mojo::internal::ContainerValidateParams pixel_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_pixel_data, buffer, &pixel_data_writer, &pixel_data_validate_params,
        context);
    (*output)->pixel_data.Set(
        pixel_data_writer.is_null() ? nullptr : pixel_data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pixel_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_data in InlineBitmap struct");
  }

  static bool Deserialize(::skia::mojom::internal::InlineBitmap_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::skia::mojom::InlineBitmapDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace skia {
namespace mojom {

inline void BitmapDataView::GetImageInfoDataView(
    ::skia::mojom::ImageInfoDataView* output) {
  auto pointer = data_->image_info.Get();
  *output = ::skia::mojom::ImageInfoDataView(pointer, context_);
}
inline void BitmapDataView::GetPixelDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->pixel_data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}


inline void InlineBitmapDataView::GetImageInfoDataView(
    ::skia::mojom::ImageInfoDataView* output) {
  auto pointer = data_->image_info.Get();
  *output = ::skia::mojom::ImageInfoDataView(pointer, context_);
}
inline void InlineBitmapDataView::GetPixelDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->pixel_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_SHARED_H_