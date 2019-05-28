// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1342751886 value is based on sha256(salt + "MediaStreamDeviceObserver1").
constexpr uint32_t kMediaStreamDeviceObserver_OnDeviceStopped_Name = 1342751886;
// The 1363590026 value is based on sha256(salt + "MediaStreamDeviceObserver2").
constexpr uint32_t kMediaStreamDeviceObserver_OnDeviceChanged_Name = 1363590026;
// The 2133495860 value is based on sha256(salt + "MediaStreamDispatcherHost1").
constexpr uint32_t kMediaStreamDispatcherHost_GenerateStream_Name = 2133495860;
// The 330115237 value is based on sha256(salt + "MediaStreamDispatcherHost2").
constexpr uint32_t kMediaStreamDispatcherHost_CancelRequest_Name = 330115237;
// The 1617512280 value is based on sha256(salt + "MediaStreamDispatcherHost3").
constexpr uint32_t kMediaStreamDispatcherHost_StopStreamDevice_Name = 1617512280;
// The 1750916187 value is based on sha256(salt + "MediaStreamDispatcherHost4").
constexpr uint32_t kMediaStreamDispatcherHost_OpenDevice_Name = 1750916187;
// The 232817781 value is based on sha256(salt + "MediaStreamDispatcherHost5").
constexpr uint32_t kMediaStreamDispatcherHost_CloseDevice_Name = 232817781;
// The 793077962 value is based on sha256(salt + "MediaStreamDispatcherHost6").
constexpr uint32_t kMediaStreamDispatcherHost_SetCapturingLinkSecured_Name = 793077962;
// The 636741099 value is based on sha256(salt + "MediaStreamDispatcherHost7").
constexpr uint32_t kMediaStreamDispatcherHost_OnStreamStarted_Name = 636741099;
// The 692045356 value is based on sha256(salt + "MediaStreamTrackMetricsHost1").
constexpr uint32_t kMediaStreamTrackMetricsHost_AddTrack_Name = 692045356;
// The 1957676815 value is based on sha256(salt + "MediaStreamTrackMetricsHost2").
constexpr uint32_t kMediaStreamTrackMetricsHost_RemoveTrack_Name = 1957676815;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_