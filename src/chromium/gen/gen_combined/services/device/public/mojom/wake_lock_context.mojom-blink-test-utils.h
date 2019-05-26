// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/wake_lock_context.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT WakeLockContextInterceptorForTesting : public WakeLockContext {
  virtual WakeLockContext* GetForwardingInterface() = 0;
  void GetWakeLock(::device::mojom::blink::WakeLockType type, ::device::mojom::blink::WakeLockReason reason, const WTF::String& description, ::device::mojom::blink::WakeLockRequest wake_lock) override;
};
class BLINK_PLATFORM_EXPORT WakeLockContextAsyncWaiter {
 public:
  explicit WakeLockContextAsyncWaiter(WakeLockContext* proxy);
  ~WakeLockContextAsyncWaiter();

 private:
  WakeLockContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WakeLockContextAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_