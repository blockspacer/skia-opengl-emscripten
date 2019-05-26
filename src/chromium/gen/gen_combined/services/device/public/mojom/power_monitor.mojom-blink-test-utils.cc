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


#include "services/device/public/mojom/power_monitor.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void PowerMonitorInterceptorForTesting::AddClient(PowerMonitorClientPtr client) {
  GetForwardingInterface()->AddClient(std::move(client));
}
PowerMonitorAsyncWaiter::PowerMonitorAsyncWaiter(
    PowerMonitor* proxy) : proxy_(proxy) {}

PowerMonitorAsyncWaiter::~PowerMonitorAsyncWaiter() = default;




void PowerMonitorClientInterceptorForTesting::PowerStateChange(bool on_battery_power) {
  GetForwardingInterface()->PowerStateChange(std::move(on_battery_power));
}
void PowerMonitorClientInterceptorForTesting::Suspend() {
  GetForwardingInterface()->Suspend();
}
void PowerMonitorClientInterceptorForTesting::Resume() {
  GetForwardingInterface()->Resume();
}
PowerMonitorClientAsyncWaiter::PowerMonitorClientAsyncWaiter(
    PowerMonitorClient* proxy) : proxy_(proxy) {}

PowerMonitorClientAsyncWaiter::~PowerMonitorClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif