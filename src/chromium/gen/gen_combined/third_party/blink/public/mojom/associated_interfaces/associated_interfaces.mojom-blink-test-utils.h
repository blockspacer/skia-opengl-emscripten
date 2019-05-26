// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT AssociatedInterfaceInterceptorForTesting : public AssociatedInterface {
  virtual AssociatedInterface* GetForwardingInterface() = 0;
};
class PLATFORM_EXPORT AssociatedInterfaceAsyncWaiter {
 public:
  explicit AssociatedInterfaceAsyncWaiter(AssociatedInterface* proxy);
  ~AssociatedInterfaceAsyncWaiter();

 private:
  AssociatedInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AssociatedInterfaceAsyncWaiter);
};


class PLATFORM_EXPORT AssociatedInterfaceProviderInterceptorForTesting : public AssociatedInterfaceProvider {
  virtual AssociatedInterfaceProvider* GetForwardingInterface() = 0;
  void GetAssociatedInterface(const WTF::String& name, AssociatedInterfaceAssociatedRequest request) override;
};
class PLATFORM_EXPORT AssociatedInterfaceProviderAsyncWaiter {
 public:
  explicit AssociatedInterfaceProviderAsyncWaiter(AssociatedInterfaceProvider* proxy);
  ~AssociatedInterfaceProviderAsyncWaiter();

 private:
  AssociatedInterfaceProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AssociatedInterfaceProviderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_TEST_UTILS_H_