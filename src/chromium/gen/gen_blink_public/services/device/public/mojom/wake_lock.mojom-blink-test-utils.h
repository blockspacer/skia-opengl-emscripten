// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/wake_lock.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT WakeLockInterceptorForTesting : public WakeLock {
  virtual WakeLock* GetForwardingInterface() = 0;
  void RequestWakeLock() override;
  void CancelWakeLock() override;
  void AddClient(WakeLockRequest wake_lock) override;
  void ChangeType(WakeLockType type, ChangeTypeCallback callback) override;
  void HasWakeLockForTests(HasWakeLockForTestsCallback callback) override;
};
class BLINK_PLATFORM_EXPORT WakeLockAsyncWaiter {
 public:
  explicit WakeLockAsyncWaiter(WakeLock* proxy);
  ~WakeLockAsyncWaiter();
  void ChangeType(
      WakeLockType type, bool* out_result);
  void HasWakeLockForTests(
      bool* out_result);

 private:
  WakeLock* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_TEST_UTILS_H_