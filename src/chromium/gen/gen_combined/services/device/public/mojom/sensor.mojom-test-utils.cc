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


#include "services/device/public/mojom/sensor.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_JUMBO_H_
#include "services/device/public/cpp/generic_sensor/sensor_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void SensorInterceptorForTesting::GetDefaultConfiguration(GetDefaultConfigurationCallback callback) {
  GetForwardingInterface()->GetDefaultConfiguration(std::move(callback));
}
void SensorInterceptorForTesting::AddConfiguration(const device::PlatformSensorConfiguration& configuration, AddConfigurationCallback callback) {
  GetForwardingInterface()->AddConfiguration(std::move(configuration), std::move(callback));
}
void SensorInterceptorForTesting::RemoveConfiguration(const device::PlatformSensorConfiguration& configuration) {
  GetForwardingInterface()->RemoveConfiguration(std::move(configuration));
}
void SensorInterceptorForTesting::Suspend() {
  GetForwardingInterface()->Suspend();
}
void SensorInterceptorForTesting::Resume() {
  GetForwardingInterface()->Resume();
}
void SensorInterceptorForTesting::ConfigureReadingChangeNotifications(bool enabled) {
  GetForwardingInterface()->ConfigureReadingChangeNotifications(std::move(enabled));
}
SensorAsyncWaiter::SensorAsyncWaiter(
    Sensor* proxy) : proxy_(proxy) {}

SensorAsyncWaiter::~SensorAsyncWaiter() = default;

void SensorAsyncWaiter::GetDefaultConfiguration(
    device::PlatformSensorConfiguration* out_configuration) {
  base::RunLoop loop;
  proxy_->GetDefaultConfiguration(
      base::BindOnce(
          [](base::RunLoop* loop,
             device::PlatformSensorConfiguration* out_configuration
,
             const device::PlatformSensorConfiguration& configuration) {*out_configuration = std::move(configuration);
            loop->Quit();
          },
          &loop,
          out_configuration));
  loop.Run();
}
void SensorAsyncWaiter::AddConfiguration(
    const device::PlatformSensorConfiguration& configuration, bool* out_success) {
  base::RunLoop loop;
  proxy_->AddConfiguration(std::move(configuration),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}



void SensorClientInterceptorForTesting::RaiseError() {
  GetForwardingInterface()->RaiseError();
}
void SensorClientInterceptorForTesting::SensorReadingChanged() {
  GetForwardingInterface()->SensorReadingChanged();
}
SensorClientAsyncWaiter::SensorClientAsyncWaiter(
    SensorClient* proxy) : proxy_(proxy) {}

SensorClientAsyncWaiter::~SensorClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif