// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 626215185 value is based on sha256(salt + "AudioDecoder1").
constexpr uint32_t kAudioDecoder_Construct_Name = 626215185;
// The 892144328 value is based on sha256(salt + "AudioDecoder2").
constexpr uint32_t kAudioDecoder_Initialize_Name = 892144328;
// The 1802252149 value is based on sha256(salt + "AudioDecoder3").
constexpr uint32_t kAudioDecoder_SetDataSource_Name = 1802252149;
// The 1956789950 value is based on sha256(salt + "AudioDecoder4").
constexpr uint32_t kAudioDecoder_Decode_Name = 1956789950;
// The 1451656414 value is based on sha256(salt + "AudioDecoder5").
constexpr uint32_t kAudioDecoder_Reset_Name = 1451656414;
// The 49506368 value is based on sha256(salt + "AudioDecoderClient1").
constexpr uint32_t kAudioDecoderClient_OnBufferDecoded_Name = 49506368;
// The 328320047 value is based on sha256(salt + "AudioDecoderClient2").
constexpr uint32_t kAudioDecoderClient_OnWaiting_Name = 328320047;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_SHARED_MESSAGE_IDS_H_