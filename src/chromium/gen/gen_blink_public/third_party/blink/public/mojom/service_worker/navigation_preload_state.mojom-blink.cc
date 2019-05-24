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

#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_NAVIGATION_PRELOAD_STATE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_NAVIGATION_PRELOAD_STATE_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
NavigationPreloadState::NavigationPreloadState()
    : enabled(false),
      header("true") {}

NavigationPreloadState::NavigationPreloadState(
    bool enabled_in,
    const WTF::String& header_in)
    : enabled(std::move(enabled_in)),
      header(std::move(header_in)) {}

NavigationPreloadState::~NavigationPreloadState() = default;
size_t NavigationPreloadState::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->enabled);
  seed = mojo::internal::WTFHash(seed, this->header);
  return seed;
}

bool NavigationPreloadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::NavigationPreloadState::DataView, ::blink::mojom::blink::NavigationPreloadStatePtr>::Read(
    ::blink::mojom::blink::NavigationPreloadState::DataView input,
    ::blink::mojom::blink::NavigationPreloadStatePtr* output) {
  bool success = true;
  ::blink::mojom::blink::NavigationPreloadStatePtr result(::blink::mojom::blink::NavigationPreloadState::New());
  
      result->enabled = input.enabled();
      if (!input.ReadHeader(&result->header))
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