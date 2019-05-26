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

#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-blink.h"

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

#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-params-data.h"
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-shared-message-ids.h"

#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
TrialComparisonCertVerifierParams::TrialComparisonCertVerifierParams()
    : initial_allowed(false),
      config_client_request(),
      report_client() {}

TrialComparisonCertVerifierParams::TrialComparisonCertVerifierParams(
    bool initial_allowed_in,
    TrialComparisonCertVerifierConfigClientRequest config_client_request_in,
    TrialComparisonCertVerifierReportClientPtrInfo report_client_in)
    : initial_allowed(std::move(initial_allowed_in)),
      config_client_request(std::move(config_client_request_in)),
      report_client(std::move(report_client_in)) {}

TrialComparisonCertVerifierParams::~TrialComparisonCertVerifierParams() = default;

bool TrialComparisonCertVerifierParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char TrialComparisonCertVerifierConfigClient::Name_[] = "network.mojom.TrialComparisonCertVerifierConfigClient";

TrialComparisonCertVerifierConfigClientProxy::TrialComparisonCertVerifierConfigClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TrialComparisonCertVerifierConfigClientProxy::OnTrialConfigUpdated(
    bool in_allowed) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TrialComparisonCertVerifierConfigClient::OnTrialConfigUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->allowed = in_allowed;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrialComparisonCertVerifierConfigClient::Name_);
  message.set_method_name("OnTrialConfigUpdated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TrialComparisonCertVerifierConfigClientStubDispatch::Accept(
    TrialComparisonCertVerifierConfigClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TrialComparisonCertVerifierConfigClient::OnTrialConfigUpdated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data* params =
          reinterpret_cast<internal::TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_allowed{};
      TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_allowed = input_data_view.allowed();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TrialComparisonCertVerifierConfigClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTrialConfigUpdated(
std::move(p_allowed));
      return true;
    }
  }
  return false;
}

// static
bool TrialComparisonCertVerifierConfigClientStubDispatch::AcceptWithResponder(
    TrialComparisonCertVerifierConfigClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Name: {
      break;
    }
  }
  return false;
}

bool TrialComparisonCertVerifierConfigClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TrialComparisonCertVerifierConfigClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrialComparisonCertVerifierConfigClient_OnTrialConfigUpdated_Params_Data>(
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

const char TrialComparisonCertVerifierReportClient::Name_[] = "network.mojom.TrialComparisonCertVerifierReportClient";

TrialComparisonCertVerifierReportClientProxy::TrialComparisonCertVerifierReportClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TrialComparisonCertVerifierReportClientProxy::SendTrialReport(
    const WTF::String& in_hostname, ::network::mojom::blink::X509CertificatePtr in_cert, bool in_enable_rev_checking, bool in_require_rev_checking_local_anchors, bool in_enable_sha1_local_anchors, bool in_disable_symantec_enforcement, ::network::mojom::blink::CertVerifyResultPtr in_primary_result, ::network::mojom::blink::CertVerifyResultPtr in_trial_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TrialComparisonCertVerifierReportClient::SendTrialReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrialComparisonCertVerifierReportClient_SendTrialReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->hostname)::BaseType::BufferWriter
      hostname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_hostname, buffer, &hostname_writer, &serialization_context);
  params->hostname.Set(
      hostname_writer.is_null() ? nullptr : hostname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->hostname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null hostname in TrialComparisonCertVerifierReportClient.SendTrialReport request");
  typename decltype(params->cert)::BaseType::BufferWriter
      cert_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      in_cert, buffer, &cert_writer, &serialization_context);
  params->cert.Set(
      cert_writer.is_null() ? nullptr : cert_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert in TrialComparisonCertVerifierReportClient.SendTrialReport request");
  params->enable_rev_checking = in_enable_rev_checking;
  params->require_rev_checking_local_anchors = in_require_rev_checking_local_anchors;
  params->enable_sha1_local_anchors = in_enable_sha1_local_anchors;
  params->disable_symantec_enforcement = in_disable_symantec_enforcement;
  typename decltype(params->primary_result)::BaseType::BufferWriter
      primary_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      in_primary_result, buffer, &primary_result_writer, &serialization_context);
  params->primary_result.Set(
      primary_result_writer.is_null() ? nullptr : primary_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->primary_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null primary_result in TrialComparisonCertVerifierReportClient.SendTrialReport request");
  typename decltype(params->trial_result)::BaseType::BufferWriter
      trial_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      in_trial_result, buffer, &trial_result_writer, &serialization_context);
  params->trial_result.Set(
      trial_result_writer.is_null() ? nullptr : trial_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->trial_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null trial_result in TrialComparisonCertVerifierReportClient.SendTrialReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrialComparisonCertVerifierReportClient::Name_);
  message.set_method_name("SendTrialReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TrialComparisonCertVerifierReportClientStubDispatch::Accept(
    TrialComparisonCertVerifierReportClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTrialComparisonCertVerifierReportClient_SendTrialReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TrialComparisonCertVerifierReportClient::SendTrialReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data* params =
          reinterpret_cast<internal::TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_hostname{};
      ::network::mojom::blink::X509CertificatePtr p_cert{};
      bool p_enable_rev_checking{};
      bool p_require_rev_checking_local_anchors{};
      bool p_enable_sha1_local_anchors{};
      bool p_disable_symantec_enforcement{};
      ::network::mojom::blink::CertVerifyResultPtr p_primary_result{};
      ::network::mojom::blink::CertVerifyResultPtr p_trial_result{};
      TrialComparisonCertVerifierReportClient_SendTrialReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHostname(&p_hostname))
        success = false;
      if (!input_data_view.ReadCert(&p_cert))
        success = false;
      p_enable_rev_checking = input_data_view.enable_rev_checking();
      p_require_rev_checking_local_anchors = input_data_view.require_rev_checking_local_anchors();
      p_enable_sha1_local_anchors = input_data_view.enable_sha1_local_anchors();
      p_disable_symantec_enforcement = input_data_view.disable_symantec_enforcement();
      if (!input_data_view.ReadPrimaryResult(&p_primary_result))
        success = false;
      if (!input_data_view.ReadTrialResult(&p_trial_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TrialComparisonCertVerifierReportClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendTrialReport(
std::move(p_hostname), 
std::move(p_cert), 
std::move(p_enable_rev_checking), 
std::move(p_require_rev_checking_local_anchors), 
std::move(p_enable_sha1_local_anchors), 
std::move(p_disable_symantec_enforcement), 
std::move(p_primary_result), 
std::move(p_trial_result));
      return true;
    }
  }
  return false;
}

// static
bool TrialComparisonCertVerifierReportClientStubDispatch::AcceptWithResponder(
    TrialComparisonCertVerifierReportClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTrialComparisonCertVerifierReportClient_SendTrialReport_Name: {
      break;
    }
  }
  return false;
}

bool TrialComparisonCertVerifierReportClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TrialComparisonCertVerifierReportClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTrialComparisonCertVerifierReportClient_SendTrialReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrialComparisonCertVerifierReportClient_SendTrialReport_Params_Data>(
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
bool StructTraits<::network::mojom::blink::TrialComparisonCertVerifierParams::DataView, ::network::mojom::blink::TrialComparisonCertVerifierParamsPtr>::Read(
    ::network::mojom::blink::TrialComparisonCertVerifierParams::DataView input,
    ::network::mojom::blink::TrialComparisonCertVerifierParamsPtr* output) {
  bool success = true;
  ::network::mojom::blink::TrialComparisonCertVerifierParamsPtr result(::network::mojom::blink::TrialComparisonCertVerifierParams::New());
  
      result->initial_allowed = input.initial_allowed();
      result->config_client_request =
          input.TakeConfigClientRequest<decltype(result->config_client_request)>();
      result->report_client =
          input.TakeReportClient<decltype(result->report_client)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif