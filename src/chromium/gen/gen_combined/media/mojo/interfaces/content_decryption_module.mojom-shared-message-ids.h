// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1290325294 value is based on sha256(salt + "ContentDecryptionModule1").
constexpr uint32_t kContentDecryptionModule_SetClient_Name = 1290325294;
// The 1314019189 value is based on sha256(salt + "ContentDecryptionModule2").
constexpr uint32_t kContentDecryptionModule_Initialize_Name = 1314019189;
// The 1707950693 value is based on sha256(salt + "ContentDecryptionModule3").
constexpr uint32_t kContentDecryptionModule_SetServerCertificate_Name = 1707950693;
// The 1867674096 value is based on sha256(salt + "ContentDecryptionModule4").
constexpr uint32_t kContentDecryptionModule_GetStatusForPolicy_Name = 1867674096;
// The 66080162 value is based on sha256(salt + "ContentDecryptionModule5").
constexpr uint32_t kContentDecryptionModule_CreateSessionAndGenerateRequest_Name = 66080162;
// The 578513648 value is based on sha256(salt + "ContentDecryptionModule6").
constexpr uint32_t kContentDecryptionModule_LoadSession_Name = 578513648;
// The 484250867 value is based on sha256(salt + "ContentDecryptionModule7").
constexpr uint32_t kContentDecryptionModule_UpdateSession_Name = 484250867;
// The 1553682155 value is based on sha256(salt + "ContentDecryptionModule8").
constexpr uint32_t kContentDecryptionModule_CloseSession_Name = 1553682155;
// The 1813764275 value is based on sha256(salt + "ContentDecryptionModule9").
constexpr uint32_t kContentDecryptionModule_RemoveSession_Name = 1813764275;
// The 145432741 value is based on sha256(salt + "ContentDecryptionModuleClient1").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionMessage_Name = 145432741;
// The 1749752068 value is based on sha256(salt + "ContentDecryptionModuleClient2").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionClosed_Name = 1749752068;
// The 960409414 value is based on sha256(salt + "ContentDecryptionModuleClient3").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionKeysChange_Name = 960409414;
// The 432592107 value is based on sha256(salt + "ContentDecryptionModuleClient4").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name = 432592107;
// The 1939850644 value is based on sha256(salt + "CdmFactory1").
constexpr uint32_t kCdmFactory_CreateCdm_Name = 1939850644;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_