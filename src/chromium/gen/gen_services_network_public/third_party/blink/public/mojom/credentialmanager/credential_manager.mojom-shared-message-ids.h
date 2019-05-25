// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 301481461 value is based on sha256(salt + "CredentialManager1").
constexpr uint32_t kCredentialManager_Store_Name = 301481461;
// The 765137658 value is based on sha256(salt + "CredentialManager2").
constexpr uint32_t kCredentialManager_PreventSilentAccess_Name = 765137658;
// The 1043983982 value is based on sha256(salt + "CredentialManager3").
constexpr uint32_t kCredentialManager_Get_Name = 1043983982;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_