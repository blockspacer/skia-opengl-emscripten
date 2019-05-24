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


#include "services/service_manager/public/mojom/interface_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace service_manager {
namespace mojom {
namespace blink {


void InterfaceProviderInterceptorForTesting::GetInterface(const WTF::String& interface_name, mojo::ScopedMessagePipeHandle pipe) {
  GetForwardingInterface()->GetInterface(std::move(interface_name), std::move(pipe));
}
InterfaceProviderAsyncWaiter::InterfaceProviderAsyncWaiter(
    InterfaceProvider* proxy) : proxy_(proxy) {}

InterfaceProviderAsyncWaiter::~InterfaceProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif