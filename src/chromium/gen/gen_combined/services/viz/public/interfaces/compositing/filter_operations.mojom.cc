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

#include "services/viz/public/interfaces/compositing/filter_operations.mojom.h"

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

#include "services/viz/public/interfaces/compositing/filter_operations.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/filter_operations.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/filter_operations.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_JUMBO_H_
#include "services/viz/public/cpp/compositing/filter_operation_struct_traits.h"
#include "services/viz/public/cpp/compositing/paint_filter_struct_traits.h"
#include "skia/public/interfaces/blur_image_filter_tile_mode_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
FilterOperations::FilterOperations()
    : operations() {}

FilterOperations::FilterOperations(
    const std::vector<cc::FilterOperation>& operations_in)
    : operations(std::move(operations_in)) {}

FilterOperations::~FilterOperations() = default;

bool FilterOperations::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::FilterOperations::DataView, ::viz::mojom::FilterOperationsPtr>::Read(
    ::viz::mojom::FilterOperations::DataView input,
    ::viz::mojom::FilterOperationsPtr* output) {
  bool success = true;
  ::viz::mojom::FilterOperationsPtr result(::viz::mojom::FilterOperations::New());
  
      if (!input.ReadOperations(&result->operations))
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