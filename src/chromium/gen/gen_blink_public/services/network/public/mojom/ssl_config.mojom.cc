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

#include "services/network/public/mojom/ssl_config.mojom.h"

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

#include "services/network/public/mojom/ssl_config.mojom-params-data.h"
#include "services/network/public/mojom/ssl_config.mojom-shared-message-ids.h"

#include "services/network/public/mojom/ssl_config.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_JUMBO_H_
#endif
namespace network {
namespace mojom {
SSLConfig::SSLConfig()
    : rev_checking_enabled(false),
      rev_checking_required_local_anchors(false),
      sha1_local_anchors_enabled(false),
      symantec_enforcement_disabled(false),
      version_min(SSLVersion::kTLS1),
      version_max(SSLVersion::kTLS13),
      disabled_cipher_suites(),
      client_cert_pooling_policy() {}

SSLConfig::SSLConfig(
    bool rev_checking_enabled_in,
    bool rev_checking_required_local_anchors_in,
    bool sha1_local_anchors_enabled_in,
    bool symantec_enforcement_disabled_in,
    SSLVersion version_min_in,
    SSLVersion version_max_in,
    const std::vector<uint16_t>& disabled_cipher_suites_in,
    const std::vector<std::string>& client_cert_pooling_policy_in)
    : rev_checking_enabled(std::move(rev_checking_enabled_in)),
      rev_checking_required_local_anchors(std::move(rev_checking_required_local_anchors_in)),
      sha1_local_anchors_enabled(std::move(sha1_local_anchors_enabled_in)),
      symantec_enforcement_disabled(std::move(symantec_enforcement_disabled_in)),
      version_min(std::move(version_min_in)),
      version_max(std::move(version_max_in)),
      disabled_cipher_suites(std::move(disabled_cipher_suites_in)),
      client_cert_pooling_policy(std::move(client_cert_pooling_policy_in)) {}

SSLConfig::~SSLConfig() = default;

bool SSLConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SSLConfigClient::Name_[] = "network.mojom.SSLConfigClient";

SSLConfigClientProxy::SSLConfigClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SSLConfigClientProxy::OnSSLConfigUpdated(
    SSLConfigPtr in_ssl_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SSLConfigClient::OnSSLConfigUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSSLConfigClient_OnSSLConfigUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ssl_config)::BaseType::BufferWriter
      ssl_config_writer;
  mojo::internal::Serialize<::network::mojom::SSLConfigDataView>(
      in_ssl_config, buffer, &ssl_config_writer, &serialization_context);
  params->ssl_config.Set(
      ssl_config_writer.is_null() ? nullptr : ssl_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ssl_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ssl_config in SSLConfigClient.OnSSLConfigUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SSLConfigClient::Name_);
  message.set_method_name("OnSSLConfigUpdated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SSLConfigClientStubDispatch::Accept(
    SSLConfigClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSSLConfigClient_OnSSLConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SSLConfigClient::OnSSLConfigUpdated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data* params =
          reinterpret_cast<internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SSLConfigPtr p_ssl_config{};
      SSLConfigClient_OnSSLConfigUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSslConfig(&p_ssl_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SSLConfigClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSSLConfigUpdated(
std::move(p_ssl_config));
      return true;
    }
  }
  return false;
}

// static
bool SSLConfigClientStubDispatch::AcceptWithResponder(
    SSLConfigClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSSLConfigClient_OnSSLConfigUpdated_Name: {
      break;
    }
  }
  return false;
}

bool SSLConfigClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SSLConfigClient RequestValidator");

  switch (message->header()->name) {
    case internal::kSSLConfigClient_OnSSLConfigUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SSLConfigClient_OnSSLConfigUpdated_Params_Data>(
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
bool StructTraits<::network::mojom::SSLConfig::DataView, ::network::mojom::SSLConfigPtr>::Read(
    ::network::mojom::SSLConfig::DataView input,
    ::network::mojom::SSLConfigPtr* output) {
  bool success = true;
  ::network::mojom::SSLConfigPtr result(::network::mojom::SSLConfig::New());
  
      result->rev_checking_enabled = input.rev_checking_enabled();
      result->rev_checking_required_local_anchors = input.rev_checking_required_local_anchors();
      result->sha1_local_anchors_enabled = input.sha1_local_anchors_enabled();
      result->symantec_enforcement_disabled = input.symantec_enforcement_disabled();
      if (!input.ReadVersionMin(&result->version_min))
        success = false;
      if (!input.ReadVersionMax(&result->version_max))
        success = false;
      if (!input.ReadDisabledCipherSuites(&result->disabled_cipher_suites))
        success = false;
      if (!input.ReadClientCertPoolingPolicy(&result->client_cert_pooling_policy))
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