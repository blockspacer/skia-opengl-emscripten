// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/network_change_manager.mojom.h"


namespace network {
namespace mojom {


class  NetworkChangeManagerClientInterceptorForTesting : public NetworkChangeManagerClient {
  virtual NetworkChangeManagerClient* GetForwardingInterface() = 0;
  void OnInitialConnectionType(ConnectionType type) override;
  void OnNetworkChanged(ConnectionType type) override;
};
class  NetworkChangeManagerClientAsyncWaiter {
 public:
  explicit NetworkChangeManagerClientAsyncWaiter(NetworkChangeManagerClient* proxy);
  ~NetworkChangeManagerClientAsyncWaiter();

 private:
  NetworkChangeManagerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerClientAsyncWaiter);
};


class  NetworkChangeManagerInterceptorForTesting : public NetworkChangeManager {
  virtual NetworkChangeManager* GetForwardingInterface() = 0;
  void RequestNotifications(NetworkChangeManagerClientPtr client_ptr) override;
};
class  NetworkChangeManagerAsyncWaiter {
 public:
  explicit NetworkChangeManagerAsyncWaiter(NetworkChangeManager* proxy);
  ~NetworkChangeManagerAsyncWaiter();

 private:
  NetworkChangeManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkChangeManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CHANGE_MANAGER_MOJOM_TEST_UTILS_H_