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

#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
LocalSurfaceIdAllocation::LocalSurfaceIdAllocation()
    : local_surface_id(),
      allocation_time() {}

LocalSurfaceIdAllocation::LocalSurfaceIdAllocation(
    const viz::LocalSurfaceId& local_surface_id_in,
    base::TimeTicks allocation_time_in)
    : local_surface_id(std::move(local_surface_id_in)),
      allocation_time(std::move(allocation_time_in)) {}

LocalSurfaceIdAllocation::~LocalSurfaceIdAllocation() = default;

bool LocalSurfaceIdAllocation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::LocalSurfaceIdAllocation::DataView, ::viz::mojom::blink::LocalSurfaceIdAllocationPtr>::Read(
    ::viz::mojom::blink::LocalSurfaceIdAllocation::DataView input,
    ::viz::mojom::blink::LocalSurfaceIdAllocationPtr* output) {
  bool success = true;
  ::viz::mojom::blink::LocalSurfaceIdAllocationPtr result(::viz::mojom::blink::LocalSurfaceIdAllocation::New());
  
      if (!input.ReadLocalSurfaceId(&result->local_surface_id))
        success = false;
      if (!input.ReadAllocationTime(&result->allocation_time))
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