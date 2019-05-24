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


#include "services/device/public/mojom/sensor_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/device/public/mojom/sensor.mojom-blink.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void SensorProviderInterceptorForTesting::GetSensor(::device::mojom::blink::SensorType type, GetSensorCallback callback) {
  GetForwardingInterface()->GetSensor(std::move(type), std::move(callback));
}
SensorProviderAsyncWaiter::SensorProviderAsyncWaiter(
    SensorProvider* proxy) : proxy_(proxy) {}

SensorProviderAsyncWaiter::~SensorProviderAsyncWaiter() = default;

void SensorProviderAsyncWaiter::GetSensor(
    ::device::mojom::blink::SensorType type, SensorCreationResult* out_result, SensorInitParamsPtr* out_init_params) {
  base::RunLoop loop;
  proxy_->GetSensor(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             SensorCreationResult* out_result
,
             SensorInitParamsPtr* out_init_params
,
             SensorCreationResult result,
             SensorInitParamsPtr init_params) {*out_result = std::move(result);*out_init_params = std::move(init_params);
            loop->Quit();
          },
          &loop,
          out_result,
          out_init_params));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif