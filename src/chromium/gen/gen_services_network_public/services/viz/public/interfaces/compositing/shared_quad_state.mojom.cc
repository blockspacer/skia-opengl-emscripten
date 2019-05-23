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

#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom.h"

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

#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_JUMBO_H_
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/rrect_f_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#endif
namespace viz {
namespace mojom {
SharedQuadState::SharedQuadState()
    : quad_to_target_transform(),
      quad_layer_rect(),
      visible_quad_layer_rect(),
      rounded_corner_bounds(),
      clip_rect(),
      is_clipped(),
      are_contents_opaque(),
      opacity(),
      blend_mode(),
      sorting_context_id() {}

SharedQuadState::SharedQuadState(
    const gfx::Transform& quad_to_target_transform_in,
    const gfx::Rect& quad_layer_rect_in,
    const gfx::Rect& visible_quad_layer_rect_in,
    const gfx::RRectF& rounded_corner_bounds_in,
    const gfx::Rect& clip_rect_in,
    bool is_clipped_in,
    bool are_contents_opaque_in,
    float opacity_in,
    uint32_t blend_mode_in,
    int32_t sorting_context_id_in)
    : quad_to_target_transform(std::move(quad_to_target_transform_in)),
      quad_layer_rect(std::move(quad_layer_rect_in)),
      visible_quad_layer_rect(std::move(visible_quad_layer_rect_in)),
      rounded_corner_bounds(std::move(rounded_corner_bounds_in)),
      clip_rect(std::move(clip_rect_in)),
      is_clipped(std::move(is_clipped_in)),
      are_contents_opaque(std::move(are_contents_opaque_in)),
      opacity(std::move(opacity_in)),
      blend_mode(std::move(blend_mode_in)),
      sorting_context_id(std::move(sorting_context_id_in)) {}

SharedQuadState::~SharedQuadState() = default;

bool SharedQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::SharedQuadState::DataView, ::viz::mojom::SharedQuadStatePtr>::Read(
    ::viz::mojom::SharedQuadState::DataView input,
    ::viz::mojom::SharedQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::SharedQuadStatePtr result(::viz::mojom::SharedQuadState::New());
  
      if (!input.ReadQuadToTargetTransform(&result->quad_to_target_transform))
        success = false;
      if (!input.ReadQuadLayerRect(&result->quad_layer_rect))
        success = false;
      if (!input.ReadVisibleQuadLayerRect(&result->visible_quad_layer_rect))
        success = false;
      if (!input.ReadRoundedCornerBounds(&result->rounded_corner_bounds))
        success = false;
      if (!input.ReadClipRect(&result->clip_rect))
        success = false;
      result->is_clipped = input.is_clipped();
      result->are_contents_opaque = input.are_contents_opaque();
      result->opacity = input.opacity();
      result->blend_mode = input.blend_mode();
      result->sorting_context_id = input.sorting_context_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif