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


#include "services/device/public/mojom/geolocation.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/device/public/mojom/geoposition.mojom.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void GeolocationInterceptorForTesting::SetHighAccuracy(bool high_accuracy) {
  GetForwardingInterface()->SetHighAccuracy(std::move(high_accuracy));
}
void GeolocationInterceptorForTesting::QueryNextPosition(QueryNextPositionCallback callback) {
  GetForwardingInterface()->QueryNextPosition(std::move(callback));
}
GeolocationAsyncWaiter::GeolocationAsyncWaiter(
    Geolocation* proxy) : proxy_(proxy) {}

GeolocationAsyncWaiter::~GeolocationAsyncWaiter() = default;

void GeolocationAsyncWaiter::QueryNextPosition(
    ::device::mojom::GeopositionPtr* out_geoposition) {
  base::RunLoop loop;
  proxy_->QueryNextPosition(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::device::mojom::GeopositionPtr* out_geoposition
,
             ::device::mojom::GeopositionPtr geoposition) {*out_geoposition = std::move(geoposition);
            loop->Quit();
          },
          &loop,
          out_geoposition));
  loop.Run();
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif