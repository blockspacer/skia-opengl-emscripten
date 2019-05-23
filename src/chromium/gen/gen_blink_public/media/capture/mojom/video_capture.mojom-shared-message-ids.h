// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1454061749 value is based on sha256(salt + "VideoCaptureObserver1").
constexpr uint32_t kVideoCaptureObserver_OnStateChanged_Name = 1454061749;
// The 705726438 value is based on sha256(salt + "VideoCaptureObserver2").
constexpr uint32_t kVideoCaptureObserver_OnNewBuffer_Name = 705726438;
// The 650409766 value is based on sha256(salt + "VideoCaptureObserver3").
constexpr uint32_t kVideoCaptureObserver_OnBufferReady_Name = 650409766;
// The 107603992 value is based on sha256(salt + "VideoCaptureObserver4").
constexpr uint32_t kVideoCaptureObserver_OnBufferDestroyed_Name = 107603992;
// The 1971652561 value is based on sha256(salt + "VideoCaptureHost1").
constexpr uint32_t kVideoCaptureHost_Start_Name = 1971652561;
// The 2121616612 value is based on sha256(salt + "VideoCaptureHost2").
constexpr uint32_t kVideoCaptureHost_Stop_Name = 2121616612;
// The 402228778 value is based on sha256(salt + "VideoCaptureHost3").
constexpr uint32_t kVideoCaptureHost_Pause_Name = 402228778;
// The 1312757742 value is based on sha256(salt + "VideoCaptureHost4").
constexpr uint32_t kVideoCaptureHost_Resume_Name = 1312757742;
// The 306920786 value is based on sha256(salt + "VideoCaptureHost5").
constexpr uint32_t kVideoCaptureHost_RequestRefreshFrame_Name = 306920786;
// The 617017518 value is based on sha256(salt + "VideoCaptureHost6").
constexpr uint32_t kVideoCaptureHost_ReleaseBuffer_Name = 617017518;
// The 2001280514 value is based on sha256(salt + "VideoCaptureHost7").
constexpr uint32_t kVideoCaptureHost_GetDeviceSupportedFormats_Name = 2001280514;
// The 1667443409 value is based on sha256(salt + "VideoCaptureHost8").
constexpr uint32_t kVideoCaptureHost_GetDeviceFormatsInUse_Name = 1667443409;
// The 420246349 value is based on sha256(salt + "VideoCaptureHost9").
constexpr uint32_t kVideoCaptureHost_OnFrameDropped_Name = 420246349;
// The 34406169 value is based on sha256(salt + "VideoCaptureHost10").
constexpr uint32_t kVideoCaptureHost_OnLog_Name = 34406169;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_