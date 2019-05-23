// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1232880618 value is based on sha256(salt + "VideoFrameHandleReleaser1").
constexpr uint32_t kVideoFrameHandleReleaser_ReleaseVideoFrame_Name = 1232880618;
// The 1624617615 value is based on sha256(salt + "VideoDecoder1").
constexpr uint32_t kVideoDecoder_GetSupportedConfigs_Name = 1624617615;
// The 623608161 value is based on sha256(salt + "VideoDecoder2").
constexpr uint32_t kVideoDecoder_Construct_Name = 623608161;
// The 513992868 value is based on sha256(salt + "VideoDecoder3").
constexpr uint32_t kVideoDecoder_Initialize_Name = 513992868;
// The 295696756 value is based on sha256(salt + "VideoDecoder4").
constexpr uint32_t kVideoDecoder_Decode_Name = 295696756;
// The 552808148 value is based on sha256(salt + "VideoDecoder5").
constexpr uint32_t kVideoDecoder_Reset_Name = 552808148;
// The 1716801175 value is based on sha256(salt + "VideoDecoder6").
constexpr uint32_t kVideoDecoder_OnOverlayInfoChanged_Name = 1716801175;
// The 378104960 value is based on sha256(salt + "VideoDecoderClient1").
constexpr uint32_t kVideoDecoderClient_OnVideoFrameDecoded_Name = 378104960;
// The 580297280 value is based on sha256(salt + "VideoDecoderClient2").
constexpr uint32_t kVideoDecoderClient_OnWaiting_Name = 580297280;
// The 1222805932 value is based on sha256(salt + "VideoDecoderClient3").
constexpr uint32_t kVideoDecoderClient_RequestOverlayInfo_Name = 1222805932;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_