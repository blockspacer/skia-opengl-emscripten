// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1414730912 value is based on sha256(salt + "Decryptor1").
constexpr uint32_t kDecryptor_Initialize_Name = 1414730912;
// The 1742136056 value is based on sha256(salt + "Decryptor2").
constexpr uint32_t kDecryptor_Decrypt_Name = 1742136056;
// The 324534671 value is based on sha256(salt + "Decryptor3").
constexpr uint32_t kDecryptor_CancelDecrypt_Name = 324534671;
// The 487461353 value is based on sha256(salt + "Decryptor4").
constexpr uint32_t kDecryptor_InitializeAudioDecoder_Name = 487461353;
// The 1590869234 value is based on sha256(salt + "Decryptor5").
constexpr uint32_t kDecryptor_InitializeVideoDecoder_Name = 1590869234;
// The 1727920603 value is based on sha256(salt + "Decryptor6").
constexpr uint32_t kDecryptor_DecryptAndDecodeAudio_Name = 1727920603;
// The 346780044 value is based on sha256(salt + "Decryptor7").
constexpr uint32_t kDecryptor_DecryptAndDecodeVideo_Name = 346780044;
// The 1762561090 value is based on sha256(salt + "Decryptor8").
constexpr uint32_t kDecryptor_ResetDecoder_Name = 1762561090;
// The 2042876326 value is based on sha256(salt + "Decryptor9").
constexpr uint32_t kDecryptor_DeinitializeDecoder_Name = 2042876326;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_MESSAGE_IDS_H_