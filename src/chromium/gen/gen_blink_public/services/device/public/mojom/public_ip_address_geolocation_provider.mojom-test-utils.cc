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


#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom.h"
#include "services/device/public/mojom/geolocation.mojom.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_JUMBO_H_
#include "services/network/public/cpp/mutable_partial_network_traffic_annotation_tag_mojom_traits.h"
#endif


namespace device {
namespace mojom {


void PublicIpAddressGeolocationProviderInterceptorForTesting::CreateGeolocation(const net::MutablePartialNetworkTrafficAnnotationTag& tag, ::device::mojom::GeolocationRequest request) {
  GetForwardingInterface()->CreateGeolocation(std::move(tag), std::move(request));
}
PublicIpAddressGeolocationProviderAsyncWaiter::PublicIpAddressGeolocationProviderAsyncWaiter(
    PublicIpAddressGeolocationProvider* proxy) : proxy_(proxy) {}

PublicIpAddressGeolocationProviderAsyncWaiter::~PublicIpAddressGeolocationProviderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif