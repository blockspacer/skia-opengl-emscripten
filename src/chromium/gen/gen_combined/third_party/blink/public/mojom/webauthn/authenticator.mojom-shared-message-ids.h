// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kAuthenticator_MakeCredential_Name = 0;
constexpr uint32_t kAuthenticator_GetAssertion_Name = 1;
constexpr uint32_t kAuthenticator_IsUserVerifyingPlatformAuthenticatorAvailable_Name = 2;
constexpr uint32_t kAuthenticator_Cancel_Name = 3;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_SHARED_MESSAGE_IDS_H_