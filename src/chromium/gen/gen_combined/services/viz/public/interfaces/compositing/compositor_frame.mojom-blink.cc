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

#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
CompositorFrame::CompositorFrame()
    : metadata(),
      resources(),
      passes() {}

CompositorFrame::CompositorFrame(
    ::viz::mojom::blink::CompositorFrameMetadataPtr metadata_in,
    WTF::Vector<::viz::mojom::blink::TransferableResourcePtr> resources_in,
    WTF::Vector<::viz::mojom::blink::RenderPassPtr> passes_in)
    : metadata(std::move(metadata_in)),
      resources(std::move(resources_in)),
      passes(std::move(passes_in)) {}

CompositorFrame::~CompositorFrame() = default;

bool CompositorFrame::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::CompositorFrame::DataView, ::viz::mojom::blink::CompositorFramePtr>::Read(
    ::viz::mojom::blink::CompositorFrame::DataView input,
    ::viz::mojom::blink::CompositorFramePtr* output) {
  bool success = true;
  ::viz::mojom::blink::CompositorFramePtr result(::viz::mojom::blink::CompositorFrame::New());
  
      if (!input.ReadMetadata(&result->metadata))
        success = false;
      if (!input.ReadResources(&result->resources))
        success = false;
      if (!input.ReadPasses(&result->passes))
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