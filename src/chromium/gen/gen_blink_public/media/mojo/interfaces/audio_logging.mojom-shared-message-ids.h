// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1843112546 value is based on sha256(salt + "AudioLog1").
constexpr uint32_t kAudioLog_OnCreated_Name = 1843112546;
// The 152652227 value is based on sha256(salt + "AudioLog2").
constexpr uint32_t kAudioLog_OnStarted_Name = 152652227;
// The 331032924 value is based on sha256(salt + "AudioLog3").
constexpr uint32_t kAudioLog_OnStopped_Name = 331032924;
// The 964564866 value is based on sha256(salt + "AudioLog4").
constexpr uint32_t kAudioLog_OnClosed_Name = 964564866;
// The 1669985403 value is based on sha256(salt + "AudioLog5").
constexpr uint32_t kAudioLog_OnError_Name = 1669985403;
// The 1166125998 value is based on sha256(salt + "AudioLog6").
constexpr uint32_t kAudioLog_OnSetVolume_Name = 1166125998;
// The 534963981 value is based on sha256(salt + "AudioLog7").
constexpr uint32_t kAudioLog_OnProcessingStateChanged_Name = 534963981;
// The 961139909 value is based on sha256(salt + "AudioLog8").
constexpr uint32_t kAudioLog_OnLogMessage_Name = 961139909;
// The 217005554 value is based on sha256(salt + "AudioLogFactory1").
constexpr uint32_t kAudioLogFactory_CreateAudioLog_Name = 217005554;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_