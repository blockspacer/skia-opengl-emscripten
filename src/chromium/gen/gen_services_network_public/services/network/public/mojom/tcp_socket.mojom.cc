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

#include "services/network/public/mojom/tcp_socket.mojom.h"

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

#include "services/network/public/mojom/tcp_socket.mojom-params-data.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared-message-ids.h"

#include "services/network/public/mojom/tcp_socket.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_JUMBO_H_
#include "services/network/public/cpp/address_list_mojom_traits.h"
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#endif
namespace network {
namespace mojom {
TCPConnectedSocketOptions::TCPConnectedSocketOptions()
    : send_buffer_size(0),
      receive_buffer_size(0),
      no_delay(true) {}

TCPConnectedSocketOptions::TCPConnectedSocketOptions(
    int32_t send_buffer_size_in,
    int32_t receive_buffer_size_in,
    bool no_delay_in)
    : send_buffer_size(std::move(send_buffer_size_in)),
      receive_buffer_size(std::move(receive_buffer_size_in)),
      no_delay(std::move(no_delay_in)) {}

TCPConnectedSocketOptions::~TCPConnectedSocketOptions() = default;
size_t TCPConnectedSocketOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->send_buffer_size);
  seed = mojo::internal::Hash(seed, this->receive_buffer_size);
  seed = mojo::internal::Hash(seed, this->no_delay);
  return seed;
}

bool TCPConnectedSocketOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char TCPBoundSocket::Name_[] = "network.mojom.TCPBoundSocket";

class TCPBoundSocket_Listen_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPBoundSocket_Listen_ForwardToCallback(
      TCPBoundSocket::ListenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPBoundSocket::ListenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_Listen_ForwardToCallback);
};

class TCPBoundSocket_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPBoundSocket_Connect_ForwardToCallback(
      TCPBoundSocket::ConnectCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPBoundSocket::ConnectCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_Connect_ForwardToCallback);
};

TCPBoundSocketProxy::TCPBoundSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TCPBoundSocketProxy::Listen(
    uint32_t in_backlog, TCPServerSocketRequest in_socket, ListenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPBoundSocket::Listen");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPBoundSocket_Listen_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPBoundSocket_Listen_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->backlog = in_backlog;
  mojo::internal::Serialize<::network::mojom::TCPServerSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in TCPBoundSocket.Listen request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPBoundSocket::Name_);
  message.set_method_name("Listen");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPBoundSocket_Listen_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TCPBoundSocketProxy::Connect(
    const net::AddressList& in_remote_addr_list, TCPConnectedSocketOptionsPtr in_tcp_connected_socket_options, TCPConnectedSocketRequest in_socket, SocketObserverPtr in_observer, ConnectCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPBoundSocket::Connect");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPBoundSocket_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPBoundSocket_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->remote_addr_list)::BaseType::BufferWriter
      remote_addr_list_writer;
  mojo::internal::Serialize<::network::mojom::AddressListDataView>(
      in_remote_addr_list, buffer, &remote_addr_list_writer, &serialization_context);
  params->remote_addr_list.Set(
      remote_addr_list_writer.is_null() ? nullptr : remote_addr_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_addr_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_addr_list in TCPBoundSocket.Connect request");
  typename decltype(params->tcp_connected_socket_options)::BaseType::BufferWriter
      tcp_connected_socket_options_writer;
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketOptionsDataView>(
      in_tcp_connected_socket_options, buffer, &tcp_connected_socket_options_writer, &serialization_context);
  params->tcp_connected_socket_options.Set(
      tcp_connected_socket_options_writer.is_null() ? nullptr : tcp_connected_socket_options_writer.data());
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in TCPBoundSocket.Connect request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPBoundSocket::Name_);
  message.set_method_name("Connect");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPBoundSocket_Connect_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPBoundSocket_Listen_ProxyToResponder {
 public:
  static TCPBoundSocket::ListenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPBoundSocket_Listen_ProxyToResponder> proxy(
        new TCPBoundSocket_Listen_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPBoundSocket_Listen_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPBoundSocket_Listen_ProxyToResponder() {
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
  TCPBoundSocket_Listen_ProxyToResponder(
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
        << "TCPBoundSocket::ListenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_Listen_ProxyToResponder);
};

bool TCPBoundSocket_Listen_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPBoundSocket::ListenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPBoundSocket_Listen_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPBoundSocket_Listen_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  TCPBoundSocket_Listen_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPBoundSocket::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void TCPBoundSocket_Listen_ProxyToResponder::Run(
    int32_t in_net_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPBoundSocket_Listen_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPBoundSocket_Listen_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPBoundSocket::ListenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPBoundSocket::Name_);
  message.set_method_name("Listen");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPBoundSocket_Connect_ProxyToResponder {
 public:
  static TCPBoundSocket::ConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPBoundSocket_Connect_ProxyToResponder> proxy(
        new TCPBoundSocket_Connect_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPBoundSocket_Connect_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPBoundSocket_Connect_ProxyToResponder() {
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
  TCPBoundSocket_Connect_ProxyToResponder(
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
        << "TCPBoundSocket::ConnectCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, const base::Optional<net::IPEndPoint>& in_local_addr, const base::Optional<net::IPEndPoint>& in_peer_addr, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPBoundSocket_Connect_ProxyToResponder);
};

bool TCPBoundSocket_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPBoundSocket::ConnectCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPBoundSocket_Connect_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPBoundSocket_Connect_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  base::Optional<net::IPEndPoint> p_local_addr{};
  base::Optional<net::IPEndPoint> p_peer_addr{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  TCPBoundSocket_Connect_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadLocalAddr(&p_local_addr))
    success = false;
  if (!input_data_view.ReadPeerAddr(&p_peer_addr))
    success = false;
  p_receive_stream = input_data_view.TakeReceiveStream();
  p_send_stream = input_data_view.TakeSendStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPBoundSocket::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_local_addr), 
std::move(p_peer_addr), 
std::move(p_receive_stream), 
std::move(p_send_stream));
  return true;
}

void TCPBoundSocket_Connect_ProxyToResponder::Run(
    int32_t in_net_error, const base::Optional<net::IPEndPoint>& in_local_addr, const base::Optional<net::IPEndPoint>& in_peer_addr, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPBoundSocket_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPBoundSocket_Connect_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  typename decltype(params->peer_addr)::BaseType::BufferWriter
      peer_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_peer_addr, buffer, &peer_addr_writer, &serialization_context);
  params->peer_addr.Set(
      peer_addr_writer.is_null() ? nullptr : peer_addr_writer.data());
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_receive_stream, &params->receive_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_send_stream, &params->send_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPBoundSocket::ConnectCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPBoundSocket::Name_);
  message.set_method_name("Connect");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TCPBoundSocketStubDispatch::Accept(
    TCPBoundSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTCPBoundSocket_Listen_Name: {
      break;
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      break;
    }
  }
  return false;
}

// static
bool TCPBoundSocketStubDispatch::AcceptWithResponder(
    TCPBoundSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTCPBoundSocket_Listen_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPBoundSocket::Listen",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPBoundSocket_Listen_Params_Data* params =
          reinterpret_cast<
              internal::TCPBoundSocket_Listen_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_backlog{};
      TCPServerSocketRequest p_socket{};
      TCPBoundSocket_Listen_ParamsDataView input_data_view(params, &serialization_context);
      
      p_backlog = input_data_view.backlog();
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPBoundSocket::Name_, 0, false);
        return false;
      }
      TCPBoundSocket::ListenCallback callback =
          TCPBoundSocket_Listen_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Listen(
std::move(p_backlog), 
std::move(p_socket), std::move(callback));
      return true;
    }
    case internal::kTCPBoundSocket_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPBoundSocket::Connect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPBoundSocket_Connect_Params_Data* params =
          reinterpret_cast<
              internal::TCPBoundSocket_Connect_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::AddressList p_remote_addr_list{};
      TCPConnectedSocketOptionsPtr p_tcp_connected_socket_options{};
      TCPConnectedSocketRequest p_socket{};
      SocketObserverPtr p_observer{};
      TCPBoundSocket_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRemoteAddrList(&p_remote_addr_list))
        success = false;
      if (!input_data_view.ReadTcpConnectedSocketOptions(&p_tcp_connected_socket_options))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPBoundSocket::Name_, 1, false);
        return false;
      }
      TCPBoundSocket::ConnectCallback callback =
          TCPBoundSocket_Connect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Connect(
std::move(p_remote_addr_list), 
std::move(p_tcp_connected_socket_options), 
std::move(p_socket), 
std::move(p_observer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TCPBoundSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPBoundSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kTCPBoundSocket_Listen_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_Listen_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_Connect_Params_Data>(
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

bool TCPBoundSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPBoundSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTCPBoundSocket_Listen_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_Listen_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPBoundSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPBoundSocket_Connect_ResponseParams_Data>(
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
const char TCPConnectedSocket::Name_[] = "network.mojom.TCPConnectedSocket";

class TCPConnectedSocket_UpgradeToTLS_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_UpgradeToTLS_ForwardToCallback(
      TCPConnectedSocket::UpgradeToTLSCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::UpgradeToTLSCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_UpgradeToTLS_ForwardToCallback);
};

class TCPConnectedSocket_SetSendBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_SetSendBufferSize_ForwardToCallback(
      TCPConnectedSocket::SetSendBufferSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::SetSendBufferSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetSendBufferSize_ForwardToCallback);
};

class TCPConnectedSocket_SetReceiveBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_SetReceiveBufferSize_ForwardToCallback(
      TCPConnectedSocket::SetReceiveBufferSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::SetReceiveBufferSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetReceiveBufferSize_ForwardToCallback);
};

class TCPConnectedSocket_SetNoDelay_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_SetNoDelay_ForwardToCallback(
      TCPConnectedSocket::SetNoDelayCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::SetNoDelayCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetNoDelay_ForwardToCallback);
};

class TCPConnectedSocket_SetKeepAlive_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPConnectedSocket_SetKeepAlive_ForwardToCallback(
      TCPConnectedSocket::SetKeepAliveCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPConnectedSocket::SetKeepAliveCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetKeepAlive_ForwardToCallback);
};

TCPConnectedSocketProxy::TCPConnectedSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TCPConnectedSocketProxy::UpgradeToTLS(
    const net::HostPortPair& in_host_port_pair, ::network::mojom::TLSClientSocketOptionsPtr in_options, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TLSClientSocketRequest in_request, SocketObserverPtr in_observer, UpgradeToTLSCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::UpgradeToTLS");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_UpgradeToTLS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_UpgradeToTLS_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host_port_pair)::BaseType::BufferWriter
      host_port_pair_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      in_host_port_pair, buffer, &host_port_pair_writer, &serialization_context);
  params->host_port_pair.Set(
      host_port_pair_writer.is_null() ? nullptr : host_port_pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_port_pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_port_pair in TCPConnectedSocket.UpgradeToTLS request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::network::mojom::TLSClientSocketOptionsDataView>(
      in_options, buffer, &options_writer, &serialization_context);
  params->options.Set(
      options_writer.is_null() ? nullptr : options_writer.data());
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in TCPConnectedSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::TLSClientSocketRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in TCPConnectedSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("UpgradeToTLS");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_UpgradeToTLS_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TCPConnectedSocketProxy::SetSendBufferSize(
    int32_t in_send_buffer_size, SetSendBufferSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetSendBufferSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetSendBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetSendBufferSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->send_buffer_size = in_send_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetSendBufferSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_SetSendBufferSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TCPConnectedSocketProxy::SetReceiveBufferSize(
    int32_t in_receive_buffer_size, SetReceiveBufferSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetReceiveBufferSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetReceiveBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetReceiveBufferSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->receive_buffer_size = in_receive_buffer_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetReceiveBufferSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_SetReceiveBufferSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TCPConnectedSocketProxy::SetNoDelay(
    bool in_no_delay, SetNoDelayCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetNoDelay");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetNoDelay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetNoDelay_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->no_delay = in_no_delay;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetNoDelay");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_SetNoDelay_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TCPConnectedSocketProxy::SetKeepAlive(
    bool in_enable, int32_t in_delay_secs, SetKeepAliveCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetKeepAlive");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetKeepAlive_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetKeepAlive_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enable = in_enable;
  params->delay_secs = in_delay_secs;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetKeepAlive");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPConnectedSocket_SetKeepAlive_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPConnectedSocket_UpgradeToTLS_ProxyToResponder {
 public:
  static TCPConnectedSocket::UpgradeToTLSCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_UpgradeToTLS_ProxyToResponder> proxy(
        new TCPConnectedSocket_UpgradeToTLS_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_UpgradeToTLS_ProxyToResponder() {
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
  TCPConnectedSocket_UpgradeToTLS_ProxyToResponder(
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
        << "TCPConnectedSocket::UpgradeToTLSCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream, const base::Optional<net::SSLInfo>& in_ssl_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_UpgradeToTLS_ProxyToResponder);
};

bool TCPConnectedSocket_UpgradeToTLS_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::UpgradeToTLSCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  base::Optional<net::SSLInfo> p_ssl_info{};
  TCPConnectedSocket_UpgradeToTLS_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  p_receive_stream = input_data_view.TakeReceiveStream();
  p_send_stream = input_data_view.TakeSendStream();
  if (!input_data_view.ReadSslInfo(&p_ssl_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPConnectedSocket::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_receive_stream), 
std::move(p_send_stream), 
std::move(p_ssl_info));
  return true;
}

void TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::Run(
    int32_t in_net_error, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream, const base::Optional<net::SSLInfo>& in_ssl_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_UpgradeToTLS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_receive_stream, &params->receive_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_send_stream, &params->send_stream, &serialization_context);
  typename decltype(params->ssl_info)::BaseType::BufferWriter
      ssl_info_writer;
  mojo::internal::Serialize<::network::mojom::SSLInfoDataView>(
      in_ssl_info, buffer, &ssl_info_writer, &serialization_context);
  params->ssl_info.Set(
      ssl_info_writer.is_null() ? nullptr : ssl_info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::UpgradeToTLSCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("UpgradeToTLS");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPConnectedSocket_SetSendBufferSize_ProxyToResponder {
 public:
  static TCPConnectedSocket::SetSendBufferSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_SetSendBufferSize_ProxyToResponder> proxy(
        new TCPConnectedSocket_SetSendBufferSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_SetSendBufferSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_SetSendBufferSize_ProxyToResponder() {
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
  TCPConnectedSocket_SetSendBufferSize_ProxyToResponder(
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
        << "TCPConnectedSocket::SetSendBufferSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetSendBufferSize_ProxyToResponder);
};

bool TCPConnectedSocket_SetSendBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetSendBufferSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  TCPConnectedSocket_SetSendBufferSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPConnectedSocket::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void TCPConnectedSocket_SetSendBufferSize_ProxyToResponder::Run(
    int32_t in_net_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetSendBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetSendBufferSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetSendBufferSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder {
 public:
  static TCPConnectedSocket::SetReceiveBufferSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder> proxy(
        new TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder() {
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
  TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder(
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
        << "TCPConnectedSocket::SetReceiveBufferSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder);
};

bool TCPConnectedSocket_SetReceiveBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetReceiveBufferSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  TCPConnectedSocket_SetReceiveBufferSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPConnectedSocket::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error));
  return true;
}

void TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder::Run(
    int32_t in_net_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetReceiveBufferSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetReceiveBufferSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetReceiveBufferSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPConnectedSocket_SetNoDelay_ProxyToResponder {
 public:
  static TCPConnectedSocket::SetNoDelayCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_SetNoDelay_ProxyToResponder> proxy(
        new TCPConnectedSocket_SetNoDelay_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_SetNoDelay_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_SetNoDelay_ProxyToResponder() {
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
  TCPConnectedSocket_SetNoDelay_ProxyToResponder(
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
        << "TCPConnectedSocket::SetNoDelayCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetNoDelay_ProxyToResponder);
};

bool TCPConnectedSocket_SetNoDelay_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetNoDelayCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPConnectedSocket_SetNoDelay_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_SetNoDelay_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  TCPConnectedSocket_SetNoDelay_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPConnectedSocket::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void TCPConnectedSocket_SetNoDelay_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetNoDelay_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetNoDelay_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetNoDelayCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetNoDelay");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TCPConnectedSocket_SetKeepAlive_ProxyToResponder {
 public:
  static TCPConnectedSocket::SetKeepAliveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPConnectedSocket_SetKeepAlive_ProxyToResponder> proxy(
        new TCPConnectedSocket_SetKeepAlive_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPConnectedSocket_SetKeepAlive_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPConnectedSocket_SetKeepAlive_ProxyToResponder() {
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
  TCPConnectedSocket_SetKeepAlive_ProxyToResponder(
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
        << "TCPConnectedSocket::SetKeepAliveCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPConnectedSocket_SetKeepAlive_ProxyToResponder);
};

bool TCPConnectedSocket_SetKeepAlive_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetKeepAliveCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPConnectedSocket_SetKeepAlive_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPConnectedSocket_SetKeepAlive_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  TCPConnectedSocket_SetKeepAlive_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPConnectedSocket::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void TCPConnectedSocket_SetKeepAlive_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPConnectedSocket_SetKeepAlive_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPConnectedSocket_SetKeepAlive_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetKeepAliveCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPConnectedSocket::Name_);
  message.set_method_name("SetKeepAlive");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TCPConnectedSocketStubDispatch::Accept(
    TCPConnectedSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
      break;
    }
    case internal::kTCPConnectedSocket_SetSendBufferSize_Name: {
      break;
    }
    case internal::kTCPConnectedSocket_SetReceiveBufferSize_Name: {
      break;
    }
    case internal::kTCPConnectedSocket_SetNoDelay_Name: {
      break;
    }
    case internal::kTCPConnectedSocket_SetKeepAlive_Name: {
      break;
    }
  }
  return false;
}

// static
bool TCPConnectedSocketStubDispatch::AcceptWithResponder(
    TCPConnectedSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::UpgradeToTLS",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPConnectedSocket_UpgradeToTLS_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_UpgradeToTLS_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostPortPair p_host_port_pair{};
      ::network::mojom::TLSClientSocketOptionsPtr p_options{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TLSClientSocketRequest p_request{};
      SocketObserverPtr p_observer{};
      TCPConnectedSocket_UpgradeToTLS_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostPortPair(&p_host_port_pair))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPConnectedSocket::Name_, 0, false);
        return false;
      }
      TCPConnectedSocket::UpgradeToTLSCallback callback =
          TCPConnectedSocket_UpgradeToTLS_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpgradeToTLS(
std::move(p_host_port_pair), 
std::move(p_options), 
std::move(p_traffic_annotation), 
std::move(p_request), 
std::move(p_observer), std::move(callback));
      return true;
    }
    case internal::kTCPConnectedSocket_SetSendBufferSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetSendBufferSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPConnectedSocket_SetSendBufferSize_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_SetSendBufferSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_send_buffer_size{};
      TCPConnectedSocket_SetSendBufferSize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_send_buffer_size = input_data_view.send_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPConnectedSocket::Name_, 1, false);
        return false;
      }
      TCPConnectedSocket::SetSendBufferSizeCallback callback =
          TCPConnectedSocket_SetSendBufferSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetSendBufferSize(
std::move(p_send_buffer_size), std::move(callback));
      return true;
    }
    case internal::kTCPConnectedSocket_SetReceiveBufferSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetReceiveBufferSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPConnectedSocket_SetReceiveBufferSize_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_SetReceiveBufferSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_receive_buffer_size{};
      TCPConnectedSocket_SetReceiveBufferSize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_receive_buffer_size = input_data_view.receive_buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPConnectedSocket::Name_, 2, false);
        return false;
      }
      TCPConnectedSocket::SetReceiveBufferSizeCallback callback =
          TCPConnectedSocket_SetReceiveBufferSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetReceiveBufferSize(
std::move(p_receive_buffer_size), std::move(callback));
      return true;
    }
    case internal::kTCPConnectedSocket_SetNoDelay_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetNoDelay",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPConnectedSocket_SetNoDelay_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_SetNoDelay_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_no_delay{};
      TCPConnectedSocket_SetNoDelay_ParamsDataView input_data_view(params, &serialization_context);
      
      p_no_delay = input_data_view.no_delay();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPConnectedSocket::Name_, 3, false);
        return false;
      }
      TCPConnectedSocket::SetNoDelayCallback callback =
          TCPConnectedSocket_SetNoDelay_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetNoDelay(
std::move(p_no_delay), std::move(callback));
      return true;
    }
    case internal::kTCPConnectedSocket_SetKeepAlive_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPConnectedSocket::SetKeepAlive",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPConnectedSocket_SetKeepAlive_Params_Data* params =
          reinterpret_cast<
              internal::TCPConnectedSocket_SetKeepAlive_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enable{};
      int32_t p_delay_secs{};
      TCPConnectedSocket_SetKeepAlive_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enable = input_data_view.enable();
      p_delay_secs = input_data_view.delay_secs();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPConnectedSocket::Name_, 4, false);
        return false;
      }
      TCPConnectedSocket::SetKeepAliveCallback callback =
          TCPConnectedSocket_SetKeepAlive_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetKeepAlive(
std::move(p_enable), 
std::move(p_delay_secs), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TCPConnectedSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPConnectedSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_UpgradeToTLS_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetSendBufferSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetReceiveBufferSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetNoDelay_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetNoDelay_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetKeepAlive_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetKeepAlive_Params_Data>(
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

bool TCPConnectedSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPConnectedSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTCPConnectedSocket_UpgradeToTLS_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_UpgradeToTLS_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetSendBufferSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetReceiveBufferSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetNoDelay_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetNoDelay_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTCPConnectedSocket_SetKeepAlive_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPConnectedSocket_SetKeepAlive_ResponseParams_Data>(
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
const char SocketObserver::Name_[] = "network.mojom.SocketObserver";

SocketObserverProxy::SocketObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SocketObserverProxy::OnReadError(
    int32_t in_net_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SocketObserver::OnReadError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSocketObserver_OnReadError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SocketObserver_OnReadError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SocketObserver::Name_);
  message.set_method_name("OnReadError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SocketObserverProxy::OnWriteError(
    int32_t in_net_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SocketObserver::OnWriteError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSocketObserver_OnWriteError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SocketObserver_OnWriteError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SocketObserver::Name_);
  message.set_method_name("OnWriteError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SocketObserverStubDispatch::Accept(
    SocketObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSocketObserver_OnReadError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SocketObserver::OnReadError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SocketObserver_OnReadError_Params_Data* params =
          reinterpret_cast<internal::SocketObserver_OnReadError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_net_error{};
      SocketObserver_OnReadError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_net_error = input_data_view.net_error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SocketObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnReadError(
std::move(p_net_error));
      return true;
    }
    case internal::kSocketObserver_OnWriteError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SocketObserver::OnWriteError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SocketObserver_OnWriteError_Params_Data* params =
          reinterpret_cast<internal::SocketObserver_OnWriteError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_net_error{};
      SocketObserver_OnWriteError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_net_error = input_data_view.net_error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SocketObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWriteError(
std::move(p_net_error));
      return true;
    }
  }
  return false;
}

// static
bool SocketObserverStubDispatch::AcceptWithResponder(
    SocketObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSocketObserver_OnReadError_Name: {
      break;
    }
    case internal::kSocketObserver_OnWriteError_Name: {
      break;
    }
  }
  return false;
}

bool SocketObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SocketObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kSocketObserver_OnReadError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SocketObserver_OnReadError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSocketObserver_OnWriteError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SocketObserver_OnWriteError_Params_Data>(
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

const char TCPServerSocket::Name_[] = "network.mojom.TCPServerSocket";

class TCPServerSocket_Accept_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TCPServerSocket_Accept_ForwardToCallback(
      TCPServerSocket::AcceptCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TCPServerSocket::AcceptCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_ForwardToCallback);
};

TCPServerSocketProxy::TCPServerSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TCPServerSocketProxy::Accept(
    SocketObserverPtr in_observer, AcceptCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TCPServerSocket::Accept");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPServerSocket_Accept_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPServerSocket_Accept_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPServerSocket::Name_);
  message.set_method_name("Accept");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TCPServerSocket_Accept_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TCPServerSocket_Accept_ProxyToResponder {
 public:
  static TCPServerSocket::AcceptCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TCPServerSocket_Accept_ProxyToResponder> proxy(
        new TCPServerSocket_Accept_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TCPServerSocket_Accept_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TCPServerSocket_Accept_ProxyToResponder() {
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
  TCPServerSocket_Accept_ProxyToResponder(
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
        << "TCPServerSocket::AcceptCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, const base::Optional<net::IPEndPoint>& in_remote_addr, TCPConnectedSocketPtr in_connected_socket, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TCPServerSocket_Accept_ProxyToResponder);
};

bool TCPServerSocket_Accept_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TCPServerSocket::AcceptCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TCPServerSocket_Accept_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TCPServerSocket_Accept_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  base::Optional<net::IPEndPoint> p_remote_addr{};
  TCPConnectedSocketPtr p_connected_socket{};
  mojo::ScopedDataPipeConsumerHandle p_send_stream{};
  mojo::ScopedDataPipeProducerHandle p_receive_stream{};
  TCPServerSocket_Accept_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  if (!input_data_view.ReadRemoteAddr(&p_remote_addr))
    success = false;
  p_connected_socket =
      input_data_view.TakeConnectedSocket<decltype(p_connected_socket)>();
  p_send_stream = input_data_view.TakeSendStream();
  p_receive_stream = input_data_view.TakeReceiveStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TCPServerSocket::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_remote_addr), 
std::move(p_connected_socket), 
std::move(p_send_stream), 
std::move(p_receive_stream));
  return true;
}

void TCPServerSocket_Accept_ProxyToResponder::Run(
    int32_t in_net_error, const base::Optional<net::IPEndPoint>& in_remote_addr, TCPConnectedSocketPtr in_connected_socket, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTCPServerSocket_Accept_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TCPServerSocket_Accept_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  typename decltype(params->remote_addr)::BaseType::BufferWriter
      remote_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_remote_addr, buffer, &remote_addr_writer, &serialization_context);
  params->remote_addr.Set(
      remote_addr_writer.is_null() ? nullptr : remote_addr_writer.data());
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketPtrDataView>(
      in_connected_socket, &params->connected_socket, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_send_stream, &params->send_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_receive_stream, &params->receive_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TCPServerSocket::AcceptCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TCPServerSocket::Name_);
  message.set_method_name("Accept");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TCPServerSocketStubDispatch::Accept(
    TCPServerSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      break;
    }
  }
  return false;
}

