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

#include "gpu/ipc/common/mailbox_holder.mojom-blink.h"

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

#include "gpu/ipc/common/mailbox_holder.mojom-params-data.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-message-ids.h"

#include "gpu/ipc/common/mailbox_holder.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_BLINK_JUMBO_H_
#define GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#endif
namespace gpu {
namespace mojom {
namespace blink {
MailboxHolder::MailboxHolder()
    : mailbox(),
      sync_token(),
      texture_target() {}

MailboxHolder::MailboxHolder(
    ::gpu::mojom::blink::MailboxPtr mailbox_in,
    const ::gpu::SyncToken& sync_token_in,
    uint32_t texture_target_in)
    : mailbox(std::move(mailbox_in)),
      sync_token(std::move(sync_token_in)),
      texture_target(std::move(texture_target_in)) {}

MailboxHolder::~MailboxHolder() = default;

bool MailboxHolder::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::blink::MailboxHolder::DataView, ::gpu::mojom::blink::MailboxHolderPtr>::Read(
    ::gpu::mojom::blink::MailboxHolder::DataView input,
    ::gpu::mojom::blink::MailboxHolderPtr* output) {
  bool success = true;
  ::gpu::mojom::blink::MailboxHolderPtr result(::gpu::mojom::blink::MailboxHolder::New());
  
      if (!input.ReadMailbox(&result->mailbox))
        success = false;
      if (!input.ReadSyncToken(&result->sync_token))
        success = false;
      result->texture_target = input.texture_target();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif