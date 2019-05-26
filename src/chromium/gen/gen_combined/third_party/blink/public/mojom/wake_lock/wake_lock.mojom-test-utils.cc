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


#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/device/public/mojom/wake_lock.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void WakeLockServiceInterceptorForTesting::GetWakeLock(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) {
  GetForwardingInterface()->GetWakeLock(std::move(type), std::move(reason), std::move(description), std::move(wake_lock));
}
WakeLockServiceAsyncWaiter::WakeLockServiceAsyncWaiter(
    WakeLockService* proxy) : proxy_(proxy) {}

WakeLockServiceAsyncWaiter::~WakeLockServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif