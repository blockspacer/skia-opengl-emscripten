// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom.h"


namespace device {
namespace mojom {


class  PublicIpAddressGeolocationProviderInterceptorForTesting : public PublicIpAddressGeolocationProvider {
  virtual PublicIpAddressGeolocationProvider* GetForwardingInterface() = 0;
  void CreateGeolocation(const net::MutablePartialNetworkTrafficAnnotationTag& tag, ::device::mojom::GeolocationRequest request) override;
};
class  PublicIpAddressGeolocationProviderAsyncWaiter {
 public:
  explicit PublicIpAddressGeolocationProviderAsyncWaiter(PublicIpAddressGeolocationProvider* proxy);
  ~PublicIpAddressGeolocationProviderAsyncWaiter();

 private:
  PublicIpAddressGeolocationProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PublicIpAddressGeolocationProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_TEST_UTILS_H_