// static
bool TCPServerSocketStubDispatch::AcceptWithResponder(
    TCPServerSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TCPServerSocket::Accept",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TCPServerSocket_Accept_Params_Data* params =
          reinterpret_cast<
              internal::TCPServerSocket_Accept_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SocketObserverPtr p_observer{};
      TCPServerSocket_Accept_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TCPServerSocket::Name_, 0, false);
        return false;
      }
      TCPServerSocket::AcceptCallback callback =
          TCPServerSocket_Accept_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Accept(
std::move(p_observer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TCPServerSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPServerSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_Accept_Params_Data>(
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

bool TCPServerSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TCPServerSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTCPServerSocket_Accept_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TCPServerSocket_Accept_ResponseParams_Data>(
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
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::TCPConnectedSocketOptions::DataView, ::network::mojom::TCPConnectedSocketOptionsPtr>::Read(
    ::network::mojom::TCPConnectedSocketOptions::DataView input,
    ::network::mojom::TCPConnectedSocketOptionsPtr* output) {
  bool success = true;
  ::network::mojom::TCPConnectedSocketOptionsPtr result(::network::mojom::TCPConnectedSocketOptions::New());
  
      result->send_buffer_size = input.send_buffer_size();
      result->receive_buffer_size = input.receive_buffer_size();
      result->no_delay = input.no_delay();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif