// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/wake_lock/wake_lock.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT WakeLockServiceInterceptorForTesting : public WakeLockService {
  virtual WakeLockService* GetForwardingInterface() = 0;
  void GetWakeLock(::device::mojom::WakeLockType type, ::device::mojom::WakeLockReason reason, const std::string& description, ::device::mojom::WakeLockRequest wake_lock) override;
};
class BLINK_COMMON_EXPORT WakeLockServiceAsyncWaiter {
 public:
  explicit WakeLockServiceAsyncWaiter(WakeLockService* proxy);
  ~WakeLockServiceAsyncWaiter();

 private:
  WakeLockService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WAKE_LOCK_WAKE_LOCK_MOJOM_TEST_UTILS_H_