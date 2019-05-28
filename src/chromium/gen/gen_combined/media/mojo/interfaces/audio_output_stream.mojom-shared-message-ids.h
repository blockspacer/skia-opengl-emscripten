// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1623004258 value is based on sha256(salt + "AudioOutputStream1").
constexpr uint32_t kAudioOutputStream_Play_Name = 1623004258;
// The 407990691 value is based on sha256(salt + "AudioOutputStream2").
constexpr uint32_t kAudioOutputStream_Pause_Name = 407990691;
// The 758274192 value is based on sha256(salt + "AudioOutputStream3").
constexpr uint32_t kAudioOutputStream_SetVolume_Name = 758274192;
// The 1294369469 value is based on sha256(salt + "AudioOutputStreamObserver1").
constexpr uint32_t kAudioOutputStreamObserver_DidStartPlaying_Name = 1294369469;
// The 956279492 value is based on sha256(salt + "AudioOutputStreamObserver2").
constexpr uint32_t kAudioOutputStreamObserver_DidStopPlaying_Name = 956279492;
// The 1062967364 value is based on sha256(salt + "AudioOutputStreamObserver3").
constexpr uint32_t kAudioOutputStreamObserver_DidChangeAudibleState_Name = 1062967364;
// The 814569246 value is based on sha256(salt + "AudioOutputStreamProvider1").
constexpr uint32_t kAudioOutputStreamProvider_Acquire_Name = 814569246;
// The 2060515767 value is based on sha256(salt + "AudioOutputStreamProviderClient1").
constexpr uint32_t kAudioOutputStreamProviderClient_Created_Name = 2060515767;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_