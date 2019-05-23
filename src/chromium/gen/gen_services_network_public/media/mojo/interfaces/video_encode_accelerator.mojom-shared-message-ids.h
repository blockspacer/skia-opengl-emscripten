// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 956806547 value is based on sha256(salt + "VideoEncodeAcceleratorProvider1").
constexpr uint32_t kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name = 956806547;
// The 1391885734 value is based on sha256(salt + "VideoEncodeAccelerator1").
constexpr uint32_t kVideoEncodeAccelerator_Initialize_Name = 1391885734;
// The 1010874456 value is based on sha256(salt + "VideoEncodeAccelerator2").
constexpr uint32_t kVideoEncodeAccelerator_Encode_Name = 1010874456;
// The 1927466998 value is based on sha256(salt + "VideoEncodeAccelerator3").
constexpr uint32_t kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name = 1927466998;
// The 758583512 value is based on sha256(salt + "VideoEncodeAccelerator4").
constexpr uint32_t kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 758583512;
// The 1042969952 value is based on sha256(salt + "VideoEncodeAcceleratorClient1").
constexpr uint32_t kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name = 1042969952;
// The 1256945047 value is based on sha256(salt + "VideoEncodeAcceleratorClient2").
constexpr uint32_t kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name = 1256945047;
// The 1543928174 value is based on sha256(salt + "VideoEncodeAcceleratorClient3").
constexpr uint32_t kVideoEncodeAcceleratorClient_NotifyError_Name = 1543928174;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_