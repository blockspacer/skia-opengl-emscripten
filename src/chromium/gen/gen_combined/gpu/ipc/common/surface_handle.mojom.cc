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

#include "gpu/ipc/common/surface_handle.mojom.h"

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

#include "gpu/ipc/common/surface_handle.mojom-params-data.h"
#include "gpu/ipc/common/surface_handle.mojom-shared-message-ids.h"

#include "gpu/ipc/common/surface_handle.mojom-import-headers.h"


#ifndef GPU_IPC_COMMON_SURFACE_HANDLE_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_SURFACE_HANDLE_MOJOM_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
SurfaceHandle::SurfaceHandle()
    : surface_handle() {}

SurfaceHandle::SurfaceHandle(
    uint64_t surface_handle_in)
    : surface_handle(std::move(surface_handle_in)) {}

SurfaceHandle::~SurfaceHandle() = default;

bool SurfaceHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::SurfaceHandle::DataView, ::gpu::mojom::SurfaceHandlePtr>::Read(
    ::gpu::mojom::SurfaceHandle::DataView input,
    ::gpu::mojom::SurfaceHandlePtr* output) {
  bool success = true;
  ::gpu::mojom::SurfaceHandlePtr result(::gpu::mojom::SurfaceHandle::New());
  
      result->surface_handle = input.surface_handle();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif