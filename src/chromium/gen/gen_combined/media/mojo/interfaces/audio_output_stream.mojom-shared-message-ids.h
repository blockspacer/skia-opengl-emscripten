// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1710688476 value is based on sha256(salt + "AudioOutputStream1").
constexpr uint32_t kAudioOutputStream_Play_Name = 1710688476;
// The 972454780 value is based on sha256(salt + "AudioOutputStream2").
constexpr uint32_t kAudioOutputStream_Pause_Name = 972454780;
// The 1339702935 value is based on sha256(salt + "AudioOutputStream3").
constexpr uint32_t kAudioOutputStream_SetVolume_Name = 1339702935;
// The 923963998 value is based on sha256(salt + "AudioOutputStreamObserver1").
constexpr uint32_t kAudioOutputStreamObserver_DidStartPlaying_Name = 923963998;
// The 102490675 value is based on sha256(salt + "AudioOutputStreamObserver2").
constexpr uint32_t kAudioOutputStreamObserver_DidStopPlaying_Name = 102490675;
// The 1056803824 value is based on sha256(salt + "AudioOutputStreamObserver3").
constexpr uint32_t kAudioOutputStreamObserver_DidChangeAudibleState_Name = 1056803824;
// The 594556110 value is based on sha256(salt + "AudioOutputStreamProvider1").
constexpr uint32_t kAudioOutputStreamProvider_Acquire_Name = 594556110;
// The 1175291572 value is based on sha256(salt + "AudioOutputStreamProviderClient1").
constexpr uint32_t kAudioOutputStreamProviderClient_Created_Name = 1175291572;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_OUTPUT_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_