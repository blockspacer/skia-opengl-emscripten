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

#include "services/viz/public/interfaces/compositing/returned_resource.mojom.h"

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

#include "services/viz/public/interfaces/compositing/returned_resource.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/returned_resource.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RETURNED_RESOURCE_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RETURNED_RESOURCE_MOJOM_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#endif
namespace viz {
namespace mojom {
ReturnedResource::ReturnedResource()
    : id(),
      sync_token(),
      count(),
      lost() {}

ReturnedResource::ReturnedResource(
    uint32_t id_in,
    const ::gpu::SyncToken& sync_token_in,
    int32_t count_in,
    bool lost_in)
    : id(std::move(id_in)),
      sync_token(std::move(sync_token_in)),
      count(std::move(count_in)),
      lost(std::move(lost_in)) {}

ReturnedResource::~ReturnedResource() = default;

bool ReturnedResource::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::ReturnedResource::DataView, ::viz::mojom::ReturnedResourcePtr>::Read(
    ::viz::mojom::ReturnedResource::DataView input,
    ::viz::mojom::ReturnedResourcePtr* output) {
  bool success = true;
  ::viz::mojom::ReturnedResourcePtr result(::viz::mojom::ReturnedResource::New());
  
      result->id = input.id();
      if (!input.ReadSyncToken(&result->sync_token))
        success = false;
      result->count = input.count();
      result->lost = input.lost();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif