// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_FORWARD_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class GpuDeviceDataView;

class VideoDecodeAcceleratorSupportedProfileDataView;

class VideoDecodeAcceleratorCapabilitiesDataView;

class VideoEncodeAcceleratorSupportedProfileDataView;

class ImageDecodeAcceleratorSupportedProfileDataView;

class GpuInfoDataView;


enum class VideoCodecProfile : int32_t;

enum class ImageDecodeAcceleratorType : int32_t;

enum class ImageDecodeAcceleratorSubsampling : int32_t;
class GpuDevice;
using GpuDevicePtr = mojo::StructPtr<GpuDevice>;

class VideoDecodeAcceleratorSupportedProfile;
using VideoDecodeAcceleratorSupportedProfilePtr = mojo::StructPtr<VideoDecodeAcceleratorSupportedProfile>;

class VideoDecodeAcceleratorCapabilities;
using VideoDecodeAcceleratorCapabilitiesPtr = mojo::StructPtr<VideoDecodeAcceleratorCapabilities>;

class VideoEncodeAcceleratorSupportedProfile;
using VideoEncodeAcceleratorSupportedProfilePtr = mojo::StructPtr<VideoEncodeAcceleratorSupportedProfile>;

class ImageDecodeAcceleratorSupportedProfile;
using ImageDecodeAcceleratorSupportedProfilePtr = mojo::StructPtr<ImageDecodeAcceleratorSupportedProfile>;

class GpuInfo;
using GpuInfoPtr = mojo::StructPtr<GpuInfo>;




}  // namespace mojom
}  // namespace gpu
#include "gpu/config/gpu_info.h"

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_FORWARD_H_