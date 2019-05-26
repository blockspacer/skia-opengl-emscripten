// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


// The 788667289 value is based on sha256(salt + "MediaControllerManager1").
constexpr uint32_t kMediaControllerManager_CreateMediaControllerForSession_Name = 788667289;
// The 1752286055 value is based on sha256(salt + "MediaControllerManager2").
constexpr uint32_t kMediaControllerManager_CreateActiveMediaController_Name = 1752286055;
// The 355741216 value is based on sha256(salt + "MediaControllerManager3").
constexpr uint32_t kMediaControllerManager_SuspendAllSessions_Name = 355741216;
// The 701238864 value is based on sha256(salt + "MediaController1").
constexpr uint32_t kMediaController_Suspend_Name = 701238864;
// The 1826103291 value is based on sha256(salt + "MediaController2").
constexpr uint32_t kMediaController_Resume_Name = 1826103291;
// The 2131581949 value is based on sha256(salt + "MediaController3").
constexpr uint32_t kMediaController_Stop_Name = 2131581949;
// The 779853644 value is based on sha256(salt + "MediaController4").
constexpr uint32_t kMediaController_ToggleSuspendResume_Name = 779853644;
// The 1226923539 value is based on sha256(salt + "MediaController5").
constexpr uint32_t kMediaController_AddObserver_Name = 1226923539;
// The 1752331889 value is based on sha256(salt + "MediaController6").
constexpr uint32_t kMediaController_PreviousTrack_Name = 1752331889;
// The 174600943 value is based on sha256(salt + "MediaController7").
constexpr uint32_t kMediaController_NextTrack_Name = 174600943;
// The 1971072824 value is based on sha256(salt + "MediaController8").
constexpr uint32_t kMediaController_Seek_Name = 1971072824;
// The 126327056 value is based on sha256(salt + "MediaController9").
constexpr uint32_t kMediaController_ObserveImages_Name = 126327056;
// The 816010943 value is based on sha256(salt + "MediaControllerObserver1").
constexpr uint32_t kMediaControllerObserver_MediaSessionInfoChanged_Name = 816010943;
// The 1430369029 value is based on sha256(salt + "MediaControllerObserver2").
constexpr uint32_t kMediaControllerObserver_MediaSessionMetadataChanged_Name = 1430369029;
// The 1870967252 value is based on sha256(salt + "MediaControllerObserver3").
constexpr uint32_t kMediaControllerObserver_MediaSessionActionsChanged_Name = 1870967252;
// The 646166718 value is based on sha256(salt + "MediaControllerObserver4").
constexpr uint32_t kMediaControllerObserver_MediaSessionChanged_Name = 646166718;
// The 2092678975 value is based on sha256(salt + "MediaControllerImageObserver1").
constexpr uint32_t kMediaControllerImageObserver_MediaControllerImageChanged_Name = 2092678975;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_SHARED_MESSAGE_IDS_H_