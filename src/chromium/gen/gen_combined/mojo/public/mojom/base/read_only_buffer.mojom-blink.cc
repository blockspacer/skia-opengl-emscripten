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

#include "mojo/public/mojom/base/read_only_buffer.mojom-blink.h"

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

#include "mojo/public/mojom/base/read_only_buffer.mojom-params-data.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/read_only_buffer.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_BUFFER_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_BUFFER_MOJOM_BLINK_JUMBO_H_
#endif
namespace mojo_base {
namespace mojom {
namespace blink {
ReadOnlyBuffer::ReadOnlyBuffer()
    : buffer() {}

ReadOnlyBuffer::ReadOnlyBuffer(
    const WTF::Vector<uint8_t>& buffer_in)
    : buffer(std::move(buffer_in)) {}

ReadOnlyBuffer::~ReadOnlyBuffer() = default;

bool ReadOnlyBuffer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::blink::ReadOnlyBuffer::DataView, ::mojo_base::mojom::blink::ReadOnlyBufferPtr>::Read(
    ::mojo_base::mojom::blink::ReadOnlyBuffer::DataView input,
    ::mojo_base::mojom::blink::ReadOnlyBufferPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::ReadOnlyBufferPtr result(::mojo_base::mojom::blink::ReadOnlyBuffer::New());
  
      if (!input.ReadBuffer(&result->buffer))
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