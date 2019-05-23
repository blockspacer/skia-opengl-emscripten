// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void AuthenticatorInterceptorForTesting::MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) {
  GetForwardingInterface()->MakeCredential(std::move(options), std::move(callback));
}
void AuthenticatorInterceptorForTesting::GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) {
  GetForwardingInterface()->GetAssertion(std::move(options), std::move(callback));
}
void AuthenticatorInterceptorForTesting::IsUserVerifyingPlatformAuthenticatorAvailable(IsUserVerifyingPlatformAuthenticatorAvailableCallback callback) {
  GetForwardingInterface()->IsUserVerifyingPlatformAuthenticatorAvailable(std::move(callback));
}
void AuthenticatorInterceptorForTesting::Cancel() {
  GetForwardingInterface()->Cancel();
}
AuthenticatorAsyncWaiter::AuthenticatorAsyncWaiter(
    Authenticator* proxy) : proxy_(proxy) {}

AuthenticatorAsyncWaiter::~AuthenticatorAsyncWaiter() = default;

void AuthenticatorAsyncWaiter::MakeCredential(
    PublicKeyCredentialCreationOptionsPtr options, AuthenticatorStatus* out_status, MakeCredentialAuthenticatorResponsePtr* out_credential) {
  base::RunLoop loop;
  proxy_->MakeCredential(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             AuthenticatorStatus* out_status
,
             MakeCredentialAuthenticatorResponsePtr* out_credential
,
             AuthenticatorStatus status,
             MakeCredentialAuthenticatorResponsePtr credential) {*out_status = std::move(status);*out_credential = std::move(credential);
            loop->Quit();
          },
          &loop,
          out_status,
          out_credential));
  loop.Run();
}
void AuthenticatorAsyncWaiter::GetAssertion(
    PublicKeyCredentialRequestOptionsPtr options, AuthenticatorStatus* out_status, GetAssertionAuthenticatorResponsePtr* out_credential) {
  base::RunLoop loop;
  proxy_->GetAssertion(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             AuthenticatorStatus* out_status
,
             GetAssertionAuthenticatorResponsePtr* out_credential
,
             AuthenticatorStatus status,
             GetAssertionAuthenticatorResponsePtr credential) {*out_status = std::move(status);*out_credential = std::move(credential);
            loop->Quit();
          },
          &loop,
          out_status,
          out_credential));
  loop.Run();
}
void AuthenticatorAsyncWaiter::IsUserVerifyingPlatformAuthenticatorAvailable(
    bool* out_available) {
  base::RunLoop loop;
  proxy_->IsUserVerifyingPlatformAuthenticatorAvailable(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_available
,
             bool available) {*out_available = std::move(available);
            loop->Quit();
          },
          &loop,
          out_available));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif