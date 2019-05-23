// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


// The 802581746 value is based on sha256(salt + "MediaSessionObserver1").
constexpr uint32_t kMediaSessionObserver_MediaSessionInfoChanged_Name = 802581746;
// The 187990832 value is based on sha256(salt + "MediaSessionObserver2").
constexpr uint32_t kMediaSessionObserver_MediaSessionMetadataChanged_Name = 187990832;
// The 276188637 value is based on sha256(salt + "MediaSessionObserver3").
constexpr uint32_t kMediaSessionObserver_MediaSessionActionsChanged_Name = 276188637;
// The 1078586019 value is based on sha256(salt + "MediaSessionObserver4").
constexpr uint32_t kMediaSessionObserver_MediaSessionImagesChanged_Name = 1078586019;
// The 1574481195 value is based on sha256(salt + "MediaSession1").
constexpr uint32_t kMediaSession_GetMediaSessionInfo_Name = 1574481195;
// The 1740176576 value is based on sha256(salt + "MediaSession2").
constexpr uint32_t kMediaSession_GetDebugInfo_Name = 1740176576;
// The 467302095 value is based on sha256(salt + "MediaSession3").
constexpr uint32_t kMediaSession_StartDucking_Name = 467302095;
// The 1701101686 value is based on sha256(salt + "MediaSession4").
constexpr uint32_t kMediaSession_StopDucking_Name = 1701101686;
// The 902487387 value is based on sha256(salt + "MediaSession5").
constexpr uint32_t kMediaSession_Suspend_Name = 902487387;
// The 1239052228 value is based on sha256(salt + "MediaSession6").
constexpr uint32_t kMediaSession_Resume_Name = 1239052228;
// The 1379607887 value is based on sha256(salt + "MediaSession7").
constexpr uint32_t kMediaSession_AddObserver_Name = 1379607887;
// The 362377751 value is based on sha256(salt + "MediaSession8").
constexpr uint32_t kMediaSession_PreviousTrack_Name = 362377751;
// The 1674587281 value is based on sha256(salt + "MediaSession9").
constexpr uint32_t kMediaSession_NextTrack_Name = 1674587281;
// The 1635229973 value is based on sha256(salt + "MediaSession10").
constexpr uint32_t kMediaSession_Seek_Name = 1635229973;
// The 877197263 value is based on sha256(salt + "MediaSession11").
constexpr uint32_t kMediaSession_Stop_Name = 877197263;
// The 570728934 value is based on sha256(salt + "MediaSession12").
constexpr uint32_t kMediaSession_SkipAd_Name = 570728934;
// The 688766515 value is based on sha256(salt + "MediaSession13").
constexpr uint32_t kMediaSession_GetMediaImageBitmap_Name = 688766515;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_SHARED_MESSAGE_IDS_H_