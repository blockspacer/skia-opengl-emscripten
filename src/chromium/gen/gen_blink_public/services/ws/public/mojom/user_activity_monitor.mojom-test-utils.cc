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


#include "services/ws/public/mojom/user_activity_monitor.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_JUMBO_H_
#endif


namespace ws {
namespace mojom {


void UserActivityObserverInterceptorForTesting::OnUserActivity() {
  GetForwardingInterface()->OnUserActivity();
}
UserActivityObserverAsyncWaiter::UserActivityObserverAsyncWaiter(
    UserActivityObserver* proxy) : proxy_(proxy) {}

UserActivityObserverAsyncWaiter::~UserActivityObserverAsyncWaiter() = default;




void UserIdleObserverInterceptorForTesting::OnUserIdleStateChanged(UserIdleObserver::IdleState new_state) {
  GetForwardingInterface()->OnUserIdleStateChanged(std::move(new_state));
}
UserIdleObserverAsyncWaiter::UserIdleObserverAsyncWaiter(
    UserIdleObserver* proxy) : proxy_(proxy) {}

UserIdleObserverAsyncWaiter::~UserIdleObserverAsyncWaiter() = default;




void UserActivityMonitorInterceptorForTesting::AddUserActivityObserver(uint32_t delay_between_notify_secs, UserActivityObserverPtr observer) {
  GetForwardingInterface()->AddUserActivityObserver(std::move(delay_between_notify_secs), std::move(observer));
}
void UserActivityMonitorInterceptorForTesting::AddUserIdleObserver(uint32_t idle_time_in_minutes, UserIdleObserverPtr observer) {
  GetForwardingInterface()->AddUserIdleObserver(std::move(idle_time_in_minutes), std::move(observer));
}
UserActivityMonitorAsyncWaiter::UserActivityMonitorAsyncWaiter(
    UserActivityMonitor* proxy) : proxy_(proxy) {}

UserActivityMonitorAsyncWaiter::~UserActivityMonitorAsyncWaiter() = default;






}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif