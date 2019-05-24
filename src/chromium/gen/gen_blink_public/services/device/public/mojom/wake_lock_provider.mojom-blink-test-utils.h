// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/wake_lock_provider.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT WakeLockProviderInterceptorForTesting : public WakeLockProvider {
  virtual WakeLockProvider* GetForwardingInterface() = 0;
  void GetWakeLockContextForID(int32_t context_id, ::device::mojom::blink::WakeLockContextRequest context) override;
  void GetWakeLockWithoutContext(::device::mojom::blink::WakeLockType type, ::device::mojom::blink::WakeLockReason reason, const WTF::String& description, ::device::mojom::blink::WakeLockRequest wake_lock) override;
  void NotifyOnWakeLockDeactivation(::device::mojom::blink::WakeLockType type, WakeLockObserverPtr observer) override;
  void GetActiveWakeLocksForTests(::device::mojom::blink::WakeLockType type, GetActiveWakeLocksForTestsCallback callback) override;
};
class BLINK_PLATFORM_EXPORT WakeLockProviderAsyncWaiter {
 public:
  explicit WakeLockProviderAsyncWaiter(WakeLockProvider* proxy);
  ~WakeLockProviderAsyncWaiter();
  void GetActiveWakeLocksForTests(
      ::device::mojom::blink::WakeLockType type, int32_t* out_count);

 private:
  WakeLockProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockProviderAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT WakeLockObserverInterceptorForTesting : public WakeLockObserver {
  virtual WakeLockObserver* GetForwardingInterface() = 0;
  void OnWakeLockDeactivated(::device::mojom::blink::WakeLockType type) override;
};
class BLINK_PLATFORM_EXPORT WakeLockObserverAsyncWaiter {
 public:
  explicit WakeLockObserverAsyncWaiter(WakeLockObserver* proxy);
  ~WakeLockObserverAsyncWaiter();

 private:
  WakeLockObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockObserverAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_BLINK_TEST_UTILS_H_