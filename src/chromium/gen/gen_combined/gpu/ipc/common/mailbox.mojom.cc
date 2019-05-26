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

#include "gpu/ipc/common/mailbox.mojom.h"

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

#include "gpu/ipc/common/mailbox.mojom-params-data.h"
#include "gpu/ipc/common/mailbox.mojom-shared-message-ids.h"

#include "gpu/ipc/common/mailbox.mojom-import-headers.h"


#ifndef GPU_IPC_COMMON_MAILBOX_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_MAILBOX_MOJOM_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
Mailbox::Mailbox()
    : name() {}

Mailbox::Mailbox(
    const std::vector<int8_t>& name_in)
    : name(std::move(name_in)) {}

Mailbox::~Mailbox() = default;

bool Mailbox::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::Mailbox::DataView, ::gpu::mojom::MailboxPtr>::Read(
    ::gpu::mojom::Mailbox::DataView input,
    ::gpu::mojom::MailboxPtr* output) {
  bool success = true;
  ::gpu::mojom::MailboxPtr result(::gpu::mojom::Mailbox::New());
  
      if (!input.ReadName(&result->name))
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