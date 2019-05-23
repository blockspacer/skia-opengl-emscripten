// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/wake_lock_context.mojom.h"


namespace device {
namespace mojom {


class  WakeLockContextInterceptorForTesting : public WakeLockContext {
  virtual WakeLockContext* GetForwardingInterface() = 0;
  void GetWakeLock(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) override;
};
class  WakeLockContextAsyncWaiter {
 public:
  explicit WakeLockContextAsyncWaiter(WakeLockContext* proxy);
  ~WakeLockContextAsyncWaiter();

 private:
  WakeLockContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockContextAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_TEST_UTILS_H_