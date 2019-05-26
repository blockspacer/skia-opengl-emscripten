// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_SHARED_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_SHARED_H_

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
#include "services/shape_detection/public/mojom/textdetection.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace shape_detection {
namespace mojom {
class TextDetectionResultDataView;



}  // namespace mojom
}  // namespace shape_detection

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::shape_detection::mojom::TextDetectionResultDataView> {
  using Data = ::shape_detection::mojom::internal::TextDetectionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace shape_detection {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TextDetectionInterfaceBase {};

using TextDetectionPtrDataView =
    mojo::InterfacePtrDataView<TextDetectionInterfaceBase>;
using TextDetectionRequestDataView =
    mojo::InterfaceRequestDataView<TextDetectionInterfaceBase>;
using TextDetectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TextDetectionInterfaceBase>;
using TextDetectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TextDetectionInterfaceBase>;
class TextDetectionResultDataView {
 public:
  TextDetectionResultDataView() {}

  TextDetectionResultDataView(
      internal::TextDetectionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRawValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawValue(UserType* output) {
    auto* pointer = data_->raw_value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBoundingBoxDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBoundingBox(UserType* output) {
    auto* pointer = data_->bounding_box.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetCornerPointsDataView(
      mojo::ArrayDataView<::gfx::mojom::PointFDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCornerPoints(UserType* output) {
    auto* pointer = data_->corner_points.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::PointFDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TextDetectionResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace shape_detection

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shape_detection::mojom::TextDetectionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::shape_detection::mojom::TextDetectionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::shape_detection::mojom::internal::TextDetectionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::raw_value(input)) in_raw_value = Traits::raw_value(input);
    typename decltype((*output)->raw_value)::BaseType::BufferWriter
        raw_value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_raw_value, buffer, &raw_value_writer, context);
    (*output)->raw_value.Set(
        raw_value_writer.is_null() ? nullptr : raw_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->raw_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_value in TextDetectionResult struct");
    decltype(Traits::bounding_box(input)) in_bounding_box = Traits::bounding_box(input);
    typename decltype((*output)->bounding_box)::BaseType::BufferWriter
        bounding_box_writer;
    mojo::internal::Serialize<::gfx::mojom::RectFDataView>(
        in_bounding_box, buffer, &bounding_box_writer, context);
    (*output)->bounding_box.Set(
        bounding_box_writer.is_null() ? nullptr : bounding_box_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->bounding_box.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null bounding_box in TextDetectionResult struct");
    decltype(Traits::corner_points(input)) in_corner_points = Traits::corner_points(input);
    typename decltype((*output)->corner_points)::BaseType::BufferWriter
        corner_points_writer;
    const mojo::internal::ContainerValidateParams corner_points_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::PointFDataView>>(
        in_corner_points, buffer, &corner_points_writer, &corner_points_validate_params,
        context);
    (*output)->corner_points.Set(
        corner_points_writer.is_null() ? nullptr : corner_points_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->corner_points.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null corner_points in TextDetectionResult struct");
  }

  static bool Deserialize(::shape_detection::mojom::internal::TextDetectionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::shape_detection::mojom::TextDetectionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace shape_detection {
namespace mojom {

inline void TextDetectionResultDataView::GetRawValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->raw_value.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TextDetectionResultDataView::GetBoundingBoxDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->bounding_box.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void TextDetectionResultDataView::GetCornerPointsDataView(
    mojo::ArrayDataView<::gfx::mojom::PointFDataView>* output) {
  auto pointer = data_->corner_points.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::PointFDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_SHARED_H_