// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1340852076 value is based on sha256(salt + "VideoFrameHandleReleaser1").
constexpr uint32_t kVideoFrameHandleReleaser_ReleaseVideoFrame_Name = 1340852076;
// The 250960156 value is based on sha256(salt + "VideoDecoder1").
constexpr uint32_t kVideoDecoder_GetSupportedConfigs_Name = 250960156;
// The 1205499535 value is based on sha256(salt + "VideoDecoder2").
constexpr uint32_t kVideoDecoder_Construct_Name = 1205499535;
// The 1763328088 value is based on sha256(salt + "VideoDecoder3").
constexpr uint32_t kVideoDecoder_Initialize_Name = 1763328088;
// The 147453114 value is based on sha256(salt + "VideoDecoder4").
constexpr uint32_t kVideoDecoder_Decode_Name = 147453114;
// The 138911300 value is based on sha256(salt + "VideoDecoder5").
constexpr uint32_t kVideoDecoder_Reset_Name = 138911300;
// The 1966100079 value is based on sha256(salt + "VideoDecoder6").
constexpr uint32_t kVideoDecoder_OnOverlayInfoChanged_Name = 1966100079;
// The 546293804 value is based on sha256(salt + "VideoDecoderClient1").
constexpr uint32_t kVideoDecoderClient_OnVideoFrameDecoded_Name = 546293804;
// The 1792501068 value is based on sha256(salt + "VideoDecoderClient2").
constexpr uint32_t kVideoDecoderClient_OnWaiting_Name = 1792501068;
// The 1096729731 value is based on sha256(salt + "VideoDecoderClient3").
constexpr uint32_t kVideoDecoderClient_RequestOverlayInfo_Name = 1096729731;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_