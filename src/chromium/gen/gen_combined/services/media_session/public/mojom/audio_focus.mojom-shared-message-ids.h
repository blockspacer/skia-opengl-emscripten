// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


// The 1380840552 value is based on sha256(salt + "AudioFocusObserver1").
constexpr uint32_t kAudioFocusObserver_OnFocusGained_Name = 1380840552;
// The 1248349972 value is based on sha256(salt + "AudioFocusObserver2").
constexpr uint32_t kAudioFocusObserver_OnFocusLost_Name = 1248349972;
// The 729162404 value is based on sha256(salt + "AudioFocusRequestClient1").
constexpr uint32_t kAudioFocusRequestClient_RequestAudioFocus_Name = 729162404;
// The 1539733847 value is based on sha256(salt + "AudioFocusRequestClient2").
constexpr uint32_t kAudioFocusRequestClient_AbandonAudioFocus_Name = 1539733847;
// The 1437210070 value is based on sha256(salt + "AudioFocusRequestClient3").
constexpr uint32_t kAudioFocusRequestClient_MediaSessionInfoChanged_Name = 1437210070;
// The 217260312 value is based on sha256(salt + "AudioFocusManager1").
constexpr uint32_t kAudioFocusManager_RequestAudioFocus_Name = 217260312;
// The 1278541351 value is based on sha256(salt + "AudioFocusManager2").
constexpr uint32_t kAudioFocusManager_RequestGroupedAudioFocus_Name = 1278541351;
// The 77761825 value is based on sha256(salt + "AudioFocusManager3").
constexpr uint32_t kAudioFocusManager_GetFocusRequests_Name = 77761825;
// The 1071070726 value is based on sha256(salt + "AudioFocusManager4").
constexpr uint32_t kAudioFocusManager_AddObserver_Name = 1071070726;
// The 1600427178 value is based on sha256(salt + "AudioFocusManager5").
constexpr uint32_t kAudioFocusManager_SetSourceName_Name = 1600427178;
// The 1364185881 value is based on sha256(salt + "AudioFocusManager6").
constexpr uint32_t kAudioFocusManager_SetEnforcementMode_Name = 1364185881;
// The 13400792 value is based on sha256(salt + "AudioFocusManagerDebug1").
constexpr uint32_t kAudioFocusManagerDebug_GetDebugInfoForRequest_Name = 13400792;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_