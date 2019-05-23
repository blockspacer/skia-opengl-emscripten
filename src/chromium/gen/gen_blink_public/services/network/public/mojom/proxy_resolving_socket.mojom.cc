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

#include "services/network/public/mojom/proxy_resolving_socket.mojom.h"

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

#include "services/network/public/mojom/proxy_resolving_socket.mojom-params-data.h"
#include "services/network/public/mojom/proxy_resolving_socket.mojom-shared-message-ids.h"

#include "services/network/public/mojom/proxy_resolving_socket.mojom-import-headers.h"


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
ProxyResolvingSocketOptions::ProxyResolvingSocketOptions()
    : use_tls(false),
      fake_tls_handshake(false) {}

ProxyResolvingSocketOptions::ProxyResolvingSocketOptions(
    bool use_tls_in,
    bool fake_tls_handshake_in)
    : use_tls(std::move(use_tls_in)),
      fake_tls_handshake(std::move(fake_tls_handshake_in)) {}

ProxyResolvingSocketOptions::~ProxyResolvingSocketOptions() = default;
size_t ProxyResolvingSocketOptions::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->use_tls);
  seed = mojo::internal::Hash(seed, this->fake_tls_handshake);
  return seed;
}

bool ProxyResolvingSocketOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProxyResolvingSocket::Name_[] = "network.mojom.ProxyResolvingSocket";

class ProxyResolvingSocket_UpgradeToTLS_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProxyResolvingSocket_UpgradeToTLS_ForwardToCallback(
      ProxyResolvingSocket::UpgradeToTLSCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProxyResolvingSocket::UpgradeToTLSCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocket_UpgradeToTLS_ForwardToCallback);
};

