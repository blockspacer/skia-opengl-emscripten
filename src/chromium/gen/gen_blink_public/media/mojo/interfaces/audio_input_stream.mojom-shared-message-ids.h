// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 130683082 value is based on sha256(salt + "AudioInputStream1").
constexpr uint32_t kAudioInputStream_Record_Name = 130683082;
// The 70528662 value is based on sha256(salt + "AudioInputStream2").
constexpr uint32_t kAudioInputStream_SetVolume_Name = 70528662;
// The 1172703233 value is based on sha256(salt + "AudioInputStreamClient1").
constexpr uint32_t kAudioInputStreamClient_OnError_Name = 1172703233;
// The 125631787 value is based on sha256(salt + "AudioInputStreamClient2").
constexpr uint32_t kAudioInputStreamClient_OnMutedStateChanged_Name = 125631787;
// The 952033131 value is based on sha256(salt + "AudioInputStreamObserver1").
constexpr uint32_t kAudioInputStreamObserver_DidStartRecording_Name = 952033131;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_