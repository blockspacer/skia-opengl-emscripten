// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_FORWARD_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class BufferUsageAndFormatDataView;

class GpuMemoryBufferIdDataView;

class NativePixmapPlaneDataView;

class NativePixmapHandleDataView;

class GpuMemoryBufferHandleDataView;

class GpuMemoryBufferPlatformHandleDataView;

enum class BufferFormat : int32_t;

enum class BufferUsage : int32_t;
class BufferUsageAndFormat;
using BufferUsageAndFormatPtr = mojo::InlinedStructPtr<BufferUsageAndFormat>;

class GpuMemoryBufferId;
using GpuMemoryBufferIdPtr = mojo::InlinedStructPtr<GpuMemoryBufferId>;

class NativePixmapPlane;
using NativePixmapPlanePtr = mojo::StructPtr<NativePixmapPlane>;

class NativePixmapHandle;
using NativePixmapHandlePtr = mojo::StructPtr<NativePixmapHandle>;

class GpuMemoryBufferHandle;
using GpuMemoryBufferHandlePtr = mojo::StructPtr<GpuMemoryBufferHandle>;

class GpuMemoryBufferPlatformHandle;

typedef mojo::StructPtr<GpuMemoryBufferPlatformHandle> GpuMemoryBufferPlatformHandlePtr;




}  // namespace mojom
}  // namespace gfx
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/gpu_memory_buffer.h"
#include "ui/gfx/native_pixmap_handle.h"

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_FORWARD_H_