// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/udp_socket.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT UDPSocketInterceptorForTesting : public UDPSocket {
  virtual UDPSocket* GetForwardingInterface() = 0;
  void Bind(::network::mojom::blink::IPEndPointPtr local_addr, UDPSocketOptionsPtr socket_options, BindCallback callback) override;
  void Connect(::network::mojom::blink::IPEndPointPtr remote_addr, UDPSocketOptionsPtr socket_options, ConnectCallback callback) override;
  void SetBroadcast(bool broadcast, SetBroadcastCallback callback) override;
  void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) override;
  void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) override;
  void JoinGroup(::network::mojom::blink::IPAddressPtr group_address, JoinGroupCallback callback) override;
  void LeaveGroup(::network::mojom::blink::IPAddressPtr group_address, LeaveGroupCallback callback) override;
  void ReceiveMore(uint32_t num_additional_datagrams) override;
  void ReceiveMoreWithBufferSize(uint32_t num_additional_datagrams, uint32_t buffer_size) override;
  void SendTo(::network::mojom::blink::IPEndPointPtr dest_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, SendToCallback callback) override;
  void Send(::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, SendCallback callback) override;
  void Close() override;
};
class BLINK_PLATFORM_EXPORT UDPSocketAsyncWaiter {
 public:
  explicit UDPSocketAsyncWaiter(UDPSocket* proxy);
  ~UDPSocketAsyncWaiter();
  void Bind(
      ::network::mojom::blink::IPEndPointPtr local_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr_out);
  void Connect(
      ::network::mojom::blink::IPEndPointPtr remote_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr_out);
  void SetBroadcast(
      bool broadcast, int32_t* out_result);
  void SetSendBufferSize(
      int32_t send_buffer_size, int32_t* out_result);
  void SetReceiveBufferSize(
      int32_t receive_buffer_size, int32_t* out_result);
  void JoinGroup(
      ::network::mojom::blink::IPAddressPtr group_address, int32_t* out_result);
  void LeaveGroup(
      ::network::mojom::blink::IPAddressPtr group_address, int32_t* out_result);
  void SendTo(
      ::network::mojom::blink::IPEndPointPtr dest_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, int32_t* out_result);
  void Send(
      ::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, int32_t* out_result);

 private:
  UDPSocket* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocketAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT UDPSocketReceiverInterceptorForTesting : public UDPSocketReceiver {
  virtual UDPSocketReceiver* GetForwardingInterface() = 0;
  void OnReceived(int32_t result, ::network::mojom::blink::IPEndPointPtr src_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr data) override;
};
class BLINK_PLATFORM_EXPORT UDPSocketReceiverAsyncWaiter {
 public:
  explicit UDPSocketReceiverAsyncWaiter(UDPSocketReceiver* proxy);
  ~UDPSocketReceiverAsyncWaiter();

 private:
  UDPSocketReceiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocketReceiverAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_TEST_UTILS_H_