// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/geolocation_context.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT GeolocationContextInterceptorForTesting : public GeolocationContext {
  virtual GeolocationContext* GetForwardingInterface() = 0;
  void BindGeolocation(::device::mojom::blink::GeolocationRequest request) override;
  void SetOverride(::device::mojom::blink::GeopositionPtr geoposition) override;
  void ClearOverride() override;
};
class BLINK_PLATFORM_EXPORT GeolocationContextAsyncWaiter {
 public:
  explicit GeolocationContextAsyncWaiter(GeolocationContext* proxy);
  ~GeolocationContextAsyncWaiter();

 private:
  GeolocationContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GeolocationContextAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_