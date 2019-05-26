// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
CompositorFrameMetadata::CompositorFrameMetadata()
    : device_scale_factor(),
      root_scroll_offset(),
      page_scale_factor(),
      scrollable_viewport_size(),
      may_contain_video(),
      is_resourceless_software_draw_with_scroll_or_animation(),
      root_background_color(),
      latency_info(),
      referenced_surfaces(),
      deadline(),
      activation_dependencies(),
      content_source_id(),
      begin_frame_ack(),
      frame_token(),
      send_frame_token_to_embedder(),
      min_page_scale_factor(),
      top_controls_height(),
      top_controls_shown_ratio(),
      local_surface_id_allocation_time(),
      preferred_frame_interval() {}

CompositorFrameMetadata::CompositorFrameMetadata(
    float device_scale_factor_in,
    ::gfx::mojom::blink::Vector2dFPtr root_scroll_offset_in,
    float page_scale_factor_in,
    ::gfx::mojom::blink::SizeFPtr scrollable_viewport_size_in,
    bool may_contain_video_in,
    bool is_resourceless_software_draw_with_scroll_or_animation_in,
    uint32_t root_background_color_in,
    WTF::Vector<::ui::mojom::blink::LatencyInfoPtr> latency_info_in,
    WTF::Vector<::viz::mojom::blink::SurfaceRangePtr> referenced_surfaces_in,
    ::viz::mojom::blink::FrameDeadlinePtr deadline_in,
    const WTF::Vector<viz::SurfaceId>& activation_dependencies_in,
    uint32_t content_source_id_in,
    const viz::BeginFrameAck& begin_frame_ack_in,
    uint32_t frame_token_in,
    bool send_frame_token_to_embedder_in,
    float min_page_scale_factor_in,
    float top_controls_height_in,
    float top_controls_shown_ratio_in,
    base::TimeTicks local_surface_id_allocation_time_in,
    base::Optional<base::TimeDelta> preferred_frame_interval_in)
    : device_scale_factor(std::move(device_scale_factor_in)),
      root_scroll_offset(std::move(root_scroll_offset_in)),
      page_scale_factor(std::move(page_scale_factor_in)),
      scrollable_viewport_size(std::move(scrollable_viewport_size_in)),
      may_contain_video(std::move(may_contain_video_in)),
      is_resourceless_software_draw_with_scroll_or_animation(std::move(is_resourceless_software_draw_with_scroll_or_animation_in)),
      root_background_color(std::move(root_background_color_in)),
      latency_info(std::move(latency_info_in)),
      referenced_surfaces(std::move(referenced_surfaces_in)),
      deadline(std::move(deadline_in)),
      activation_dependencies(std::move(activation_dependencies_in)),
      content_source_id(std::move(content_source_id_in)),
      begin_frame_ack(std::move(begin_frame_ack_in)),
      frame_token(std::move(frame_token_in)),
      send_frame_token_to_embedder(std::move(send_frame_token_to_embedder_in)),
      min_page_scale_factor(std::move(min_page_scale_factor_in)),
      top_controls_height(std::move(top_controls_height_in)),
      top_controls_shown_ratio(std::move(top_controls_shown_ratio_in)),
      local_surface_id_allocation_time(std::move(local_surface_id_allocation_time_in)),
      preferred_frame_interval(std::move(preferred_frame_interval_in)) {}

CompositorFrameMetadata::~CompositorFrameMetadata() = default;

bool CompositorFrameMetadata::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::CompositorFrameMetadata::DataView, ::viz::mojom::blink::CompositorFrameMetadataPtr>::Read(
    ::viz::mojom::blink::CompositorFrameMetadata::DataView input,
    ::viz::mojom::blink::CompositorFrameMetadataPtr* output) {
  bool success = true;
  ::viz::mojom::blink::CompositorFrameMetadataPtr result(::viz::mojom::blink::CompositorFrameMetadata::New());
  
      result->device_scale_factor = input.device_scale_factor();
      if (!input.ReadRootScrollOffset(&result->root_scroll_offset))
        success = false;
      result->page_scale_factor = input.page_scale_factor();
      if (!input.ReadScrollableViewportSize(&result->scrollable_viewport_size))
        success = false;
      result->may_contain_video = input.may_contain_video();
      result->is_resourceless_software_draw_with_scroll_or_animation = input.is_resourceless_software_draw_with_scroll_or_animation();
      result->root_background_color = input.root_background_color();
      if (!input.ReadLatencyInfo(&result->latency_info))
        success = false;
      if (!input.ReadReferencedSurfaces(&result->referenced_surfaces))
        success = false;
      if (!input.ReadDeadline(&result->deadline))
        success = false;
      if (!input.ReadActivationDependencies(&result->activation_dependencies))
        success = false;
      result->content_source_id = input.content_source_id();
      if (!input.ReadBeginFrameAck(&result->begin_frame_ack))
        success = false;
      result->frame_token = input.frame_token();
      result->send_frame_token_to_embedder = input.send_frame_token_to_embedder();
      result->min_page_scale_factor = input.min_page_scale_factor();
      result->top_controls_height = input.top_controls_height();
      result->top_controls_shown_ratio = input.top_controls_shown_ratio();
      if (!input.ReadLocalSurfaceIdAllocationTime(&result->local_surface_id_allocation_time))
        success = false;
      if (!input.ReadPreferredFrameInterval(&result->preferred_frame_interval))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif