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

#include "services/service_manager/public/mojom/service_filter.mojom-blink.h"

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

#include "services/service_manager/public/mojom/service_filter.mojom-params-data.h"
#include "services/service_manager/public/mojom/service_filter.mojom-shared-message-ids.h"

#include "services/service_manager/public/mojom/service_filter.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_BLINK_JUMBO_H_
#endif
namespace service_manager {
namespace mojom {
namespace blink {
ServiceFilter::ServiceFilter()
    : service_name(),
      instance_group(),
      instance_id(),
      globally_unique_id() {}

ServiceFilter::ServiceFilter(
    const WTF::String& service_name_in,
    ::mojo_base::mojom::blink::TokenPtr instance_group_in,
    ::mojo_base::mojom::blink::TokenPtr instance_id_in,
    ::mojo_base::mojom::blink::TokenPtr globally_unique_id_in)
    : service_name(std::move(service_name_in)),
      instance_group(std::move(instance_group_in)),
      instance_id(std::move(instance_id_in)),
      globally_unique_id(std::move(globally_unique_id_in)) {}

ServiceFilter::~ServiceFilter() = default;

bool ServiceFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

namespace mojo {


// static
bool StructTraits<::service_manager::mojom::blink::ServiceFilter::DataView, ::service_manager::mojom::blink::ServiceFilterPtr>::Read(
    ::service_manager::mojom::blink::ServiceFilter::DataView input,
    ::service_manager::mojom::blink::ServiceFilterPtr* output) {
  bool success = true;
  ::service_manager::mojom::blink::ServiceFilterPtr result(::service_manager::mojom::blink::ServiceFilter::New());
  
      if (!input.ReadServiceName(&result->service_name))
        success = false;
      if (!input.ReadInstanceGroup(&result->instance_group))
        success = false;
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadGloballyUniqueId(&result->globally_unique_id))
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