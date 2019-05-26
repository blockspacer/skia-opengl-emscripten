// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1179820094 value is based on sha256(salt + "VideoCaptureObserver1").
constexpr uint32_t kVideoCaptureObserver_OnStateChanged_Name = 1179820094;
// The 319437896 value is based on sha256(salt + "VideoCaptureObserver2").
constexpr uint32_t kVideoCaptureObserver_OnNewBuffer_Name = 319437896;
// The 248378568 value is based on sha256(salt + "VideoCaptureObserver3").
constexpr uint32_t kVideoCaptureObserver_OnBufferReady_Name = 248378568;
// The 1210303249 value is based on sha256(salt + "VideoCaptureObserver4").
constexpr uint32_t kVideoCaptureObserver_OnBufferDestroyed_Name = 1210303249;
// The 793216330 value is based on sha256(salt + "VideoCaptureHost1").
constexpr uint32_t kVideoCaptureHost_Start_Name = 793216330;
// The 1064079234 value is based on sha256(salt + "VideoCaptureHost2").
constexpr uint32_t kVideoCaptureHost_Stop_Name = 1064079234;
// The 845686731 value is based on sha256(salt + "VideoCaptureHost3").
constexpr uint32_t kVideoCaptureHost_Pause_Name = 845686731;
// The 1434642277 value is based on sha256(salt + "VideoCaptureHost4").
constexpr uint32_t kVideoCaptureHost_Resume_Name = 1434642277;
// The 1565919028 value is based on sha256(salt + "VideoCaptureHost5").
constexpr uint32_t kVideoCaptureHost_RequestRefreshFrame_Name = 1565919028;
// The 1409274468 value is based on sha256(salt + "VideoCaptureHost6").
constexpr uint32_t kVideoCaptureHost_ReleaseBuffer_Name = 1409274468;
// The 1011347185 value is based on sha256(salt + "VideoCaptureHost7").
constexpr uint32_t kVideoCaptureHost_GetDeviceSupportedFormats_Name = 1011347185;
// The 52438983 value is based on sha256(salt + "VideoCaptureHost8").
constexpr uint32_t kVideoCaptureHost_GetDeviceFormatsInUse_Name = 52438983;
// The 770561386 value is based on sha256(salt + "VideoCaptureHost9").
constexpr uint32_t kVideoCaptureHost_OnFrameDropped_Name = 770561386;
// The 1721637745 value is based on sha256(salt + "VideoCaptureHost10").
constexpr uint32_t kVideoCaptureHost_OnLog_Name = 1721637745;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_SHARED_MESSAGE_IDS_H_