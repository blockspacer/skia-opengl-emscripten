// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 587194665 value is based on sha256(salt + "DocumentInterfaceBroker1").
constexpr uint32_t kDocumentInterfaceBroker_GetAudioContextManager_Name = 587194665;
// The 224565177 value is based on sha256(salt + "DocumentInterfaceBroker2").
constexpr uint32_t kDocumentInterfaceBroker_GetAuthenticator_Name = 224565177;
// The 1505258258 value is based on sha256(salt + "DocumentInterfaceBroker3").
constexpr uint32_t kDocumentInterfaceBroker_GetCredentialManager_Name = 1505258258;
// The 290135782 value is based on sha256(salt + "DocumentInterfaceBroker4").
constexpr uint32_t kDocumentInterfaceBroker_GetFrameHostTestInterface_Name = 290135782;
// The 175637116 value is based on sha256(salt + "DocumentInterfaceBroker5").
constexpr uint32_t kDocumentInterfaceBroker_GetVirtualAuthenticatorManager_Name = 175637116;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_SHARED_MESSAGE_IDS_H_