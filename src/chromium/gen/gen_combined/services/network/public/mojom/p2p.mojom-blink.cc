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

#include "services/network/public/mojom/p2p.mojom-blink.h"

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

#include "services/network/public/mojom/p2p.mojom-params-data.h"
#include "services/network/public/mojom/p2p.mojom-shared-message-ids.h"

#include "services/network/public/mojom/p2p.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
const char P2PNetworkNotificationClient::Name_[] = "network.mojom.P2PNetworkNotificationClient";

P2PNetworkNotificationClientProxy::P2PNetworkNotificationClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PNetworkNotificationClientProxy::NetworkListChanged(
    WTF::Vector<::network::mojom::blink::NetworkInterfacePtr> in_networks, ::network::mojom::blink::IPAddressPtr in_default_ipv4_local_address, ::network::mojom::blink::IPAddressPtr in_default_ipv6_local_address) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PNetworkNotificationClient::NetworkListChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PNetworkNotificationClient_NetworkListChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PNetworkNotificationClient_NetworkListChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->networks)::BaseType::BufferWriter
      networks_writer;
  const mojo::internal::ContainerValidateParams networks_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::NetworkInterfaceDataView>>(
      in_networks, buffer, &networks_writer, &networks_validate_params,
      &serialization_context);
  params->networks.Set(
      networks_writer.is_null() ? nullptr : networks_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->networks.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null networks in P2PNetworkNotificationClient.NetworkListChanged request");
  typename decltype(params->default_ipv4_local_address)::BaseType::BufferWriter
      default_ipv4_local_address_writer;
  mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
      in_default_ipv4_local_address, buffer, &default_ipv4_local_address_writer, &serialization_context);
  params->default_ipv4_local_address.Set(
      default_ipv4_local_address_writer.is_null() ? nullptr : default_ipv4_local_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->default_ipv4_local_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null default_ipv4_local_address in P2PNetworkNotificationClient.NetworkListChanged request");
  typename decltype(params->default_ipv6_local_address)::BaseType::BufferWriter
      default_ipv6_local_address_writer;
  mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
      in_default_ipv6_local_address, buffer, &default_ipv6_local_address_writer, &serialization_context);
  params->default_ipv6_local_address.Set(
      default_ipv6_local_address_writer.is_null() ? nullptr : default_ipv6_local_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->default_ipv6_local_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null default_ipv6_local_address in P2PNetworkNotificationClient.NetworkListChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PNetworkNotificationClient::Name_);
  message.set_method_name("NetworkListChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool P2PNetworkNotificationClientStubDispatch::Accept(
    P2PNetworkNotificationClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PNetworkNotificationClient_NetworkListChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PNetworkNotificationClient::NetworkListChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PNetworkNotificationClient_NetworkListChanged_Params_Data* params =
          reinterpret_cast<internal::P2PNetworkNotificationClient_NetworkListChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<::network::mojom::blink::NetworkInterfacePtr> p_networks{};
      ::network::mojom::blink::IPAddressPtr p_default_ipv4_local_address{};
      ::network::mojom::blink::IPAddressPtr p_default_ipv6_local_address{};
      P2PNetworkNotificationClient_NetworkListChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNetworks(&p_networks))
        success = false;
      if (!input_data_view.ReadDefaultIpv4LocalAddress(&p_default_ipv4_local_address))
        success = false;
      if (!input_data_view.ReadDefaultIpv6LocalAddress(&p_default_ipv6_local_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PNetworkNotificationClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NetworkListChanged(
std::move(p_networks), 
std::move(p_default_ipv4_local_address), 
std::move(p_default_ipv6_local_address));
      return true;
    }
  }
  return false;
}

// static
bool P2PNetworkNotificationClientStubDispatch::AcceptWithResponder(
    P2PNetworkNotificationClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kP2PNetworkNotificationClient_NetworkListChanged_Name: {
      break;
    }
  }
  return false;
}

bool P2PNetworkNotificationClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PNetworkNotificationClient RequestValidator");

  switch (message->header()->name) {
    case internal::kP2PNetworkNotificationClient_NetworkListChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PNetworkNotificationClient_NetworkListChanged_Params_Data>(
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

const char P2PSocketManager::Name_[] = "network.mojom.P2PSocketManager";

class P2PSocketManager_GetHostAddress_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  P2PSocketManager_GetHostAddress_ForwardToCallback(
      P2PSocketManager::GetHostAddressCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  P2PSocketManager::GetHostAddressCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(P2PSocketManager_GetHostAddress_ForwardToCallback);
};

P2PSocketManagerProxy::P2PSocketManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PSocketManagerProxy::StartNetworkNotifications(
    P2PNetworkNotificationClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketManager::StartNetworkNotifications");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketManager_StartNetworkNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketManager_StartNetworkNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::P2PNetworkNotificationClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in P2PSocketManager.StartNetworkNotifications request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketManager::Name_);
  message.set_method_name("StartNetworkNotifications");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PSocketManagerProxy::GetHostAddress(
    const WTF::String& in_host_name, bool in_enable_mdns, GetHostAddressCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketManager::GetHostAddress");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketManager_GetHostAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketManager_GetHostAddress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_name)::BaseType::BufferWriter
      host_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host_name, buffer, &host_name_writer, &serialization_context);
  params->host_name.Set(
      host_name_writer.is_null() ? nullptr : host_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_name in P2PSocketManager.GetHostAddress request");
  params->enable_mdns = in_enable_mdns;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketManager::Name_);
  message.set_method_name("GetHostAddress");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new P2PSocketManager_GetHostAddress_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void P2PSocketManagerProxy::CreateSocket(
    P2PSocketType in_type, ::network::mojom::blink::IPEndPointPtr in_local_address, P2PPortRangePtr in_port_range, P2PHostAndIPEndPointPtr in_remote_address, P2PSocketClientPtr in_client, P2PSocketRequest in_socket) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketManager::CreateSocket");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketManager_CreateSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketManager_CreateSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::P2PSocketType>(
      in_type, &params->type);
  typename decltype(params->local_address)::BaseType::BufferWriter
      local_address_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_address, buffer, &local_address_writer, &serialization_context);
  params->local_address.Set(
      local_address_writer.is_null() ? nullptr : local_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_address in P2PSocketManager.CreateSocket request");
  typename decltype(params->port_range)::BaseType::BufferWriter
      port_range_writer;
  mojo::internal::Serialize<::network::mojom::P2PPortRangeDataView>(
      in_port_range, buffer, &port_range_writer, &serialization_context);
  params->port_range.Set(
      port_range_writer.is_null() ? nullptr : port_range_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->port_range.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null port_range in P2PSocketManager.CreateSocket request");
  typename decltype(params->remote_address)::BaseType::BufferWriter
      remote_address_writer;
  mojo::internal::Serialize<::network::mojom::P2PHostAndIPEndPointDataView>(
      in_remote_address, buffer, &remote_address_writer, &serialization_context);
  params->remote_address.Set(
      remote_address_writer.is_null() ? nullptr : remote_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_address in P2PSocketManager.CreateSocket request");
  mojo::internal::Serialize<::network::mojom::P2PSocketClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in P2PSocketManager.CreateSocket request");
  mojo::internal::Serialize<::network::mojom::P2PSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in P2PSocketManager.CreateSocket request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketManager::Name_);
  message.set_method_name("CreateSocket");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class P2PSocketManager_GetHostAddress_ProxyToResponder {
 public:
  static P2PSocketManager::GetHostAddressCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<P2PSocketManager_GetHostAddress_ProxyToResponder> proxy(
        new P2PSocketManager_GetHostAddress_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&P2PSocketManager_GetHostAddress_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~P2PSocketManager_GetHostAddress_ProxyToResponder() {
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
  P2PSocketManager_GetHostAddress_ProxyToResponder(
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
        << "P2PSocketManager::GetHostAddressCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<::network::mojom::blink::IPAddressPtr> in_addresses);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(P2PSocketManager_GetHostAddress_ProxyToResponder);
};

bool P2PSocketManager_GetHostAddress_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketManager::GetHostAddressCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::P2PSocketManager_GetHostAddress_ResponseParams_Data* params =
      reinterpret_cast<
          internal::P2PSocketManager_GetHostAddress_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<::network::mojom::blink::IPAddressPtr> p_addresses{};
  P2PSocketManager_GetHostAddress_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadAddresses(&p_addresses))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        P2PSocketManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_addresses));
  return true;
}

void P2PSocketManager_GetHostAddress_ProxyToResponder::Run(
    WTF::Vector<::network::mojom::blink::IPAddressPtr> in_addresses) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketManager_GetHostAddress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketManager_GetHostAddress_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->addresses)::BaseType::BufferWriter
      addresses_writer;
  const mojo::internal::ContainerValidateParams addresses_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::IPAddressDataView>>(
      in_addresses, buffer, &addresses_writer, &addresses_validate_params,
      &serialization_context);
  params->addresses.Set(
      addresses_writer.is_null() ? nullptr : addresses_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->addresses.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null addresses in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketManager::GetHostAddressCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketManager::Name_);
  message.set_method_name("GetHostAddress");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool P2PSocketManagerStubDispatch::Accept(
    P2PSocketManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PSocketManager_StartNetworkNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketManager::StartNetworkNotifications",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocketManager_StartNetworkNotifications_Params_Data* params =
          reinterpret_cast<internal::P2PSocketManager_StartNetworkNotifications_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      P2PNetworkNotificationClientPtr p_client{};
      P2PSocketManager_StartNetworkNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartNetworkNotifications(
std::move(p_client));
      return true;
    }
    case internal::kP2PSocketManager_GetHostAddress_Name: {
      break;
    }
    case internal::kP2PSocketManager_CreateSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketManager::CreateSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocketManager_CreateSocket_Params_Data* params =
          reinterpret_cast<internal::P2PSocketManager_CreateSocket_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      P2PSocketType p_type{};
      ::network::mojom::blink::IPEndPointPtr p_local_address{};
      P2PPortRangePtr p_port_range{};
      P2PHostAndIPEndPointPtr p_remote_address{};
      P2PSocketClientPtr p_client{};
      P2PSocketRequest p_socket{};
      P2PSocketManager_CreateSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadLocalAddress(&p_local_address))
        success = false;
      if (!input_data_view.ReadPortRange(&p_port_range))
        success = false;
      if (!input_data_view.ReadRemoteAddress(&p_remote_address))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketManager::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateSocket(
std::move(p_type), 
std::move(p_local_address), 
std::move(p_port_range), 
std::move(p_remote_address), 
std::move(p_client), 
std::move(p_socket));
      return true;
    }
  }
  return false;
}

// static
bool P2PSocketManagerStubDispatch::AcceptWithResponder(
    P2PSocketManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kP2PSocketManager_StartNetworkNotifications_Name: {
      break;
    }
    case internal::kP2PSocketManager_GetHostAddress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketManager::GetHostAddress",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::P2PSocketManager_GetHostAddress_Params_Data* params =
          reinterpret_cast<
              internal::P2PSocketManager_GetHostAddress_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_host_name{};
      bool p_enable_mdns{};
      P2PSocketManager_GetHostAddress_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostName(&p_host_name))
        success = false;
      p_enable_mdns = input_data_view.enable_mdns();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketManager::Name_, 1, false);
        return false;
      }
      P2PSocketManager::GetHostAddressCallback callback =
          P2PSocketManager_GetHostAddress_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetHostAddress(
std::move(p_host_name), 
std::move(p_enable_mdns), std::move(callback));
      return true;
    }
    case internal::kP2PSocketManager_CreateSocket_Name: {
      break;
    }
  }
  return false;
}

bool P2PSocketManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PSocketManager RequestValidator");

  switch (message->header()->name) {
    case internal::kP2PSocketManager_StartNetworkNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketManager_StartNetworkNotifications_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PSocketManager_GetHostAddress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketManager_GetHostAddress_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PSocketManager_CreateSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketManager_CreateSocket_Params_Data>(
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

bool P2PSocketManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PSocketManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kP2PSocketManager_GetHostAddress_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketManager_GetHostAddress_ResponseParams_Data>(
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
const char P2PSocket::Name_[] = "network.mojom.P2PSocket";

P2PSocketProxy::P2PSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PSocketProxy::Send(
    const WTF::Vector<int8_t>& in_data, P2PPacketInfoPtr in_packet_info, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr in_traffic_annotation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocket::Send");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocket_Send_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocket_Send_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in P2PSocket.Send request");
  typename decltype(params->packet_info)::BaseType::BufferWriter
      packet_info_writer;
  mojo::internal::Serialize<::network::mojom::P2PPacketInfoDataView>(
      in_packet_info, buffer, &packet_info_writer, &serialization_context);
  params->packet_info.Set(
      packet_info_writer.is_null() ? nullptr : packet_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packet_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_info in P2PSocket.Send request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in P2PSocket.Send request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocket::Name_);
  message.set_method_name("Send");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PSocketProxy::SetOption(
    P2PSocketOption in_option, int32_t in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocket::SetOption");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocket_SetOption_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocket_SetOption_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::P2PSocketOption>(
      in_option, &params->option);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocket::Name_);
  message.set_method_name("SetOption");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool P2PSocketStubDispatch::Accept(
    P2PSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PSocket_Send_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocket::Send",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocket_Send_Params_Data* params =
          reinterpret_cast<internal::P2PSocket_Send_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<int8_t> p_data{};
      P2PPacketInfoPtr p_packet_info{};
      ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr p_traffic_annotation{};
      P2PSocket_Send_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadPacketInfo(&p_packet_info))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocket::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Send(
std::move(p_data), 
std::move(p_packet_info), 
std::move(p_traffic_annotation));
      return true;
    }
    case internal::kP2PSocket_SetOption_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocket::SetOption",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocket_SetOption_Params_Data* params =
          reinterpret_cast<internal::P2PSocket_SetOption_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      P2PSocketOption p_option{};
      int32_t p_value{};
      P2PSocket_SetOption_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOption(&p_option))
        success = false;
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocket::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetOption(
std::move(p_option), 
std::move(p_value));
      return true;
    }
  }
  return false;
}

// static
bool P2PSocketStubDispatch::AcceptWithResponder(
    P2PSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kP2PSocket_Send_Name: {
      break;
    }
    case internal::kP2PSocket_SetOption_Name: {
      break;
    }
  }
  return false;
}

bool P2PSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kP2PSocket_Send_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocket_Send_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PSocket_SetOption_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocket_SetOption_Params_Data>(
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

const char P2PSocketClient::Name_[] = "network.mojom.P2PSocketClient";

P2PSocketClientProxy::P2PSocketClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PSocketClientProxy::SocketCreated(
    ::network::mojom::blink::IPEndPointPtr in_local_address, ::network::mojom::blink::IPEndPointPtr in_remote_address) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketClient::SocketCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketClient_SocketCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketClient_SocketCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_address)::BaseType::BufferWriter
      local_address_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_address, buffer, &local_address_writer, &serialization_context);
  params->local_address.Set(
      local_address_writer.is_null() ? nullptr : local_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_address in P2PSocketClient.SocketCreated request");
  typename decltype(params->remote_address)::BaseType::BufferWriter
      remote_address_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_remote_address, buffer, &remote_address_writer, &serialization_context);
  params->remote_address.Set(
      remote_address_writer.is_null() ? nullptr : remote_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_address in P2PSocketClient.SocketCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketClient::Name_);
  message.set_method_name("SocketCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PSocketClientProxy::SendComplete(
    P2PSendPacketMetricsPtr in_send_metrics) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketClient::SendComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketClient_SendComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketClient_SendComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->send_metrics)::BaseType::BufferWriter
      send_metrics_writer;
  mojo::internal::Serialize<::network::mojom::P2PSendPacketMetricsDataView>(
      in_send_metrics, buffer, &send_metrics_writer, &serialization_context);
  params->send_metrics.Set(
      send_metrics_writer.is_null() ? nullptr : send_metrics_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->send_metrics.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null send_metrics in P2PSocketClient.SendComplete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketClient::Name_);
  message.set_method_name("SendComplete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PSocketClientProxy::IncomingTcpConnection(
    ::network::mojom::blink::IPEndPointPtr in_socket_address, P2PSocketPtr in_socket, P2PSocketClientRequest in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketClient::IncomingTcpConnection");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketClient_IncomingTcpConnection_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketClient_IncomingTcpConnection_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->socket_address)::BaseType::BufferWriter
      socket_address_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_socket_address, buffer, &socket_address_writer, &serialization_context);
  params->socket_address.Set(
      socket_address_writer.is_null() ? nullptr : socket_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->socket_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null socket_address in P2PSocketClient.IncomingTcpConnection request");
  mojo::internal::Serialize<::network::mojom::P2PSocketPtrDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in P2PSocketClient.IncomingTcpConnection request");
  mojo::internal::Serialize<::network::mojom::P2PSocketClientRequestDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in P2PSocketClient.IncomingTcpConnection request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketClient::Name_);
  message.set_method_name("IncomingTcpConnection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PSocketClientProxy::DataReceived(
    ::network::mojom::blink::IPEndPointPtr in_socket_address, const WTF::Vector<int8_t>& in_data, base::TimeTicks in_timestamp) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PSocketClient::DataReceived");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PSocketClient_DataReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PSocketClient_DataReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->socket_address)::BaseType::BufferWriter
      socket_address_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_socket_address, buffer, &socket_address_writer, &serialization_context);
  params->socket_address.Set(
      socket_address_writer.is_null() ? nullptr : socket_address_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->socket_address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null socket_address in P2PSocketClient.DataReceived request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<int8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in P2PSocketClient.DataReceived request");
  typename decltype(params->timestamp)::BaseType::BufferWriter
      timestamp_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
      in_timestamp, buffer, &timestamp_writer, &serialization_context);
  params->timestamp.Set(
      timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timestamp.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timestamp in P2PSocketClient.DataReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PSocketClient::Name_);
  message.set_method_name("DataReceived");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool P2PSocketClientStubDispatch::Accept(
    P2PSocketClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PSocketClient_SocketCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketClient::SocketCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocketClient_SocketCreated_Params_Data* params =
          reinterpret_cast<internal::P2PSocketClient_SocketCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPEndPointPtr p_local_address{};
      ::network::mojom::blink::IPEndPointPtr p_remote_address{};
      P2PSocketClient_SocketCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddress(&p_local_address))
        success = false;
      if (!input_data_view.ReadRemoteAddress(&p_remote_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SocketCreated(
std::move(p_local_address), 
std::move(p_remote_address));
      return true;
    }
    case internal::kP2PSocketClient_SendComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketClient::SendComplete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocketClient_SendComplete_Params_Data* params =
          reinterpret_cast<internal::P2PSocketClient_SendComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      P2PSendPacketMetricsPtr p_send_metrics{};
      P2PSocketClient_SendComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSendMetrics(&p_send_metrics))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendComplete(
std::move(p_send_metrics));
      return true;
    }
    case internal::kP2PSocketClient_IncomingTcpConnection_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketClient::IncomingTcpConnection",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocketClient_IncomingTcpConnection_Params_Data* params =
          reinterpret_cast<internal::P2PSocketClient_IncomingTcpConnection_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPEndPointPtr p_socket_address{};
      P2PSocketPtr p_socket{};
      P2PSocketClientRequest p_client{};
      P2PSocketClient_IncomingTcpConnection_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSocketAddress(&p_socket_address))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IncomingTcpConnection(
std::move(p_socket_address), 
std::move(p_socket), 
std::move(p_client));
      return true;
    }
    case internal::kP2PSocketClient_DataReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PSocketClient::DataReceived",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PSocketClient_DataReceived_Params_Data* params =
          reinterpret_cast<internal::P2PSocketClient_DataReceived_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::IPEndPointPtr p_socket_address{};
      WTF::Vector<int8_t> p_data{};
      base::TimeTicks p_timestamp{};
      P2PSocketClient_DataReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSocketAddress(&p_socket_address))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!input_data_view.ReadTimestamp(&p_timestamp))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PSocketClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DataReceived(
std::move(p_socket_address), 
std::move(p_data), 
std::move(p_timestamp));
      return true;
    }
  }
  return false;
}

// static
bool P2PSocketClientStubDispatch::AcceptWithResponder(
    P2PSocketClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kP2PSocketClient_SocketCreated_Name: {
      break;
    }
    case internal::kP2PSocketClient_SendComplete_Name: {
      break;
    }
    case internal::kP2PSocketClient_IncomingTcpConnection_Name: {
      break;
    }
    case internal::kP2PSocketClient_DataReceived_Name: {
      break;
    }
  }
  return false;
}

bool P2PSocketClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PSocketClient RequestValidator");

  switch (message->header()->name) {
    case internal::kP2PSocketClient_SocketCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketClient_SocketCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PSocketClient_SendComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketClient_SendComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PSocketClient_IncomingTcpConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketClient_IncomingTcpConnection_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PSocketClient_DataReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PSocketClient_DataReceived_Params_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif