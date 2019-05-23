// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class HitTestRegionDataView;

class HitTestRegionListDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::HitTestRegionDataView> {
  using Data = ::viz::mojom::internal::HitTestRegion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::HitTestRegionListDataView> {
  using Data = ::viz::mojom::internal::HitTestRegionList_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class HitTestRegionDataView {
 public:
  HitTestRegionDataView() {}

  HitTestRegionDataView(
      internal::HitTestRegion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t flags() const {
    return data_->flags;
  }
  uint32_t async_hit_test_reasons() const {
    return data_->async_hit_test_reasons;
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
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
  internal::HitTestRegion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HitTestRegionListDataView {
 public:
  HitTestRegionListDataView() {}

  HitTestRegionListDataView(
      internal::HitTestRegionList_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t flags() const {
    return data_->flags;
  }
  uint32_t async_hit_test_reasons() const {
    return data_->async_hit_test_reasons;
  }
  inline void GetBoundsDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBounds(UserType* output) {
    auto* pointer = data_->bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransform(UserType* output) {
    auto* pointer = data_->transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
  inline void GetRegionsDataView(
      mojo::ArrayDataView<HitTestRegionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegions(UserType* output) {
    auto* pointer = data_->regions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::HitTestRegionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HitTestRegionList_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::HitTestRegionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::HitTestRegionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::HitTestRegion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->flags = Traits::flags(input);
    (*output)->async_hit_test_reasons = Traits::async_hit_test_reasons(input);
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
        "null frame_sink_id in HitTestRegion struct");
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
        "null rect in HitTestRegion struct");
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
        "null transform in HitTestRegion struct");
  }

  static bool Deserialize(::viz::mojom::internal::HitTestRegion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::HitTestRegionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::HitTestRegionListDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::HitTestRegionListDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::HitTestRegionList_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->flags = Traits::flags(input);
    (*output)->async_hit_test_reasons = Traits::async_hit_test_reasons(input);
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
        "null bounds in HitTestRegionList struct");
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
        "null transform in HitTestRegionList struct");
    decltype(Traits::regions(input)) in_regions = Traits::regions(input);
    typename decltype((*output)->regions)::BaseType::BufferWriter
        regions_writer;
    const mojo::internal::ContainerValidateParams regions_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::HitTestRegionDataView>>(
        in_regions, buffer, &regions_writer, &regions_validate_params,
        context);
    (*output)->regions.Set(
        regions_writer.is_null() ? nullptr : regions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->regions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null regions in HitTestRegionList struct");
  }

  static bool Deserialize(::viz::mojom::internal::HitTestRegionList_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::HitTestRegionListDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void HitTestRegionDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void HitTestRegionDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void HitTestRegionDataView::GetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}


inline void HitTestRegionListDataView::GetBoundsDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->bounds.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void HitTestRegionListDataView::GetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}
inline void HitTestRegionListDataView::GetRegionsDataView(
    mojo::ArrayDataView<HitTestRegionDataView>* output) {
  auto pointer = data_->regions.Get();
  *output = mojo::ArrayDataView<HitTestRegionDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_SHARED_H_