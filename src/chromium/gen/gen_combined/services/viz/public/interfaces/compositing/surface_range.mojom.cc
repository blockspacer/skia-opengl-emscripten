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

#include "services/viz/public/interfaces/compositing/surface_range.mojom.h"

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

#include "services/viz/public/interfaces/compositing/surface_range.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/surface_range.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#endif
namespace viz {
namespace mojom {
SurfaceRange::SurfaceRange()
    : start(),
      end() {}

SurfaceRange::SurfaceRange(
    const base::Optional<viz::SurfaceId>& start_in,
    const viz::SurfaceId& end_in)
    : start(std::move(start_in)),
      end(std::move(end_in)) {}

SurfaceRange::~SurfaceRange() = default;

bool SurfaceRange::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::SurfaceRange::DataView, ::viz::mojom::SurfaceRangePtr>::Read(
    ::viz::mojom::SurfaceRange::DataView input,
    ::viz::mojom::SurfaceRangePtr* output) {
  bool success = true;
  ::viz::mojom::SurfaceRangePtr result(::viz::mojom::SurfaceRange::New());
  
      if (!input.ReadStart(&result->start))
        success = false;
      if (!input.ReadEnd(&result->end))
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