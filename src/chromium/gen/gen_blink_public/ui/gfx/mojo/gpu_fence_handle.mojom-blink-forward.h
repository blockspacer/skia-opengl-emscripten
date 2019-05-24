// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gfx {
namespace mojom {

enum class GpuFenceHandleType : int32_t;
}  // namespace gfx
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gfx_mojom_internal_GpuFenceHandleType_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::GpuFenceHandleType> {
  using Hash = gfx_mojom_internal_GpuFenceHandleType_DataHashFn;
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using GpuFenceHandleType = GpuFenceHandleType;  // Alias for definition in the parent namespace.
class GpuFenceHandle;
using GpuFenceHandlePtr = mojo::StructPtr<GpuFenceHandle>;




}  // namespace blink
}  // namespace mojom
}  // namespace gfx
#include "ui/gfx/gpu_fence_handle.h"

#endif  // UI_GFX_MOJO_GPU_FENCE_HANDLE_MOJOM_BLINK_FORWARD_H_