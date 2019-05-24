// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_FORWARD_H_
#define GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gpu {
namespace mojom {
}  // namespace gpu
}  // namespace mojom


namespace gpu {
namespace mojom {
namespace blink {
class DxDiagNode;
using DxDiagNodePtr = mojo::StructPtr<DxDiagNode>;




}  // namespace blink
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_FORWARD_H_