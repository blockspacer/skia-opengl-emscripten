// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1982444728 value is based on sha256(salt + "ContentDecryptionModule1").
constexpr uint32_t kContentDecryptionModule_SetClient_Name = 1982444728;
// The 1419508078 value is based on sha256(salt + "ContentDecryptionModule2").
constexpr uint32_t kContentDecryptionModule_Initialize_Name = 1419508078;
// The 1073237613 value is based on sha256(salt + "ContentDecryptionModule3").
constexpr uint32_t kContentDecryptionModule_SetServerCertificate_Name = 1073237613;
// The 103688917 value is based on sha256(salt + "ContentDecryptionModule4").
constexpr uint32_t kContentDecryptionModule_GetStatusForPolicy_Name = 103688917;
// The 62284406 value is based on sha256(salt + "ContentDecryptionModule5").
constexpr uint32_t kContentDecryptionModule_CreateSessionAndGenerateRequest_Name = 62284406;
// The 371678721 value is based on sha256(salt + "ContentDecryptionModule6").
constexpr uint32_t kContentDecryptionModule_LoadSession_Name = 371678721;
// The 1238204776 value is based on sha256(salt + "ContentDecryptionModule7").
constexpr uint32_t kContentDecryptionModule_UpdateSession_Name = 1238204776;
// The 1315054371 value is based on sha256(salt + "ContentDecryptionModule8").
constexpr uint32_t kContentDecryptionModule_CloseSession_Name = 1315054371;
// The 1841187860 value is based on sha256(salt + "ContentDecryptionModule9").
constexpr uint32_t kContentDecryptionModule_RemoveSession_Name = 1841187860;
// The 981605603 value is based on sha256(salt + "ContentDecryptionModuleClient1").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionMessage_Name = 981605603;
// The 230183056 value is based on sha256(salt + "ContentDecryptionModuleClient2").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionClosed_Name = 230183056;
// The 670342299 value is based on sha256(salt + "ContentDecryptionModuleClient3").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionKeysChange_Name = 670342299;
// The 711918637 value is based on sha256(salt + "ContentDecryptionModuleClient4").
constexpr uint32_t kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name = 711918637;
// The 1804579774 value is based on sha256(salt + "CdmFactory1").
constexpr uint32_t kCdmFactory_CreateCdm_Name = 1804579774;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_MESSAGE_IDS_H_