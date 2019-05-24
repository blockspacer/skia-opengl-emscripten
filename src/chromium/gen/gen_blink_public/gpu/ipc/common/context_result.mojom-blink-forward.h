// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_BLINK_FORWARD_H_
#define GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace gpu {
namespace mojom {

enum class ContextResult : int32_t;
}  // namespace gpu
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gpu_mojom_internal_ContextResult_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::ContextResult> {
  using Hash = gpu_mojom_internal_ContextResult_DataHashFn;
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {
using ContextResult = ContextResult;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_CONTEXT_RESULT_MOJOM_BLINK_FORWARD_H_