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

#include "services/viz/public/interfaces/compositing/selection.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/selection.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/selection.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SELECTION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SELECTION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace viz {
namespace mojom {
namespace blink {
Selection::Selection()
    : start(),
      end() {}

Selection::Selection(
    ::gfx::mojom::blink::SelectionBoundPtr start_in,
    ::gfx::mojom::blink::SelectionBoundPtr end_in)
    : start(std::move(start_in)),
      end(std::move(end_in)) {}

Selection::~Selection() = default;

bool Selection::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::Selection::DataView, ::viz::mojom::blink::SelectionPtr>::Read(
    ::viz::mojom::blink::Selection::DataView input,
    ::viz::mojom::blink::SelectionPtr* output) {
  bool success = true;
  ::viz::mojom::blink::SelectionPtr result(::viz::mojom::blink::Selection::New());
  
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