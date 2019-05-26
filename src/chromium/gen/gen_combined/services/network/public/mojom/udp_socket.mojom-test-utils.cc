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


#include "services/network/public/mojom/udp_socket.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom.h"
#include "services/network/public/mojom/ip_address.mojom.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/read_only_buffer_mojom_traits.h"
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void UDPSocketInterceptorForTesting::Bind(const net::IPEndPoint& local_addr, UDPSocketOptionsPtr socket_options, BindCallback callback) {
  GetForwardingInterface()->Bind(std::move(local_addr), std::move(socket_options), std::move(callback));
}
void UDPSocketInterceptorForTesting::Connect(const net::IPEndPoint& remote_addr, UDPSocketOptionsPtr socket_options, ConnectCallback callback) {
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
void UDPSocketInterceptorForTesting::JoinGroup(const net::IPAddress& group_address, JoinGroupCallback callback) {
  GetForwardingInterface()->JoinGroup(std::move(group_address), std::move(callback));
}
void UDPSocketInterceptorForTesting::LeaveGroup(const net::IPAddress& group_address, LeaveGroupCallback callback) {
  GetForwardingInterface()->LeaveGroup(std::move(group_address), std::move(callback));
}
void UDPSocketInterceptorForTesting::ReceiveMore(uint32_t num_additional_datagrams) {
  GetForwardingInterface()->ReceiveMore(std::move(num_additional_datagrams));
}
void UDPSocketInterceptorForTesting::ReceiveMoreWithBufferSize(uint32_t num_additional_datagrams, uint32_t buffer_size) {
  GetForwardingInterface()->ReceiveMoreWithBufferSize(std::move(num_additional_datagrams), std::move(buffer_size));
}
void UDPSocketInterceptorForTesting::SendTo(const net::IPEndPoint& dest_addr, base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendToCallback callback) {
  GetForwardingInterface()->SendTo(std::move(dest_addr), std::move(data), std::move(traffic_annotation), std::move(callback));
}
void UDPSocketInterceptorForTesting::Send(base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendCallback callback) {
  GetForwardingInterface()->Send(std::move(data), std::move(traffic_annotation), std::move(callback));
}
void UDPSocketInterceptorForTesting::Close() {
  GetForwardingInterface()->Close();
}
UDPSocketAsyncWaiter::UDPSocketAsyncWaiter(
    UDPSocket* proxy) : proxy_(proxy) {}

UDPSocketAsyncWaiter::~UDPSocketAsyncWaiter() = default;

void UDPSocketAsyncWaiter::Bind(
    const net::IPEndPoint& local_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out) {
  base::RunLoop loop;
  proxy_->Bind(std::move(local_addr),std::move(socket_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr_out
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr_out) {*out_result = std::move(result);*out_local_addr_out = std::move(local_addr_out);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr_out));
  loop.Run();
}
void UDPSocketAsyncWaiter::Connect(
    const net::IPEndPoint& remote_addr, UDPSocketOptionsPtr socket_options, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out) {
  base::RunLoop loop;
  proxy_->Connect(std::move(remote_addr),std::move(socket_options),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr_out
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr_out) {*out_result = std::move(result);*out_local_addr_out = std::move(local_addr_out);
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
    const net::IPAddress& group_address, int32_t* out_result) {
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
    const net::IPAddress& group_address, int32_t* out_result) {
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
    const net::IPEndPoint& dest_addr, base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, int32_t* out_result) {
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
    base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, int32_t* out_result) {
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



void UDPSocketReceiverInterceptorForTesting::OnReceived(int32_t result, const base::Optional<net::IPEndPoint>& src_addr, base::Optional<base::span<const uint8_t>> data) {
  GetForwardingInterface()->OnReceived(std::move(result), std::move(src_addr), std::move(data));
}
UDPSocketReceiverAsyncWaiter::UDPSocketReceiverAsyncWaiter(
    UDPSocketReceiver* proxy) : proxy_(proxy) {}

UDPSocketReceiverAsyncWaiter::~UDPSocketReceiverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif