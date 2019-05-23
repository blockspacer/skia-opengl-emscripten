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

#include "services/network/public/mojom/websocket.mojom-blink.h"

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

#include "services/network/public/mojom/websocket.mojom-params-data.h"
#include "services/network/public/mojom/websocket.mojom-shared-message-ids.h"

#include "services/network/public/mojom/websocket.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace network {
namespace mojom {
namespace blink {
HttpHeader::HttpHeader()
    : name(),
      value() {}

HttpHeader::HttpHeader(
    const WTF::String& name_in,
    const WTF::String& value_in)
    : name(std::move(name_in)),
      value(std::move(value_in)) {}

HttpHeader::~HttpHeader() = default;
size_t HttpHeader::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->name);
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool HttpHeader::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebSocketHandshakeRequest::WebSocketHandshakeRequest()
    : url(),
      headers(),
      headers_text() {}

WebSocketHandshakeRequest::WebSocketHandshakeRequest(
    const ::blink::KURL& url_in,
    WTF::Vector<HttpHeaderPtr> headers_in,
    const WTF::String& headers_text_in)
    : url(std::move(url_in)),
      headers(std::move(headers_in)),
      headers_text(std::move(headers_text_in)) {}

WebSocketHandshakeRequest::~WebSocketHandshakeRequest() = default;

bool WebSocketHandshakeRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebSocketHandshakeResponse::WebSocketHandshakeResponse()
    : url(),
      http_version(),
      status_code(),
      status_text(),
      remote_endpoint(),
      headers(),
      headers_text() {}

WebSocketHandshakeResponse::WebSocketHandshakeResponse(
    const ::blink::KURL& url_in,
    ::network::mojom::blink::HttpVersionPtr http_version_in,
    int32_t status_code_in,
    const WTF::String& status_text_in,
    ::network::mojom::blink::IPEndPointPtr remote_endpoint_in,
    WTF::Vector<HttpHeaderPtr> headers_in,
    const WTF::String& headers_text_in)
    : url(std::move(url_in)),
      http_version(std::move(http_version_in)),
      status_code(std::move(status_code_in)),
      status_text(std::move(status_text_in)),
      remote_endpoint(std::move(remote_endpoint_in)),
      headers(std::move(headers_in)),
      headers_text(std::move(headers_text_in)) {}

WebSocketHandshakeResponse::~WebSocketHandshakeResponse() = default;

bool WebSocketHandshakeResponse::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AuthenticationHandler::Name_[] = "network.mojom.AuthenticationHandler";

class AuthenticationHandler_OnAuthRequired_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AuthenticationHandler_OnAuthRequired_ForwardToCallback(
      AuthenticationHandler::OnAuthRequiredCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AuthenticationHandler::OnAuthRequiredCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(AuthenticationHandler_OnAuthRequired_ForwardToCallback);
};

AuthenticationHandlerProxy::AuthenticationHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AuthenticationHandlerProxy::OnAuthRequired(
    ::network::mojom::blink::AuthChallengeInfoPtr in_info, ::network::mojom::blink::HttpResponseHeadersPtr in_headers, ::network::mojom::blink::IPEndPointPtr in_remote_endpoint, OnAuthRequiredCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AuthenticationHandler::OnAuthRequired");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticationHandler_OnAuthRequired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::AuthenticationHandler_OnAuthRequired_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::network::mojom::AuthChallengeInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in AuthenticationHandler.OnAuthRequired request");
  typename decltype(params->headers)::BaseType::BufferWriter
      headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpResponseHeadersDataView>(
      in_headers, buffer, &headers_writer, &serialization_context);
  params->headers.Set(
      headers_writer.is_null() ? nullptr : headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null headers in AuthenticationHandler.OnAuthRequired request");
  typename decltype(params->remote_endpoint)::BaseType::BufferWriter
      remote_endpoint_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_remote_endpoint, buffer, &remote_endpoint_writer, &serialization_context);
  params->remote_endpoint.Set(
      remote_endpoint_writer.is_null() ? nullptr : remote_endpoint_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_endpoint.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_endpoint in AuthenticationHandler.OnAuthRequired request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AuthenticationHandler::Name_);
  message.set_method_name("OnAuthRequired");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AuthenticationHandler_OnAuthRequired_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class AuthenticationHandler_OnAuthRequired_ProxyToResponder {
 public:
  static AuthenticationHandler::OnAuthRequiredCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AuthenticationHandler_OnAuthRequired_ProxyToResponder> proxy(
        new AuthenticationHandler_OnAuthRequired_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&AuthenticationHandler_OnAuthRequired_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AuthenticationHandler_OnAuthRequired_ProxyToResponder() {
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
  AuthenticationHandler_OnAuthRequired_ProxyToResponder(
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
        << "AuthenticationHandler::OnAuthRequiredCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::network::mojom::blink::AuthCredentialsPtr in_credentials);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(AuthenticationHandler_OnAuthRequired_ProxyToResponder);
};

bool AuthenticationHandler_OnAuthRequired_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::AuthenticationHandler::OnAuthRequiredCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::AuthenticationHandler_OnAuthRequired_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AuthenticationHandler_OnAuthRequired_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::network::mojom::blink::AuthCredentialsPtr p_credentials{};
  AuthenticationHandler_OnAuthRequired_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCredentials(&p_credentials))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AuthenticationHandler::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_credentials));
  return true;
}

void AuthenticationHandler_OnAuthRequired_ProxyToResponder::Run(
    ::network::mojom::blink::AuthCredentialsPtr in_credentials) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAuthenticationHandler_OnAuthRequired_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::AuthenticationHandler_OnAuthRequired_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->credentials)::BaseType::BufferWriter
      credentials_writer;
  mojo::internal::Serialize<::network::mojom::AuthCredentialsDataView>(
      in_credentials, buffer, &credentials_writer, &serialization_context);
  params->credentials.Set(
      credentials_writer.is_null() ? nullptr : credentials_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::AuthenticationHandler::OnAuthRequiredCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AuthenticationHandler::Name_);
  message.set_method_name("OnAuthRequired");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AuthenticationHandlerStubDispatch::Accept(
    AuthenticationHandler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAuthenticationHandler_OnAuthRequired_Name: {
      break;
    }
  }
  return false;
}

// static
bool AuthenticationHandlerStubDispatch::AcceptWithResponder(
    AuthenticationHandler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAuthenticationHandler_OnAuthRequired_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AuthenticationHandler::OnAuthRequired",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::AuthenticationHandler_OnAuthRequired_Params_Data* params =
          reinterpret_cast<
              internal::AuthenticationHandler_OnAuthRequired_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::AuthChallengeInfoPtr p_info{};
      ::network::mojom::blink::HttpResponseHeadersPtr p_headers{};
      ::network::mojom::blink::IPEndPointPtr p_remote_endpoint{};
      AuthenticationHandler_OnAuthRequired_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!input_data_view.ReadHeaders(&p_headers))
        success = false;
      if (!input_data_view.ReadRemoteEndpoint(&p_remote_endpoint))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AuthenticationHandler::Name_, 0, false);
        return false;
      }
      AuthenticationHandler::OnAuthRequiredCallback callback =
          AuthenticationHandler_OnAuthRequired_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAuthRequired(
std::move(p_info), 
std::move(p_headers), 
std::move(p_remote_endpoint), std::move(callback));
      return true;
    }
  }
  return false;
}

bool AuthenticationHandlerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AuthenticationHandler RequestValidator");

  switch (message->header()->name) {
    case internal::kAuthenticationHandler_OnAuthRequired_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AuthenticationHandler_OnAuthRequired_Params_Data>(
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

bool AuthenticationHandlerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AuthenticationHandler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAuthenticationHandler_OnAuthRequired_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AuthenticationHandler_OnAuthRequired_ResponseParams_Data>(
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
const char WebSocketClient::Name_[] = "network.mojom.WebSocketClient";

WebSocketClientProxy::WebSocketClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebSocketClientProxy::OnFailChannel(
    const WTF::String& in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnFailChannel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnFailChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnFailChannel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->reason)::BaseType::BufferWriter
      reason_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_reason, buffer, &reason_writer, &serialization_context);
  params->reason.Set(
      reason_writer.is_null() ? nullptr : reason_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocketClient.OnFailChannel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnFailChannel");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnStartOpeningHandshake(
    WebSocketHandshakeRequestPtr in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnStartOpeningHandshake");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnStartOpeningHandshake_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnStartOpeningHandshake_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::network::mojom::WebSocketHandshakeRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in WebSocketClient.OnStartOpeningHandshake request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnStartOpeningHandshake");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnFinishOpeningHandshake(
    WebSocketHandshakeResponsePtr in_response) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnFinishOpeningHandshake");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnFinishOpeningHandshake_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::network::mojom::WebSocketHandshakeResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in WebSocketClient.OnFinishOpeningHandshake request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnFinishOpeningHandshake");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnAddChannelResponse(
    const WTF::String& in_selected_protocol, const WTF::String& in_extensions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnAddChannelResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnAddChannelResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnAddChannelResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->selected_protocol)::BaseType::BufferWriter
      selected_protocol_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_selected_protocol, buffer, &selected_protocol_writer, &serialization_context);
  params->selected_protocol.Set(
      selected_protocol_writer.is_null() ? nullptr : selected_protocol_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->selected_protocol.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null selected_protocol in WebSocketClient.OnAddChannelResponse request");
  typename decltype(params->extensions)::BaseType::BufferWriter
      extensions_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_extensions, buffer, &extensions_writer, &serialization_context);
  params->extensions.Set(
      extensions_writer.is_null() ? nullptr : extensions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extensions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extensions in WebSocketClient.OnAddChannelResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnAddChannelResponse");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnDataFrame(
    bool in_fin, WebSocketMessageType in_type, const WTF::Vector<uint8_t>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnDataFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnDataFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnDataFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->fin = in_fin;
  mojo::internal::Serialize<::network::mojom::WebSocketMessageType>(
      in_type, &params->type);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in WebSocketClient.OnDataFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnDataFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnFlowControl(
    int64_t in_quota) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnFlowControl");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnFlowControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnFlowControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->quota = in_quota;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnFlowControl");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnDropChannel(
    bool in_was_clean, uint16_t in_code, const WTF::String& in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnDropChannel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnDropChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnDropChannel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->was_clean = in_was_clean;
  params->code = in_code;
  typename decltype(params->reason)::BaseType::BufferWriter
      reason_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_reason, buffer, &reason_writer, &serialization_context);
  params->reason.Set(
      reason_writer.is_null() ? nullptr : reason_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocketClient.OnDropChannel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnDropChannel");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketClientProxy::OnClosingHandshake(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocketClient::OnClosingHandshake");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocketClient_OnClosingHandshake_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocketClient_OnClosingHandshake_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocketClient::Name_);
  message.set_method_name("OnClosingHandshake");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WebSocketClientStubDispatch::Accept(
    WebSocketClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebSocketClient_OnFailChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnFailChannel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnFailChannel_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnFailChannel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_reason{};
      WebSocketClient_OnFailChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFailChannel(
std::move(p_reason));
      return true;
    }
    case internal::kWebSocketClient_OnStartOpeningHandshake_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnStartOpeningHandshake",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnStartOpeningHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnStartOpeningHandshake_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WebSocketHandshakeRequestPtr p_request{};
      WebSocketClient_OnStartOpeningHandshake_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStartOpeningHandshake(
std::move(p_request));
      return true;
    }
    case internal::kWebSocketClient_OnFinishOpeningHandshake_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnFinishOpeningHandshake",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WebSocketHandshakeResponsePtr p_response{};
      WebSocketClient_OnFinishOpeningHandshake_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFinishOpeningHandshake(
std::move(p_response));
      return true;
    }
    case internal::kWebSocketClient_OnAddChannelResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnAddChannelResponse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnAddChannelResponse_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnAddChannelResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_selected_protocol{};
      WTF::String p_extensions{};
      WebSocketClient_OnAddChannelResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSelectedProtocol(&p_selected_protocol))
        success = false;
      if (!input_data_view.ReadExtensions(&p_extensions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAddChannelResponse(
std::move(p_selected_protocol), 
std::move(p_extensions));
      return true;
    }
    case internal::kWebSocketClient_OnDataFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnDataFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnDataFrame_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnDataFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_fin{};
      WebSocketMessageType p_type{};
      WTF::Vector<uint8_t> p_data{};
      WebSocketClient_OnDataFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_fin = input_data_view.fin();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDataFrame(
std::move(p_fin), 
std::move(p_type), 
std::move(p_data));
      return true;
    }
    case internal::kWebSocketClient_OnFlowControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnFlowControl",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnFlowControl_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnFlowControl_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_quota{};
      WebSocketClient_OnFlowControl_ParamsDataView input_data_view(params, &serialization_context);
      
      p_quota = input_data_view.quota();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFlowControl(
std::move(p_quota));
      return true;
    }
    case internal::kWebSocketClient_OnDropChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnDropChannel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnDropChannel_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnDropChannel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_was_clean{};
      uint16_t p_code{};
      WTF::String p_reason{};
      WebSocketClient_OnDropChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      p_was_clean = input_data_view.was_clean();
      p_code = input_data_view.code();
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDropChannel(
std::move(p_was_clean), 
std::move(p_code), 
std::move(p_reason));
      return true;
    }
    case internal::kWebSocketClient_OnClosingHandshake_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocketClient::OnClosingHandshake",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocketClient_OnClosingHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_OnClosingHandshake_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WebSocketClient_OnClosingHandshake_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocketClient::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnClosingHandshake();
      return true;
    }
  }
  return false;
}

// static
bool WebSocketClientStubDispatch::AcceptWithResponder(
    WebSocketClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebSocketClient_OnFailChannel_Name: {
      break;
    }
    case internal::kWebSocketClient_OnStartOpeningHandshake_Name: {
      break;
    }
    case internal::kWebSocketClient_OnFinishOpeningHandshake_Name: {
      break;
    }
    case internal::kWebSocketClient_OnAddChannelResponse_Name: {
      break;
    }
    case internal::kWebSocketClient_OnDataFrame_Name: {
      break;
    }
    case internal::kWebSocketClient_OnFlowControl_Name: {
      break;
    }
    case internal::kWebSocketClient_OnDropChannel_Name: {
      break;
    }
    case internal::kWebSocketClient_OnClosingHandshake_Name: {
      break;
    }
  }
  return false;
}

bool WebSocketClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebSocketClient RequestValidator");

  switch (message->header()->name) {
    case internal::kWebSocketClient_OnFailChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnFailChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnStartOpeningHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnStartOpeningHandshake_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnFinishOpeningHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnAddChannelResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnAddChannelResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnDataFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnDataFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnFlowControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnFlowControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnDropChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnDropChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocketClient_OnClosingHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_OnClosingHandshake_Params_Data>(
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

const char WebSocket::Name_[] = "network.mojom.WebSocket";
constexpr uint32_t WebSocket::kInsufficientResources;

WebSocketProxy::WebSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebSocketProxy::AddChannelRequest(
    const ::blink::KURL& in_url, const WTF::Vector<WTF::String>& in_requested_protocols, const ::blink::KURL& in_first_party_for_cookies, WTF::Vector<HttpHeaderPtr> in_additional_headers, WebSocketClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocket::AddChannelRequest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocket_AddChannelRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocket_AddChannelRequest_Params_Data::BufferWriter
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
      "null url in WebSocket.AddChannelRequest request");
  typename decltype(params->requested_protocols)::BaseType::BufferWriter
      requested_protocols_writer;
  const mojo::internal::ContainerValidateParams requested_protocols_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_requested_protocols, buffer, &requested_protocols_writer, &requested_protocols_validate_params,
      &serialization_context);
  params->requested_protocols.Set(
      requested_protocols_writer.is_null() ? nullptr : requested_protocols_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->requested_protocols.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requested_protocols in WebSocket.AddChannelRequest request");
  typename decltype(params->first_party_for_cookies)::BaseType::BufferWriter
      first_party_for_cookies_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_first_party_for_cookies, buffer, &first_party_for_cookies_writer, &serialization_context);
  params->first_party_for_cookies.Set(
      first_party_for_cookies_writer.is_null() ? nullptr : first_party_for_cookies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in WebSocket.AddChannelRequest request");
  typename decltype(params->additional_headers)::BaseType::BufferWriter
      additional_headers_writer;
  const mojo::internal::ContainerValidateParams additional_headers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::HttpHeaderDataView>>(
      in_additional_headers, buffer, &additional_headers_writer, &additional_headers_validate_params,
      &serialization_context);
  params->additional_headers.Set(
      additional_headers_writer.is_null() ? nullptr : additional_headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->additional_headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null additional_headers in WebSocket.AddChannelRequest request");
  mojo::internal::Serialize<::network::mojom::WebSocketClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WebSocket.AddChannelRequest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocket::Name_);
  message.set_method_name("AddChannelRequest");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketProxy::SendFrame(
    bool in_fin, WebSocketMessageType in_type, const WTF::Vector<uint8_t>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocket::SendFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocket_SendFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocket_SendFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->fin = in_fin;
  mojo::internal::Serialize<::network::mojom::WebSocketMessageType>(
      in_type, &params->type);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in WebSocket.SendFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocket::Name_);
  message.set_method_name("SendFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketProxy::SendFlowControl(
    int64_t in_quota) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocket::SendFlowControl");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocket_SendFlowControl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocket_SendFlowControl_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->quota = in_quota;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocket::Name_);
  message.set_method_name("SendFlowControl");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WebSocketProxy::StartClosingHandshake(
    uint16_t in_code, const WTF::String& in_reason) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WebSocket::StartClosingHandshake");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWebSocket_StartClosingHandshake_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::WebSocket_StartClosingHandshake_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->code = in_code;
  typename decltype(params->reason)::BaseType::BufferWriter
      reason_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_reason, buffer, &reason_writer, &serialization_context);
  params->reason.Set(
      reason_writer.is_null() ? nullptr : reason_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->reason.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocket.StartClosingHandshake request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebSocket::Name_);
  message.set_method_name("StartClosingHandshake");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WebSocketStubDispatch::Accept(
    WebSocket* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebSocket_AddChannelRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocket::AddChannelRequest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocket_AddChannelRequest_Params_Data* params =
          reinterpret_cast<internal::WebSocket_AddChannelRequest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      WTF::Vector<WTF::String> p_requested_protocols{};
      ::blink::KURL p_first_party_for_cookies{};
      WTF::Vector<HttpHeaderPtr> p_additional_headers{};
      WebSocketClientPtr p_client{};
      WebSocket_AddChannelRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadRequestedProtocols(&p_requested_protocols))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!input_data_view.ReadAdditionalHeaders(&p_additional_headers))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocket::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddChannelRequest(
std::move(p_url), 
std::move(p_requested_protocols), 
std::move(p_first_party_for_cookies), 
std::move(p_additional_headers), 
std::move(p_client));
      return true;
    }
    case internal::kWebSocket_SendFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocket::SendFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocket_SendFrame_Params_Data* params =
          reinterpret_cast<internal::WebSocket_SendFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_fin{};
      WebSocketMessageType p_type{};
      WTF::Vector<uint8_t> p_data{};
      WebSocket_SendFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_fin = input_data_view.fin();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocket::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendFrame(
std::move(p_fin), 
std::move(p_type), 
std::move(p_data));
      return true;
    }
    case internal::kWebSocket_SendFlowControl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocket::SendFlowControl",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocket_SendFlowControl_Params_Data* params =
          reinterpret_cast<internal::WebSocket_SendFlowControl_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int64_t p_quota{};
      WebSocket_SendFlowControl_ParamsDataView input_data_view(params, &serialization_context);
      
      p_quota = input_data_view.quota();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocket::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendFlowControl(
std::move(p_quota));
      return true;
    }
    case internal::kWebSocket_StartClosingHandshake_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WebSocket::StartClosingHandshake",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WebSocket_StartClosingHandshake_Params_Data* params =
          reinterpret_cast<internal::WebSocket_StartClosingHandshake_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint16_t p_code{};
      WTF::String p_reason{};
      WebSocket_StartClosingHandshake_ParamsDataView input_data_view(params, &serialization_context);
      
      p_code = input_data_view.code();
      if (!input_data_view.ReadReason(&p_reason))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebSocket::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartClosingHandshake(
std::move(p_code), 
std::move(p_reason));
      return true;
    }
  }
  return false;
}

// static
bool WebSocketStubDispatch::AcceptWithResponder(
    WebSocket* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWebSocket_AddChannelRequest_Name: {
      break;
    }
    case internal::kWebSocket_SendFrame_Name: {
      break;
    }
    case internal::kWebSocket_SendFlowControl_Name: {
      break;
    }
    case internal::kWebSocket_StartClosingHandshake_Name: {
      break;
    }
  }
  return false;
}

bool WebSocketRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WebSocket RequestValidator");

  switch (message->header()->name) {
    case internal::kWebSocket_AddChannelRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_AddChannelRequest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocket_SendFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_SendFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocket_SendFlowControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_SendFlowControl_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWebSocket_StartClosingHandshake_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_StartClosingHandshake_Params_Data>(
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
bool StructTraits<::network::mojom::blink::HttpHeader::DataView, ::network::mojom::blink::HttpHeaderPtr>::Read(
    ::network::mojom::blink::HttpHeader::DataView input,
    ::network::mojom::blink::HttpHeaderPtr* output) {
  bool success = true;
  ::network::mojom::blink::HttpHeaderPtr result(::network::mojom::blink::HttpHeader::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::WebSocketHandshakeRequest::DataView, ::network::mojom::blink::WebSocketHandshakeRequestPtr>::Read(
    ::network::mojom::blink::WebSocketHandshakeRequest::DataView input,
    ::network::mojom::blink::WebSocketHandshakeRequestPtr* output) {
  bool success = true;
  ::network::mojom::blink::WebSocketHandshakeRequestPtr result(::network::mojom::blink::WebSocketHandshakeRequest::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadHeadersText(&result->headers_text))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::blink::WebSocketHandshakeResponse::DataView, ::network::mojom::blink::WebSocketHandshakeResponsePtr>::Read(
    ::network::mojom::blink::WebSocketHandshakeResponse::DataView input,
    ::network::mojom::blink::WebSocketHandshakeResponsePtr* output) {
  bool success = true;
  ::network::mojom::blink::WebSocketHandshakeResponsePtr result(::network::mojom::blink::WebSocketHandshakeResponse::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadHttpVersion(&result->http_version))
        success = false;
      result->status_code = input.status_code();
      if (!input.ReadStatusText(&result->status_text))
        success = false;
      if (!input.ReadRemoteEndpoint(&result->remote_endpoint))
        success = false;
      if (!input.ReadHeaders(&result->headers))
        success = false;
      if (!input.ReadHeadersText(&result->headers_text))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif