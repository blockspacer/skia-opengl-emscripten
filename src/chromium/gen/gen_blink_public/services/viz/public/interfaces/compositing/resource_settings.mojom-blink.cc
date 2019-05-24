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

#include "services/viz/public/interfaces/compositing/resource_settings.mojom-blink.h"

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

#include "services/viz/public/interfaces/compositing/resource_settings.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/resource_settings.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/resource_settings.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RESOURCE_SETTINGS_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RESOURCE_SETTINGS_MOJOM_BLINK_JUMBO_H_
#endif
namespace viz {
namespace mojom {
namespace blink {
ResourceSettings::ResourceSettings()
    : use_gpu_memory_buffer_resources() {}

ResourceSettings::ResourceSettings(
    bool use_gpu_memory_buffer_resources_in)
    : use_gpu_memory_buffer_resources(std::move(use_gpu_memory_buffer_resources_in)) {}

ResourceSettings::~ResourceSettings() = default;
size_t ResourceSettings::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->use_gpu_memory_buffer_resources);
  return seed;
}

bool ResourceSettings::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::ResourceSettings::DataView, ::viz::mojom::blink::ResourceSettingsPtr>::Read(
    ::viz::mojom::blink::ResourceSettings::DataView input,
    ::viz::mojom::blink::ResourceSettingsPtr* output) {
  bool success = true;
  ::viz::mojom::blink::ResourceSettingsPtr result(::viz::mojom::blink::ResourceSettings::New());
  
      result->use_gpu_memory_buffer_resources = input.use_gpu_memory_buffer_resources();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif