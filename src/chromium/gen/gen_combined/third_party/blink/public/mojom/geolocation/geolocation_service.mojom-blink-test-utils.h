// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/geolocation/geolocation_service.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT GeolocationServiceInterceptorForTesting : public GeolocationService {
  virtual GeolocationService* GetForwardingInterface() = 0;
  void CreateGeolocation(::device::mojom::blink::GeolocationRequest request, bool user_gesture, CreateGeolocationCallback callback) override;
};
class PLATFORM_EXPORT GeolocationServiceAsyncWaiter {
 public:
  explicit GeolocationServiceAsyncWaiter(GeolocationService* proxy);
  ~GeolocationServiceAsyncWaiter();
  void CreateGeolocation(
      ::device::mojom::blink::GeolocationRequest request, bool user_gesture, ::blink::mojom::blink::PermissionStatus* out_status);

 private:
  GeolocationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_GEOLOCATION_GEOLOCATION_SERVICE_MOJOM_BLINK_TEST_UTILS_H_