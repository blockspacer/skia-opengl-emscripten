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


#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


AssociatedInterfaceAsyncWaiter::AssociatedInterfaceAsyncWaiter(
    AssociatedInterface* proxy) : proxy_(proxy) {}

AssociatedInterfaceAsyncWaiter::~AssociatedInterfaceAsyncWaiter() = default;




void AssociatedInterfaceProviderInterceptorForTesting::GetAssociatedInterface(const WTF::String& name, AssociatedInterfaceAssociatedRequest request) {
  GetForwardingInterface()->GetAssociatedInterface(std::move(name), std::move(request));
}
AssociatedInterfaceProviderAsyncWaiter::AssociatedInterfaceProviderAsyncWaiter(
    AssociatedInterfaceProvider* proxy) : proxy_(proxy) {}

AssociatedInterfaceProviderAsyncWaiter::~AssociatedInterfaceProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif