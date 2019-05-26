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

#include "gpu/ipc/common/dx_diag_node.mojom-blink.h"

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

#include "gpu/ipc/common/dx_diag_node.mojom-params-data.h"
#include "gpu/ipc/common/dx_diag_node.mojom-shared-message-ids.h"

#include "gpu/ipc/common/dx_diag_node.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_JUMBO_H_
#define GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
namespace blink {
DxDiagNode::DxDiagNode()
    : values(),
      children() {}

DxDiagNode::DxDiagNode(
    const WTF::HashMap<WTF::String, WTF::String>& values_in,
    WTF::HashMap<WTF::String, DxDiagNodePtr> children_in)
    : values(std::move(values_in)),
      children(std::move(children_in)) {}

DxDiagNode::~DxDiagNode() = default;

bool DxDiagNode::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::blink::DxDiagNode::DataView, ::gpu::mojom::blink::DxDiagNodePtr>::Read(
    ::gpu::mojom::blink::DxDiagNode::DataView input,
    ::gpu::mojom::blink::DxDiagNodePtr* output) {
  bool success = true;
  ::gpu::mojom::blink::DxDiagNodePtr result(::gpu::mojom::blink::DxDiagNode::New());
  
      if (!input.ReadValues(&result->values))
        success = false;
      if (!input.ReadChildren(&result->children))
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