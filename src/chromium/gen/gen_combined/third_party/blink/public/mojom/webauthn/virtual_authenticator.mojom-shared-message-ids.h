// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace test {
namespace mojom {

namespace internal {


constexpr uint32_t kVirtualAuthenticator_GetUniqueId_Name = 0;
constexpr uint32_t kVirtualAuthenticator_AddRegistration_Name = 1;
constexpr uint32_t kVirtualAuthenticator_GetRegistrations_Name = 2;
constexpr uint32_t kVirtualAuthenticator_ClearRegistrations_Name = 3;
constexpr uint32_t kVirtualAuthenticator_SetUserPresence_Name = 4;
constexpr uint32_t kVirtualAuthenticator_GetUserPresence_Name = 5;
constexpr uint32_t kVirtualAuthenticatorManager_CreateAuthenticator_Name = 0;
constexpr uint32_t kVirtualAuthenticatorManager_GetAuthenticators_Name = 1;
constexpr uint32_t kVirtualAuthenticatorManager_RemoveAuthenticator_Name = 2;
constexpr uint32_t kVirtualAuthenticatorManager_ClearAuthenticators_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_