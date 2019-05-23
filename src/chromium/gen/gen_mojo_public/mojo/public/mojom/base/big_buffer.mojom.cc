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

#include "mojo/public/mojom/base/big_buffer.mojom.h"

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

#include "mojo/public/mojom/base/big_buffer.mojom-params-data.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/big_buffer.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_JUMBO_H_
#endif
namespace mojo_base {
namespace mojom {
BigBufferSharedMemoryRegion::BigBufferSharedMemoryRegion()
    : buffer_handle(),
      size() {}

BigBufferSharedMemoryRegion::BigBufferSharedMemoryRegion(
    mojo::ScopedSharedBufferHandle buffer_handle_in,
    uint32_t size_in)
    : buffer_handle(std::move(buffer_handle_in)),
      size(std::move(size_in)) {}

BigBufferSharedMemoryRegion::~BigBufferSharedMemoryRegion() = default;

bool BigBufferSharedMemoryRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BigBuffer::BigBuffer() : tag_(Tag::BYTES) {
  data_.bytes = new std::vector<uint8_t>;
}

BigBuffer::~BigBuffer() {
  DestroyActive();
}


void BigBuffer::set_bytes(
    const std::vector<uint8_t>& bytes) {
  if (tag_ == Tag::BYTES) {
    *(data_.bytes) = std::move(bytes);
  } else {
    DestroyActive();
    tag_ = Tag::BYTES;
    data_.bytes = new std::vector<uint8_t>(
        std::move(bytes));
  }
}
void BigBuffer::set_shared_memory(
    BigBufferSharedMemoryRegionPtr shared_memory) {
  if (tag_ == Tag::SHARED_MEMORY) {
    *(data_.shared_memory) = std::move(shared_memory);
  } else {
    DestroyActive();
    tag_ = Tag::SHARED_MEMORY;
    data_.shared_memory = new BigBufferSharedMemoryRegionPtr(
        std::move(shared_memory));
  }
}
void BigBuffer::set_invalid_buffer(
    bool invalid_buffer) {
  if (tag_ != Tag::INVALID_BUFFER) {
    DestroyActive();
    tag_ = Tag::INVALID_BUFFER;
  }
  data_.invalid_buffer = invalid_buffer;
}

void BigBuffer::DestroyActive() {
  switch (tag_) {

    case Tag::BYTES:

      delete data_.bytes;
      break;
    case Tag::SHARED_MEMORY:

      delete data_.shared_memory;
      break;
    case Tag::INVALID_BUFFER:

      break;
  }
}

bool BigBuffer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::BigBufferSharedMemoryRegion::DataView, ::mojo_base::mojom::BigBufferSharedMemoryRegionPtr>::Read(
    ::mojo_base::mojom::BigBufferSharedMemoryRegion::DataView input,
    ::mojo_base::mojom::BigBufferSharedMemoryRegionPtr* output) {
  bool success = true;
  ::mojo_base::mojom::BigBufferSharedMemoryRegionPtr result(::mojo_base::mojom::BigBufferSharedMemoryRegion::New());
  
      result->buffer_handle = input.TakeBufferHandle();
      result->size = input.size();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::mojo_base::mojom::BigBuffer::DataView, ::mojo_base::mojom::BigBufferPtr>::Read(
    ::mojo_base::mojom::BigBuffer::DataView input,
    ::mojo_base::mojom::BigBufferPtr* output) {
  using UnionType = ::mojo_base::mojom::BigBuffer;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::BYTES: {
      std::vector<uint8_t> result_bytes;
      if (!input.ReadBytes(&result_bytes))
        return false;

      *output = UnionType::NewBytes(
          std::move(result_bytes));
      break;
    }
    case Tag::SHARED_MEMORY: {
      ::mojo_base::mojom::BigBufferSharedMemoryRegionPtr result_shared_memory;
      if (!input.ReadSharedMemory(&result_shared_memory))
        return false;

      *output = UnionType::NewSharedMemory(
          std::move(result_shared_memory));
      break;
    }
    case Tag::INVALID_BUFFER: {
      *output = UnionType::NewInvalidBuffer(input.invalid_buffer());
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif