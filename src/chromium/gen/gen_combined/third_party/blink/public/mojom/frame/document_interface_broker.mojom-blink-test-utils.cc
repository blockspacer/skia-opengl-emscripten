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


#include "third_party/blink/public/mojom/frame/document_interface_broker.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-blink.h"
#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-blink.h"
#include "third_party/blink/public/mojom/webaudio/audio_context_manager.mojom-blink.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-blink.h"
#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void DocumentInterfaceBrokerInterceptorForTesting::GetAudioContextManager(::blink::mojom::blink::AudioContextManagerRequest request) {
  GetForwardingInterface()->GetAudioContextManager(std::move(request));
}
void DocumentInterfaceBrokerInterceptorForTesting::GetAuthenticator(::blink::mojom::blink::AuthenticatorRequest request) {
  GetForwardingInterface()->GetAuthenticator(std::move(request));
}
void DocumentInterfaceBrokerInterceptorForTesting::GetCredentialManager(::blink::mojom::blink::CredentialManagerRequest request) {
  GetForwardingInterface()->GetCredentialManager(std::move(request));
}
void DocumentInterfaceBrokerInterceptorForTesting::GetFrameHostTestInterface(::blink::mojom::blink::FrameHostTestInterfaceRequest request) {
  GetForwardingInterface()->GetFrameHostTestInterface(std::move(request));
}
void DocumentInterfaceBrokerInterceptorForTesting::GetVirtualAuthenticatorManager(::blink::test::mojom::blink::VirtualAuthenticatorManagerRequest request) {
  GetForwardingInterface()->GetVirtualAuthenticatorManager(std::move(request));
}
DocumentInterfaceBrokerAsyncWaiter::DocumentInterfaceBrokerAsyncWaiter(
    DocumentInterfaceBroker* proxy) : proxy_(proxy) {}

DocumentInterfaceBrokerAsyncWaiter::~DocumentInterfaceBrokerAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif