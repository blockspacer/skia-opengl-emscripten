// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class SurfaceInfoDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::SurfaceInfoDataView> {
  using Data = ::viz::mojom::internal::SurfaceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class SurfaceInfoDataView {
 public:
  SurfaceInfoDataView() {}

  SurfaceInfoDataView(
      internal::SurfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  inline void GetSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizeInPixels(UserType* output) {
    auto* pointer = data_->size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::SurfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::SurfaceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::SurfaceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::SurfaceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::surface_id(input)) in_surface_id = Traits::surface_id(input);
    typename decltype((*output)->surface_id)::BaseType::BufferWriter
        surface_id_writer;
    mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
        in_surface_id, buffer, &surface_id_writer, context);
    (*output)->surface_id.Set(
        surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->surface_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null surface_id in SurfaceInfo struct");
    (*output)->device_scale_factor = Traits::device_scale_factor(input);
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
        "null size_in_pixels in SurfaceInfo struct");
  }

  static bool Deserialize(::viz::mojom::internal::SurfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::SurfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void SurfaceInfoDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void SurfaceInfoDataView::GetSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_SHARED_H_