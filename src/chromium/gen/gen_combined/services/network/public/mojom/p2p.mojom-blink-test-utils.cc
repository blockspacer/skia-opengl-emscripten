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


#include "services/network/public/mojom/p2p.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/network_interface.mojom-blink.h"
#include "services/network/public/mojom/ip_address.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void P2PNetworkNotificationClientInterceptorForTesting::NetworkListChanged(WTF::Vector<::network::mojom::blink::NetworkInterfacePtr> networks, ::network::mojom::blink::IPAddressPtr default_ipv4_local_address, ::network::mojom::blink::IPAddressPtr default_ipv6_local_address) {
  GetForwardingInterface()->NetworkListChanged(std::move(networks), std::move(default_ipv4_local_address), std::move(default_ipv6_local_address));
}
P2PNetworkNotificationClientAsyncWaiter::P2PNetworkNotificationClientAsyncWaiter(
    P2PNetworkNotificationClient* proxy) : proxy_(proxy) {}

P2PNetworkNotificationClientAsyncWaiter::~P2PNetworkNotificationClientAsyncWaiter() = default;




void P2PSocketManagerInterceptorForTesting::StartNetworkNotifications(P2PNetworkNotificationClientPtr client) {
  GetForwardingInterface()->StartNetworkNotifications(std::move(client));
}
void P2PSocketManagerInterceptorForTesting::GetHostAddress(const WTF::String& host_name, bool enable_mdns, GetHostAddressCallback callback) {
  GetForwardingInterface()->GetHostAddress(std::move(host_name), std::move(enable_mdns), std::move(callback));
}
void P2PSocketManagerInterceptorForTesting::CreateSocket(P2PSocketType type, ::network::mojom::blink::IPEndPointPtr local_address, P2PPortRangePtr port_range, P2PHostAndIPEndPointPtr remote_address, P2PSocketClientPtr client, P2PSocketRequest socket) {
  GetForwardingInterface()->CreateSocket(std::move(type), std::move(local_address), std::move(port_range), std::move(remote_address), std::move(client), std::move(socket));
}
P2PSocketManagerAsyncWaiter::P2PSocketManagerAsyncWaiter(
    P2PSocketManager* proxy) : proxy_(proxy) {}

P2PSocketManagerAsyncWaiter::~P2PSocketManagerAsyncWaiter() = default;

void P2PSocketManagerAsyncWaiter::GetHostAddress(
    const WTF::String& host_name, bool enable_mdns, WTF::Vector<::network::mojom::blink::IPAddressPtr>* out_addresses) {
  base::RunLoop loop;
  proxy_->GetHostAddress(std::move(host_name),std::move(enable_mdns),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::network::mojom::blink::IPAddressPtr>* out_addresses
,
             WTF::Vector<::network::mojom::blink::IPAddressPtr> addresses) {*out_addresses = std::move(addresses);
            loop->Quit();
          },
          &loop,
          out_addresses));
  loop.Run();
}



void P2PSocketInterceptorForTesting::Send(const WTF::Vector<int8_t>& data, P2PPacketInfoPtr packet_info, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation) {
  GetForwardingInterface()->Send(std::move(data), std::move(packet_info), std::move(traffic_annotation));
}
void P2PSocketInterceptorForTesting::SetOption(P2PSocketOption option, int32_t value) {
  GetForwardingInterface()->SetOption(std::move(option), std::move(value));
}
P2PSocketAsyncWaiter::P2PSocketAsyncWaiter(
    P2PSocket* proxy) : proxy_(proxy) {}

P2PSocketAsyncWaiter::~P2PSocketAsyncWaiter() = default;




void P2PSocketClientInterceptorForTesting::SocketCreated(::network::mojom::blink::IPEndPointPtr local_address, ::network::mojom::blink::IPEndPointPtr remote_address) {
  GetForwardingInterface()->SocketCreated(std::move(local_address), std::move(remote_address));
}
void P2PSocketClientInterceptorForTesting::SendComplete(P2PSendPacketMetricsPtr send_metrics) {
  GetForwardingInterface()->SendComplete(std::move(send_metrics));
}
void P2PSocketClientInterceptorForTesting::IncomingTcpConnection(::network::mojom::blink::IPEndPointPtr socket_address, P2PSocketPtr socket, P2PSocketClientRequest client) {
  GetForwardingInterface()->IncomingTcpConnection(std::move(socket_address), std::move(socket), std::move(client));
}
void P2PSocketClientInterceptorForTesting::DataReceived(::network::mojom::blink::IPEndPointPtr socket_address, const WTF::Vector<int8_t>& data, base::TimeTicks timestamp) {
  GetForwardingInterface()->DataReceived(std::move(socket_address), std::move(data), std::move(timestamp));
}
P2PSocketClientAsyncWaiter::P2PSocketClientAsyncWaiter(
    P2PSocketClient* proxy) : proxy_(proxy) {}

P2PSocketClientAsyncWaiter::~P2PSocketClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif