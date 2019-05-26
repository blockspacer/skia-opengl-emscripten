// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


// The 260932768 value is based on sha256(salt + "MediaSessionObserver1").
constexpr uint32_t kMediaSessionObserver_MediaSessionInfoChanged_Name = 260932768;
// The 604511469 value is based on sha256(salt + "MediaSessionObserver2").
constexpr uint32_t kMediaSessionObserver_MediaSessionMetadataChanged_Name = 604511469;
// The 831339811 value is based on sha256(salt + "MediaSessionObserver3").
constexpr uint32_t kMediaSessionObserver_MediaSessionActionsChanged_Name = 831339811;
// The 1478891696 value is based on sha256(salt + "MediaSessionObserver4").
constexpr uint32_t kMediaSessionObserver_MediaSessionImagesChanged_Name = 1478891696;
// The 273490117 value is based on sha256(salt + "MediaSession1").
constexpr uint32_t kMediaSession_GetMediaSessionInfo_Name = 273490117;
// The 387367148 value is based on sha256(salt + "MediaSession2").
constexpr uint32_t kMediaSession_GetDebugInfo_Name = 387367148;
// The 1792343529 value is based on sha256(salt + "MediaSession3").
constexpr uint32_t kMediaSession_StartDucking_Name = 1792343529;
// The 1645989535 value is based on sha256(salt + "MediaSession4").
constexpr uint32_t kMediaSession_StopDucking_Name = 1645989535;
// The 1351228355 value is based on sha256(salt + "MediaSession5").
constexpr uint32_t kMediaSession_Suspend_Name = 1351228355;
// The 480473786 value is based on sha256(salt + "MediaSession6").
constexpr uint32_t kMediaSession_Resume_Name = 480473786;
// The 1361975983 value is based on sha256(salt + "MediaSession7").
constexpr uint32_t kMediaSession_AddObserver_Name = 1361975983;
// The 377109665 value is based on sha256(salt + "MediaSession8").
constexpr uint32_t kMediaSession_PreviousTrack_Name = 377109665;
// The 295926068 value is based on sha256(salt + "MediaSession9").
constexpr uint32_t kMediaSession_NextTrack_Name = 295926068;
// The 2093379379 value is based on sha256(salt + "MediaSession10").
constexpr uint32_t kMediaSession_Seek_Name = 2093379379;
// The 885493837 value is based on sha256(salt + "MediaSession11").
constexpr uint32_t kMediaSession_Stop_Name = 885493837;
// The 165249244 value is based on sha256(salt + "MediaSession12").
constexpr uint32_t kMediaSession_SkipAd_Name = 165249244;
// The 492095751 value is based on sha256(salt + "MediaSession13").
constexpr uint32_t kMediaSession_GetMediaImageBitmap_Name = 492095751;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_