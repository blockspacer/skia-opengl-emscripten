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

#include "services/network/public/mojom/proxy_config_with_annotation.mojom.h"

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

#include "services/network/public/mojom/proxy_config_with_annotation.mojom-params-data.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared-message-ids.h"

#include "services/network/public/mojom/proxy_config_with_annotation.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_with_annotation_mojom_traits.h"
#endif
namespace network {
namespace mojom {
ProxyConfigWithAnnotation::ProxyConfigWithAnnotation()
    : value(),
      traffic_annotation() {}

ProxyConfigWithAnnotation::ProxyConfigWithAnnotation(
    const net::ProxyConfig& value_in,
    const net::MutableNetworkTrafficAnnotationTag& traffic_annotation_in)
    : value(std::move(value_in)),
      traffic_annotation(std::move(traffic_annotation_in)) {}

ProxyConfigWithAnnotation::~ProxyConfigWithAnnotation() = default;

bool ProxyConfigWithAnnotation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ProxyConfigClient::Name_[] = "network.mojom.ProxyConfigClient";

class ProxyConfigClient_FlushProxyConfig_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProxyConfigClient_FlushProxyConfig_ForwardToCallback(
      ProxyConfigClient::FlushProxyConfigCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProxyConfigClient::FlushProxyConfigCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProxyConfigClient_FlushProxyConfig_ForwardToCallback);
};

ProxyConfigClientProxy::ProxyConfigClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyConfigClientProxy::OnProxyConfigUpdated(
    const net::ProxyConfigWithAnnotation& in_proxy_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyConfigClient::OnProxyConfigUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyConfigClient_OnProxyConfigUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->proxy_config)::BaseType::BufferWriter
      proxy_config_writer;
  mojo::internal::Serialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
      in_proxy_config, buffer, &proxy_config_writer, &serialization_context);
  params->proxy_config.Set(
      proxy_config_writer.is_null() ? nullptr : proxy_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_config in ProxyConfigClient.OnProxyConfigUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyConfigClient::Name_);
  message.set_method_name("OnProxyConfigUpdated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyConfigClientProxy::FlushProxyConfig(
    FlushProxyConfigCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyConfigClient::FlushProxyConfig");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyConfigClient_FlushProxyConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyConfigClient_FlushProxyConfig_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyConfigClient::Name_);
  message.set_method_name("FlushProxyConfig");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProxyConfigClient_FlushProxyConfig_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProxyConfigClient_FlushProxyConfig_ProxyToResponder {
 public:
  static ProxyConfigClient::FlushProxyConfigCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProxyConfigClient_FlushProxyConfig_ProxyToResponder> proxy(
        new ProxyConfigClient_FlushProxyConfig_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProxyConfigClient_FlushProxyConfig_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProxyConfigClient_FlushProxyConfig_ProxyToResponder() {
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
  ProxyConfigClient_FlushProxyConfig_ProxyToResponder(
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
        << "ProxyConfigClient::FlushProxyConfigCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProxyConfigClient_FlushProxyConfig_ProxyToResponder);
};

bool ProxyConfigClient_FlushProxyConfig_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProxyConfigClient::FlushProxyConfigCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ProxyConfigClient_FlushProxyConfig_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProxyConfigClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ProxyConfigClient_FlushProxyConfig_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyConfigClient_FlushProxyConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProxyConfigClient::FlushProxyConfigCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyConfigClient::Name_);
  message.set_method_name("FlushProxyConfig");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProxyConfigClientStubDispatch::Accept(
    ProxyConfigClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyConfigClient_OnProxyConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyConfigClient::OnProxyConfigUpdated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data* params =
          reinterpret_cast<internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::ProxyConfigWithAnnotation p_proxy_config{};
      ProxyConfigClient_OnProxyConfigUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProxyConfig(&p_proxy_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyConfigClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnProxyConfigUpdated(
std::move(p_proxy_config));
      return true;
    }
    case internal::kProxyConfigClient_FlushProxyConfig_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProxyConfigClientStubDispatch::AcceptWithResponder(
    ProxyConfigClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyConfigClient_OnProxyConfigUpdated_Name: {
      break;
    }
    case internal::kProxyConfigClient_FlushProxyConfig_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyConfigClient::FlushProxyConfig",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProxyConfigClient_FlushProxyConfig_Params_Data* params =
          reinterpret_cast<
              internal::ProxyConfigClient_FlushProxyConfig_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProxyConfigClient_FlushProxyConfig_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyConfigClient::Name_, 1, false);
        return false;
      }
      ProxyConfigClient::FlushProxyConfigCallback callback =
          ProxyConfigClient_FlushProxyConfig_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FlushProxyConfig(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProxyConfigClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyConfigClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyConfigClient_OnProxyConfigUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyConfigClient_FlushProxyConfig_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyConfigClient_FlushProxyConfig_Params_Data>(
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

bool ProxyConfigClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyConfigClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProxyConfigClient_FlushProxyConfig_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data>(
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
const char ProxyConfigPollerClient::Name_[] = "network.mojom.ProxyConfigPollerClient";

ProxyConfigPollerClientProxy::ProxyConfigPollerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyConfigPollerClientProxy::OnLazyProxyConfigPoll(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyConfigPollerClient::OnLazyProxyConfigPoll");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyConfigPollerClient::Name_);
  message.set_method_name("OnLazyProxyConfigPoll");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyConfigPollerClientStubDispatch::Accept(
    ProxyConfigPollerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyConfigPollerClient::OnLazyProxyConfigPoll",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* params =
          reinterpret_cast<internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProxyConfigPollerClient_OnLazyProxyConfigPoll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyConfigPollerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnLazyProxyConfigPoll();
      return true;
    }
  }
  return false;
}

// static
bool ProxyConfigPollerClientStubDispatch::AcceptWithResponder(
    ProxyConfigPollerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name: {
      break;
    }
  }
  return false;
}

bool ProxyConfigPollerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyConfigPollerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyConfigPollerClient_OnLazyProxyConfigPoll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data>(
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

const char ProxyErrorClient::Name_[] = "network.mojom.ProxyErrorClient";

ProxyErrorClientProxy::ProxyErrorClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyErrorClientProxy::OnPACScriptError(
    int32_t in_line_number, const std::string& in_details) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyErrorClient::OnPACScriptError");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyErrorClient_OnPACScriptError_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyErrorClient_OnPACScriptError_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->line_number = in_line_number;
  typename decltype(params->details)::BaseType::BufferWriter
      details_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_details, buffer, &details_writer, &serialization_context);
  params->details.Set(
      details_writer.is_null() ? nullptr : details_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in ProxyErrorClient.OnPACScriptError request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyErrorClient::Name_);
  message.set_method_name("OnPACScriptError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProxyErrorClientProxy::OnRequestMaybeFailedDueToProxySettings(
    int32_t in_net_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyErrorClient::OnRequestMaybeFailedDueToProxySettings");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyErrorClient::Name_);
  message.set_method_name("OnRequestMaybeFailedDueToProxySettings");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyErrorClientStubDispatch::Accept(
    ProxyErrorClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyErrorClient_OnPACScriptError_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyErrorClient::OnPACScriptError",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyErrorClient_OnPACScriptError_Params_Data* params =
          reinterpret_cast<internal::ProxyErrorClient_OnPACScriptError_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_line_number{};
      std::string p_details{};
      ProxyErrorClient_OnPACScriptError_ParamsDataView input_data_view(params, &serialization_context);
      
      p_line_number = input_data_view.line_number();
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyErrorClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnPACScriptError(
std::move(p_line_number), 
std::move(p_details));
      return true;
    }
    case internal::kProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyErrorClient::OnRequestMaybeFailedDueToProxySettings",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data* params =
          reinterpret_cast<internal::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_net_error{};
      ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_ParamsDataView input_data_view(params, &serialization_context);
      
      p_net_error = input_data_view.net_error();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyErrorClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnRequestMaybeFailedDueToProxySettings(
std::move(p_net_error));
      return true;
    }
  }
  return false;
}

// static
bool ProxyErrorClientStubDispatch::AcceptWithResponder(
    ProxyErrorClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyErrorClient_OnPACScriptError_Name: {
      break;
    }
    case internal::kProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Name: {
      break;
    }
  }
  return false;
}

bool ProxyErrorClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyErrorClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyErrorClient_OnPACScriptError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyErrorClient_OnPACScriptError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data>(
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
bool StructTraits<::network::mojom::ProxyConfigWithAnnotation::DataView, ::network::mojom::ProxyConfigWithAnnotationPtr>::Read(
    ::network::mojom::ProxyConfigWithAnnotation::DataView input,
    ::network::mojom::ProxyConfigWithAnnotationPtr* output) {
  bool success = true;
  ::network::mojom::ProxyConfigWithAnnotationPtr result(::network::mojom::ProxyConfigWithAnnotation::New());
  
      if (!input.ReadValue(&result->value))
        success = false;
      if (!input.ReadTrafficAnnotation(&result->traffic_annotation))
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