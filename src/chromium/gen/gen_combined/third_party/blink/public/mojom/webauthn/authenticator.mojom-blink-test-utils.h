// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT AuthenticatorInterceptorForTesting : public Authenticator {
  virtual Authenticator* GetForwardingInterface() = 0;
  void MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) override;
  void GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) override;
  void IsUserVerifyingPlatformAuthenticatorAvailable(IsUserVerifyingPlatformAuthenticatorAvailableCallback callback) override;
  void Cancel() override;
};
class PLATFORM_EXPORT AuthenticatorAsyncWaiter {
 public:
  explicit AuthenticatorAsyncWaiter(Authenticator* proxy);
  ~AuthenticatorAsyncWaiter();
  void MakeCredential(
      PublicKeyCredentialCreationOptionsPtr options, AuthenticatorStatus* out_status, MakeCredentialAuthenticatorResponsePtr* out_credential);
  void GetAssertion(
      PublicKeyCredentialRequestOptionsPtr options, AuthenticatorStatus* out_status, GetAssertionAuthenticatorResponsePtr* out_credential);
  void IsUserVerifyingPlatformAuthenticatorAvailable(
      bool* out_available);

 private:
  Authenticator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthenticatorAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_TEST_UTILS_H_