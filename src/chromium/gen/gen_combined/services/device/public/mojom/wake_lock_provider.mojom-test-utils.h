// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/wake_lock_provider.mojom.h"


namespace device {
namespace mojom {


class  WakeLockProviderInterceptorForTesting : public WakeLockProvider {
  virtual WakeLockProvider* GetForwardingInterface() = 0;
  void GetWakeLockContextForID(int32_t context_id, ::device::mojom::WakeLockContextRequest context) override;
  void GetWakeLockWithoutContext(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) override;
  void NotifyOnWakeLockDeactivation(::device::mojom::WakeLockType type, WakeLockObserverPtr observer) override;
  void GetActiveWakeLocksForTests(::device::mojom::WakeLockType type, GetActiveWakeLocksForTestsCallback callback) override;
};
class  WakeLockProviderAsyncWaiter {
 public:
  explicit WakeLockProviderAsyncWaiter(WakeLockProvider* proxy);
  ~WakeLockProviderAsyncWaiter();
  void GetActiveWakeLocksForTests(
      ::device::mojom::WakeLockType type, int32_t* out_count);

 private:
  WakeLockProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockProviderAsyncWaiter);
};


class  WakeLockObserverInterceptorForTesting : public WakeLockObserver {
  virtual WakeLockObserver* GetForwardingInterface() = 0;
  void OnWakeLockDeactivated(::device::mojom::WakeLockType type) override;
};
class  WakeLockObserverAsyncWaiter {
 public:
  explicit WakeLockObserverAsyncWaiter(WakeLockObserver* proxy);
  ~WakeLockObserverAsyncWaiter();

 private:
  WakeLockObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockObserverAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_TEST_UTILS_H_