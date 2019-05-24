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


#include "services/device/public/mojom/wake_lock_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/device/public/mojom/wake_lock_context.mojom-blink.h"
#include "services/device/public/mojom/wake_lock.mojom-blink.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void WakeLockProviderInterceptorForTesting::GetWakeLockContextForID(int32_t context_id, ::device::mojom::blink::WakeLockContextRequest context) {
  GetForwardingInterface()->GetWakeLockContextForID(std::move(context_id), std::move(context));
}
void WakeLockProviderInterceptorForTesting::GetWakeLockWithoutContext(::device::mojom::blink::WakeLockType type, ::device::mojom::blink::WakeLockReason reason, const WTF::String& description, ::device::mojom::blink::WakeLockRequest wake_lock) {
  GetForwardingInterface()->GetWakeLockWithoutContext(std::move(type), std::move(reason), std::move(description), std::move(wake_lock));
}
void WakeLockProviderInterceptorForTesting::NotifyOnWakeLockDeactivation(::device::mojom::blink::WakeLockType type, WakeLockObserverPtr observer) {
  GetForwardingInterface()->NotifyOnWakeLockDeactivation(std::move(type), std::move(observer));
}
void WakeLockProviderInterceptorForTesting::GetActiveWakeLocksForTests(::device::mojom::blink::WakeLockType type, GetActiveWakeLocksForTestsCallback callback) {
  GetForwardingInterface()->GetActiveWakeLocksForTests(std::move(type), std::move(callback));
}
WakeLockProviderAsyncWaiter::WakeLockProviderAsyncWaiter(
    WakeLockProvider* proxy) : proxy_(proxy) {}

WakeLockProviderAsyncWaiter::~WakeLockProviderAsyncWaiter() = default;

void WakeLockProviderAsyncWaiter::GetActiveWakeLocksForTests(
    ::device::mojom::blink::WakeLockType type, int32_t* out_count) {
  base::RunLoop loop;
  proxy_->GetActiveWakeLocksForTests(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_count
,
             int32_t count) {*out_count = std::move(count);
            loop->Quit();
          },
          &loop,
          out_count));
  loop.Run();
}



void WakeLockObserverInterceptorForTesting::OnWakeLockDeactivated(::device::mojom::blink::WakeLockType type) {
  GetForwardingInterface()->OnWakeLockDeactivated(std::move(type));
}
WakeLockObserverAsyncWaiter::WakeLockObserverAsyncWaiter(
    WakeLockObserver* proxy) : proxy_(proxy) {}

WakeLockObserverAsyncWaiter::~WakeLockObserverAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif