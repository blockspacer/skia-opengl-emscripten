// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_BLINK_FORWARD_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gpu {
namespace mojom {

enum class VideoCodecProfile : int32_t;

enum class ImageDecodeAcceleratorType : int32_t;

enum class ImageDecodeAcceleratorSubsampling : int32_t;
}  // namespace gpu
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gpu_mojom_internal_VideoCodecProfile_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::VideoCodecProfile> {
  using Hash = gpu_mojom_internal_VideoCodecProfile_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gpu_mojom_internal_ImageDecodeAcceleratorType_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::ImageDecodeAcceleratorType> {
  using Hash = gpu_mojom_internal_ImageDecodeAcceleratorType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gpu_mojom_internal_ImageDecodeAcceleratorSubsampling_DataHashFn;

template <>
struct DefaultHash<::gpu::mojom::ImageDecodeAcceleratorSubsampling> {
  using Hash = gpu_mojom_internal_ImageDecodeAcceleratorSubsampling_DataHashFn;
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {
using VideoCodecProfile = VideoCodecProfile;  // Alias for definition in the parent namespace.
using ImageDecodeAcceleratorType = ImageDecodeAcceleratorType;  // Alias for definition in the parent namespace.
using ImageDecodeAcceleratorSubsampling = ImageDecodeAcceleratorSubsampling;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_BLINK_FORWARD_H_