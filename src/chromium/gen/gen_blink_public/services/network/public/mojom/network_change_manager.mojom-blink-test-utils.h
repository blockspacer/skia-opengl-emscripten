// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/network_change_manager.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientInterceptorForTesting : public NetworkChangeManagerClient {
  virtual NetworkChangeManagerClient* GetForwardingInterface() = 0;
  void OnInitialConnectionType(ConnectionType type) override;
  void OnNetworkChanged(ConnectionType type) override;
};
class BLINK_PLATFORM_EXPORT NetworkChangeManagerClientAsyncWaiter {
 public:
  explicit NetworkChangeManagerClientAsyncWaiter(NetworkChangeManagerClient* proxy);
  ~NetworkChangeManagerClientAsyncWaiter();

 private:
  NetworkChangeManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT NetworkChangeManagerInterceptorForTesting : public NetworkChangeManager {
  virtual NetworkChangeManager* GetForwardingInterface() = 0;
  void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) override;
};
class BLINK_PLATFORM_EXPORT NetworkChangeManagerAsyncWaiter {
 public:
  explicit NetworkChangeManagerAsyncWaiter(NetworkChangeManager* proxy);
  ~NetworkChangeManagerAsyncWaiter();

 private:
  NetworkChangeManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_