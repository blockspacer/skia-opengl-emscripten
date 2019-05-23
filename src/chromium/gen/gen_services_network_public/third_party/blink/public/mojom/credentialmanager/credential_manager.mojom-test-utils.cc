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


#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_JUMBO_H_
#include "components/password_manager/content/common/credential_manager_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void CredentialManagerInterceptorForTesting::Store(const password_manager::CredentialInfo& credential, StoreCallback callback) {
  GetForwardingInterface()->Store(std::move(credential), std::move(callback));
}
void CredentialManagerInterceptorForTesting::PreventSilentAccess(PreventSilentAccessCallback callback) {
  GetForwardingInterface()->PreventSilentAccess(std::move(callback));
}
void CredentialManagerInterceptorForTesting::Get(password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, GetCallback callback) {
  GetForwardingInterface()->Get(std::move(mediation), std::move(include_passwords), std::move(federations), std::move(callback));
}
CredentialManagerAsyncWaiter::CredentialManagerAsyncWaiter(
    CredentialManager* proxy) : proxy_(proxy) {}

CredentialManagerAsyncWaiter::~CredentialManagerAsyncWaiter() = default;

void CredentialManagerAsyncWaiter::Store(
    const password_manager::CredentialInfo& credential) {
  base::RunLoop loop;
  proxy_->Store(std::move(credential),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CredentialManagerAsyncWaiter::PreventSilentAccess(
    ) {
  base::RunLoop loop;
  proxy_->PreventSilentAccess(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void CredentialManagerAsyncWaiter::Get(
    password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, password_manager::CredentialManagerError* out_error, base::Optional<password_manager::CredentialInfo>* out_credential) {
  base::RunLoop loop;
  proxy_->Get(std::move(mediation),std::move(include_passwords),std::move(federations),
      base::BindOnce(
          [](base::RunLoop* loop,
             password_manager::CredentialManagerError* out_error
,
             base::Optional<password_manager::CredentialInfo>* out_credential
,
             password_manager::CredentialManagerError error,
             const base::Optional<password_manager::CredentialInfo>& credential) {*out_error = std::move(error);*out_credential = std::move(credential);
            loop->Quit();
          },
          &loop,
          out_error,
          out_credential));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif