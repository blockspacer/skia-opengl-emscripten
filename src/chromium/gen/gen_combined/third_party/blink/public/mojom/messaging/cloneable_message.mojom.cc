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

#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom.h"

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

#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-params-data.h"
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_CLONEABLE_MESSAGE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
CloneableMessage::CloneableMessage()
    : encoded_message(),
      blobs(),
      stack_trace_id(),
      stack_trace_debugger_id_first(),
      stack_trace_debugger_id_second(),
      locked_agent_cluster_id() {}

CloneableMessage::CloneableMessage(
    mojo_base::BigBuffer encoded_message_in,
    std::vector<::blink::mojom::SerializedBlobPtr> blobs_in,
    uint64_t stack_trace_id_in,
    int64_t stack_trace_debugger_id_first_in,
    int64_t stack_trace_debugger_id_second_in,
    const base::Optional<base::UnguessableToken>& locked_agent_cluster_id_in)
    : encoded_message(std::move(encoded_message_in)),
      blobs(std::move(blobs_in)),
      stack_trace_id(std::move(stack_trace_id_in)),
      stack_trace_debugger_id_first(std::move(stack_trace_debugger_id_first_in)),
      stack_trace_debugger_id_second(std::move(stack_trace_debugger_id_second_in)),
      locked_agent_cluster_id(std::move(locked_agent_cluster_id_in)) {}

CloneableMessage::~CloneableMessage() = default;

bool CloneableMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::CloneableMessage::DataView, ::blink::mojom::CloneableMessagePtr>::Read(
    ::blink::mojom::CloneableMessage::DataView input,
    ::blink::mojom::CloneableMessagePtr* output) {
  bool success = true;
  ::blink::mojom::CloneableMessagePtr result(::blink::mojom::CloneableMessage::New());
  
      if (!input.ReadEncodedMessage(&result->encoded_message))
        success = false;
      if (!input.ReadBlobs(&result->blobs))
        success = false;
      result->stack_trace_id = input.stack_trace_id();
      result->stack_trace_debugger_id_first = input.stack_trace_debugger_id_first();
      result->stack_trace_debugger_id_second = input.stack_trace_debugger_id_second();
      if (!input.ReadLockedAgentClusterId(&result->locked_agent_cluster_id))
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