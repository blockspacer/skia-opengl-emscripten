// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class AggregatedHitTestRegionDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::AggregatedHitTestRegionDataView> {
  using Data = ::viz::mojom::internal::AggregatedHitTestRegion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class AggregatedHitTestRegionDataView {
 public:
  AggregatedHitTestRegionDataView() {}

  AggregatedHitTestRegionDataView(
      internal::AggregatedHitTestRegion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  uint32_t flags() const {
    return data_->flags;
  }
  uint32_t async_hit_test_reasons() const {
    return data_->async_hit_test_reasons;
  }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  uint32_t child_count() const {
    return data_->child_count;
  }
  inline void GetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransform(UserType* output) {
    auto* pointer = data_->transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
 private:
  internal::AggregatedHitTestRegion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::AggregatedHitTestRegionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::AggregatedHitTestRegionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::AggregatedHitTestRegion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::frame_sink_id(input)) in_frame_sink_id = Traits::frame_sink_id(input);
    typename decltype((*output)->frame_sink_id)::BaseType::BufferWriter
        frame_sink_id_writer;
    mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
        in_frame_sink_id, buffer, &frame_sink_id_writer, context);
    (*output)->frame_sink_id.Set(
        frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_sink_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_sink_id in AggregatedHitTestRegion struct");
    (*output)->flags = Traits::flags(input);
    (*output)->async_hit_test_reasons = Traits::async_hit_test_reasons(input);
    decltype(Traits::rect(input)) in_rect = Traits::rect(input);
    typename decltype((*output)->rect)::BaseType::BufferWriter
        rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_rect, buffer, &rect_writer, context);
    (*output)->rect.Set(
        rect_writer.is_null() ? nullptr : rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rect in AggregatedHitTestRegion struct");
    (*output)->child_count = Traits::child_count(input);
    decltype(Traits::transform(input)) in_transform = Traits::transform(input);
    typename decltype((*output)->transform)::BaseType::BufferWriter
        transform_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_transform, buffer, &transform_writer, context);
    (*output)->transform.Set(
        transform_writer.is_null() ? nullptr : transform_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transform.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transform in AggregatedHitTestRegion struct");
  }

  static bool Deserialize(::viz::mojom::internal::AggregatedHitTestRegion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::AggregatedHitTestRegionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void AggregatedHitTestRegionDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void AggregatedHitTestRegionDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void AggregatedHitTestRegionDataView::GetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_SHARED_H_