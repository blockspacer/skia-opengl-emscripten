// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 949106185 value is based on sha256(salt + "NetworkQualityEstimatorManagerClient1").
constexpr uint32_t kNetworkQualityEstimatorManagerClient_OnNetworkQualityChanged_Name = 949106185;
// The 662768771 value is based on sha256(salt + "NetworkQualityEstimatorManager1").
constexpr uint32_t kNetworkQualityEstimatorManager_RequestNotifications_Name = 662768771;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_