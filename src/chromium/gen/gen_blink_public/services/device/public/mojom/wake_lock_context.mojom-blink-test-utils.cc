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


#include "services/device/public/mojom/wake_lock_context.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/device/public/mojom/wake_lock.mojom-blink.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void WakeLockContextInterceptorForTesting::GetWakeLock(::device::mojom::blink::WakeLockType type, ::device::mojom::blink::WakeLockReason reason, const WTF::String& description, ::device::mojom::blink::WakeLockRequest wake_lock) {
  GetForwardingInterface()->GetWakeLock(std::move(type), std::move(reason), std::move(description), std::move(wake_lock));
}
WakeLockContextAsyncWaiter::WakeLockContextAsyncWaiter(
    WakeLockContext* proxy) : proxy_(proxy) {}

WakeLockContextAsyncWaiter::~WakeLockContextAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif