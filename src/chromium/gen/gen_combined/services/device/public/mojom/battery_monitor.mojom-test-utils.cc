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


#include "services/device/public/mojom/battery_monitor.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/device/public/mojom/battery_status.mojom.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_JUMBO_H_
#endif


namespace device {
namespace mojom {


void BatteryMonitorInterceptorForTesting::QueryNextStatus(QueryNextStatusCallback callback) {
  GetForwardingInterface()->QueryNextStatus(std::move(callback));
}
BatteryMonitorAsyncWaiter::BatteryMonitorAsyncWaiter(
    BatteryMonitor* proxy) : proxy_(proxy) {}

BatteryMonitorAsyncWaiter::~BatteryMonitorAsyncWaiter() = default;

void BatteryMonitorAsyncWaiter::QueryNextStatus(
    ::device::mojom::BatteryStatusPtr* out_status) {
  base::RunLoop loop;
  proxy_->QueryNextStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::BatteryStatusPtr* out_status
,
             ::device::mojom::BatteryStatusPtr status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif