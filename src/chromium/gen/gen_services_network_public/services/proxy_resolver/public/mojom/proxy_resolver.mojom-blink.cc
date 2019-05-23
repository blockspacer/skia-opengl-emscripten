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

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-blink.h"

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

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-params-data.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared-message-ids.h"

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace proxy_resolver {
namespace mojom {
namespace blink {
const char kProxyResolverServiceName[] = "proxy_resolver";
ProxyServer::ProxyServer()
    : scheme(),
      host(),
      port() {}

ProxyServer::ProxyServer(
    ProxyScheme scheme_in,
    const WTF::String& host_in,
    uint16_t port_in)
    : scheme(std::move(scheme_in)),
      host(std::move(host_in)),
      port(std::move(port_in)) {}

ProxyServer::~ProxyServer() = default;
size_t ProxyServer::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->scheme);
  seed = mojo::internal::WTFHash(seed, this->host);
  seed = mojo::internal::WTFHash(seed, this->port);
  return seed;
}

bool ProxyServer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProxyInfo::ProxyInfo()
    : proxy_servers() {}

ProxyInfo::ProxyInfo(
    WTF::Vector<ProxyServerPtr> proxy_servers_in)
    : proxy_servers(std::move(proxy_servers_in)) {}

ProxyInfo::~ProxyInfo() = default;

bool ProxyInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char HostResolverRequestClient::Name_[] = "proxy_resolver.mojom.HostResolverRequestClient";

HostResolverRequestClientProxy::HostResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HostResolverRequestClientProxy::ReportResult(
    int32_t in_error, WTF::Vector<::network::mojom::blink::IPAddressPtr> in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HostResolverRequestClient::ReportResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHostResolverRequestClient_ReportResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::HostResolverRequestClient_ReportResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error = in_error;
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  const mojo::internal::ContainerValidateParams result_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::IPAddressDataView>>(
      in_result, buffer, &result_writer, &result_validate_params,
      &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in HostResolverRequestClient.ReportResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HostResolverRequestClient::Name_);
  message.set_method_name("ReportResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool HostResolverRequestClientStubDispatch::Accept(
    HostResolverRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HostResolverRequestClient::ReportResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HostResolverRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::HostResolverRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_error{};
      WTF::Vector<::network::mojom::blink::IPAddressPtr> p_result{};
      HostResolverRequestClient_ReportResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_error = input_data_view.error();
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HostResolverRequestClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReportResult(
std::move(p_error), 
std::move(p_result));
      return true;
    }
  }
  return false;
}

// static
bool HostResolverRequestClientStubDispatch::AcceptWithResponder(
    HostResolverRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
      break;
    }
  }
  return false;
}

bool HostResolverRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HostResolverRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HostResolverRequestClient_ReportResult_Params_Data>(
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

const char ProxyResolver::Name_[] = "proxy_resolver.mojom.ProxyResolver";

ProxyResolverProxy::ProxyResolverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverProxy::GetProxyForUrl(
    const ::blink::KURL& in_url, ProxyResolverRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolver::GetProxyForUrl");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolver_GetProxyForUrl_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolver_GetProxyForUrl_Params_Data::BufferWriter
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
      "null url in ProxyResolver.GetProxyForUrl request");
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolver.GetProxyForUrl request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolver::Name_);
  message.set_method_name("GetProxyForUrl");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverStubDispatch::Accept(
    ProxyResolver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolver::GetProxyForUrl",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolver_GetProxyForUrl_Params_Data* params =
          reinterpret_cast<internal::ProxyResolver_GetProxyForUrl_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::KURL p_url{};
      ProxyResolverRequestClientPtr p_client{};
      ProxyResolver_GetProxyForUrl_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetProxyForUrl(
std::move(p_url), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverStubDispatch::AcceptWithResponder(
    ProxyResolver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
      break;
    }
  }
  return false;
}

bool ProxyResolverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolver RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolver_GetProxyForUrl_Params_Data>(
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

const char ProxyResolverRequestClient::Name_[] = "proxy_resolver.mojom.ProxyResolverRequestClient";

ProxyResolverRequestClientProxy::ProxyResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverRequestClientProxy::ReportResult(
    int32_t in_error, ProxyInfoPtr in_proxy_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::ReportResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_ReportResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_ReportResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error = in_error;
  typename decltype(params->proxy_info)::BaseType::BufferWriter
      proxy_info_writer;
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyInfoDataView>(
      in_proxy_info, buffer, &proxy_info_writer, &serialization_context);
  params->proxy_info.Set(
      proxy_info_writer.is_null() ? nullptr : proxy_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_info in ProxyResolverRequestClient.ReportResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverRequestClient::Name_);
  message.set_method_name("ReportResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverRequestClientProxy::Alert(
    const WTF::String& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::Alert");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_Alert_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_Alert_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverRequestClient.Alert request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverRequestClient::Name_);
  message.set_method_name("Alert");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverRequestClientProxy::OnError(
    int32_t in_line_number, const WTF::String& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->line_number = in_line_number;
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverRequestClient.OnError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverRequestClient::Name_);
  message.set_method_name("OnError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverRequestClientProxy::ResolveDns(
    const WTF::String& in_host, HostResolveOperation in_operation, HostResolverRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::ResolveDns");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverRequestClient_ResolveDns_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverRequestClient_ResolveDns_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in ProxyResolverRequestClient.ResolveDns request");
  mojo::internal::Serialize<::proxy_resolver::mojom::HostResolveOperation>(
      in_operation, &params->operation);
  mojo::internal::Serialize<::proxy_resolver::mojom::HostResolverRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverRequestClient.ResolveDns request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverRequestClient::Name_);
  message.set_method_name("ResolveDns");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverRequestClientStubDispatch::Accept(
    ProxyResolverRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::ReportResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_error{};
      ProxyInfoPtr p_proxy_info{};
      ProxyResolverRequestClient_ReportResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_error = input_data_view.error();
      if (!input_data_view.ReadProxyInfo(&p_proxy_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverRequestClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReportResult(
std::move(p_error), 
std::move(p_proxy_info));
      return true;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::Alert",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_Alert_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_Alert_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_error{};
      ProxyResolverRequestClient_Alert_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverRequestClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Alert(
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::OnError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_line_number{};
      WTF::String p_error{};
      ProxyResolverRequestClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverRequestClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnError(
std::move(p_line_number), 
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverRequestClient::ResolveDns",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverRequestClient_ResolveDns_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_ResolveDns_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_host{};
      HostResolveOperation p_operation{};
      HostResolverRequestClientPtr p_client{};
      ProxyResolverRequestClient_ResolveDns_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadOperation(&p_operation))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverRequestClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResolveDns(
std::move(p_host), 
std::move(p_operation), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverRequestClientStubDispatch::AcceptWithResponder(
    ProxyResolverRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
      break;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
      break;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
      break;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
      break;
    }
  }
  return false;
}

bool ProxyResolverRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolverRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_ReportResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_Alert_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_ResolveDns_Params_Data>(
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

const char ProxyResolverFactory::Name_[] = "proxy_resolver.mojom.ProxyResolverFactory";

ProxyResolverFactoryProxy::ProxyResolverFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverFactoryProxy::CreateResolver(
    const WTF::String& in_pac_script, ProxyResolverRequest in_resolver, ProxyResolverFactoryRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverFactory::CreateResolver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactory_CreateResolver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactory_CreateResolver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pac_script)::BaseType::BufferWriter
      pac_script_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_pac_script, buffer, &pac_script_writer, &serialization_context);
  params->pac_script.Set(
      pac_script_writer.is_null() ? nullptr : pac_script_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pac_script.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pac_script in ProxyResolverFactory.CreateResolver request");
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverRequestDataView>(
      in_resolver, &params->resolver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->resolver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid resolver in ProxyResolverFactory.CreateResolver request");
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverFactoryRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverFactory.CreateResolver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverFactory::Name_);
  message.set_method_name("CreateResolver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverFactoryStubDispatch::Accept(
    ProxyResolverFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverFactory::CreateResolver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactory_CreateResolver_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactory_CreateResolver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_pac_script{};
      ProxyResolverRequest p_resolver{};
      ProxyResolverFactoryRequestClientPtr p_client{};
      ProxyResolverFactory_CreateResolver_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPacScript(&p_pac_script))
        success = false;
      p_resolver =
          input_data_view.TakeResolver<decltype(p_resolver)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateResolver(
std::move(p_pac_script), 
std::move(p_resolver), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverFactoryStubDispatch::AcceptWithResponder(
    ProxyResolverFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
      break;
    }
  }
  return false;
}

bool ProxyResolverFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolverFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactory_CreateResolver_Params_Data>(
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

const char ProxyResolverFactoryRequestClient::Name_[] = "proxy_resolver.mojom.ProxyResolverFactoryRequestClient";

ProxyResolverFactoryRequestClientProxy::ProxyResolverFactoryRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyResolverFactoryRequestClientProxy::ReportResult(
    int32_t in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::ReportResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_ReportResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error = in_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverFactoryRequestClient::Name_);
  message.set_method_name("ReportResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverFactoryRequestClientProxy::Alert(
    const WTF::String& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::Alert");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_Alert_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_Alert_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverFactoryRequestClient.Alert request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverFactoryRequestClient::Name_);
  message.set_method_name("Alert");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverFactoryRequestClientProxy::OnError(
    int32_t in_line_number, const WTF::String& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::OnError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_OnError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_OnError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->line_number = in_line_number;
  typename decltype(params->error)::BaseType::BufferWriter
      error_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, buffer, &error_writer, &serialization_context);
  params->error.Set(
      error_writer.is_null() ? nullptr : error_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->error.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverFactoryRequestClient.OnError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverFactoryRequestClient::Name_);
  message.set_method_name("OnError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyResolverFactoryRequestClientProxy::ResolveDns(
    const WTF::String& in_host, HostResolveOperation in_operation, HostResolverRequestClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::ResolveDns");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyResolverFactoryRequestClient_ResolveDns_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::proxy_resolver::mojom::internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in ProxyResolverFactoryRequestClient.ResolveDns request");
  mojo::internal::Serialize<::proxy_resolver::mojom::HostResolveOperation>(
      in_operation, &params->operation);
  mojo::internal::Serialize<::proxy_resolver::mojom::HostResolverRequestClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverFactoryRequestClient.ResolveDns request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyResolverFactoryRequestClient::Name_);
  message.set_method_name("ResolveDns");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyResolverFactoryRequestClientStubDispatch::Accept(
    ProxyResolverFactoryRequestClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::ReportResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_error{};
      ProxyResolverFactoryRequestClient_ReportResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_error = input_data_view.error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverFactoryRequestClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReportResult(
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::Alert",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_Alert_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_Alert_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_error{};
      ProxyResolverFactoryRequestClient_Alert_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverFactoryRequestClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Alert(
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::OnError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_line_number{};
      WTF::String p_error{};
      ProxyResolverFactoryRequestClient_OnError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverFactoryRequestClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnError(
std::move(p_line_number), 
std::move(p_error));
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyResolverFactoryRequestClient::ResolveDns",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_host{};
      HostResolveOperation p_operation{};
      HostResolverRequestClientPtr p_client{};
      ProxyResolverFactoryRequestClient_ResolveDns_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadOperation(&p_operation))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyResolverFactoryRequestClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResolveDns(
std::move(p_host), 
std::move(p_operation), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ProxyResolverFactoryRequestClientStubDispatch::AcceptWithResponder(
    ProxyResolverFactoryRequestClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
      break;
    }
  }
  return false;
}

bool ProxyResolverFactoryRequestClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyResolverFactoryRequestClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_Alert_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data>(
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
}  // namespace proxy_resolver

namespace mojo {


// static
bool StructTraits<::proxy_resolver::mojom::blink::ProxyServer::DataView, ::proxy_resolver::mojom::blink::ProxyServerPtr>::Read(
    ::proxy_resolver::mojom::blink::ProxyServer::DataView input,
    ::proxy_resolver::mojom::blink::ProxyServerPtr* output) {
  bool success = true;
  ::proxy_resolver::mojom::blink::ProxyServerPtr result(::proxy_resolver::mojom::blink::ProxyServer::New());
  
      if (!input.ReadScheme(&result->scheme))
        success = false;
      if (!input.ReadHost(&result->host))
        success = false;
      result->port = input.port();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::proxy_resolver::mojom::blink::ProxyInfo::DataView, ::proxy_resolver::mojom::blink::ProxyInfoPtr>::Read(
    ::proxy_resolver::mojom::blink::ProxyInfo::DataView input,
    ::proxy_resolver::mojom::blink::ProxyInfoPtr* output) {
  bool success = true;
  ::proxy_resolver::mojom::blink::ProxyInfoPtr result(::proxy_resolver::mojom::blink::ProxyInfo::New());
  
      if (!input.ReadProxyServers(&result->proxy_servers))
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