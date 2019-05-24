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

#include "services/service_manager/public/mojom/constants.mojom-blink.h"

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

#include "services/service_manager/public/mojom/constants.mojom-params-data.h"
#include "services/service_manager/public/mojom/constants.mojom-shared-message-ids.h"

#include "services/service_manager/public/mojom/constants.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_BLINK_JUMBO_H_
#endif
namespace service_manager {
namespace mojom {
namespace blink {
const char kServiceName[] = "service_manager";
Constants_UnusedStruct_Internal::Constants_UnusedStruct_Internal() {}

Constants_UnusedStruct_Internal::~Constants_UnusedStruct_Internal() = default;
size_t Constants_UnusedStruct_Internal::Hash(size_t seed) const {
  return seed;
}

bool Constants_UnusedStruct_Internal::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::blink::Constants_UnusedStruct_Internal::DataView, ::service_manager::mojom::blink::Constants_UnusedStruct_InternalPtr>::Read(
    ::service_manager::mojom::blink::Constants_UnusedStruct_Internal::DataView input,
    ::service_manager::mojom::blink::Constants_UnusedStruct_InternalPtr* output) {
  bool success = true;
  ::service_manager::mojom::blink::Constants_UnusedStruct_InternalPtr result(::service_manager::mojom::blink::Constants_UnusedStruct_Internal::New());
  
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif