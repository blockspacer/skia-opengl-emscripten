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


#include "services/network/public/mojom/udp_socket.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-blink.h"
#include "services/network/public/mojom/ip_address.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_JUMBO_H_
#endif


namespace network {
namespace mojom {
namespace blink {


void UDPSocketInterceptorForTesting::Bind(::network::mojom::blink::IPEndPointPtr local_addr, UDPSocketOptionsPtr socket_options, BindCallback callback) {
  GetForwardingInterface()->Bind(std::move(local_addr), std::move(socket_options), std::move(callback));
}
void UDPSocketInterceptorForTesting::Connect(::network::mojom::blink::IPEndPointPtr remote_addr, UDPSocketOptionsPtr socket_options, ConnectCallback callback) {
  GetForwardingInterface()->Connect(std::move(remote_addr), std::move(socket_options), std::move(callback));
}
void UDPSocketInterceptorForTesting::SetBroadcast(bool broadcast, SetBroadcastCallback callback) {
  GetForwardingInterface()->SetBroadcast(std::move(broadcast), std::move(callback));
}
void UDPSocketInterceptorForTesting::SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) {
  GetForwardingInterface()->SetSendBufferSize(std::move(send_buffer_size), std::move(callback));
}
void UDPSocketInterceptorForTesting::SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) {
  GetForwardingInterface()->SetReceiveBufferSize(std::move(receive_buffer_size), std::move(callback));
}
void UDPSocketInterceptorForTesting::JoinGroup(::network::mojom::blink::IPAddressPtr group_address, JoinGroupCallback callback) {
  GetForwardingInterface()->JoinGroup(std::move(group_address), std::move(callback));
}
void UDPSocketInterceptorForTesting::LeaveGroup(::network::mojom::blink::IPAddressPtr group_address, LeaveGroupCallback callback) {
  GetForwardingInterface()->LeaveGroup(std::move(group_address), std::move(callback));
}
void UDPSocketInterceptorForTesting::ReceiveMore(uint32_t num_additional_datagrams) {
  GetForwardingInterface()->ReceiveMore(std::move(num_additional_datagrams));
}
void UDPSocketInterceptorForTesting::ReceiveMoreWithBufferSize(uint32_t num_additional_datagrams, uint32_t buffer_size) {
  GetForwardingInterface()->ReceiveMoreWithBufferSize(std::move(num_additional_datagrams), std::move(buffer_size));
}
void UDPSocketInterceptorForTesting::SendTo(::network::mojom::blink::IPEndPointPtr dest_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, SendToCallback callback) {
  GetForwardingInterface()->SendTo(std::move(dest_addr), std::move(data), std::move(traffic_annotation), std::move(callback));
}
void UDPSocketInterceptorForTesting::Send(::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, SendCallback callback) {
  GetForwardingInterface()->Send(std::move(data), std::move(traffic_annotation), std::move(callback));
}
void UDPSocketInterceptorForTesting::Close() {
  GetForwardingInterface()->Close();
}
UDPSocketAsyncWaiter::UDPSocketAsyncWaiter(
    UDPSocket* proxy) : proxy_(proxy) {}

UDPSocketAsyncWaiter::~UDPSocketAsyncWaiter() = default;

void UDPSocketAsyncWaiter::Bind(
    ::network::mojom::blink::IPEndPointPtr local_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr_out) {
  base::RunLoop loop;
  proxy_->Bind(std::move(local_addr),std::move(socket_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             ::network::mojom::blink::IPEndPointPtr* out_local_addr_out
,
             int32_t result,
             ::network::mojom::blink::IPEndPointPtr local_addr_out) {*out_result = std::move(result);*out_local_addr_out = std::move(local_addr_out);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr_out));
  loop.Run();
}
void UDPSocketAsyncWaiter::Connect(
    ::network::mojom::blink::IPEndPointPtr remote_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr_out) {
  base::RunLoop loop;
  proxy_->Connect(std::move(remote_addr),std::move(socket_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             ::network::mojom::blink::IPEndPointPtr* out_local_addr_out
,
             int32_t result,
             ::network::mojom::blink::IPEndPointPtr local_addr_out) {*out_result = std::move(result);*out_local_addr_out = std::move(local_addr_out);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr_out));
  loop.Run();
}
void UDPSocketAsyncWaiter::SetBroadcast(
    bool broadcast, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->SetBroadcast(std::move(broadcast),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UDPSocketAsyncWaiter::SetSendBufferSize(
    int32_t send_buffer_size, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->SetSendBufferSize(std::move(send_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UDPSocketAsyncWaiter::SetReceiveBufferSize(
    int32_t receive_buffer_size, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->SetReceiveBufferSize(std::move(receive_buffer_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UDPSocketAsyncWaiter::JoinGroup(
    ::network::mojom::blink::IPAddressPtr group_address, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->JoinGroup(std::move(group_address),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UDPSocketAsyncWaiter::LeaveGroup(
    ::network::mojom::blink::IPAddressPtr group_address, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->LeaveGroup(std::move(group_address),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UDPSocketAsyncWaiter::SendTo(
    ::network::mojom::blink::IPEndPointPtr dest_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->SendTo(std::move(dest_addr),std::move(data),std::move(traffic_annotation),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void UDPSocketAsyncWaiter::Send(
    ::mojo_base::mojom::blink::ReadOnlyBufferPtr data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->Send(std::move(data),std::move(traffic_annotation),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void UDPSocketReceiverInterceptorForTesting::OnReceived(int32_t result, ::network::mojom::blink::IPEndPointPtr src_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr data) {
  GetForwardingInterface()->OnReceived(std::move(result), std::move(src_addr), std::move(data));
}
UDPSocketReceiverAsyncWaiter::UDPSocketReceiverAsyncWaiter(
    UDPSocketReceiver* proxy) : proxy_(proxy) {}

UDPSocketReceiverAsyncWaiter::~UDPSocketReceiverAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif