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


#include "services/network/public/mojom/proxy_resolving_socket.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/ssl_config.mojom.h"
#include "services/network/public/mojom/tcp_socket.mojom.h"
#include "services/network/public/mojom/tls_socket.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_JUMBO_H_
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void ProxyResolvingSocketInterceptorForTesting::UpgradeToTLS(const net::HostPortPair& host_port_pair, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, ::network::mojom::SocketObserverPtr observer, UpgradeToTLSCallback callback) {
  GetForwardingInterface()->UpgradeToTLS(std::move(host_port_pair), std::move(traffic_annotation), std::move(request), std::move(observer), std::move(callback));
}
ProxyResolvingSocketAsyncWaiter::ProxyResolvingSocketAsyncWaiter(
    ProxyResolvingSocket* proxy) : proxy_(proxy) {}

ProxyResolvingSocketAsyncWaiter::~ProxyResolvingSocketAsyncWaiter() = default;

void ProxyResolvingSocketAsyncWaiter::UpgradeToTLS(
    const net::HostPortPair& host_port_pair, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, ::network::mojom::SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream) {
  base::RunLoop loop;
  proxy_->UpgradeToTLS(std::move(host_port_pair),std::move(traffic_annotation),std::move(request),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             int32_t net_error,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream) {*out_net_error = std::move(net_error);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_receive_stream,
          out_send_stream));
  loop.Run();
}



void ProxyResolvingSocketFactoryInterceptorForTesting::CreateProxyResolvingSocket(const GURL& url, ProxyResolvingSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateProxyResolvingSocketCallback callback) {
  GetForwardingInterface()->CreateProxyResolvingSocket(std::move(url), std::move(options), std::move(traffic_annotation), std::move(socket), std::move(observer), std::move(callback));
}
ProxyResolvingSocketFactoryAsyncWaiter::ProxyResolvingSocketFactoryAsyncWaiter(
    ProxyResolvingSocketFactory* proxy) : proxy_(proxy) {}

ProxyResolvingSocketFactoryAsyncWaiter::~ProxyResolvingSocketFactoryAsyncWaiter() = default;

void ProxyResolvingSocketFactoryAsyncWaiter::CreateProxyResolvingSocket(
    const GURL& url, ProxyResolvingSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::SocketObserverPtr observer, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr, base::Optional<net::IPEndPoint>* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream) {
  base::RunLoop loop;
  proxy_->CreateProxyResolvingSocket(std::move(url),std::move(options),std::move(traffic_annotation),std::move(socket),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr
,
             base::Optional<net::IPEndPoint>* out_peer_addr
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr,
             const base::Optional<net::IPEndPoint>& peer_addr,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream) {*out_result = std::move(result);*out_local_addr = std::move(local_addr);*out_peer_addr = std::move(peer_addr);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr,
          out_peer_addr,
          out_receive_stream,
          out_send_stream));
  loop.Run();
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif