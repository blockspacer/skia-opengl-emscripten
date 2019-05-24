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

#include "ui/gfx/mojo/gpu_fence_handle.mojom-blink.h"

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

#include "ui/gfx/mojo/gpu_fence_handle.mojom-params-data.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/gpu_fence_handle.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_JUMBO_H_
#endif
namespace gfx {
namespace mojom {
namespace blink {
GpuFenceHandle::GpuFenceHandle()
    : type(),
      native_fd() {}

GpuFenceHandle::GpuFenceHandle(
    GpuFenceHandleType type_in,
    mojo::ScopedHandle native_fd_in)
    : type(std::move(type_in)),
      native_fd(std::move(native_fd_in)) {}

GpuFenceHandle::~GpuFenceHandle() = default;

bool GpuFenceHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::GpuFenceHandle::DataView, ::gfx::mojom::blink::GpuFenceHandlePtr>::Read(
    ::gfx::mojom::blink::GpuFenceHandle::DataView input,
    ::gfx::mojom::blink::GpuFenceHandlePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::GpuFenceHandlePtr result(::gfx::mojom::blink::GpuFenceHandle::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->native_fd = input.TakeNativeFd();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif