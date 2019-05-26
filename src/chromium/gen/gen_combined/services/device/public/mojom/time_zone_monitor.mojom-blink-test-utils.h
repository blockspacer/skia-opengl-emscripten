// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/time_zone_monitor.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT TimeZoneMonitorInterceptorForTesting : public TimeZoneMonitor {
  virtual TimeZoneMonitor* GetForwardingInterface() = 0;
  void AddClient(TimeZoneMonitorClientPtr client) override;
};
class BLINK_PLATFORM_EXPORT TimeZoneMonitorAsyncWaiter {
 public:
  explicit TimeZoneMonitorAsyncWaiter(TimeZoneMonitor* proxy);
  ~TimeZoneMonitorAsyncWaiter();

 private:
  TimeZoneMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TimeZoneMonitorAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT TimeZoneMonitorClientInterceptorForTesting : public TimeZoneMonitorClient {
  virtual TimeZoneMonitorClient* GetForwardingInterface() = 0;
  void OnTimeZoneChange(const WTF::String& tz_info) override;
};
class BLINK_PLATFORM_EXPORT TimeZoneMonitorClientAsyncWaiter {
 public:
  explicit TimeZoneMonitorClientAsyncWaiter(TimeZoneMonitorClient* proxy);
  ~TimeZoneMonitorClientAsyncWaiter();

 private:
  TimeZoneMonitorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TimeZoneMonitorClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_BLINK_TEST_UTILS_H_