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

#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_SINK_ID_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_SINK_ID_MOJOM_BLINK_JUMBO_H_
#endif
namespace viz {
namespace mojom {
namespace blink {
FrameSinkId::FrameSinkId()
    : client_id(),
      sink_id() {}

FrameSinkId::FrameSinkId(
    uint32_t client_id_in,
    uint32_t sink_id_in)
    : client_id(std::move(client_id_in)),
      sink_id(std::move(sink_id_in)) {}

FrameSinkId::~FrameSinkId() = default;

bool FrameSinkId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::FrameSinkId::DataView, ::viz::mojom::blink::FrameSinkIdPtr>::Read(
    ::viz::mojom::blink::FrameSinkId::DataView input,
    ::viz::mojom::blink::FrameSinkIdPtr* output) {
  bool success = true;
  ::viz::mojom::blink::FrameSinkIdPtr result(::viz::mojom::blink::FrameSinkId::New());
  
      result->client_id = input.client_id();
      result->sink_id = input.sink_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif