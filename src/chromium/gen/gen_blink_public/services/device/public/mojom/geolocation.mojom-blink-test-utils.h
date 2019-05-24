// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/geolocation.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT GeolocationInterceptorForTesting : public Geolocation {
  virtual Geolocation* GetForwardingInterface() = 0;
  void SetHighAccuracy(bool high_accuracy) override;
  void QueryNextPosition(QueryNextPositionCallback callback) override;
};
class BLINK_PLATFORM_EXPORT GeolocationAsyncWaiter {
 public:
  explicit GeolocationAsyncWaiter(Geolocation* proxy);
  ~GeolocationAsyncWaiter();
  void QueryNextPosition(
      ::device::mojom::blink::GeopositionPtr* out_geoposition);

 private:
  Geolocation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_TEST_UTILS_H_