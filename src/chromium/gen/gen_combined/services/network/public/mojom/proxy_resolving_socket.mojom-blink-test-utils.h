// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/proxy_resolving_socket.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ProxyResolvingSocketInterceptorForTesting : public ProxyResolvingSocket {
  virtual ProxyResolvingSocket* GetForwardingInterface() = 0;
  void UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, ::network::mojom::blink::SocketObserverPtr observer, UpgradeToTLSCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ProxyResolvingSocketAsyncWaiter {
 public:
  explicit ProxyResolvingSocketAsyncWaiter(ProxyResolvingSocket* proxy);
  ~ProxyResolvingSocketAsyncWaiter();
  void UpgradeToTLS(
      ::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, ::network::mojom::blink::SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);

 private:
  ProxyResolvingSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocketAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyResolvingSocketFactoryInterceptorForTesting : public ProxyResolvingSocketFactory {
  virtual ProxyResolvingSocketFactory* GetForwardingInterface() = 0;
  void CreateProxyResolvingSocket(const ::blink::KURL& url, ProxyResolvingSocketOptionsPtr options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::blink::SocketObserverPtr observer, CreateProxyResolvingSocketCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ProxyResolvingSocketFactoryAsyncWaiter {
 public:
  explicit ProxyResolvingSocketFactoryAsyncWaiter(ProxyResolvingSocketFactory* proxy);
  ~ProxyResolvingSocketFactoryAsyncWaiter();
  void CreateProxyResolvingSocket(
      const ::blink::KURL& url, ProxyResolvingSocketOptionsPtr options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::blink::SocketObserverPtr observer, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr, ::network::mojom::blink::IPEndPointPtr* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);

 private:
  ProxyResolvingSocketFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocketFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_BLINK_TEST_UTILS_H_