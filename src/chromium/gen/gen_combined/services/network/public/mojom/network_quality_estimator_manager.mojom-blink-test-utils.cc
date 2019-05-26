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


#include "services/network/public/mojom/network_quality_estimator_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/network_types.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void NetworkQualityEstimatorManagerClientInterceptorForTesting::OnNetworkQualityChanged(::network::mojom::blink::EffectiveConnectionType type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, int32_t downlink_bandwidth_kbps) {
  GetForwardingInterface()->OnNetworkQualityChanged(std::move(type), std::move(http_rtt), std::move(transport_rtt), std::move(downlink_bandwidth_kbps));
}
NetworkQualityEstimatorManagerClientAsyncWaiter::NetworkQualityEstimatorManagerClientAsyncWaiter(
    NetworkQualityEstimatorManagerClient* proxy) : proxy_(proxy) {}

NetworkQualityEstimatorManagerClientAsyncWaiter::~NetworkQualityEstimatorManagerClientAsyncWaiter() = default;




void NetworkQualityEstimatorManagerInterceptorForTesting::RequestNotifications(NetworkQualityEstimatorManagerClientPtr client_ptr) {
  GetForwardingInterface()->RequestNotifications(std::move(client_ptr));
}
NetworkQualityEstimatorManagerAsyncWaiter::NetworkQualityEstimatorManagerAsyncWaiter(
    NetworkQualityEstimatorManager* proxy) : proxy_(proxy) {}

NetworkQualityEstimatorManagerAsyncWaiter::~NetworkQualityEstimatorManagerAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif