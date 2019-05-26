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

#include "services/network/public/mojom/proxy_lookup_client.mojom.h"

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

#include "services/network/public/mojom/proxy_lookup_client.mojom-params-data.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom-shared-message-ids.h"

#include "services/network/public/mojom/proxy_lookup_client.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_JUMBO_H_
#include "services/proxy_resolver/public/cpp/mojo_host_struct_traits.h"
#include "services/proxy_resolver/public/cpp/proxy_resolver_mojom_traits.h"
#endif
namespace network {
namespace mojom {
const char ProxyLookupClient::Name_[] = "network.mojom.ProxyLookupClient";

ProxyLookupClientProxy::ProxyLookupClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyLookupClientProxy::OnProxyLookupComplete(
    int32_t in_net_error, const base::Optional<net::ProxyInfo>& in_proxy_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProxyLookupClient::OnProxyLookupComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProxyLookupClient_OnProxyLookupComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->net_error = in_net_error;
  typename decltype(params->proxy_info)::BaseType::BufferWriter
      proxy_info_writer;
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyInfoDataView>(
      in_proxy_info, buffer, &proxy_info_writer, &serialization_context);
  params->proxy_info.Set(
      proxy_info_writer.is_null() ? nullptr : proxy_info_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyLookupClient::Name_);
  message.set_method_name("OnProxyLookupComplete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProxyLookupClientStubDispatch::Accept(
    ProxyLookupClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyLookupClient_OnProxyLookupComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProxyLookupClient::OnProxyLookupComplete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data* params =
          reinterpret_cast<internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_net_error{};
      base::Optional<net::ProxyInfo> p_proxy_info{};
      ProxyLookupClient_OnProxyLookupComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_net_error = input_data_view.net_error();
      if (!input_data_view.ReadProxyInfo(&p_proxy_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyLookupClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnProxyLookupComplete(
std::move(p_net_error), 
std::move(p_proxy_info));
      return true;
    }
  }
  return false;
}

// static
bool ProxyLookupClientStubDispatch::AcceptWithResponder(
    ProxyLookupClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProxyLookupClient_OnProxyLookupComplete_Name: {
      break;
    }
  }
  return false;
}

bool ProxyLookupClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProxyLookupClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProxyLookupClient_OnProxyLookupComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif