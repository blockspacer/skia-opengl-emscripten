// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1606399912 value is based on sha256(salt + "DocumentInterfaceBroker1").
constexpr uint32_t kDocumentInterfaceBroker_GetAudioContextManager_Name = 1606399912;
// The 872141364 value is based on sha256(salt + "DocumentInterfaceBroker2").
constexpr uint32_t kDocumentInterfaceBroker_GetAuthenticator_Name = 872141364;
// The 1572826154 value is based on sha256(salt + "DocumentInterfaceBroker3").
constexpr uint32_t kDocumentInterfaceBroker_GetCredentialManager_Name = 1572826154;
// The 1156449279 value is based on sha256(salt + "DocumentInterfaceBroker4").
constexpr uint32_t kDocumentInterfaceBroker_GetFrameHostTestInterface_Name = 1156449279;
// The 1923070218 value is based on sha256(salt + "DocumentInterfaceBroker5").
constexpr uint32_t kDocumentInterfaceBroker_GetVirtualAuthenticatorManager_Name = 1923070218;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_SHARED_MESSAGE_IDS_H_