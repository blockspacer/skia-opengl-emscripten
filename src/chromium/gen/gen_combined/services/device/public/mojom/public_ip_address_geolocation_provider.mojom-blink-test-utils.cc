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


#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/mutable_partial_network_traffic_annotation_tag.mojom-blink.h"
#include "services/device/public/mojom/geolocation.mojom-blink.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_PUBLIC_IP_ADDRESS_GEOLOCATION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void PublicIpAddressGeolocationProviderInterceptorForTesting::CreateGeolocation(::network::mojom::blink::MutablePartialNetworkTrafficAnnotationTagPtr tag, ::device::mojom::blink::GeolocationRequest request) {
  GetForwardingInterface()->CreateGeolocation(std::move(tag), std::move(request));
}
PublicIpAddressGeolocationProviderAsyncWaiter::PublicIpAddressGeolocationProviderAsyncWaiter(
    PublicIpAddressGeolocationProvider* proxy) : proxy_(proxy) {}

PublicIpAddressGeolocationProviderAsyncWaiter::~PublicIpAddressGeolocationProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif