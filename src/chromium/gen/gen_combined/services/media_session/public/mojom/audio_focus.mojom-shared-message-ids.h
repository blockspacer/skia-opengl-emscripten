// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


// The 59645986 value is based on sha256(salt + "AudioFocusObserver1").
constexpr uint32_t kAudioFocusObserver_OnFocusGained_Name = 59645986;
// The 454962112 value is based on sha256(salt + "AudioFocusObserver2").
constexpr uint32_t kAudioFocusObserver_OnFocusLost_Name = 454962112;
// The 711538612 value is based on sha256(salt + "AudioFocusRequestClient1").
constexpr uint32_t kAudioFocusRequestClient_RequestAudioFocus_Name = 711538612;
// The 1643980190 value is based on sha256(salt + "AudioFocusRequestClient2").
constexpr uint32_t kAudioFocusRequestClient_AbandonAudioFocus_Name = 1643980190;
// The 365747125 value is based on sha256(salt + "AudioFocusRequestClient3").
constexpr uint32_t kAudioFocusRequestClient_MediaSessionInfoChanged_Name = 365747125;
// The 1332259963 value is based on sha256(salt + "AudioFocusManager1").
constexpr uint32_t kAudioFocusManager_RequestAudioFocus_Name = 1332259963;
// The 421794853 value is based on sha256(salt + "AudioFocusManager2").
constexpr uint32_t kAudioFocusManager_RequestGroupedAudioFocus_Name = 421794853;
// The 1990439310 value is based on sha256(salt + "AudioFocusManager3").
constexpr uint32_t kAudioFocusManager_GetFocusRequests_Name = 1990439310;
// The 1707078630 value is based on sha256(salt + "AudioFocusManager4").
constexpr uint32_t kAudioFocusManager_AddObserver_Name = 1707078630;
// The 793608760 value is based on sha256(salt + "AudioFocusManager5").
constexpr uint32_t kAudioFocusManager_SetSourceName_Name = 793608760;
// The 2031244127 value is based on sha256(salt + "AudioFocusManager6").
constexpr uint32_t kAudioFocusManager_SetEnforcementMode_Name = 2031244127;
// The 1690641714 value is based on sha256(salt + "AudioFocusManagerDebug1").
constexpr uint32_t kAudioFocusManagerDebug_GetDebugInfoForRequest_Name = 1690641714;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_