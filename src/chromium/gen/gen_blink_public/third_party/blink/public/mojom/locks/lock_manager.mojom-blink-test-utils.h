// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/locks/lock_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT LockHandleInterceptorForTesting : public LockHandle {
  virtual LockHandle* GetForwardingInterface() = 0;
};
class PLATFORM_EXPORT LockHandleAsyncWaiter {
 public:
  explicit LockHandleAsyncWaiter(LockHandle* proxy);
  ~LockHandleAsyncWaiter();

 private:
  LockHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LockHandleAsyncWaiter);
};


class PLATFORM_EXPORT LockRequestInterceptorForTesting : public LockRequest {
  virtual LockRequest* GetForwardingInterface() = 0;
  void Granted(LockHandleAssociatedPtrInfo lock_handle) override;
  void Failed() override;
  void Abort(const WTF::String& reason) override;
};
class PLATFORM_EXPORT LockRequestAsyncWaiter {
 public:
  explicit LockRequestAsyncWaiter(LockRequest* proxy);
  ~LockRequestAsyncWaiter();

 private:
  LockRequest* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LockRequestAsyncWaiter);
};


class PLATFORM_EXPORT LockManagerInterceptorForTesting : public LockManager {
  virtual LockManager* GetForwardingInterface() = 0;
  void RequestLock(const WTF::String& name, LockMode mode, LockManager::WaitMode wait, LockRequestAssociatedPtrInfo request) override;
  void QueryState(QueryStateCallback callback) override;
};
class PLATFORM_EXPORT LockManagerAsyncWaiter {
 public:
  explicit LockManagerAsyncWaiter(LockManager* proxy);
  ~LockManagerAsyncWaiter();
  void QueryState(
      WTF::Vector<LockInfoPtr>* out_requested, WTF::Vector<LockInfoPtr>* out_held);

 private:
  LockManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LockManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_BLINK_TEST_UTILS_H_