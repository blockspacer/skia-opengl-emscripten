// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RENDER_PASS_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RENDER_PASS_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/render_pass.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/filter_operations.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/quads.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"
#include "ui/gfx/mojo/rrect_f.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class RenderPassDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::RenderPassDataView> {
  using Data = ::viz::mojom::internal::RenderPass_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class RenderPassDataView {
 public:
  RenderPassDataView() {}

  RenderPassDataView(
      internal::RenderPass_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  inline void GetOutputRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputRect(UserType* output) {
    auto* pointer = data_->output_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetDamageRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDamageRect(UserType* output) {
    auto* pointer = data_->damage_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetTransformToRootTargetDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransformToRootTarget(UserType* output) {
    auto* pointer = data_->transform_to_root_target.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformDataView>(
        pointer, output, context_);
  }
  inline void GetFiltersDataView(
      ::viz::mojom::FilterOperationsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilters(UserType* output) {
    auto* pointer = data_->filters.Get();
    return mojo::internal::Deserialize<::viz::mojom::FilterOperationsDataView>(
        pointer, output, context_);
  }
  inline void GetBackdropFiltersDataView(
      ::viz::mojom::FilterOperationsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBackdropFilters(UserType* output) {
    auto* pointer = data_->backdrop_filters.Get();
    return mojo::internal::Deserialize<::viz::mojom::FilterOperationsDataView>(
        pointer, output, context_);
  }
  inline void GetBackdropFilterBoundsDataView(
      ::gfx::mojom::RRectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBackdropFilterBounds(UserType* output) {
    auto* pointer = data_->backdrop_filter_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RRectFDataView>(
        pointer, output, context_);
  }
  inline void GetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) {
    auto* pointer = data_->color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
  bool has_transparent_background() const {
    return data_->has_transparent_background;
  }
  bool cache_render_pass() const {
    return data_->cache_render_pass;
  }
  bool has_damage_from_contributing_content() const {
    return data_->has_damage_from_contributing_content;
  }
  bool generate_mipmap() const {
    return data_->generate_mipmap;
  }
  inline void GetCopyRequestsDataView(
      mojo::ArrayDataView<::viz::mojom::CopyOutputRequestDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCopyRequests(UserType* output) {
    auto* pointer = data_->copy_requests.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::CopyOutputRequestDataView>>(
        pointer, output, context_);
  }
  inline void GetQuadListDataView(
      mojo::ArrayDataView<::viz::mojom::DrawQuadDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuadList(UserType* output) {
    auto* pointer = data_->quad_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::DrawQuadDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RenderPass_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::RenderPassDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::RenderPassDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::RenderPass_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::output_rect(input)) in_output_rect = Traits::output_rect(input);
    typename decltype((*output)->output_rect)::BaseType::BufferWriter
        output_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_output_rect, buffer, &output_rect_writer, context);
    (*output)->output_rect.Set(
        output_rect_writer.is_null() ? nullptr : output_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->output_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null output_rect in RenderPass struct");
    decltype(Traits::damage_rect(input)) in_damage_rect = Traits::damage_rect(input);
    typename decltype((*output)->damage_rect)::BaseType::BufferWriter
        damage_rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_damage_rect, buffer, &damage_rect_writer, context);
    (*output)->damage_rect.Set(
        damage_rect_writer.is_null() ? nullptr : damage_rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->damage_rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null damage_rect in RenderPass struct");
    decltype(Traits::transform_to_root_target(input)) in_transform_to_root_target = Traits::transform_to_root_target(input);
    typename decltype((*output)->transform_to_root_target)::BaseType::BufferWriter
        transform_to_root_target_writer;
    mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
        in_transform_to_root_target, buffer, &transform_to_root_target_writer, context);
    (*output)->transform_to_root_target.Set(
        transform_to_root_target_writer.is_null() ? nullptr : transform_to_root_target_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->transform_to_root_target.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null transform_to_root_target in RenderPass struct");
    decltype(Traits::filters(input)) in_filters = Traits::filters(input);
    typename decltype((*output)->filters)::BaseType::BufferWriter
        filters_writer;
    mojo::internal::Serialize<::viz::mojom::FilterOperationsDataView>(
        in_filters, buffer, &filters_writer, context);
    (*output)->filters.Set(
        filters_writer.is_null() ? nullptr : filters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filters in RenderPass struct");
    decltype(Traits::backdrop_filters(input)) in_backdrop_filters = Traits::backdrop_filters(input);
    typename decltype((*output)->backdrop_filters)::BaseType::BufferWriter
        backdrop_filters_writer;
    mojo::internal::Serialize<::viz::mojom::FilterOperationsDataView>(
        in_backdrop_filters, buffer, &backdrop_filters_writer, context);
    (*output)->backdrop_filters.Set(
        backdrop_filters_writer.is_null() ? nullptr : backdrop_filters_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->backdrop_filters.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null backdrop_filters in RenderPass struct");
    decltype(Traits::backdrop_filter_bounds(input)) in_backdrop_filter_bounds = Traits::backdrop_filter_bounds(input);
    typename decltype((*output)->backdrop_filter_bounds)::BaseType::BufferWriter
        backdrop_filter_bounds_writer;
    mojo::internal::Serialize<::gfx::mojom::RRectFDataView>(
        in_backdrop_filter_bounds, buffer, &backdrop_filter_bounds_writer, context);
    (*output)->backdrop_filter_bounds.Set(
        backdrop_filter_bounds_writer.is_null() ? nullptr : backdrop_filter_bounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->backdrop_filter_bounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null backdrop_filter_bounds in RenderPass struct");
    decltype(Traits::color_space(input)) in_color_space = Traits::color_space(input);
    typename decltype((*output)->color_space)::BaseType::BufferWriter
        color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_color_space, buffer, &color_space_writer, context);
    (*output)->color_space.Set(
        color_space_writer.is_null() ? nullptr : color_space_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->color_space.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null color_space in RenderPass struct");
    (*output)->has_transparent_background = Traits::has_transparent_background(input);
    (*output)->cache_render_pass = Traits::cache_render_pass(input);
    (*output)->has_damage_from_contributing_content = Traits::has_damage_from_contributing_content(input);
    (*output)->generate_mipmap = Traits::generate_mipmap(input);
    decltype(Traits::copy_requests(input)) in_copy_requests = Traits::copy_requests(input);
    typename decltype((*output)->copy_requests)::BaseType::BufferWriter
        copy_requests_writer;
    const mojo::internal::ContainerValidateParams copy_requests_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::CopyOutputRequestDataView>>(
        in_copy_requests, buffer, &copy_requests_writer, &copy_requests_validate_params,
        context);
    (*output)->copy_requests.Set(
        copy_requests_writer.is_null() ? nullptr : copy_requests_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->copy_requests.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null copy_requests in RenderPass struct");
    decltype(Traits::quad_list(input)) in_quad_list = Traits::quad_list(input);
    typename decltype((*output)->quad_list)::BaseType::BufferWriter
        quad_list_writer;
    const mojo::internal::ContainerValidateParams quad_list_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::DrawQuadDataView>>(
        in_quad_list, buffer, &quad_list_writer, &quad_list_validate_params,
        context);
    (*output)->quad_list.Set(
        quad_list_writer.is_null() ? nullptr : quad_list_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->quad_list.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null quad_list in RenderPass struct");
  }

  static bool Deserialize(::viz::mojom::internal::RenderPass_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::RenderPassDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void RenderPassDataView::GetOutputRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->output_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void RenderPassDataView::GetDamageRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->damage_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void RenderPassDataView::GetTransformToRootTargetDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform_to_root_target.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}
inline void RenderPassDataView::GetFiltersDataView(
    ::viz::mojom::FilterOperationsDataView* output) {
  auto pointer = data_->filters.Get();
  *output = ::viz::mojom::FilterOperationsDataView(pointer, context_);
}
inline void RenderPassDataView::GetBackdropFiltersDataView(
    ::viz::mojom::FilterOperationsDataView* output) {
  auto pointer = data_->backdrop_filters.Get();
  *output = ::viz::mojom::FilterOperationsDataView(pointer, context_);
}
inline void RenderPassDataView::GetBackdropFilterBoundsDataView(
    ::gfx::mojom::RRectFDataView* output) {
  auto pointer = data_->backdrop_filter_bounds.Get();
  *output = ::gfx::mojom::RRectFDataView(pointer, context_);
}
inline void RenderPassDataView::GetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}
inline void RenderPassDataView::GetCopyRequestsDataView(
    mojo::ArrayDataView<::viz::mojom::CopyOutputRequestDataView>* output) {
  auto pointer = data_->copy_requests.Get();
  *output = mojo::ArrayDataView<::viz::mojom::CopyOutputRequestDataView>(pointer, context_);
}
inline void RenderPassDataView::GetQuadListDataView(
    mojo::ArrayDataView<::viz::mojom::DrawQuadDataView>* output) {
  auto pointer = data_->quad_list.Get();
  *output = mojo::ArrayDataView<::viz::mojom::DrawQuadDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RENDER_PASS_MOJOM_SHARED_H_