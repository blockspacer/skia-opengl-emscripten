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


#include "services/device/public/mojom/time_zone_monitor.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void TimeZoneMonitorInterceptorForTesting::AddClient(TimeZoneMonitorClientPtr client) {
  GetForwardingInterface()->AddClient(std::move(client));
}
TimeZoneMonitorAsyncWaiter::TimeZoneMonitorAsyncWaiter(
    TimeZoneMonitor* proxy) : proxy_(proxy) {}

TimeZoneMonitorAsyncWaiter::~TimeZoneMonitorAsyncWaiter() = default;




void TimeZoneMonitorClientInterceptorForTesting::OnTimeZoneChange(const std::string& tz_info) {
  GetForwardingInterface()->OnTimeZoneChange(std::move(tz_info));
}
TimeZoneMonitorClientAsyncWaiter::TimeZoneMonitorClientAsyncWaiter(
    TimeZoneMonitorClient* proxy) : proxy_(proxy) {}

TimeZoneMonitorClientAsyncWaiter::~TimeZoneMonitorClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif