// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/tcp_socket.mojom.h"


namespace network {
namespace mojom {


class  TCPBoundSocketInterceptorForTesting : public TCPBoundSocket {
  virtual TCPBoundSocket* GetForwardingInterface() = 0;
  void Listen(uint32_t backlog, TCPServerSocketRequest socket, ListenCallback callback) override;
  void Connect(const net::AddressList& remote_addr_list, TCPConnectedSocketOptionsPtr tcp_connected_socket_options, TCPConnectedSocketRequest socket, SocketObserverPtr observer, ConnectCallback callback) override;
};
class  TCPBoundSocketAsyncWaiter {
 public:
  explicit TCPBoundSocketAsyncWaiter(TCPBoundSocket* proxy);
  ~TCPBoundSocketAsyncWaiter();
  void Listen(
      uint32_t backlog, TCPServerSocketRequest socket, int32_t* out_net_error);
  void Connect(
      const net::AddressList& remote_addr_list, TCPConnectedSocketOptionsPtr tcp_connected_socket_options, TCPConnectedSocketRequest socket, SocketObserverPtr observer, int32_t* out_net_error, base::Optional<net::IPEndPoint>* out_local_addr, base::Optional<net::IPEndPoint>* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);

 private:
  TCPBoundSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TCPBoundSocketAsyncWaiter);
};


class  TCPConnectedSocketInterceptorForTesting : public TCPConnectedSocket {
  virtual TCPConnectedSocket* GetForwardingInterface() = 0;
  void UpgradeToTLS(const net::HostPortPair& host_port_pair, ::network::mojom::TLSClientSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) override;
  void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) override;
  void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) override;
  void SetNoDelay(bool no_delay, SetNoDelayCallback callback) override;
  void SetKeepAlive(bool enable, int32_t delay_secs, SetKeepAliveCallback callback) override;
};
class  TCPConnectedSocketAsyncWaiter {
 public:
  explicit TCPConnectedSocketAsyncWaiter(TCPConnectedSocket* proxy);
  ~TCPConnectedSocketAsyncWaiter();
  void UpgradeToTLS(
      const net::HostPortPair& host_port_pair, ::network::mojom::TLSClientSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, SocketObserverPtr observer, int32_t* out_net_error, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream, base::Optional<net::SSLInfo>* out_ssl_info);
  void SetSendBufferSize(
      int32_t send_buffer_size, int32_t* out_net_error);
  void SetReceiveBufferSize(
      int32_t receive_buffer_size, int32_t* out_net_error);
  void SetNoDelay(
      bool no_delay, bool* out_success);
  void SetKeepAlive(
      bool enable, int32_t delay_secs, bool* out_success);

 private:
  TCPConnectedSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocketAsyncWaiter);
};


class  SocketObserverInterceptorForTesting : public SocketObserver {
  virtual SocketObserver* GetForwardingInterface() = 0;
  void OnReadError(int32_t net_error) override;
  void OnWriteError(int32_t net_error) override;
};
class  SocketObserverAsyncWaiter {
 public:
  explicit SocketObserverAsyncWaiter(SocketObserver* proxy);
  ~SocketObserverAsyncWaiter();

 private:
  SocketObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SocketObserverAsyncWaiter);
};


class  TCPServerSocketInterceptorForTesting : public TCPServerSocket {
  virtual TCPServerSocket* GetForwardingInterface() = 0;
  void Accept(SocketObserverPtr observer, AcceptCallback callback) override;
};
class  TCPServerSocketAsyncWaiter {
 public:
  explicit TCPServerSocketAsyncWaiter(TCPServerSocket* proxy);
  ~TCPServerSocketAsyncWaiter();
  void Accept(
      SocketObserverPtr observer, int32_t* out_net_error, base::Optional<net::IPEndPoint>* out_remote_addr, TCPConnectedSocketPtr* out_connected_socket, mojo::ScopedDataPipeConsumerHandle* out_send_stream, mojo::ScopedDataPipeProducerHandle* out_receive_stream);

 private:
  TCPServerSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocketAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_TEST_UTILS_H_