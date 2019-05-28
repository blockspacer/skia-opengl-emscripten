// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1563729551 value is based on sha256(salt + "Decryptor1").
constexpr uint32_t kDecryptor_Initialize_Name = 1563729551;
// The 1253743538 value is based on sha256(salt + "Decryptor2").
constexpr uint32_t kDecryptor_Decrypt_Name = 1253743538;
// The 1172447203 value is based on sha256(salt + "Decryptor3").
constexpr uint32_t kDecryptor_CancelDecrypt_Name = 1172447203;
// The 328891278 value is based on sha256(salt + "Decryptor4").
constexpr uint32_t kDecryptor_InitializeAudioDecoder_Name = 328891278;
// The 1223085643 value is based on sha256(salt + "Decryptor5").
constexpr uint32_t kDecryptor_InitializeVideoDecoder_Name = 1223085643;
// The 590129204 value is based on sha256(salt + "Decryptor6").
constexpr uint32_t kDecryptor_DecryptAndDecodeAudio_Name = 590129204;
// The 2132145640 value is based on sha256(salt + "Decryptor7").
constexpr uint32_t kDecryptor_DecryptAndDecodeVideo_Name = 2132145640;
// The 1535179853 value is based on sha256(salt + "Decryptor8").
constexpr uint32_t kDecryptor_ResetDecoder_Name = 1535179853;
// The 1313151356 value is based on sha256(salt + "Decryptor9").
constexpr uint32_t kDecryptor_DeinitializeDecoder_Name = 1313151356;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_