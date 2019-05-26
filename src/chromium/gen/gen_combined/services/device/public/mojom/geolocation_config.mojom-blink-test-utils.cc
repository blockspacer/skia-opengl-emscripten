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


#include "services/device/public/mojom/geolocation_config.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void GeolocationConfigInterceptorForTesting::IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) {
  GetForwardingInterface()->IsHighAccuracyLocationBeingCaptured(std::move(callback));
}
GeolocationConfigAsyncWaiter::GeolocationConfigAsyncWaiter(
    GeolocationConfig* proxy) : proxy_(proxy) {}

GeolocationConfigAsyncWaiter::~GeolocationConfigAsyncWaiter() = default;

void GeolocationConfigAsyncWaiter::IsHighAccuracyLocationBeingCaptured(
    bool* out_high_accuracy) {
  base::RunLoop loop;
  proxy_->IsHighAccuracyLocationBeingCaptured(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_high_accuracy
,
             bool high_accuracy) {*out_high_accuracy = std::move(high_accuracy);
            loop->Quit();
          },
          &loop,
          out_high_accuracy));
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