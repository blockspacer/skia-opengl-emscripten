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


#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "url/mojom/url.mojom-blink.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace test {
namespace mojom {
namespace blink {


void VirtualAuthenticatorInterceptorForTesting::GetUniqueId(GetUniqueIdCallback callback) {
  GetForwardingInterface()->GetUniqueId(std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::AddRegistration(RegisteredKeyPtr key, AddRegistrationCallback callback) {
  GetForwardingInterface()->AddRegistration(std::move(key), std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::GetRegistrations(GetRegistrationsCallback callback) {
  GetForwardingInterface()->GetRegistrations(std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::ClearRegistrations(ClearRegistrationsCallback callback) {
  GetForwardingInterface()->ClearRegistrations(std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::SetUserPresence(bool present, SetUserPresenceCallback callback) {
  GetForwardingInterface()->SetUserPresence(std::move(present), std::move(callback));
}
void VirtualAuthenticatorInterceptorForTesting::GetUserPresence(GetUserPresenceCallback callback) {
  GetForwardingInterface()->GetUserPresence(std::move(callback));
}
VirtualAuthenticatorAsyncWaiter::VirtualAuthenticatorAsyncWaiter(
    VirtualAuthenticator* proxy) : proxy_(proxy) {}

VirtualAuthenticatorAsyncWaiter::~VirtualAuthenticatorAsyncWaiter() = default;

void VirtualAuthenticatorAsyncWaiter::GetUniqueId(
    WTF::String* out_id) {
  base::RunLoop loop;
  proxy_->GetUniqueId(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_id
,
             const WTF::String& id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::AddRegistration(
    RegisteredKeyPtr key, bool* out_added) {
  base::RunLoop loop;
  proxy_->AddRegistration(std::move(key),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_added
,
             bool added) {*out_added = std::move(added);
            loop->Quit();
          },
          &loop,
          out_added));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::GetRegistrations(
    WTF::Vector<RegisteredKeyPtr>* out_keys) {
  base::RunLoop loop;
  proxy_->GetRegistrations(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<RegisteredKeyPtr>* out_keys
,
             WTF::Vector<RegisteredKeyPtr> keys) {*out_keys = std::move(keys);
            loop->Quit();
          },
          &loop,
          out_keys));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::ClearRegistrations(
    ) {
  base::RunLoop loop;
  proxy_->ClearRegistrations(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::SetUserPresence(
    bool present) {
  base::RunLoop loop;
  proxy_->SetUserPresence(std::move(present),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VirtualAuthenticatorAsyncWaiter::GetUserPresence(
    bool* out_present) {
  base::RunLoop loop;
  proxy_->GetUserPresence(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_present
,
             bool present) {*out_present = std::move(present);
            loop->Quit();
          },
          &loop,
          out_present));
  loop.Run();
}



void VirtualAuthenticatorManagerInterceptorForTesting::CreateAuthenticator(VirtualAuthenticatorOptionsPtr options, CreateAuthenticatorCallback callback) {
  GetForwardingInterface()->CreateAuthenticator(std::move(options), std::move(callback));
}
void VirtualAuthenticatorManagerInterceptorForTesting::GetAuthenticators(GetAuthenticatorsCallback callback) {
  GetForwardingInterface()->GetAuthenticators(std::move(callback));
}
void VirtualAuthenticatorManagerInterceptorForTesting::RemoveAuthenticator(const WTF::String& id, RemoveAuthenticatorCallback callback) {
  GetForwardingInterface()->RemoveAuthenticator(std::move(id), std::move(callback));
}
void VirtualAuthenticatorManagerInterceptorForTesting::ClearAuthenticators(ClearAuthenticatorsCallback callback) {
  GetForwardingInterface()->ClearAuthenticators(std::move(callback));
}
VirtualAuthenticatorManagerAsyncWaiter::VirtualAuthenticatorManagerAsyncWaiter(
    VirtualAuthenticatorManager* proxy) : proxy_(proxy) {}

VirtualAuthenticatorManagerAsyncWaiter::~VirtualAuthenticatorManagerAsyncWaiter() = default;

void VirtualAuthenticatorManagerAsyncWaiter::CreateAuthenticator(
    VirtualAuthenticatorOptionsPtr options, VirtualAuthenticatorPtr* out_authenticator) {
  base::RunLoop loop;
  proxy_->CreateAuthenticator(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             VirtualAuthenticatorPtr* out_authenticator
,
             VirtualAuthenticatorPtr authenticator) {*out_authenticator = std::move(authenticator);
            loop->Quit();
          },
          &loop,
          out_authenticator));
  loop.Run();
}
void VirtualAuthenticatorManagerAsyncWaiter::GetAuthenticators(
    WTF::Vector<VirtualAuthenticatorPtrInfo>* out_authenticators) {
  base::RunLoop loop;
  proxy_->GetAuthenticators(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<VirtualAuthenticatorPtrInfo>* out_authenticators
,
             WTF::Vector<VirtualAuthenticatorPtrInfo> authenticators) {*out_authenticators = std::move(authenticators);
            loop->Quit();
          },
          &loop,
          out_authenticators));
  loop.Run();
}
void VirtualAuthenticatorManagerAsyncWaiter::RemoveAuthenticator(
    const WTF::String& id, bool* out_removed) {
  base::RunLoop loop;
  proxy_->RemoveAuthenticator(std::move(id),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_removed
,
             bool removed) {*out_removed = std::move(removed);
            loop->Quit();
          },
          &loop,
          out_removed));
  loop.Run();
}
void VirtualAuthenticatorManagerAsyncWaiter::ClearAuthenticators(
    ) {
  base::RunLoop loop;
  proxy_->ClearAuthenticators(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace test
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif