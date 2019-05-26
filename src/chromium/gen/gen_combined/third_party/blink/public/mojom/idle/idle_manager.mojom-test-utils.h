// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/idle/idle_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT IdleMonitorInterceptorForTesting : public IdleMonitor {
  virtual IdleMonitor* GetForwardingInterface() = 0;
  void Update(IdleStatePtr state) override;
};
class BLINK_COMMON_EXPORT IdleMonitorAsyncWaiter {
 public:
  explicit IdleMonitorAsyncWaiter(IdleMonitor* proxy);
  ~IdleMonitorAsyncWaiter();

 private:
  IdleMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IdleMonitorAsyncWaiter);
};


class BLINK_COMMON_EXPORT IdleManagerInterceptorForTesting : public IdleManager {
  virtual IdleManager* GetForwardingInterface() = 0;
  void AddMonitor(base::TimeDelta threshold, IdleMonitorPtr monitor, AddMonitorCallback callback) override;
};
class BLINK_COMMON_EXPORT IdleManagerAsyncWaiter {
 public:
  explicit IdleManagerAsyncWaiter(IdleManager* proxy);
  ~IdleManagerAsyncWaiter();
  void AddMonitor(
      base::TimeDelta threshold, IdleMonitorPtr monitor, IdleStatePtr* out_state);

 private:
  IdleManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IdleManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_TEST_UTILS_H_