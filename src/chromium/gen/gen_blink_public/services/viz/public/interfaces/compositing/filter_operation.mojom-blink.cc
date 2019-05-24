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

#include "services/viz/public/interfaces/compositing/filter_operation.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/filter_operation.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/filter_operation.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/filter_operation.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
FilterOperation::FilterOperation()
    : type(),
      amount(),
      outer_threshold(),
      drop_shadow_offset(),
      drop_shadow_color(),
      image_filter(),
      matrix(),
      zoom_inset(),
      blur_tile_mode(),
      shape() {}

FilterOperation::FilterOperation(
    FilterType type_in,
    float amount_in,
    float outer_threshold_in,
    const ::blink::WebPoint& drop_shadow_offset_in,
    uint32_t drop_shadow_color_in,
    ::viz::mojom::blink::PaintFilterPtr image_filter_in,
    const base::Optional<WTF::Vector<float>>& matrix_in,
    int32_t zoom_inset_in,
    ::skia::mojom::blink::BlurTileMode blur_tile_mode_in,
    const base::Optional<WTF::Vector<::blink::WebRect>>& shape_in)
    : type(std::move(type_in)),
      amount(std::move(amount_in)),
      outer_threshold(std::move(outer_threshold_in)),
      drop_shadow_offset(std::move(drop_shadow_offset_in)),
      drop_shadow_color(std::move(drop_shadow_color_in)),
      image_filter(std::move(image_filter_in)),
      matrix(std::move(matrix_in)),
      zoom_inset(std::move(zoom_inset_in)),
      blur_tile_mode(std::move(blur_tile_mode_in)),
      shape(std::move(shape_in)) {}

FilterOperation::~FilterOperation() = default;

bool FilterOperation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::FilterOperation::DataView, ::viz::mojom::blink::FilterOperationPtr>::Read(
    ::viz::mojom::blink::FilterOperation::DataView input,
    ::viz::mojom::blink::FilterOperationPtr* output) {
  bool success = true;
  ::viz::mojom::blink::FilterOperationPtr result(::viz::mojom::blink::FilterOperation::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->amount = input.amount();
      result->outer_threshold = input.outer_threshold();
      if (!input.ReadDropShadowOffset(&result->drop_shadow_offset))
        success = false;
      result->drop_shadow_color = input.drop_shadow_color();
      if (!input.ReadImageFilter(&result->image_filter))
        success = false;
      if (!input.ReadMatrix(&result->matrix))
        success = false;
      result->zoom_inset = input.zoom_inset();
      if (!input.ReadBlurTileMode(&result->blur_tile_mode))
        success = false;
      if (!input.ReadShape(&result->shape))
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