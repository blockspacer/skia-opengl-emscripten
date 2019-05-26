// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/udp_socket.mojom.h"


namespace network {
namespace mojom {


class  UDPSocketInterceptorForTesting : public UDPSocket {
  virtual UDPSocket* GetForwardingInterface() = 0;
  void Bind(const net::IPEndPoint& local_addr, UDPSocketOptionsPtr socket_options, BindCallback callback) override;
  void Connect(const net::IPEndPoint& remote_addr, UDPSocketOptionsPtr socket_options, ConnectCallback callback) override;
  void SetBroadcast(bool broadcast, SetBroadcastCallback callback) override;
  void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) override;
  void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) override;
  void JoinGroup(const net::IPAddress& group_address, JoinGroupCallback callback) override;
  void LeaveGroup(const net::IPAddress& group_address, LeaveGroupCallback callback) override;
  void ReceiveMore(uint32_t num_additional_datagrams) override;
  void ReceiveMoreWithBufferSize(uint32_t num_additional_datagrams, uint32_t buffer_size) override;
  void SendTo(const net::IPEndPoint& dest_addr, base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendToCallback callback) override;
  void Send(base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendCallback callback) override;
  void Close() override;
};
class  UDPSocketAsyncWaiter {
 public:
  explicit UDPSocketAsyncWaiter(UDPSocket* proxy);
  ~UDPSocketAsyncWaiter();
  void Bind(
      const net::IPEndPoint& local_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out);
  void Connect(
      const net::IPEndPoint& remote_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out);
  void SetBroadcast(
      bool broadcast, int32_t* out_result);
  void SetSendBufferSize(
      int32_t send_buffer_size, int32_t* out_result);
  void SetReceiveBufferSize(
      int32_t receive_buffer_size, int32_t* out_result);
  void JoinGroup(
      const net::IPAddress& group_address, int32_t* out_result);
  void LeaveGroup(
      const net::IPAddress& group_address, int32_t* out_result);
  void SendTo(
      const net::IPEndPoint& dest_addr, base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, int32_t* out_result);
  void Send(
      base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, int32_t* out_result);

 private:
  UDPSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocketAsyncWaiter);
};


class  UDPSocketReceiverInterceptorForTesting : public UDPSocketReceiver {
  virtual UDPSocketReceiver* GetForwardingInterface() = 0;
  void OnReceived(int32_t result, const base::Optional<net::IPEndPoint>& src_addr, base::Optional<base::span<const uint8_t>> data) override;
};
class  UDPSocketReceiverAsyncWaiter {
 public:
  explicit UDPSocketReceiverAsyncWaiter(UDPSocketReceiver* proxy);
  ~UDPSocketReceiverAsyncWaiter();

 private:
  UDPSocketReceiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocketReceiverAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_TEST_UTILS_H_