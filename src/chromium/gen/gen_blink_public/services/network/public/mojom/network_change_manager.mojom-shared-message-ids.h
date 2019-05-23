// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace network {
namespace mojom {

namespace internal {


// The 1960774446 value is based on sha256(salt + "NetworkChangeManagerClient1").
constexpr uint32_t kNetworkChangeManagerClient_OnInitialConnectionType_Name = 1960774446;
// The 1859439087 value is based on sha256(salt + "NetworkChangeManagerClient2").
constexpr uint32_t kNetworkChangeManagerClient_OnNetworkChanged_Name = 1859439087;
// The 675811251 value is based on sha256(salt + "NetworkChangeManager1").
constexpr uint32_t kNetworkChangeManager_RequestNotifications_Name = 675811251;

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_