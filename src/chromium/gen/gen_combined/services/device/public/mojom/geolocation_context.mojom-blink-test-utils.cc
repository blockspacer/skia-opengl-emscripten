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


#include "services/device/public/mojom/geolocation_context.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/device/public/mojom/geolocation.mojom-blink.h"
#include "services/device/public/mojom/geoposition.mojom-blink.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace device {
namespace mojom {
namespace blink {


void GeolocationContextInterceptorForTesting::BindGeolocation(::device::mojom::blink::GeolocationRequest request) {
  GetForwardingInterface()->BindGeolocation(std::move(request));
}
void GeolocationContextInterceptorForTesting::SetOverride(::device::mojom::blink::GeopositionPtr geoposition) {
  GetForwardingInterface()->SetOverride(std::move(geoposition));
}
void GeolocationContextInterceptorForTesting::ClearOverride() {
  GetForwardingInterface()->ClearOverride();
}
GeolocationContextAsyncWaiter::GeolocationContextAsyncWaiter(
    GeolocationContext* proxy) : proxy_(proxy) {}

GeolocationContextAsyncWaiter::~GeolocationContextAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif