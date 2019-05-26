// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_BLINK_FORWARD_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gpu {
namespace mojom {

enum class GpuFeatureStatus : int32_t;

enum class AntialiasingMode : int32_t;
}  // namespace gpu
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gpu_mojom_internal_GpuFeatureStatus_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::GpuFeatureStatus> {
  using Hash = gpu_mojom_internal_GpuFeatureStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gpu_mojom_internal_AntialiasingMode_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::AntialiasingMode> {
  using Hash = gpu_mojom_internal_AntialiasingMode_DataHashFn;
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {
using GpuFeatureStatus = GpuFeatureStatus;  // Alias for definition in the parent namespace.
using AntialiasingMode = AntialiasingMode;  // Alias for definition in the parent namespace.
class WebglPreferences;
using WebglPreferencesPtr = mojo::InlinedStructPtr<WebglPreferences>;

class GpuFeatureInfo;
using GpuFeatureInfoPtr = mojo::StructPtr<GpuFeatureInfo>;




}  // namespace blink
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_BLINK_FORWARD_H_