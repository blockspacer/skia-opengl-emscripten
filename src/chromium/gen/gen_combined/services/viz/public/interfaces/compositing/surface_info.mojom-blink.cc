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

#include "services/viz/public/interfaces/compositing/surface_info.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/surface_info.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/surface_info.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
SurfaceInfo::SurfaceInfo()
    : surface_id(),
      device_scale_factor(),
      size_in_pixels() {}

SurfaceInfo::SurfaceInfo(
    const viz::SurfaceId& surface_id_in,
    float device_scale_factor_in,
    const ::blink::WebSize& size_in_pixels_in)
    : surface_id(std::move(surface_id_in)),
      device_scale_factor(std::move(device_scale_factor_in)),
      size_in_pixels(std::move(size_in_pixels_in)) {}

SurfaceInfo::~SurfaceInfo() = default;

bool SurfaceInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::SurfaceInfo::DataView, ::viz::mojom::blink::SurfaceInfoPtr>::Read(
    ::viz::mojom::blink::SurfaceInfo::DataView input,
    ::viz::mojom::blink::SurfaceInfoPtr* output) {
  bool success = true;
  ::viz::mojom::blink::SurfaceInfoPtr result(::viz::mojom::blink::SurfaceInfo::New());
  
      if (!input.ReadSurfaceId(&result->surface_id))
        success = false;
      result->device_scale_factor = input.device_scale_factor();
      if (!input.ReadSizeInPixels(&result->size_in_pixels))
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