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

#include "ui/gfx/mojo/buffer_types.mojom-blink.h"

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

#include "ui/gfx/mojo/buffer_types.mojom-params-data.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared-message-ids.h"

#include "ui/gfx/mojo/buffer_types.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace gfx {
namespace mojom {
namespace blink {
BufferUsageAndFormat::BufferUsageAndFormat()
    : usage(),
      format() {}

BufferUsageAndFormat::BufferUsageAndFormat(
    BufferUsage usage_in,
    BufferFormat format_in)
    : usage(std::move(usage_in)),
      format(std::move(format_in)) {}

BufferUsageAndFormat::~BufferUsageAndFormat() = default;
size_t BufferUsageAndFormat::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->usage);
  seed = mojo::internal::WTFHash(seed, this->format);
  return seed;
}

bool BufferUsageAndFormat::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuMemoryBufferId::GpuMemoryBufferId()
    : id() {}

GpuMemoryBufferId::GpuMemoryBufferId(
    int32_t id_in)
    : id(std::move(id_in)) {}

GpuMemoryBufferId::~GpuMemoryBufferId() = default;
size_t GpuMemoryBufferId::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->id);
  return seed;
}

bool GpuMemoryBufferId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativePixmapPlane::NativePixmapPlane()
    : stride(),
      offset(),
      size(),
      buffer_handle() {}

NativePixmapPlane::NativePixmapPlane(
    uint32_t stride_in,
    int32_t offset_in,
    uint64_t size_in,
    mojo::ScopedHandle buffer_handle_in)
    : stride(std::move(stride_in)),
      offset(std::move(offset_in)),
      size(std::move(size_in)),
      buffer_handle(std::move(buffer_handle_in)) {}

NativePixmapPlane::~NativePixmapPlane() = default;

bool NativePixmapPlane::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativePixmapHandle::NativePixmapHandle()
    : planes(),
      modifier() {}

NativePixmapHandle::NativePixmapHandle(
    WTF::Vector<NativePixmapPlanePtr> planes_in,
    uint64_t modifier_in)
    : planes(std::move(planes_in)),
      modifier(std::move(modifier_in)) {}

NativePixmapHandle::~NativePixmapHandle() = default;

bool NativePixmapHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuMemoryBufferHandle::GpuMemoryBufferHandle()
    : id(),
      offset(),
      stride(),
      platform_handle() {}

GpuMemoryBufferHandle::GpuMemoryBufferHandle(
    GpuMemoryBufferIdPtr id_in,
    uint32_t offset_in,
    uint32_t stride_in,
    GpuMemoryBufferPlatformHandlePtr platform_handle_in)
    : id(std::move(id_in)),
      offset(std::move(offset_in)),
      stride(std::move(stride_in)),
      platform_handle(std::move(platform_handle_in)) {}

GpuMemoryBufferHandle::~GpuMemoryBufferHandle() = default;

bool GpuMemoryBufferHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GpuMemoryBufferPlatformHandle::GpuMemoryBufferPlatformHandle() : tag_(Tag::SHARED_MEMORY_HANDLE) {
  data_.shared_memory_handle = new base::UnsafeSharedMemoryRegion;
}

GpuMemoryBufferPlatformHandle::~GpuMemoryBufferPlatformHandle() {
  DestroyActive();
}


void GpuMemoryBufferPlatformHandle::set_shared_memory_handle(
    base::UnsafeSharedMemoryRegion shared_memory_handle) {
  if (tag_ == Tag::SHARED_MEMORY_HANDLE) {
    *(data_.shared_memory_handle) = std::move(shared_memory_handle);
  } else {
    DestroyActive();
    tag_ = Tag::SHARED_MEMORY_HANDLE;
    data_.shared_memory_handle = new base::UnsafeSharedMemoryRegion(
        std::move(shared_memory_handle));
  }
}
void GpuMemoryBufferPlatformHandle::set_native_pixmap_handle(
    NativePixmapHandlePtr native_pixmap_handle) {
  if (tag_ == Tag::NATIVE_PIXMAP_HANDLE) {
    *(data_.native_pixmap_handle) = std::move(native_pixmap_handle);
  } else {
    DestroyActive();
    tag_ = Tag::NATIVE_PIXMAP_HANDLE;
    data_.native_pixmap_handle = new NativePixmapHandlePtr(
        std::move(native_pixmap_handle));
  }
}

void GpuMemoryBufferPlatformHandle::DestroyActive() {
  switch (tag_) {

    case Tag::SHARED_MEMORY_HANDLE:

      delete data_.shared_memory_handle;
      break;
    case Tag::NATIVE_PIXMAP_HANDLE:

      delete data_.native_pixmap_handle;
      break;
  }
}

bool GpuMemoryBufferPlatformHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::BufferUsageAndFormat::DataView, ::gfx::mojom::blink::BufferUsageAndFormatPtr>::Read(
    ::gfx::mojom::blink::BufferUsageAndFormat::DataView input,
    ::gfx::mojom::blink::BufferUsageAndFormatPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::BufferUsageAndFormatPtr result(::gfx::mojom::blink::BufferUsageAndFormat::New());
  
      if (!input.ReadUsage(&result->usage))
        success = false;
      if (!input.ReadFormat(&result->format))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::GpuMemoryBufferId::DataView, ::gfx::mojom::blink::GpuMemoryBufferIdPtr>::Read(
    ::gfx::mojom::blink::GpuMemoryBufferId::DataView input,
    ::gfx::mojom::blink::GpuMemoryBufferIdPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::GpuMemoryBufferIdPtr result(::gfx::mojom::blink::GpuMemoryBufferId::New());
  
      result->id = input.id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::NativePixmapPlane::DataView, ::gfx::mojom::blink::NativePixmapPlanePtr>::Read(
    ::gfx::mojom::blink::NativePixmapPlane::DataView input,
    ::gfx::mojom::blink::NativePixmapPlanePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::NativePixmapPlanePtr result(::gfx::mojom::blink::NativePixmapPlane::New());
  
      result->stride = input.stride();
      result->offset = input.offset();
      result->size = input.size();
      result->buffer_handle = input.TakeBufferHandle();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::NativePixmapHandle::DataView, ::gfx::mojom::blink::NativePixmapHandlePtr>::Read(
    ::gfx::mojom::blink::NativePixmapHandle::DataView input,
    ::gfx::mojom::blink::NativePixmapHandlePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::NativePixmapHandlePtr result(::gfx::mojom::blink::NativePixmapHandle::New());
  
      if (!input.ReadPlanes(&result->planes))
        success = false;
      result->modifier = input.modifier();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gfx::mojom::blink::GpuMemoryBufferHandle::DataView, ::gfx::mojom::blink::GpuMemoryBufferHandlePtr>::Read(
    ::gfx::mojom::blink::GpuMemoryBufferHandle::DataView input,
    ::gfx::mojom::blink::GpuMemoryBufferHandlePtr* output) {
  bool success = true;
  ::gfx::mojom::blink::GpuMemoryBufferHandlePtr result(::gfx::mojom::blink::GpuMemoryBufferHandle::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      result->offset = input.offset();
      result->stride = input.stride();
      if (!input.ReadPlatformHandle(&result->platform_handle))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::gfx::mojom::blink::GpuMemoryBufferPlatformHandle::DataView, ::gfx::mojom::blink::GpuMemoryBufferPlatformHandlePtr>::Read(
    ::gfx::mojom::blink::GpuMemoryBufferPlatformHandle::DataView input,
    ::gfx::mojom::blink::GpuMemoryBufferPlatformHandlePtr* output) {
  using UnionType = ::gfx::mojom::blink::GpuMemoryBufferPlatformHandle;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::SHARED_MEMORY_HANDLE: {
      base::UnsafeSharedMemoryRegion result_shared_memory_handle;
      if (!input.ReadSharedMemoryHandle(&result_shared_memory_handle))
        return false;

      *output = UnionType::NewSharedMemoryHandle(
          std::move(result_shared_memory_handle));
      break;
    }
    case Tag::NATIVE_PIXMAP_HANDLE: {
      ::gfx::mojom::blink::NativePixmapHandlePtr result_native_pixmap_handle;
      if (!input.ReadNativePixmapHandle(&result_native_pixmap_handle))
        return false;

      *output = UnionType::NewNativePixmapHandle(
          std::move(result_native_pixmap_handle));
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