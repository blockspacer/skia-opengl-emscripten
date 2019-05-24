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


#include "services/network/public/mojom/tcp_socket.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/network/public/mojom/address_list.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/ssl_config.mojom-blink.h"
#include "services/network/public/mojom/tls_socket.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_JUMBO_H_
#endif


namespace network {
namespace mojom {
namespace blink {


void TCPBoundSocketInterceptorForTesting::Listen(uint32_t backlog, TCPServerSocketRequest socket, ListenCallback callback) {
  GetForwardingInterface()->Listen(std::move(backlog), std::move(socket), std::move(callback));
}
void TCPBoundSocketInterceptorForTesting::Connect(::network::mojom::blink::AddressListPtr remote_addr_list, TCPConnectedSocketOptionsPtr tcp_connected_socket_options, TCPConnectedSocketRequest socket, SocketObserverPtr observer, ConnectCallback callback) {
  GetForwardingInterface()->Connect(std::move(remote_addr_list), std::move(tcp_connected_socket_options), std::move(socket), std::move(observer), std::move(callback));
}
TCPBoundSocketAsyncWaiter::TCPBoundSocketAsyncWaiter(
    TCPBoundSocket* proxy) : proxy_(proxy) {}

TCPBoundSocketAsyncWaiter::~TCPBoundSocketAsyncWaiter() = default;

void TCPBoundSocketAsyncWaiter::Listen(
    uint32_t backlog, TCPServerSocketRequest socket, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->Listen(std::move(backlog),std::move(socket),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}
void TCPBoundSocketAsyncWaiter::Connect(
    ::network::mojom::blink::AddressListPtr remote_addr_list, TCPConnectedSocketOptionsPtr tcp_connected_socket_options, TCPConnectedSocketRequest socket, SocketObserverPtr observer, int32_t* out_net_error, ::network::mojom::blink::IPEndPointPtr* out_local_addr, ::network::mojom::blink::IPEndPointPtr* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream) {
  base::RunLoop loop;
  proxy_->Connect(std::move(remote_addr_list),std::move(tcp_connected_socket_options),std::move(socket),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             ::network::mojom::blink::IPEndPointPtr* out_local_addr
,
             ::network::mojom::blink::IPEndPointPtr* out_peer_addr
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             int32_t net_error,
             ::network::mojom::blink::IPEndPointPtr local_addr,
             ::network::mojom::blink::IPEndPointPtr peer_addr,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream) {*out_net_error = std::move(net_error);*out_local_addr = std::move(local_addr);*out_peer_addr = std::move(peer_addr);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_local_addr,
          out_peer_addr,
          out_receive_stream,
          out_send_stream));
  loop.Run();
}



void TCPConnectedSocketInterceptorForTesting::UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::TLSClientSocketOptionsPtr options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) {
  GetForwardingInterface()->UpgradeToTLS(std::move(host_port_pair), std::move(options), std::move(traffic_annotation), std::move(request), std::move(observer), std::move(callback));
}
void TCPConnectedSocketInterceptorForTesting::SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) {
  GetForwardingInterface()->SetSendBufferSize(std::move(send_buffer_size), std::move(callback));
}
void TCPConnectedSocketInterceptorForTesting::SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) {
  GetForwardingInterface()->SetReceiveBufferSize(std::move(receive_buffer_size), std::move(callback));
}
void TCPConnectedSocketInterceptorForTesting::SetNoDelay(bool no_delay, SetNoDelayCallback callback) {
  GetForwardingInterface()->SetNoDelay(std::move(no_delay), std::move(callback));
}
void TCPConnectedSocketInterceptorForTesting::SetKeepAlive(bool enable, int32_t delay_secs, SetKeepAliveCallback callback) {
  GetForwardingInterface()->SetKeepAlive(std::move(enable), std::move(delay_secs), std::move(callback));
}
TCPConnectedSocketAsyncWaiter::TCPConnectedSocketAsyncWaiter(
    TCPConnectedSocket* proxy) : proxy_(proxy) {}

TCPConnectedSocketAsyncWaiter::~TCPConnectedSocketAsyncWaiter() = default;

void TCPConnectedSocketAsyncWaiter::UpgradeToTLS(
    ::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::TLSClientSocketOptionsPtr options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream, ::network::mojom::blink::SSLInfoPtr* out_ssl_info) {
  base::RunLoop loop;
  proxy_->UpgradeToTLS(std::move(host_port_pair),std::move(options),std::move(traffic_annotation),std::move(request),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             ::network::mojom::blink::SSLInfoPtr* out_ssl_info
,
             int32_t net_error,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream,
             ::network::mojom::blink::SSLInfoPtr ssl_info) {*out_net_error = std::move(net_error);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);*out_ssl_info = std::move(ssl_info);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_receive_stream,
          out_send_stream,
          out_ssl_info));
  loop.Run();
}
void TCPConnectedSocketAsyncWaiter::SetSendBufferSize(
    int32_t send_buffer_size, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->SetSendBufferSize(std::move(send_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}
void TCPConnectedSocketAsyncWaiter::SetReceiveBufferSize(
    int32_t receive_buffer_size, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->SetReceiveBufferSize(std::move(receive_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}
void TCPConnectedSocketAsyncWaiter::SetNoDelay(
    bool no_delay, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetNoDelay(std::move(no_delay),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void TCPConnectedSocketAsyncWaiter::SetKeepAlive(
    bool enable, int32_t delay_secs, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetKeepAlive(std::move(enable),std::move(delay_secs),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}



void SocketObserverInterceptorForTesting::OnReadError(int32_t net_error) {
  GetForwardingInterface()->OnReadError(std::move(net_error));
}
void SocketObserverInterceptorForTesting::OnWriteError(int32_t net_error) {
  GetForwardingInterface()->OnWriteError(std::move(net_error));
}
SocketObserverAsyncWaiter::SocketObserverAsyncWaiter(
    SocketObserver* proxy) : proxy_(proxy) {}

SocketObserverAsyncWaiter::~SocketObserverAsyncWaiter() = default;




void TCPServerSocketInterceptorForTesting::Accept(SocketObserverPtr observer, AcceptCallback callback) {
  GetForwardingInterface()->Accept(std::move(observer), std::move(callback));
}
TCPServerSocketAsyncWaiter::TCPServerSocketAsyncWaiter(
    TCPServerSocket* proxy) : proxy_(proxy) {}

TCPServerSocketAsyncWaiter::~TCPServerSocketAsyncWaiter() = default;

void TCPServerSocketAsyncWaiter::Accept(
    SocketObserverPtr observer, int32_t* out_net_error, ::network::mojom::blink::IPEndPointPtr* out_remote_addr, TCPConnectedSocketPtr* out_connected_socket, mojo::ScopedDataPipeConsumerHandle* out_send_stream, mojo::ScopedDataPipeProducerHandle* out_receive_stream) {
  base::RunLoop loop;
  proxy_->Accept(std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             ::network::mojom::blink::IPEndPointPtr* out_remote_addr
,
             TCPConnectedSocketPtr* out_connected_socket
,
             mojo::ScopedDataPipeConsumerHandle* out_send_stream
,
             mojo::ScopedDataPipeProducerHandle* out_receive_stream
,
             int32_t net_error,
             ::network::mojom::blink::IPEndPointPtr remote_addr,
             TCPConnectedSocketPtr connected_socket,
             mojo::ScopedDataPipeConsumerHandle send_stream,
             mojo::ScopedDataPipeProducerHandle receive_stream) {*out_net_error = std::move(net_error);*out_remote_addr = std::move(remote_addr);*out_connected_socket = std::move(connected_socket);*out_send_stream = std::move(send_stream);*out_receive_stream = std::move(receive_stream);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_remote_addr,
          out_connected_socket,
          out_send_stream,
          out_receive_stream));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif