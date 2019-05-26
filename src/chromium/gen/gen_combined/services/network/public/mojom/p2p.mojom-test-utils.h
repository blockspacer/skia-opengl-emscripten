// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/p2p.mojom.h"


namespace network {
namespace mojom {


class  P2PNetworkNotificationClientInterceptorForTesting : public P2PNetworkNotificationClient {
  virtual P2PNetworkNotificationClient* GetForwardingInterface() = 0;
  void NetworkListChanged(const std::vector<net::NetworkInterface>& networks, const net::IPAddress& default_ipv4_local_address, const net::IPAddress& default_ipv6_local_address) override;
};
class  P2PNetworkNotificationClientAsyncWaiter {
 public:
  explicit P2PNetworkNotificationClientAsyncWaiter(P2PNetworkNotificationClient* proxy);
  ~P2PNetworkNotificationClientAsyncWaiter();

 private:
  P2PNetworkNotificationClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PNetworkNotificationClientAsyncWaiter);
};


class  P2PSocketManagerInterceptorForTesting : public P2PSocketManager {
  virtual P2PSocketManager* GetForwardingInterface() = 0;
  void StartNetworkNotifications(P2PNetworkNotificationClientPtr client) override;
  void GetHostAddress(const std::string& host_name, bool enable_mdns, GetHostAddressCallback callback) override;
  void CreateSocket(network::P2PSocketType type, const net::IPEndPoint& local_address, const network::P2PPortRange& port_range, const network::P2PHostAndIPEndPoint& remote_address, P2PSocketClientPtr client, P2PSocketRequest socket) override;
};
class  P2PSocketManagerAsyncWaiter {
 public:
  explicit P2PSocketManagerAsyncWaiter(P2PSocketManager* proxy);
  ~P2PSocketManagerAsyncWaiter();
  void GetHostAddress(
      const std::string& host_name, bool enable_mdns, std::vector<net::IPAddress>* out_addresses);

 private:
  P2PSocketManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketManagerAsyncWaiter);
};


class  P2PSocketInterceptorForTesting : public P2PSocket {
  virtual P2PSocket* GetForwardingInterface() = 0;
  void Send(const std::vector<int8_t>& data, const network::P2PPacketInfo& packet_info, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation) override;
  void SetOption(network::P2PSocketOption option, int32_t value) override;
};
class  P2PSocketAsyncWaiter {
 public:
  explicit P2PSocketAsyncWaiter(P2PSocket* proxy);
  ~P2PSocketAsyncWaiter();

 private:
  P2PSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketAsyncWaiter);
};


class  P2PSocketClientInterceptorForTesting : public P2PSocketClient {
  virtual P2PSocketClient* GetForwardingInterface() = 0;
  void SocketCreated(const net::IPEndPoint& local_address, const net::IPEndPoint& remote_address) override;
  void SendComplete(const network::P2PSendPacketMetrics& send_metrics) override;
  void IncomingTcpConnection(const net::IPEndPoint& socket_address, P2PSocketPtr socket, P2PSocketClientRequest client) override;
  void DataReceived(const net::IPEndPoint& socket_address, const std::vector<int8_t>& data, base::TimeTicks timestamp) override;
};
class  P2PSocketClientAsyncWaiter {
 public:
  explicit P2PSocketClientAsyncWaiter(P2PSocketClient* proxy);
  ~P2PSocketClientAsyncWaiter();

 private:
  P2PSocketClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_TEST_UTILS_H_