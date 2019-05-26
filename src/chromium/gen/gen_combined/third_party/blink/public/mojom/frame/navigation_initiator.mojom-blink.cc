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

#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-blink.h"

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

#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-params-data.h"
#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
SourceLocation::SourceLocation()
    : url(),
      line_number(),
      column_number() {}

SourceLocation::SourceLocation(
    const WTF::String& url_in,
    uint32_t line_number_in,
    uint32_t column_number_in)
    : url(std::move(url_in)),
      line_number(std::move(line_number_in)),
      column_number(std::move(column_number_in)) {}

SourceLocation::~SourceLocation() = default;
size_t SourceLocation::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->url);
  seed = mojo::internal::WTFHash(seed, this->line_number);
  seed = mojo::internal::WTFHash(seed, this->column_number);
  return seed;
}

bool SourceLocation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CSPViolationParams::CSPViolationParams()
    : directive(),
      effective_directive(),
      console_message(),
      blocked_url(),
      report_endpoints(),
      use_reporting_api(),
      header(),
      disposition(),
      after_redirect(),
      source_location() {}

CSPViolationParams::CSPViolationParams(
    const WTF::String& directive_in,
    const WTF::String& effective_directive_in,
    const WTF::String& console_message_in,
    const WTF::String& blocked_url_in,
    const WTF::Vector<WTF::String>& report_endpoints_in,
    bool use_reporting_api_in,
    const WTF::String& header_in,
    WebContentSecurityPolicyType disposition_in,
    bool after_redirect_in,
    SourceLocationPtr source_location_in)
    : directive(std::move(directive_in)),
      effective_directive(std::move(effective_directive_in)),
      console_message(std::move(console_message_in)),
      blocked_url(std::move(blocked_url_in)),
      report_endpoints(std::move(report_endpoints_in)),
      use_reporting_api(std::move(use_reporting_api_in)),
      header(std::move(header_in)),
      disposition(std::move(disposition_in)),
      after_redirect(std::move(after_redirect_in)),
      source_location(std::move(source_location_in)) {}

CSPViolationParams::~CSPViolationParams() = default;

bool CSPViolationParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char NavigationInitiator::Name_[] = "blink.mojom.NavigationInitiator";

NavigationInitiatorProxy::NavigationInitiatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NavigationInitiatorProxy::SendViolationReport(
    CSPViolationParamsPtr in_violation_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NavigationInitiator::SendViolationReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNavigationInitiator_SendViolationReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NavigationInitiator_SendViolationReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->violation_params)::BaseType::BufferWriter
      violation_params_writer;
  mojo::internal::Serialize<::blink::mojom::CSPViolationParamsDataView>(
      in_violation_params, buffer, &violation_params_writer, &serialization_context);
  params->violation_params.Set(
      violation_params_writer.is_null() ? nullptr : violation_params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->violation_params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null violation_params in NavigationInitiator.SendViolationReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NavigationInitiator::Name_);
  message.set_method_name("SendViolationReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool NavigationInitiatorStubDispatch::Accept(
    NavigationInitiator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNavigationInitiator_SendViolationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NavigationInitiator::SendViolationReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NavigationInitiator_SendViolationReport_Params_Data* params =
          reinterpret_cast<internal::NavigationInitiator_SendViolationReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CSPViolationParamsPtr p_violation_params{};
      NavigationInitiator_SendViolationReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadViolationParams(&p_violation_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NavigationInitiator::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendViolationReport(
std::move(p_violation_params));
      return true;
    }
  }
  return false;
}

// static
bool NavigationInitiatorStubDispatch::AcceptWithResponder(
    NavigationInitiator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNavigationInitiator_SendViolationReport_Name: {
      break;
    }
  }
  return false;
}

bool NavigationInitiatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NavigationInitiator RequestValidator");

  switch (message->header()->name) {
    case internal::kNavigationInitiator_SendViolationReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NavigationInitiator_SendViolationReport_Params_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::SourceLocation::DataView, ::blink::mojom::blink::SourceLocationPtr>::Read(
    ::blink::mojom::blink::SourceLocation::DataView input,
    ::blink::mojom::blink::SourceLocationPtr* output) {
  bool success = true;
  ::blink::mojom::blink::SourceLocationPtr result(::blink::mojom::blink::SourceLocation::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      result->line_number = input.line_number();
      result->column_number = input.column_number();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::CSPViolationParams::DataView, ::blink::mojom::blink::CSPViolationParamsPtr>::Read(
    ::blink::mojom::blink::CSPViolationParams::DataView input,
    ::blink::mojom::blink::CSPViolationParamsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::CSPViolationParamsPtr result(::blink::mojom::blink::CSPViolationParams::New());
  
      if (!input.ReadDirective(&result->directive))
        success = false;
      if (!input.ReadEffectiveDirective(&result->effective_directive))
        success = false;
      if (!input.ReadConsoleMessage(&result->console_message))
        success = false;
      if (!input.ReadBlockedUrl(&result->blocked_url))
        success = false;
      if (!input.ReadReportEndpoints(&result->report_endpoints))
        success = false;
      result->use_reporting_api = input.use_reporting_api();
      if (!input.ReadHeader(&result->header))
        success = false;
      if (!input.ReadDisposition(&result->disposition))
        success = false;
      result->after_redirect = input.after_redirect();
      if (!input.ReadSourceLocation(&result->source_location))
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