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


#include "third_party/blink/public/mojom/geolocation/geolocation_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/device/public/mojom/geolocation.mojom.h"
#include "third_party/blink/public/mojom/permissions/permission_status.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void GeolocationServiceInterceptorForTesting::CreateGeolocation(::device::mojom::GeolocationRequest request, bool user_gesture, CreateGeolocationCallback callback) {
  GetForwardingInterface()->CreateGeolocation(std::move(request), std::move(user_gesture), std::move(callback));
}
GeolocationServiceAsyncWaiter::GeolocationServiceAsyncWaiter(
    GeolocationService* proxy) : proxy_(proxy) {}

GeolocationServiceAsyncWaiter::~GeolocationServiceAsyncWaiter() = default;

void GeolocationServiceAsyncWaiter::CreateGeolocation(
    ::device::mojom::GeolocationRequest request, bool user_gesture, ::blink::mojom::PermissionStatus* out_status) {
  base::RunLoop loop;
  proxy_->CreateGeolocation(std::move(request),std::move(user_gesture),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::PermissionStatus* out_status
,
             ::blink::mojom::PermissionStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif