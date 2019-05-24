// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_SHARED_H_
#define UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_SHARED_H_

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
#include "ui/gfx/image/mojo/image.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class ImageSkiaRepDataView;

class ImageSkiaDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::ImageSkiaRepDataView> {
  using Data = ::gfx::mojom::internal::ImageSkiaRep_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::ImageSkiaDataView> {
  using Data = ::gfx::mojom::internal::ImageSkia_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {
class ImageSkiaRepDataView {
 public:
  ImageSkiaRepDataView() {}

  ImageSkiaRepDataView(
      internal::ImageSkiaRep_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitmapDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmap(UserType* output) {
    auto* pointer = data_->bitmap.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  float scale() const {
    return data_->scale;
  }
 private:
  internal::ImageSkiaRep_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageSkiaDataView {
 public:
  ImageSkiaDataView() {}

  ImageSkiaDataView(
      internal::ImageSkia_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageRepsDataView(
      mojo::ArrayDataView<ImageSkiaRepDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageReps(UserType* output) {
    auto* pointer = data_->image_reps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::ImageSkiaRepDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ImageSkia_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ImageSkiaRepDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::ImageSkiaRepDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::ImageSkiaRep_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::bitmap(input)) in_bitmap = Traits::bitmap(input);
    typename decltype((*output)->bitmap)::BaseType::BufferWriter
        bitmap_writer;
    mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
        in_bitmap, buffer, &bitmap_writer, context);
    (*output)->bitmap.Set(
        bitmap_writer.is_null() ? nullptr : bitmap_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bitmap.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bitmap in ImageSkiaRep struct");
    (*output)->scale = Traits::scale(input);
  }

  static bool Deserialize(::gfx::mojom::internal::ImageSkiaRep_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::ImageSkiaRepDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::ImageSkiaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::ImageSkiaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::ImageSkia_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::image_reps(input)) in_image_reps = Traits::image_reps(input);
    typename decltype((*output)->image_reps)::BaseType::BufferWriter
        image_reps_writer;
    const mojo::internal::ContainerValidateParams image_reps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::ImageSkiaRepDataView>>(
        in_image_reps, buffer, &image_reps_writer, &image_reps_validate_params,
        context);
    (*output)->image_reps.Set(
        image_reps_writer.is_null() ? nullptr : image_reps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_reps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_reps in ImageSkia struct");
  }

  static bool Deserialize(::gfx::mojom::internal::ImageSkia_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::ImageSkiaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {

inline void ImageSkiaRepDataView::GetBitmapDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->bitmap.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


inline void ImageSkiaDataView::GetImageRepsDataView(
    mojo::ArrayDataView<ImageSkiaRepDataView>* output) {
  auto pointer = data_->image_reps.Get();
  *output = mojo::ArrayDataView<ImageSkiaRepDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_SHARED_H_