// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/battery_monitor.mojom.h"


namespace device {
namespace mojom {


class  BatteryMonitorInterceptorForTesting : public BatteryMonitor {
  virtual BatteryMonitor* GetForwardingInterface() = 0;
  void QueryNextStatus(QueryNextStatusCallback callback) override;
};
class  BatteryMonitorAsyncWaiter {
 public:
  explicit BatteryMonitorAsyncWaiter(BatteryMonitor* proxy);
  ~BatteryMonitorAsyncWaiter();
  void QueryNextStatus(
      ::device::mojom::BatteryStatusPtr* out_status);

 private:
  BatteryMonitor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BatteryMonitorAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_TEST_UTILS_H_