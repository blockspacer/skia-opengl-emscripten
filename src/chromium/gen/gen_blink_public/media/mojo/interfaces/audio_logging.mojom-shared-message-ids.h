// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 917582730 value is based on sha256(salt + "AudioLog1").
constexpr uint32_t kAudioLog_OnCreated_Name = 917582730;
// The 1761181106 value is based on sha256(salt + "AudioLog2").
constexpr uint32_t kAudioLog_OnStarted_Name = 1761181106;
// The 1136339000 value is based on sha256(salt + "AudioLog3").
constexpr uint32_t kAudioLog_OnStopped_Name = 1136339000;
// The 1731454400 value is based on sha256(salt + "AudioLog4").
constexpr uint32_t kAudioLog_OnClosed_Name = 1731454400;
// The 1543870819 value is based on sha256(salt + "AudioLog5").
constexpr uint32_t kAudioLog_OnError_Name = 1543870819;
// The 764246355 value is based on sha256(salt + "AudioLog6").
constexpr uint32_t kAudioLog_OnSetVolume_Name = 764246355;
// The 1489902264 value is based on sha256(salt + "AudioLog7").
constexpr uint32_t kAudioLog_OnProcessingStateChanged_Name = 1489902264;
// The 2145438126 value is based on sha256(salt + "AudioLog8").
constexpr uint32_t kAudioLog_OnLogMessage_Name = 2145438126;
// The 1092396306 value is based on sha256(salt + "AudioLogFactory1").
constexpr uint32_t kAudioLogFactory_CreateAudioLog_Name = 1092396306;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_SHARED_MESSAGE_IDS_H_