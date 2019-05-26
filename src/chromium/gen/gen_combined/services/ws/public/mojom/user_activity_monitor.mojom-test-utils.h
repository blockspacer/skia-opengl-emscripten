// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/user_activity_monitor.mojom.h"


namespace ws {
namespace mojom {


class  UserActivityObserverInterceptorForTesting : public UserActivityObserver {
  virtual UserActivityObserver* GetForwardingInterface() = 0;
  void OnUserActivity() override;
};
class  UserActivityObserverAsyncWaiter {
 public:
  explicit UserActivityObserverAsyncWaiter(UserActivityObserver* proxy);
  ~UserActivityObserverAsyncWaiter();

 private:
  UserActivityObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UserActivityObserverAsyncWaiter);
};


class  UserIdleObserverInterceptorForTesting : public UserIdleObserver {
  virtual UserIdleObserver* GetForwardingInterface() = 0;
  void OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) override;
};
class  UserIdleObserverAsyncWaiter {
 public:
  explicit UserIdleObserverAsyncWaiter(UserIdleObserver* proxy);
  ~UserIdleObserverAsyncWaiter();

 private:
  UserIdleObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UserIdleObserverAsyncWaiter);
};


class  UserActivityMonitorInterceptorForTesting : public UserActivityMonitor {
  virtual UserActivityMonitor* GetForwardingInterface() = 0;
  void AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) override;
  void AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) override;
};
class  UserActivityMonitorAsyncWaiter {
 public:
  explicit UserActivityMonitorAsyncWaiter(UserActivityMonitor* proxy);
  ~UserActivityMonitorAsyncWaiter();

 private:
  UserActivityMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UserActivityMonitorAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_TEST_UTILS_H_