// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 756481611 value is based on sha256(salt + "AudioDecoder1").
constexpr uint32_t kAudioDecoder_Construct_Name = 756481611;
// The 173663713 value is based on sha256(salt + "AudioDecoder2").
constexpr uint32_t kAudioDecoder_Initialize_Name = 173663713;
// The 183116289 value is based on sha256(salt + "AudioDecoder3").
constexpr uint32_t kAudioDecoder_SetDataSource_Name = 183116289;
// The 1665744156 value is based on sha256(salt + "AudioDecoder4").
constexpr uint32_t kAudioDecoder_Decode_Name = 1665744156;
// The 1857742848 value is based on sha256(salt + "AudioDecoder5").
constexpr uint32_t kAudioDecoder_Reset_Name = 1857742848;
// The 1248883436 value is based on sha256(salt + "AudioDecoderClient1").
constexpr uint32_t kAudioDecoderClient_OnBufferDecoded_Name = 1248883436;
// The 2015171613 value is based on sha256(salt + "AudioDecoderClient2").
constexpr uint32_t kAudioDecoderClient_OnWaiting_Name = 2015171613;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_