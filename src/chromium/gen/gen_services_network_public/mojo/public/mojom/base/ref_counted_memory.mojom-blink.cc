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

#include "mojo/public/mojom/base/ref_counted_memory.mojom-blink.h"

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

#include "mojo/public/mojom/base/ref_counted_memory.mojom-params-data.h"
#include "mojo/public/mojom/base/ref_counted_memory.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/ref_counted_memory.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_REF_COUNTED_MEMORY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#endif
namespace mojo_base {
namespace mojom {
namespace blink {
RefCountedMemory::RefCountedMemory()
    : data() {}

RefCountedMemory::RefCountedMemory(
    mojo_base::BigBuffer data_in)
    : data(std::move(data_in)) {}

RefCountedMemory::~RefCountedMemory() = default;

bool RefCountedMemory::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::blink::RefCountedMemory::DataView, ::mojo_base::mojom::blink::RefCountedMemoryPtr>::Read(
    ::mojo_base::mojom::blink::RefCountedMemory::DataView input,
    ::mojo_base::mojom::blink::RefCountedMemoryPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::RefCountedMemoryPtr result(::mojo_base::mojom::blink::RefCountedMemory::New());
  
      if (!input.ReadData(&result->data))
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