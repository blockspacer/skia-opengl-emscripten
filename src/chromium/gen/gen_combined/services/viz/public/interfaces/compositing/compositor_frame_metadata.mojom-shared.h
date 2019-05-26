// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom-shared.h"
#include "ui/latency/mojo/latency_info.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class CompositorFrameMetadataDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::CompositorFrameMetadataDataView> {
  using Data = ::viz::mojom::internal::CompositorFrameMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class CompositorFrameMetadataDataView {
 public:
  CompositorFrameMetadataDataView() {}

  CompositorFrameMetadataDataView(
      internal::CompositorFrameMetadata_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float device_scale_factor() const {
    return data_->device_scale_factor;
  }
  inline void GetRootScrollOffsetDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootScrollOffset(UserType* output) {
    auto* pointer = data_->root_scroll_offset.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFDataView>(
        pointer, output, context_);
  }
  float page_scale_factor() const {
    return data_->page_scale_factor;
  }
  inline void GetScrollableViewportSizeDataView(
      ::gfx::mojom::SizeFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScrollableViewportSize(UserType* output) {
    auto* pointer = data_->scrollable_viewport_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeFDataView>(
        pointer, output, context_);
  }
  bool may_contain_video() const {
    return data_->may_contain_video;
  }
  bool is_resourceless_software_draw_with_scroll_or_animation() const {
    return data_->is_resourceless_software_draw_with_scroll_or_animation;
  }
  uint32_t root_background_color() const {
    return data_->root_background_color;
  }
  inline void GetLatencyInfoDataView(
      mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatencyInfo(UserType* output) {
    auto* pointer = data_->latency_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetReferencedSurfacesDataView(
      mojo::ArrayDataView<::viz::mojom::SurfaceRangeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferencedSurfaces(UserType* output) {
    auto* pointer = data_->referenced_surfaces.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::SurfaceRangeDataView>>(
        pointer, output, context_);
  }
  inline void GetDeadlineDataView(
      ::viz::mojom::FrameDeadlineDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeadline(UserType* output) {
    auto* pointer = data_->deadline.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameDeadlineDataView>(
        pointer, output, context_);
  }
  inline void GetActivationDependenciesDataView(
      mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActivationDependencies(UserType* output) {
    auto* pointer = data_->activation_dependencies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        pointer, output, context_);
  }
  uint32_t content_source_id() const {
    return data_->content_source_id;
  }
  inline void GetBeginFrameAckDataView(
      ::viz::mojom::BeginFrameAckDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBeginFrameAck(UserType* output) {
    auto* pointer = data_->begin_frame_ack.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameAckDataView>(
        pointer, output, context_);
  }
  uint32_t frame_token() const {
    return data_->frame_token;
  }
  bool send_frame_token_to_embedder() const {
    return data_->send_frame_token_to_embedder;
  }
  float min_page_scale_factor() const {
    return data_->min_page_scale_factor;
  }
  float top_controls_height() const {
    return data_->top_controls_height;
  }
  float top_controls_shown_ratio() const {
    return data_->top_controls_shown_ratio;
  }
  inline void GetLocalSurfaceIdAllocationTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceIdAllocationTime(UserType* output) {
    auto* pointer = data_->local_surface_id_allocation_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetPreferredFrameIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreferredFrameInterval(UserType* output) {
    auto* pointer = data_->preferred_frame_interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameMetadata_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CompositorFrameMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::CompositorFrameMetadataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::CompositorFrameMetadata_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->device_scale_factor = Traits::device_scale_factor(input);
    decltype(Traits::root_scroll_offset(input)) in_root_scroll_offset = Traits::root_scroll_offset(input);
    typename decltype((*output)->root_scroll_offset)::BaseType::BufferWriter
        root_scroll_offset_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dFDataView>(
        in_root_scroll_offset, buffer, &root_scroll_offset_writer, context);
    (*output)->root_scroll_offset.Set(
        root_scroll_offset_writer.is_null() ? nullptr : root_scroll_offset_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->root_scroll_offset.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null root_scroll_offset in CompositorFrameMetadata struct");
    (*output)->page_scale_factor = Traits::page_scale_factor(input);
    decltype(Traits::scrollable_viewport_size(input)) in_scrollable_viewport_size = Traits::scrollable_viewport_size(input);
    typename decltype((*output)->scrollable_viewport_size)::BaseType::BufferWriter
        scrollable_viewport_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeFDataView>(
        in_scrollable_viewport_size, buffer, &scrollable_viewport_size_writer, context);
    (*output)->scrollable_viewport_size.Set(
        scrollable_viewport_size_writer.is_null() ? nullptr : scrollable_viewport_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scrollable_viewport_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scrollable_viewport_size in CompositorFrameMetadata struct");
    (*output)->may_contain_video = Traits::may_contain_video(input);
    (*output)->is_resourceless_software_draw_with_scroll_or_animation = Traits::is_resourceless_software_draw_with_scroll_or_animation(input);
    (*output)->root_background_color = Traits::root_background_color(input);
    decltype(Traits::latency_info(input)) in_latency_info = Traits::latency_info(input);
    typename decltype((*output)->latency_info)::BaseType::BufferWriter
        latency_info_writer;
    const mojo::internal::ContainerValidateParams latency_info_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>>(
        in_latency_info, buffer, &latency_info_writer, &latency_info_validate_params,
        context);
    (*output)->latency_info.Set(
        latency_info_writer.is_null() ? nullptr : latency_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency_info in CompositorFrameMetadata struct");
    decltype(Traits::referenced_surfaces(input)) in_referenced_surfaces = Traits::referenced_surfaces(input);
    typename decltype((*output)->referenced_surfaces)::BaseType::BufferWriter
        referenced_surfaces_writer;
    const mojo::internal::ContainerValidateParams referenced_surfaces_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::SurfaceRangeDataView>>(
        in_referenced_surfaces, buffer, &referenced_surfaces_writer, &referenced_surfaces_validate_params,
        context);
    (*output)->referenced_surfaces.Set(
        referenced_surfaces_writer.is_null() ? nullptr : referenced_surfaces_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referenced_surfaces.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referenced_surfaces in CompositorFrameMetadata struct");
    decltype(Traits::deadline(input)) in_deadline = Traits::deadline(input);
    typename decltype((*output)->deadline)::BaseType::BufferWriter
        deadline_writer;
    mojo::internal::Serialize<::viz::mojom::FrameDeadlineDataView>(
        in_deadline, buffer, &deadline_writer, context);
    (*output)->deadline.Set(
        deadline_writer.is_null() ? nullptr : deadline_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->deadline.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null deadline in CompositorFrameMetadata struct");
    decltype(Traits::activation_dependencies(input)) in_activation_dependencies = Traits::activation_dependencies(input);
    typename decltype((*output)->activation_dependencies)::BaseType::BufferWriter
        activation_dependencies_writer;
    const mojo::internal::ContainerValidateParams activation_dependencies_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>>(
        in_activation_dependencies, buffer, &activation_dependencies_writer, &activation_dependencies_validate_params,
        context);
    (*output)->activation_dependencies.Set(
        activation_dependencies_writer.is_null() ? nullptr : activation_dependencies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->activation_dependencies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null activation_dependencies in CompositorFrameMetadata struct");
    (*output)->content_source_id = Traits::content_source_id(input);
    decltype(Traits::begin_frame_ack(input)) in_begin_frame_ack = Traits::begin_frame_ack(input);
    typename decltype((*output)->begin_frame_ack)::BaseType::BufferWriter
        begin_frame_ack_writer;
    mojo::internal::Serialize<::viz::mojom::BeginFrameAckDataView>(
        in_begin_frame_ack, buffer, &begin_frame_ack_writer, context);
    (*output)->begin_frame_ack.Set(
        begin_frame_ack_writer.is_null() ? nullptr : begin_frame_ack_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->begin_frame_ack.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null begin_frame_ack in CompositorFrameMetadata struct");
    (*output)->frame_token = Traits::frame_token(input);
    (*output)->send_frame_token_to_embedder = Traits::send_frame_token_to_embedder(input);
    (*output)->min_page_scale_factor = Traits::min_page_scale_factor(input);
    (*output)->top_controls_height = Traits::top_controls_height(input);
    (*output)->top_controls_shown_ratio = Traits::top_controls_shown_ratio(input);
    decltype(Traits::local_surface_id_allocation_time(input)) in_local_surface_id_allocation_time = Traits::local_surface_id_allocation_time(input);
    typename decltype((*output)->local_surface_id_allocation_time)::BaseType::BufferWriter
        local_surface_id_allocation_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_local_surface_id_allocation_time, buffer, &local_surface_id_allocation_time_writer, context);
    (*output)->local_surface_id_allocation_time.Set(
        local_surface_id_allocation_time_writer.is_null() ? nullptr : local_surface_id_allocation_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->local_surface_id_allocation_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null local_surface_id_allocation_time in CompositorFrameMetadata struct");
    decltype(Traits::preferred_frame_interval(input)) in_preferred_frame_interval = Traits::preferred_frame_interval(input);
    typename decltype((*output)->preferred_frame_interval)::BaseType::BufferWriter
        preferred_frame_interval_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_preferred_frame_interval, buffer, &preferred_frame_interval_writer, context);
    (*output)->preferred_frame_interval.Set(
        preferred_frame_interval_writer.is_null() ? nullptr : preferred_frame_interval_writer.data());
  }

  static bool Deserialize(::viz::mojom::internal::CompositorFrameMetadata_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::CompositorFrameMetadataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void CompositorFrameMetadataDataView::GetRootScrollOffsetDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->root_scroll_offset.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetScrollableViewportSizeDataView(
    ::gfx::mojom::SizeFDataView* output) {
  auto pointer = data_->scrollable_viewport_size.Get();
  *output = ::gfx::mojom::SizeFDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetLatencyInfoDataView(
    mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>* output) {
  auto pointer = data_->latency_info.Get();
  *output = mojo::ArrayDataView<::ui::mojom::LatencyInfoDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetReferencedSurfacesDataView(
    mojo::ArrayDataView<::viz::mojom::SurfaceRangeDataView>* output) {
  auto pointer = data_->referenced_surfaces.Get();
  *output = mojo::ArrayDataView<::viz::mojom::SurfaceRangeDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetDeadlineDataView(
    ::viz::mojom::FrameDeadlineDataView* output) {
  auto pointer = data_->deadline.Get();
  *output = ::viz::mojom::FrameDeadlineDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetActivationDependenciesDataView(
    mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>* output) {
  auto pointer = data_->activation_dependencies.Get();
  *output = mojo::ArrayDataView<::viz::mojom::SurfaceIdDataView>(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetBeginFrameAckDataView(
    ::viz::mojom::BeginFrameAckDataView* output) {
  auto pointer = data_->begin_frame_ack.Get();
  *output = ::viz::mojom::BeginFrameAckDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetLocalSurfaceIdAllocationTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->local_surface_id_allocation_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void CompositorFrameMetadataDataView::GetPreferredFrameIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->preferred_frame_interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_SHARED_H_