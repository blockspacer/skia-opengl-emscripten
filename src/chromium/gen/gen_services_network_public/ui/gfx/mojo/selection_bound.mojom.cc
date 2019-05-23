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

#include "ui/gfx/mojo/selection_bound.mojom.h"

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

#include "ui/gfx/mojo/selection_bound.mojom-params-data.h"
#include "ui/gfx/mojo/selection_bound.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/selection_bound.mojom-import-headers.h"


#ifndef UI_GFX_MOJO_SELECTION_BOUND_MOJOM_JUMBO_H_
#define UI_GFX_MOJO_SELECTION_BOUND_MOJOM_JUMBO_H_
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace gfx {
namespace mojom {
SelectionBound::SelectionBound()
    : type(),
      edge_top(),
      edge_bottom(),
      visible() {}

SelectionBound::SelectionBound(
    SelectionBoundType type_in,
    const gfx::PointF& edge_top_in,
    const gfx::PointF& edge_bottom_in,
    bool visible_in)
    : type(std::move(type_in)),
      edge_top(std::move(edge_top_in)),
      edge_bottom(std::move(edge_bottom_in)),
      visible(std::move(visible_in)) {}

SelectionBound::~SelectionBound() = default;

bool SelectionBound::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::SelectionBound::DataView, ::gfx::mojom::SelectionBoundPtr>::Read(
    ::gfx::mojom::SelectionBound::DataView input,
    ::gfx::mojom::SelectionBoundPtr* output) {
  bool success = true;
  ::gfx::mojom::SelectionBoundPtr result(::gfx::mojom::SelectionBound::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadEdgeTop(&result->edge_top))
        success = false;
      if (!input.ReadEdgeBottom(&result->edge_bottom))
        success = false;
      result->visible = input.visible();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif