// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 945809826 value is based on sha256(salt + "VideoEncodeAcceleratorProvider1").
constexpr uint32_t kVideoEncodeAcceleratorProvider_CreateVideoEncodeAccelerator_Name = 945809826;
// The 941580385 value is based on sha256(salt + "VideoEncodeAccelerator1").
constexpr uint32_t kVideoEncodeAccelerator_Initialize_Name = 941580385;
// The 50283164 value is based on sha256(salt + "VideoEncodeAccelerator2").
constexpr uint32_t kVideoEncodeAccelerator_Encode_Name = 50283164;
// The 1947212751 value is based on sha256(salt + "VideoEncodeAccelerator3").
constexpr uint32_t kVideoEncodeAccelerator_UseOutputBitstreamBuffer_Name = 1947212751;
// The 1298325077 value is based on sha256(salt + "VideoEncodeAccelerator4").
constexpr uint32_t kVideoEncodeAccelerator_RequestEncodingParametersChange_Name = 1298325077;
// The 1309999147 value is based on sha256(salt + "VideoEncodeAcceleratorClient1").
constexpr uint32_t kVideoEncodeAcceleratorClient_RequireBitstreamBuffers_Name = 1309999147;
// The 988853411 value is based on sha256(salt + "VideoEncodeAcceleratorClient2").
constexpr uint32_t kVideoEncodeAcceleratorClient_BitstreamBufferReady_Name = 988853411;
// The 1735384439 value is based on sha256(salt + "VideoEncodeAcceleratorClient3").
constexpr uint32_t kVideoEncodeAcceleratorClient_NotifyError_Name = 1735384439;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_SHARED_MESSAGE_IDS_H_