ProxyResolvingSocketProxy::ProxyResolvingSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolvingSocketProxy::UpgradeToTLS(
    const net::HostPortPair& in_host_port_pair, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TLSClientSocketRequest in_request, ::network::mojom::SocketObserverPtr in_observer, UpgradeToTLSCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolvingSocket::UpgradeToTLS");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolvingSocket_UpgradeToTLS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyResolvingSocket_UpgradeToTLS_Params_Data::BufferWriter
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
      "null host_port_pair in ProxyResolvingSocket.UpgradeToTLS request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in ProxyResolvingSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::TLSClientSocketRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in ProxyResolvingSocket.UpgradeToTLS request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolvingSocket::Name_);
  message.set_method_name("UpgradeToTLS");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProxyResolvingSocket_UpgradeToTLS_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder {
 public:
  static ProxyResolvingSocket::UpgradeToTLSCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder> proxy(
        new ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder() {
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
  ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder(
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
        << "ProxyResolvingSocket::UpgradeToTLSCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_net_error, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder);
};

bool ProxyResolvingSocket_UpgradeToTLS_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolvingSocket::UpgradeToTLSCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_net_error{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  ProxyResolvingSocket_UpgradeToTLS_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_net_error = input_data_view.net_error();
  p_receive_stream = input_data_view.TakeReceiveStream();
  p_send_stream = input_data_view.TakeSendStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProxyResolvingSocket::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_net_error), 
std::move(p_receive_stream), 
std::move(p_send_stream));
  return true;
}

void ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder::Run(
    int32_t in_net_error, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolvingSocket_UpgradeToTLS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_receive_stream, &params->receive_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_send_stream, &params->send_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolvingSocket::UpgradeToTLSCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolvingSocket::Name_);
  message.set_method_name("UpgradeToTLS");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProxyResolvingSocketStubDispatch::Accept(
    ProxyResolvingSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolvingSocket_UpgradeToTLS_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProxyResolvingSocketStubDispatch::AcceptWithResponder(
    ProxyResolvingSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolvingSocket_UpgradeToTLS_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolvingSocket::UpgradeToTLS",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProxyResolvingSocket_UpgradeToTLS_Params_Data* params =
          reinterpret_cast<
              internal::ProxyResolvingSocket_UpgradeToTLS_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostPortPair p_host_port_pair{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TLSClientSocketRequest p_request{};
      ::network::mojom::SocketObserverPtr p_observer{};
      ProxyResolvingSocket_UpgradeToTLS_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostPortPair(&p_host_port_pair))
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
            ProxyResolvingSocket::Name_, 0, false);
        return false;
      }
      ProxyResolvingSocket::UpgradeToTLSCallback callback =
          ProxyResolvingSocket_UpgradeToTLS_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpgradeToTLS(
std::move(p_host_port_pair), 
std::move(p_traffic_annotation), 
std::move(p_request), 
std::move(p_observer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProxyResolvingSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolvingSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolvingSocket_UpgradeToTLS_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolvingSocket_UpgradeToTLS_Params_Data>(
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

bool ProxyResolvingSocketResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolvingSocket ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProxyResolvingSocket_UpgradeToTLS_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolvingSocket_UpgradeToTLS_ResponseParams_Data>(
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
const char ProxyResolvingSocketFactory::Name_[] = "network.mojom.ProxyResolvingSocketFactory";

class ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ForwardToCallback(
      ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ForwardToCallback);
};

ProxyResolvingSocketFactoryProxy::ProxyResolvingSocketFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolvingSocketFactoryProxy::CreateProxyResolvingSocket(
    const GURL& in_url, ProxyResolvingSocketOptionsPtr in_options, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ProxyResolvingSocketRequest in_socket, ::network::mojom::SocketObserverPtr in_observer, CreateProxyResolvingSocketCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolvingSocketFactory::CreateProxyResolvingSocket");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ProxyResolvingSocketFactory.CreateProxyResolvingSocket request");
  typename decltype(params->options)::BaseType::BufferWriter
      options_writer;
  mojo::internal::Serialize<::network::mojom::ProxyResolvingSocketOptionsDataView>(
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
      "null traffic_annotation in ProxyResolvingSocketFactory.CreateProxyResolvingSocket request");
  mojo::internal::Serialize<::network::mojom::ProxyResolvingSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in ProxyResolvingSocketFactory.CreateProxyResolvingSocket request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolvingSocketFactory::Name_);
  message.set_method_name("CreateProxyResolvingSocket");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder {
 public:
  static ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder> proxy(
        new ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder() {
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
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder(
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
        << "ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr, const base::Optional<net::IPEndPoint>& in_peer_addr, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder);
};

bool ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<net::IPEndPoint> p_local_addr{};
  base::Optional<net::IPEndPoint> p_peer_addr{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
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
        ProxyResolvingSocketFactory::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr), 
std::move(p_peer_addr), 
std::move(p_receive_stream), 
std::move(p_send_stream));
  return true;
}

void ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr, const base::Optional<net::IPEndPoint>& in_peer_addr, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolvingSocketFactory::Name_);
  message.set_method_name("CreateProxyResolvingSocket");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProxyResolvingSocketFactoryStubDispatch::Accept(
    ProxyResolvingSocketFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProxyResolvingSocketFactoryStubDispatch::AcceptWithResponder(
    ProxyResolvingSocketFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolvingSocketFactory::CreateProxyResolvingSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data* params =
          reinterpret_cast<
              internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ProxyResolvingSocketOptionsPtr p_options{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ProxyResolvingSocketRequest p_socket{};
      ::network::mojom::SocketObserverPtr p_observer{};
      ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolvingSocketFactory::Name_, 0, false);
        return false;
      }
      ProxyResolvingSocketFactory::CreateProxyResolvingSocketCallback callback =
          ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateProxyResolvingSocket(
std::move(p_url), 
std::move(p_options), 
std::move(p_traffic_annotation), 
std::move(p_socket), 
std::move(p_observer), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProxyResolvingSocketFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolvingSocketFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_Params_Data>(
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

bool ProxyResolvingSocketFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolvingSocketFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProxyResolvingSocketFactory_CreateProxyResolvingSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolvingSocketFactory_CreateProxyResolvingSocket_ResponseParams_Data>(
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
bool StructTraits<::network::mojom::ProxyResolvingSocketOptions::DataView, ::network::mojom::ProxyResolvingSocketOptionsPtr>::Read(
    ::network::mojom::ProxyResolvingSocketOptions::DataView input,
    ::network::mojom::ProxyResolvingSocketOptionsPtr* output) {
  bool success = true;
  ::network::mojom::ProxyResolvingSocketOptionsPtr result(::network::mojom::ProxyResolvingSocketOptions::New());
  
      result->use_tls = input.use_tls();
      result->fake_tls_handshake = input.fake_tls_handshake();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif