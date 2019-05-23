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


#include "services/device/public/mojom/wake_lock.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void WakeLockInterceptorForTesting::RequestWakeLock() {
  GetForwardingInterface()->RequestWakeLock();
}
void WakeLockInterceptorForTesting::CancelWakeLock() {
  GetForwardingInterface()->CancelWakeLock();
}
void WakeLockInterceptorForTesting::AddClient(WakeLockRequest wake_lock) {
  GetForwardingInterface()->AddClient(std::move(wake_lock));
}
void WakeLockInterceptorForTesting::ChangeType(WakeLockType type, ChangeTypeCallback callback) {
  GetForwardingInterface()->ChangeType(std::move(type), std::move(callback));
}
void WakeLockInterceptorForTesting::HasWakeLockForTests(HasWakeLockForTestsCallback callback) {
  GetForwardingInterface()->HasWakeLockForTests(std::move(callback));
}
WakeLockAsyncWaiter::WakeLockAsyncWaiter(
    WakeLock* proxy) : proxy_(proxy) {}

WakeLockAsyncWaiter::~WakeLockAsyncWaiter() = default;

void WakeLockAsyncWaiter::ChangeType(
    WakeLockType type, bool* out_result) {
  base::RunLoop loop;
  proxy_->ChangeType(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WakeLockAsyncWaiter::HasWakeLockForTests(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->HasWakeLockForTests(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif