// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/filter_operation.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/paint_filter.mojom-shared.h"
#include "skia/public/interfaces/blur_image_filter_tile_mode.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class FilterOperationDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::FilterOperationDataView> {
  using Data = ::viz::mojom::internal::FilterOperation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {


enum class FilterType : int32_t {
  
  GRAYSCALE,
  
  SEPIA,
  
  SATURATE,
  
  HUE_ROTATE,
  
  INVERT,
  
  BRIGHTNESS,
  
  CONTRAST,
  
  OPACITY,
  
  BLUR,
  
  DROP_SHADOW,
  
  COLOR_MATRIX,
  
  ZOOM,
  
  REFERENCE,
  
  SATURATING_BRIGHTNESS,
  
  ALPHA_THRESHOLD,
  
  FILTER_TYPE_LAST = FilterType::ALPHA_THRESHOLD,
  kMinValue = 0,
  kMaxValue = 14,
};

 std::ostream& operator<<(std::ostream& os, FilterType value);
inline bool IsKnownEnumValue(FilterType value) {
  return internal::FilterType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class FilterOperationDataView {
 public:
  FilterOperationDataView() {}

  FilterOperationDataView(
      internal::FilterOperation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::viz::mojom::FilterType>(
        data_value, output);
  }

  FilterType type() const {
    return static_cast<FilterType>(data_->type);
  }
  float amount() const {
    return data_->amount;
  }
  float outer_threshold() const {
    return data_->outer_threshold;
  }
  inline void GetDropShadowOffsetDataView(
      ::gfx::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDropShadowOffset(UserType* output) {
    auto* pointer = data_->drop_shadow_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointDataView>(
        pointer, output, context_);
  }
  uint32_t drop_shadow_color() const {
    return data_->drop_shadow_color;
  }
  inline void GetImageFilterDataView(
      ::viz::mojom::PaintFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageFilter(UserType* output) {
    auto* pointer = data_->image_filter.Get();
    return mojo::internal::Deserialize<::viz::mojom::PaintFilterDataView>(
        pointer, output, context_);
  }
  inline void GetMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatrix(UserType* output) {
    auto* pointer = data_->matrix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
  int32_t zoom_inset() const {
    return data_->zoom_inset;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlurTileMode(UserType* output) const {
    auto data_value = data_->blur_tile_mode;
    return mojo::internal::Deserialize<::skia::mojom::BlurTileMode>(
        data_value, output);
  }

  ::skia::mojom::BlurTileMode blur_tile_mode() const {
    return static_cast<::skia::mojom::BlurTileMode>(data_->blur_tile_mode);
  }
  inline void GetShapeDataView(
      mojo::ArrayDataView<::gfx::mojom::RectDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShape(UserType* output) {
    auto* pointer = data_->shape.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FilterOperation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

template <>
struct hash<::viz::mojom::FilterType>
    : public mojo::internal::EnumHashImpl<::viz::mojom::FilterType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::viz::mojom::FilterType, ::viz::mojom::FilterType> {
  static ::viz::mojom::FilterType ToMojom(::viz::mojom::FilterType input) { return input; }
  static bool FromMojom(::viz::mojom::FilterType input, ::viz::mojom::FilterType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::FilterType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::viz::mojom::FilterType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::viz::mojom::FilterType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::FilterOperationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::FilterOperationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::FilterOperation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::viz::mojom::FilterType>(
        Traits::type(input), &(*output)->type);
    (*output)->amount = Traits::amount(input);
    (*output)->outer_threshold = Traits::outer_threshold(input);
    decltype(Traits::drop_shadow_offset(input)) in_drop_shadow_offset = Traits::drop_shadow_offset(input);
    typename decltype((*output)->drop_shadow_offset)::BaseType::BufferWriter
        drop_shadow_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::PointDataView>(
        in_drop_shadow_offset, buffer, &drop_shadow_offset_writer, context);
    (*output)->drop_shadow_offset.Set(
        drop_shadow_offset_writer.is_null() ? nullptr : drop_shadow_offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->drop_shadow_offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null drop_shadow_offset in FilterOperation struct");
    (*output)->drop_shadow_color = Traits::drop_shadow_color(input);
    decltype(Traits::image_filter(input)) in_image_filter = Traits::image_filter(input);
    typename decltype((*output)->image_filter)::BaseType::BufferWriter
        image_filter_writer;
    mojo::internal::Serialize<::viz::mojom::PaintFilterDataView>(
        in_image_filter, buffer, &image_filter_writer, context);
    (*output)->image_filter.Set(
        image_filter_writer.is_null() ? nullptr : image_filter_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_filter.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_filter in FilterOperation struct");
    decltype(Traits::matrix(input)) in_matrix = Traits::matrix(input);
    typename decltype((*output)->matrix)::BaseType::BufferWriter
        matrix_writer;
    const mojo::internal::ContainerValidateParams matrix_validate_params(
        20, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_matrix, buffer, &matrix_writer, &matrix_validate_params,
        context);
    (*output)->matrix.Set(
        matrix_writer.is_null() ? nullptr : matrix_writer.data());
    (*output)->zoom_inset = Traits::zoom_inset(input);
    mojo::internal::Serialize<::skia::mojom::BlurTileMode>(
        Traits::blur_tile_mode(input), &(*output)->blur_tile_mode);
    decltype(Traits::shape(input)) in_shape = Traits::shape(input);
    typename decltype((*output)->shape)::BaseType::BufferWriter
        shape_writer;
    const mojo::internal::ContainerValidateParams shape_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
        in_shape, buffer, &shape_writer, &shape_validate_params,
        context);
    (*output)->shape.Set(
        shape_writer.is_null() ? nullptr : shape_writer.data());
  }

  static bool Deserialize(::viz::mojom::internal::FilterOperation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::FilterOperationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void FilterOperationDataView::GetDropShadowOffsetDataView(
    ::gfx::mojom::PointDataView* output) {
  auto pointer = data_->drop_shadow_offset.Get();
  *output = ::gfx::mojom::PointDataView(pointer, context_);
}
inline void FilterOperationDataView::GetImageFilterDataView(
    ::viz::mojom::PaintFilterDataView* output) {
  auto pointer = data_->image_filter.Get();
  *output = ::viz::mojom::PaintFilterDataView(pointer, context_);
}
inline void FilterOperationDataView::GetMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}
inline void FilterOperationDataView::GetShapeDataView(
    mojo::ArrayDataView<::gfx::mojom::RectDataView>* output) {
  auto pointer = data_->shape.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::RectDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_SHARED_H_