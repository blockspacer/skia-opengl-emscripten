// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/document_interface_broker.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT DocumentInterfaceBrokerInterceptorForTesting : public DocumentInterfaceBroker {
  virtual DocumentInterfaceBroker* GetForwardingInterface() = 0;
  void GetAudioContextManager(::blink::mojom::AudioContextManagerRequest request) override;
  void GetAuthenticator(::blink::mojom::AuthenticatorRequest request) override;
  void GetCredentialManager(::blink::mojom::CredentialManagerRequest request) override;
  void GetFrameHostTestInterface(::blink::mojom::FrameHostTestInterfaceRequest request) override;
  void GetVirtualAuthenticatorManager(::blink::test::mojom::VirtualAuthenticatorManagerRequest request) override;
};
class BLINK_COMMON_EXPORT DocumentInterfaceBrokerAsyncWaiter {
 public:
  explicit DocumentInterfaceBrokerAsyncWaiter(DocumentInterfaceBroker* proxy);
  ~DocumentInterfaceBrokerAsyncWaiter();

 private:
  DocumentInterfaceBroker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DocumentInterfaceBrokerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_TEST_UTILS_H_