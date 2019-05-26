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

#include "gpu/ipc/common/sync_token.mojom.h"

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

#include "gpu/ipc/common/sync_token.mojom-params-data.h"
#include "gpu/ipc/common/sync_token.mojom-shared-message-ids.h"

#include "gpu/ipc/common/sync_token.mojom-import-headers.h"


#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
SyncToken::SyncToken()
    : verified_flush(),
      namespace_id(),
      command_buffer_id(),
      release_count() {}

SyncToken::SyncToken(
    bool verified_flush_in,
    CommandBufferNamespace namespace_id_in,
    uint64_t command_buffer_id_in,
    uint64_t release_count_in)
    : verified_flush(std::move(verified_flush_in)),
      namespace_id(std::move(namespace_id_in)),
      command_buffer_id(std::move(command_buffer_id_in)),
      release_count(std::move(release_count_in)) {}

SyncToken::~SyncToken() = default;

bool SyncToken::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::SyncToken::DataView, ::gpu::mojom::SyncTokenPtr>::Read(
    ::gpu::mojom::SyncToken::DataView input,
    ::gpu::mojom::SyncTokenPtr* output) {
  bool success = true;
  ::gpu::mojom::SyncTokenPtr result(::gpu::mojom::SyncToken::New());
  
      result->verified_flush = input.verified_flush();
      if (!input.ReadNamespaceId(&result->namespace_id))
        success = false;
      result->command_buffer_id = input.command_buffer_id();
      result->release_count = input.release_count();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif