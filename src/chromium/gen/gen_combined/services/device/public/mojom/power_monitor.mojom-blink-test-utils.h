// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/power_monitor.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT PowerMonitorInterceptorForTesting : public PowerMonitor {
  virtual PowerMonitor* GetForwardingInterface() = 0;
  void AddClient(PowerMonitorClientPtr client) override;
};
class BLINK_PLATFORM_EXPORT PowerMonitorAsyncWaiter {
 public:
  explicit PowerMonitorAsyncWaiter(PowerMonitor* proxy);
  ~PowerMonitorAsyncWaiter();

 private:
  PowerMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PowerMonitorAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT PowerMonitorClientInterceptorForTesting : public PowerMonitorClient {
  virtual PowerMonitorClient* GetForwardingInterface() = 0;
  void PowerStateChange(bool on_battery_power) override;
  void Suspend() override;
  void Resume() override;
};
class BLINK_PLATFORM_EXPORT PowerMonitorClientAsyncWaiter {
 public:
  explicit PowerMonitorClientAsyncWaiter(PowerMonitorClient* proxy);
  ~PowerMonitorClientAsyncWaiter();

 private:
  PowerMonitorClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PowerMonitorClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_TEST_UTILS_H_