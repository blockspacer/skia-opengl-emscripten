// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/network_quality_estimator_manager.mojom.h"


namespace network {
namespace mojom {


class  NetworkQualityEstimatorManagerClientInterceptorForTesting : public NetworkQualityEstimatorManagerClient {
  virtual NetworkQualityEstimatorManagerClient* GetForwardingInterface() = 0;
  void OnNetworkQualityChanged(net::EffectiveConnectionType type, base::TimeDelta http_rtt, base::TimeDelta transport_rtt, int32_t downlink_bandwidth_kbps) override;
};
class  NetworkQualityEstimatorManagerClientAsyncWaiter {
 public:
  explicit NetworkQualityEstimatorManagerClientAsyncWaiter(NetworkQualityEstimatorManagerClient* proxy);
  ~NetworkQualityEstimatorManagerClientAsyncWaiter();

 private:
  NetworkQualityEstimatorManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkQualityEstimatorManagerClientAsyncWaiter);
};


class  NetworkQualityEstimatorManagerInterceptorForTesting : public NetworkQualityEstimatorManager {
  virtual NetworkQualityEstimatorManager* GetForwardingInterface() = 0;
  void RequestNotifications(NetworkQualityEstimatorManagerClientPtr client_ptr) override;
};
class  NetworkQualityEstimatorManagerAsyncWaiter {
 public:
  explicit NetworkQualityEstimatorManagerAsyncWaiter(NetworkQualityEstimatorManager* proxy);
  ~NetworkQualityEstimatorManagerAsyncWaiter();

 private:
  NetworkQualityEstimatorManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkQualityEstimatorManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_TEST_UTILS_H_