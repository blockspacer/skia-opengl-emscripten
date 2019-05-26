// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_FORWARD_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class WebglPreferencesDataView;

class GpuFeatureInfoDataView;


enum class GpuFeatureStatus : int32_t;

enum class AntialiasingMode : int32_t;
class WebglPreferences;
using WebglPreferencesPtr = mojo::InlinedStructPtr<WebglPreferences>;

class GpuFeatureInfo;
using GpuFeatureInfoPtr = mojo::StructPtr<GpuFeatureInfo>;




}  // namespace mojom
}  // namespace gpu
#include "gpu/config/gpu_feature_info.h"

#endif  // GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_FORWARD_H_