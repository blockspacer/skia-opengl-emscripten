// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/p2p.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT P2PNetworkNotificationClientInterceptorForTesting : public P2PNetworkNotificationClient {
  virtual P2PNetworkNotificationClient* GetForwardingInterface() = 0;
  void NetworkListChanged(WTF::Vector<::network::mojom::blink::NetworkInterfacePtr> networks, ::network::mojom::blink::IPAddressPtr default_ipv4_local_address, ::network::mojom::blink::IPAddressPtr default_ipv6_local_address) override;
};
class BLINK_PLATFORM_EXPORT P2PNetworkNotificationClientAsyncWaiter {
 public:
  explicit P2PNetworkNotificationClientAsyncWaiter(P2PNetworkNotificationClient* proxy);
  ~P2PNetworkNotificationClientAsyncWaiter();

 private:
  P2PNetworkNotificationClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PNetworkNotificationClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT P2PSocketManagerInterceptorForTesting : public P2PSocketManager {
  virtual P2PSocketManager* GetForwardingInterface() = 0;
  void StartNetworkNotifications(P2PNetworkNotificationClientPtr client) override;
  void GetHostAddress(const WTF::String& host_name, bool enable_mdns, GetHostAddressCallback callback) override;
  void CreateSocket(P2PSocketType type, ::network::mojom::blink::IPEndPointPtr local_address, P2PPortRangePtr port_range, P2PHostAndIPEndPointPtr remote_address, P2PSocketClientPtr client, P2PSocketRequest socket) override;
};
class BLINK_PLATFORM_EXPORT P2PSocketManagerAsyncWaiter {
 public:
  explicit P2PSocketManagerAsyncWaiter(P2PSocketManager* proxy);
  ~P2PSocketManagerAsyncWaiter();
  void GetHostAddress(
      const WTF::String& host_name, bool enable_mdns, WTF::Vector<::network::mojom::blink::IPAddressPtr>* out_addresses);

 private:
  P2PSocketManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketManagerAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT P2PSocketInterceptorForTesting : public P2PSocket {
  virtual P2PSocket* GetForwardingInterface() = 0;
  void Send(const WTF::Vector<int8_t>& data, P2PPacketInfoPtr packet_info, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation) override;
  void SetOption(P2PSocketOption option, int32_t value) override;
};
class BLINK_PLATFORM_EXPORT P2PSocketAsyncWaiter {
 public:
  explicit P2PSocketAsyncWaiter(P2PSocket* proxy);
  ~P2PSocketAsyncWaiter();

 private:
  P2PSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT P2PSocketClientInterceptorForTesting : public P2PSocketClient {
  virtual P2PSocketClient* GetForwardingInterface() = 0;
  void SocketCreated(::network::mojom::blink::IPEndPointPtr local_address, ::network::mojom::blink::IPEndPointPtr remote_address) override;
  void SendComplete(P2PSendPacketMetricsPtr send_metrics) override;
  void IncomingTcpConnection(::network::mojom::blink::IPEndPointPtr socket_address, P2PSocketPtr socket, P2PSocketClientRequest client) override;
  void DataReceived(::network::mojom::blink::IPEndPointPtr socket_address, const WTF::Vector<int8_t>& data, base::TimeTicks timestamp) override;
};
class BLINK_PLATFORM_EXPORT P2PSocketClientAsyncWaiter {
 public:
  explicit P2PSocketClientAsyncWaiter(P2PSocketClient* proxy);
  ~P2PSocketClientAsyncWaiter();

 private:
  P2PSocketClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_TEST_UTILS_H_