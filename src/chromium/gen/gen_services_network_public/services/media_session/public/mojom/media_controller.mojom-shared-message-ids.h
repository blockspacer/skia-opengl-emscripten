// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


// The 1608136904 value is based on sha256(salt + "MediaControllerManager1").
constexpr uint32_t kMediaControllerManager_CreateMediaControllerForSession_Name = 1608136904;
// The 456747477 value is based on sha256(salt + "MediaControllerManager2").
constexpr uint32_t kMediaControllerManager_CreateActiveMediaController_Name = 456747477;
// The 1072268830 value is based on sha256(salt + "MediaControllerManager3").
constexpr uint32_t kMediaControllerManager_SuspendAllSessions_Name = 1072268830;
// The 474743661 value is based on sha256(salt + "MediaController1").
constexpr uint32_t kMediaController_Suspend_Name = 474743661;
// The 1710701431 value is based on sha256(salt + "MediaController2").
constexpr uint32_t kMediaController_Resume_Name = 1710701431;
// The 2058897348 value is based on sha256(salt + "MediaController3").
constexpr uint32_t kMediaController_Stop_Name = 2058897348;
// The 653749147 value is based on sha256(salt + "MediaController4").
constexpr uint32_t kMediaController_ToggleSuspendResume_Name = 653749147;
// The 1146237526 value is based on sha256(salt + "MediaController5").
constexpr uint32_t kMediaController_AddObserver_Name = 1146237526;
// The 2091232417 value is based on sha256(salt + "MediaController6").
constexpr uint32_t kMediaController_PreviousTrack_Name = 2091232417;
// The 1169016406 value is based on sha256(salt + "MediaController7").
constexpr uint32_t kMediaController_NextTrack_Name = 1169016406;
// The 1056223617 value is based on sha256(salt + "MediaController8").
constexpr uint32_t kMediaController_Seek_Name = 1056223617;
// The 503716683 value is based on sha256(salt + "MediaController9").
constexpr uint32_t kMediaController_ObserveImages_Name = 503716683;
// The 142738777 value is based on sha256(salt + "MediaControllerObserver1").
constexpr uint32_t kMediaControllerObserver_MediaSessionInfoChanged_Name = 142738777;
// The 1944392653 value is based on sha256(salt + "MediaControllerObserver2").
constexpr uint32_t kMediaControllerObserver_MediaSessionMetadataChanged_Name = 1944392653;
// The 191391445 value is based on sha256(salt + "MediaControllerObserver3").
constexpr uint32_t kMediaControllerObserver_MediaSessionActionsChanged_Name = 191391445;
// The 1035166953 value is based on sha256(salt + "MediaControllerObserver4").
constexpr uint32_t kMediaControllerObserver_MediaSessionChanged_Name = 1035166953;
// The 379906771 value is based on sha256(salt + "MediaControllerImageObserver1").
constexpr uint32_t kMediaControllerImageObserver_MediaControllerImageChanged_Name = 379906771;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_