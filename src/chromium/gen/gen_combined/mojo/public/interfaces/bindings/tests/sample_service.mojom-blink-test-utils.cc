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


#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-blink.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-blink.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_BLINK_JUMBO_H_
#endif


namespace sample {
namespace blink {


void ServiceInterceptorForTesting::Frobinate(FooPtr foo, Service::BazOptions baz, mojo::PendingRemote<Port> port, FrobinateCallback callback) {
  GetForwardingInterface()->Frobinate(std::move(foo), std::move(baz), std::move(port), std::move(callback));
}
void ServiceInterceptorForTesting::GetPort(mojo::PendingReceiver<Port> receiver) {
  GetForwardingInterface()->GetPort(std::move(receiver));
}
ServiceAsyncWaiter::ServiceAsyncWaiter(
    Service* proxy) : proxy_(proxy) {}

ServiceAsyncWaiter::~ServiceAsyncWaiter() = default;

void ServiceAsyncWaiter::Frobinate(
    FooPtr foo, Service::BazOptions baz, mojo::PendingRemote<Port> port, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->Frobinate(std::move(foo),std::move(baz),std::move(port),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void PortInterceptorForTesting::PostMessageToPort(const WTF::String& message_text, mojo::PendingRemote<Port> port) {
  GetForwardingInterface()->PostMessageToPort(std::move(message_text), std::move(port));
}
PortAsyncWaiter::PortAsyncWaiter(
    Port* proxy) : proxy_(proxy) {}

PortAsyncWaiter::~PortAsyncWaiter() = default;






}  // namespace blink
}  // namespace sample

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif