// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "services/network/public/mojom/udp_socket.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/network/public/mojom/udp_socket.mojom-params-data.h"
#include "services/network/public/mojom/udp_socket.mojom-shared-message-ids.h"

#include "services/network/public/mojom/udp_socket.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
UDPSocketOptions::UDPSocketOptions()
    : allow_address_reuse(false),
      allow_broadcast(false),
      allow_address_sharing_for_multicast(false),
      multicast_interface(0U),
      multicast_time_to_live(1U),
      multicast_loopback_mode(true),
      send_buffer_size(0),
      receive_buffer_size(0) {}

UDPSocketOptions::UDPSocketOptions(
    bool allow_address_reuse_in,
    bool allow_broadcast_in,
    bool allow_address_sharing_for_multicast_in,
    uint32_t multicast_interface_in,
    uint32_t multicast_time_to_live_in,
    bool multicast_loopback_mode_in,
    int32_t send_buffer_size_in,
    int32_t receive_buffer_size_in)
    : allow_address_reuse(std::move(allow_address_reuse_in)),
      allow_broadcast(std::move(allow_broadcast_in)),
      allow_address_sharing_for_multicast(std::move(allow_address_sharing_for_multicast_in)),
      multicast_interface(std::move(multicast_interface_in)),
      multicast_time_to_live(std::move(multicast_time_to_live_in)),
      multicast_loopback_mode(std::move(multicast_loopback_mode_in)),
      send_buffer_size(std::move(send_buffer_size_in)),
      receive_buffer_size(std::move(receive_buffer_size_in)) {}

UDPSocketOptions::~UDPSocketOptions() = default;
size_t UDPSocketOptions::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->allow_address_reuse);
  seed = mojo::internal::WTFHash(seed, this->allow_broadcast);
  seed = mojo::internal::WTFHash(seed, this->allow_address_sharing_for_multicast);
  seed = mojo::internal::WTFHash(seed, this->multicast_interface);
  seed = mojo::internal::WTFHash(seed, this->multicast_time_to_live);
  seed = mojo::internal::WTFHash(seed, this->multicast_loopback_mode);
  seed = mojo::internal::WTFHash(seed, this->send_buffer_size);
  seed = mojo::internal::WTFHash(seed, this->receive_buffer_size);
  return seed;
}

bool UDPSocketOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char UDPSocket::Name_[] = "network.mojom.UDPSocket";

class UDPSocket_Bind_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_Bind_ForwardToCallback(
      UDPSocket::BindCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::BindCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_Bind_ForwardToCallback);
};

class UDPSocket_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_Connect_ForwardToCallback(
      UDPSocket::ConnectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::ConnectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_Connect_ForwardToCallback);
};

class UDPSocket_SetBroadcast_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SetBroadcast_ForwardToCallback(
      UDPSocket::SetBroadcastCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SetBroadcastCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetBroadcast_ForwardToCallback);
};

class UDPSocket_SetSendBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SetSendBufferSize_ForwardToCallback(
      UDPSocket::SetSendBufferSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SetSendBufferSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetSendBufferSize_ForwardToCallback);
};

class UDPSocket_SetReceiveBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SetReceiveBufferSize_ForwardToCallback(
      UDPSocket::SetReceiveBufferSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SetReceiveBufferSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetReceiveBufferSize_ForwardToCallback);
};

class UDPSocket_JoinGroup_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_JoinGroup_ForwardToCallback(
      UDPSocket::JoinGroupCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::JoinGroupCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_JoinGroup_ForwardToCallback);
};

class UDPSocket_LeaveGroup_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_LeaveGroup_ForwardToCallback(
      UDPSocket::LeaveGroupCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::LeaveGroupCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_LeaveGroup_ForwardToCallback);
};

class UDPSocket_SendTo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SendTo_ForwardToCallback(
      UDPSocket::SendToCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SendToCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SendTo_ForwardToCallback);
};

class UDPSocket_Send_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_Send_ForwardToCallback(
      UDPSocket::SendCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SendCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(UDPSocket_Send_ForwardToCallback);
};

UDPSocketProxy::UDPSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UDPSocketProxy::Bind(
    ::network::mojom::blink::IPEndPointPtr in_local_addr, UDPSocketOptionsPtr in_socket_options, BindCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::Bind");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Bind_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Bind_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_addr in UDPSocket.Bind request");
  typename decltype(params->socket_options)::BaseType::BufferWriter
      socket_options_writer;
  mojo::internal::Serialize<::network::mojom::UDPSocketOptionsDataView>(
      in_socket_options, buffer, &socket_options_writer, &serialization_context);
  params->socket_options.Set(
      socket_options_writer.is_null() ? nullptr : socket_options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Bind");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_Bind_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::Connect(
    ::network::mojom::blink::IPEndPointPtr in_remote_addr, UDPSocketOptionsPtr in_socket_options, ConnectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::Connect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->remote_addr)::BaseType::BufferWriter
      remote_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_remote_addr, buffer, &remote_addr_writer, &serialization_context);
  params->remote_addr.Set(
      remote_addr_writer.is_null() ? nullptr : remote_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_addr in UDPSocket.Connect request");
  typename decltype(params->socket_options)::BaseType::BufferWriter
      socket_options_writer;
  mojo::internal::Serialize<::network::mojom::UDPSocketOptionsDataView>(
      in_socket_options, buffer, &socket_options_writer, &serialization_context);
  params->socket_options.Set(
      socket_options_writer.is_null() ? nullptr : socket_options_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Connect");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_Connect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::SetBroadcast(
    bool in_broadcast, SetBroadcastCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SetBroadcast");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SetBroadcast_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SetBroadcast_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->broadcast = in_broadcast;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SetBroadcast");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_SetBroadcast_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::SetSendBufferSize(
    int32_t in_send_buffer_size, SetSendBufferSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SetSendBufferSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SetSendBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SetSendBufferSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->send_buffer_size = in_send_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SetSendBufferSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_SetSendBufferSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::SetReceiveBufferSize(
    int32_t in_receive_buffer_size, SetReceiveBufferSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SetReceiveBufferSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SetReceiveBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SetReceiveBufferSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->receive_buffer_size = in_receive_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SetReceiveBufferSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_SetReceiveBufferSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::JoinGroup(
    ::network::mojom::blink::IPAddressPtr in_group_address, JoinGroupCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::JoinGroup");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_JoinGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_JoinGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->group_address)::BaseType::BufferWriter
      group_address_writer;
  mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
      in_group_address, buffer, &group_address_writer, &serialization_context);
  params->group_address.Set(
      group_address_writer.is_null() ? nullptr : group_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_address in UDPSocket.JoinGroup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("JoinGroup");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_JoinGroup_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::LeaveGroup(
    ::network::mojom::blink::IPAddressPtr in_group_address, LeaveGroupCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::LeaveGroup");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_LeaveGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_LeaveGroup_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->group_address)::BaseType::BufferWriter
      group_address_writer;
  mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
      in_group_address, buffer, &group_address_writer, &serialization_context);
  params->group_address.Set(
      group_address_writer.is_null() ? nullptr : group_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group_address in UDPSocket.LeaveGroup request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("LeaveGroup");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_LeaveGroup_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::ReceiveMore(
    uint32_t in_num_additional_datagrams) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::ReceiveMore");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_ReceiveMore_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_ReceiveMore_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_additional_datagrams = in_num_additional_datagrams;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("ReceiveMore");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UDPSocketProxy::ReceiveMoreWithBufferSize(
    uint32_t in_num_additional_datagrams, uint32_t in_buffer_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::ReceiveMoreWithBufferSize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_ReceiveMoreWithBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_additional_datagrams = in_num_additional_datagrams;
  params->buffer_size = in_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("ReceiveMoreWithBufferSize");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void UDPSocketProxy::SendTo(
    ::network::mojom::blink::IPEndPointPtr in_dest_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr in_data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr in_traffic_annotation, SendToCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SendTo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SendTo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SendTo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->dest_addr)::BaseType::BufferWriter
      dest_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_dest_addr, buffer, &dest_addr_writer, &serialization_context);
  params->dest_addr.Set(
      dest_addr_writer.is_null() ? nullptr : dest_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dest_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dest_addr in UDPSocket.SendTo request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in UDPSocket.SendTo request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in UDPSocket.SendTo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SendTo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_SendTo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::Send(
    ::mojo_base::mojom::blink::ReadOnlyBufferPtr in_data, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr in_traffic_annotation, SendCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::Send");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Send_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Send_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in UDPSocket.Send request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in UDPSocket.Send request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Send");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new UDPSocket_Send_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void UDPSocketProxy::Close(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::Close");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Close_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Close_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Close");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class UDPSocket_Bind_ProxyToResponder {
 public:
  static UDPSocket::BindCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_Bind_ProxyToResponder> proxy(
        new UDPSocket_Bind_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_Bind_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_Bind_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_Bind_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::BindCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, ::network::mojom::blink::IPEndPointPtr in_local_addr_out);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_Bind_ProxyToResponder);
};

bool UDPSocket_Bind_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::BindCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_Bind_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_Bind_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  ::network::mojom::blink::IPEndPointPtr p_local_addr_out{};
  UDPSocket_Bind_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadLocalAddrOut(&p_local_addr_out))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr_out));
  return true;
}

void UDPSocket_Bind_ProxyToResponder::Run(
    int32_t in_result, ::network::mojom::blink::IPEndPointPtr in_local_addr_out) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Bind_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Bind_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->local_addr_out)::BaseType::BufferWriter
      local_addr_out_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr_out, buffer, &local_addr_out_writer, &serialization_context);
  params->local_addr_out.Set(
      local_addr_out_writer.is_null() ? nullptr : local_addr_out_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::BindCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Bind");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_Connect_ProxyToResponder {
 public:
  static UDPSocket::ConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_Connect_ProxyToResponder> proxy(
        new UDPSocket_Connect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_Connect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_Connect_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_Connect_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::ConnectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, ::network::mojom::blink::IPEndPointPtr in_local_addr_out);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_Connect_ProxyToResponder);
};

bool UDPSocket_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::ConnectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_Connect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_Connect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  ::network::mojom::blink::IPEndPointPtr p_local_addr_out{};
  UDPSocket_Connect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadLocalAddrOut(&p_local_addr_out))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr_out));
  return true;
}

void UDPSocket_Connect_ProxyToResponder::Run(
    int32_t in_result, ::network::mojom::blink::IPEndPointPtr in_local_addr_out) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Connect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->local_addr_out)::BaseType::BufferWriter
      local_addr_out_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr_out, buffer, &local_addr_out_writer, &serialization_context);
  params->local_addr_out.Set(
      local_addr_out_writer.is_null() ? nullptr : local_addr_out_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::ConnectCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Connect");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_SetBroadcast_ProxyToResponder {
 public:
  static UDPSocket::SetBroadcastCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_SetBroadcast_ProxyToResponder> proxy(
        new UDPSocket_SetBroadcast_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_SetBroadcast_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_SetBroadcast_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_SetBroadcast_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::SetBroadcastCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetBroadcast_ProxyToResponder);
};

bool UDPSocket_SetBroadcast_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SetBroadcastCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_SetBroadcast_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_SetBroadcast_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_SetBroadcast_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_SetBroadcast_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SetBroadcast_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SetBroadcast_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SetBroadcastCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SetBroadcast");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_SetSendBufferSize_ProxyToResponder {
 public:
  static UDPSocket::SetSendBufferSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_SetSendBufferSize_ProxyToResponder> proxy(
        new UDPSocket_SetSendBufferSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_SetSendBufferSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_SetSendBufferSize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_SetSendBufferSize_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::SetSendBufferSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetSendBufferSize_ProxyToResponder);
};

bool UDPSocket_SetSendBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SetSendBufferSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_SetSendBufferSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_SetSendBufferSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_SetSendBufferSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_SetSendBufferSize_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SetSendBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SetSendBufferSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SetSendBufferSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SetSendBufferSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_SetReceiveBufferSize_ProxyToResponder {
 public:
  static UDPSocket::SetReceiveBufferSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_SetReceiveBufferSize_ProxyToResponder> proxy(
        new UDPSocket_SetReceiveBufferSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_SetReceiveBufferSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_SetReceiveBufferSize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_SetReceiveBufferSize_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::SetReceiveBufferSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetReceiveBufferSize_ProxyToResponder);
};

bool UDPSocket_SetReceiveBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SetReceiveBufferSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_SetReceiveBufferSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_SetReceiveBufferSize_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SetReceiveBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SetReceiveBufferSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SetReceiveBufferSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_JoinGroup_ProxyToResponder {
 public:
  static UDPSocket::JoinGroupCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_JoinGroup_ProxyToResponder> proxy(
        new UDPSocket_JoinGroup_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_JoinGroup_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_JoinGroup_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_JoinGroup_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::JoinGroupCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_JoinGroup_ProxyToResponder);
};

bool UDPSocket_JoinGroup_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::JoinGroupCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_JoinGroup_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_JoinGroup_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_JoinGroup_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_JoinGroup_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_JoinGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_JoinGroup_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::JoinGroupCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("JoinGroup");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_LeaveGroup_ProxyToResponder {
 public:
  static UDPSocket::LeaveGroupCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_LeaveGroup_ProxyToResponder> proxy(
        new UDPSocket_LeaveGroup_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_LeaveGroup_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_LeaveGroup_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_LeaveGroup_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::LeaveGroupCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_LeaveGroup_ProxyToResponder);
};

bool UDPSocket_LeaveGroup_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::LeaveGroupCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_LeaveGroup_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_LeaveGroup_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_LeaveGroup_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_LeaveGroup_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_LeaveGroup_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_LeaveGroup_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::LeaveGroupCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("LeaveGroup");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_SendTo_ProxyToResponder {
 public:
  static UDPSocket::SendToCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_SendTo_ProxyToResponder> proxy(
        new UDPSocket_SendTo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_SendTo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_SendTo_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_SendTo_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::SendToCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_SendTo_ProxyToResponder);
};

bool UDPSocket_SendTo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SendToCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_SendTo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_SendTo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_SendTo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_SendTo_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_SendTo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_SendTo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SendToCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("SendTo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class UDPSocket_Send_ProxyToResponder {
 public:
  static UDPSocket::SendCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<UDPSocket_Send_ProxyToResponder> proxy(
        new UDPSocket_Send_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&UDPSocket_Send_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~UDPSocket_Send_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  UDPSocket_Send_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "UDPSocket::SendCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(UDPSocket_Send_ProxyToResponder);
};

bool UDPSocket_Send_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocket::SendCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::UDPSocket_Send_ResponseParams_Data* params =
      reinterpret_cast<
          internal::UDPSocket_Send_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  UDPSocket_Send_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        UDPSocket::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void UDPSocket_Send_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocket_Send_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocket_Send_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SendCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocket::Name_);
  message.set_method_name("Send");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool UDPSocketStubDispatch::Accept(
    UDPSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUDPSocket_Bind_Name: {
      break;
    }
    case internal::kUDPSocket_Connect_Name: {
      break;
    }
    case internal::kUDPSocket_SetBroadcast_Name: {
      break;
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      break;
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      break;
    }
    case internal::kUDPSocket_JoinGroup_Name: {
      break;
    }
    case internal::kUDPSocket_LeaveGroup_Name: {
      break;
    }
    case internal::kUDPSocket_ReceiveMore_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::ReceiveMore",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UDPSocket_ReceiveMore_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_ReceiveMore_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_num_additional_datagrams{};
      UDPSocket_ReceiveMore_ParamsDataView input_data_view(params, &serialization_context);
      
      p_num_additional_datagrams = input_data_view.num_additional_datagrams();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReceiveMore(
std::move(p_num_additional_datagrams));
      return true;
    }
    case internal::kUDPSocket_ReceiveMoreWithBufferSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::ReceiveMoreWithBufferSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_num_additional_datagrams{};
      uint32_t p_buffer_size{};
      UDPSocket_ReceiveMoreWithBufferSize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_num_additional_datagrams = input_data_view.num_additional_datagrams();
      p_buffer_size = input_data_view.buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReceiveMoreWithBufferSize(
std::move(p_num_additional_datagrams), 
std::move(p_buffer_size));
      return true;
    }
    case internal::kUDPSocket_SendTo_Name: {
      break;
    }
    case internal::kUDPSocket_Send_Name: {
      break;
    }
    case internal::kUDPSocket_Close_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::Close",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UDPSocket_Close_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_Close_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      UDPSocket_Close_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Close();
      return true;
    }
  }
  return false;
}

// static
bool UDPSocketStubDispatch::AcceptWithResponder(
    UDPSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUDPSocket_Bind_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::Bind",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_Bind_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_Bind_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPEndPointPtr p_local_addr{};
      UDPSocketOptionsPtr p_socket_options{};
      UDPSocket_Bind_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddr(&p_local_addr))
        success = false;
      if (!input_data_view.ReadSocketOptions(&p_socket_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 0, false);
        return false;
      }
      UDPSocket::BindCallback callback =
          UDPSocket_Bind_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Bind(
std::move(p_local_addr), 
std::move(p_socket_options), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::Connect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_Connect_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_Connect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPEndPointPtr p_remote_addr{};
      UDPSocketOptionsPtr p_socket_options{};
      UDPSocket_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRemoteAddr(&p_remote_addr))
        success = false;
      if (!input_data_view.ReadSocketOptions(&p_socket_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 1, false);
        return false;
      }
      UDPSocket::ConnectCallback callback =
          UDPSocket_Connect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Connect(
std::move(p_remote_addr), 
std::move(p_socket_options), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_SetBroadcast_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SetBroadcast",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_SetBroadcast_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_SetBroadcast_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_broadcast{};
      UDPSocket_SetBroadcast_ParamsDataView input_data_view(params, &serialization_context);
      
      p_broadcast = input_data_view.broadcast();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 2, false);
        return false;
      }
      UDPSocket::SetBroadcastCallback callback =
          UDPSocket_SetBroadcast_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetBroadcast(
std::move(p_broadcast), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SetSendBufferSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_SetSendBufferSize_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_SetSendBufferSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_send_buffer_size{};
      UDPSocket_SetSendBufferSize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_send_buffer_size = input_data_view.send_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 3, false);
        return false;
      }
      UDPSocket::SetSendBufferSizeCallback callback =
          UDPSocket_SetSendBufferSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSendBufferSize(
std::move(p_send_buffer_size), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SetReceiveBufferSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_SetReceiveBufferSize_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_SetReceiveBufferSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_receive_buffer_size{};
      UDPSocket_SetReceiveBufferSize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_receive_buffer_size = input_data_view.receive_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 4, false);
        return false;
      }
      UDPSocket::SetReceiveBufferSizeCallback callback =
          UDPSocket_SetReceiveBufferSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetReceiveBufferSize(
std::move(p_receive_buffer_size), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_JoinGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::JoinGroup",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_JoinGroup_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_JoinGroup_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPAddressPtr p_group_address{};
      UDPSocket_JoinGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGroupAddress(&p_group_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 5, false);
        return false;
      }
      UDPSocket::JoinGroupCallback callback =
          UDPSocket_JoinGroup_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->JoinGroup(
std::move(p_group_address), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_LeaveGroup_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::LeaveGroup",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_LeaveGroup_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_LeaveGroup_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPAddressPtr p_group_address{};
      UDPSocket_LeaveGroup_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadGroupAddress(&p_group_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 6, false);
        return false;
      }
      UDPSocket::LeaveGroupCallback callback =
          UDPSocket_LeaveGroup_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LeaveGroup(
std::move(p_group_address), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_ReceiveMore_Name: {
      break;
    }
    case internal::kUDPSocket_ReceiveMoreWithBufferSize_Name: {
      break;
    }
    case internal::kUDPSocket_SendTo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::SendTo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_SendTo_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_SendTo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPEndPointPtr p_dest_addr{};
      ::mojo_base::mojom::blink::ReadOnlyBufferPtr p_data{};
      ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr p_traffic_annotation{};
      UDPSocket_SendTo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDestAddr(&p_dest_addr))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 9, false);
        return false;
      }
      UDPSocket::SendToCallback callback =
          UDPSocket_SendTo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendTo(
std::move(p_dest_addr), 
std::move(p_data), 
std::move(p_traffic_annotation), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_Send_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocket::Send",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::UDPSocket_Send_Params_Data* params =
          reinterpret_cast<
              internal::UDPSocket_Send_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::mojo_base::mojom::blink::ReadOnlyBufferPtr p_data{};
      ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr p_traffic_annotation{};
      UDPSocket_Send_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocket::Name_, 10, false);
        return false;
      }
      UDPSocket::SendCallback callback =
          UDPSocket_Send_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Send(
std::move(p_data), 
std::move(p_traffic_annotation), std::move(callback));
      return true;
    }
    case internal::kUDPSocket_Close_Name: {
      break;
    }
  }
  return false;
}

bool UDPSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UDPSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kUDPSocket_Bind_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Bind_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Connect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SetBroadcast_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetBroadcast_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetSendBufferSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetReceiveBufferSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_JoinGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_JoinGroup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_LeaveGroup_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_LeaveGroup_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_ReceiveMore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_ReceiveMore_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_ReceiveMoreWithBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_ReceiveMoreWithBufferSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SendTo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SendTo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_Send_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Send_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Close_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool UDPSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UDPSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kUDPSocket_Bind_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Bind_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Connect_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SetBroadcast_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetBroadcast_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetSendBufferSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_JoinGroup_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_JoinGroup_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_LeaveGroup_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_LeaveGroup_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_SendTo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SendTo_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kUDPSocket_Send_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Send_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char UDPSocketReceiver::Name_[] = "network.mojom.UDPSocketReceiver";

UDPSocketReceiverProxy::UDPSocketReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void UDPSocketReceiverProxy::OnReceived(
    int32_t in_result, ::network::mojom::blink::IPEndPointPtr in_src_addr, ::mojo_base::mojom::blink::ReadOnlyBufferPtr in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::UDPSocketReceiver::OnReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kUDPSocketReceiver_OnReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::UDPSocketReceiver_OnReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->src_addr)::BaseType::BufferWriter
      src_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_src_addr, buffer, &src_addr_writer, &serialization_context);
  params->src_addr.Set(
      src_addr_writer.is_null() ? nullptr : src_addr_writer.data());
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlyBufferDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(UDPSocketReceiver::Name_);
  message.set_method_name("OnReceived");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool UDPSocketReceiverStubDispatch::Accept(
    UDPSocketReceiver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kUDPSocketReceiver_OnReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::UDPSocketReceiver::OnReceived",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::UDPSocketReceiver_OnReceived_Params_Data* params =
          reinterpret_cast<internal::UDPSocketReceiver_OnReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_result{};
      ::network::mojom::blink::IPEndPointPtr p_src_addr{};
      ::mojo_base::mojom::blink::ReadOnlyBufferPtr p_data{};
      UDPSocketReceiver_OnReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      p_result = input_data_view.result();
      if (!input_data_view.ReadSrcAddr(&p_src_addr))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            UDPSocketReceiver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReceived(
std::move(p_result), 
std::move(p_src_addr), 
std::move(p_data));
      return true;
    }
  }
  return false;
}

// static
bool UDPSocketReceiverStubDispatch::AcceptWithResponder(
    UDPSocketReceiver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kUDPSocketReceiver_OnReceived_Name: {
      break;
    }
  }
  return false;
}

bool UDPSocketReceiverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "UDPSocketReceiver RequestValidator");

  switch (message->header()->name) {
    case internal::kUDPSocketReceiver_OnReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocketReceiver_OnReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::UDPSocketOptions::DataView, ::network::mojom::blink::UDPSocketOptionsPtr>::Read(
    ::network::mojom::blink::UDPSocketOptions::DataView input,
    ::network::mojom::blink::UDPSocketOptionsPtr* output) {
  bool success = true;
  ::network::mojom::blink::UDPSocketOptionsPtr result(::network::mojom::blink::UDPSocketOptions::New());
  
      result->allow_address_reuse = input.allow_address_reuse();
      result->allow_broadcast = input.allow_broadcast();
      result->allow_address_sharing_for_multicast = input.allow_address_sharing_for_multicast();
      result->multicast_interface = input.multicast_interface();
      result->multicast_time_to_live = input.multicast_time_to_live();
      result->multicast_loopback_mode = input.multicast_loopback_mode();
      result->send_buffer_size = input.send_buffer_size();
      result->receive_buffer_size = input.receive_buffer_size();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif