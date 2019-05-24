// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gfx {
namespace mojom {

enum class BufferFormat : int32_t;

enum class BufferUsage : int32_t;
}  // namespace gfx
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gfx_mojom_internal_BufferFormat_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::BufferFormat> {
  using Hash = gfx_mojom_internal_BufferFormat_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gfx_mojom_internal_BufferUsage_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::BufferUsage> {
  using Hash = gfx_mojom_internal_BufferUsage_DataHashFn;
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using BufferFormat = BufferFormat;  // Alias for definition in the parent namespace.
using BufferUsage = BufferUsage;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_BLINK_FORWARD_H_