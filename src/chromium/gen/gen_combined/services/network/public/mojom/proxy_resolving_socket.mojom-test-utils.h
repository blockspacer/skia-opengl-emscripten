// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/proxy_resolving_socket.mojom.h"


namespace network {
namespace mojom {


class  ProxyResolvingSocketInterceptorForTesting : public ProxyResolvingSocket {
  virtual ProxyResolvingSocket* GetForwardingInterface() = 0;
  void UpgradeToTLS(const net::HostPortPair& host_port_pair, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, ::network::mojom::SocketObserverPtr observer, UpgradeToTLSCallback callback) override;
};
class  ProxyResolvingSocketAsyncWaiter {
 public:
  explicit ProxyResolvingSocketAsyncWaiter(ProxyResolvingSocket* proxy);
  ~ProxyResolvingSocketAsyncWaiter();
  void UpgradeToTLS(
      const net::HostPortPair& host_port_pair, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, ::network::mojom::SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);

 private:
  ProxyResolvingSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocketAsyncWaiter);
};


class  ProxyResolvingSocketFactoryInterceptorForTesting : public ProxyResolvingSocketFactory {
  virtual ProxyResolvingSocketFactory* GetForwardingInterface() = 0;
  void CreateProxyResolvingSocket(const GURL& url, ProxyResolvingSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateProxyResolvingSocketCallback callback) override;
};
class  ProxyResolvingSocketFactoryAsyncWaiter {
 public:
  explicit ProxyResolvingSocketFactoryAsyncWaiter(ProxyResolvingSocketFactory* proxy);
  ~ProxyResolvingSocketFactoryAsyncWaiter();
  void CreateProxyResolvingSocket(
      const GURL& url, ProxyResolvingSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::SocketObserverPtr observer, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr, base::Optional<net::IPEndPoint>* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);

 private:
  ProxyResolvingSocketFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocketFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_TEST_UTILS_H_