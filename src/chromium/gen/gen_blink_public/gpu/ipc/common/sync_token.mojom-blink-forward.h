// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_BLINK_FORWARD_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gpu {
namespace mojom {

enum class CommandBufferNamespace : int32_t;
}  // namespace gpu
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gpu_mojom_internal_CommandBufferNamespace_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::CommandBufferNamespace> {
  using Hash = gpu_mojom_internal_CommandBufferNamespace_DataHashFn;
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {
using CommandBufferNamespace = CommandBufferNamespace;  // Alias for definition in the parent namespace.
class SyncToken;
using SyncTokenPtr = mojo::InlinedStructPtr<SyncToken>;




}  // namespace blink
}  // namespace mojom
}  // namespace gpu
#include "gpu/command_buffer/common/sync_token.h"

#endif  // GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_BLINK_FORWARD_H_