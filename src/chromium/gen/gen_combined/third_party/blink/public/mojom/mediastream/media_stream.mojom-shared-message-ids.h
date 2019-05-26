// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1387865158 value is based on sha256(salt + "MediaStreamDeviceObserver1").
constexpr uint32_t kMediaStreamDeviceObserver_OnDeviceStopped_Name = 1387865158;
// The 104631338 value is based on sha256(salt + "MediaStreamDeviceObserver2").
constexpr uint32_t kMediaStreamDeviceObserver_OnDeviceChanged_Name = 104631338;
// The 300354502 value is based on sha256(salt + "MediaStreamDispatcherHost1").
constexpr uint32_t kMediaStreamDispatcherHost_GenerateStream_Name = 300354502;
// The 2097020648 value is based on sha256(salt + "MediaStreamDispatcherHost2").
constexpr uint32_t kMediaStreamDispatcherHost_CancelRequest_Name = 2097020648;
// The 112931621 value is based on sha256(salt + "MediaStreamDispatcherHost3").
constexpr uint32_t kMediaStreamDispatcherHost_StopStreamDevice_Name = 112931621;
// The 499381357 value is based on sha256(salt + "MediaStreamDispatcherHost4").
constexpr uint32_t kMediaStreamDispatcherHost_OpenDevice_Name = 499381357;
// The 323347564 value is based on sha256(salt + "MediaStreamDispatcherHost5").
constexpr uint32_t kMediaStreamDispatcherHost_CloseDevice_Name = 323347564;
// The 874803311 value is based on sha256(salt + "MediaStreamDispatcherHost6").
constexpr uint32_t kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name = 874803311;
// The 927059154 value is based on sha256(salt + "MediaStreamDispatcherHost7").
constexpr uint32_t kMediaStreamDispatcherHost_OnStreamStarted_Name = 927059154;
// The 1226737833 value is based on sha256(salt + "MediaStreamTrackMetricsHost1").
constexpr uint32_t kMediaStreamTrackMetricsHost_AddTrack_Name = 1226737833;
// The 732863003 value is based on sha256(salt + "MediaStreamTrackMetricsHost2").
constexpr uint32_t kMediaStreamTrackMetricsHost_RemoveTrack_Name = 732863003;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_