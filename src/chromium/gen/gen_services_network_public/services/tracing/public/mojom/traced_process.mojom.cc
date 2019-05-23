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

#include "services/tracing/public/mojom/traced_process.mojom.h"

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

#include "services/tracing/public/mojom/traced_process.mojom-params-data.h"
#include "services/tracing/public/mojom/traced_process.mojom-shared-message-ids.h"

#include "services/tracing/public/mojom/traced_process.mojom-import-headers.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_JUMBO_H_
#endif
namespace tracing {
namespace mojom {
ConnectToTracingRequest::ConnectToTracingRequest()
    : perfetto_service(),
      agent_registry() {}

ConnectToTracingRequest::ConnectToTracingRequest(
    ::tracing::mojom::PerfettoServicePtrInfo perfetto_service_in,
    ::tracing::mojom::AgentRegistryPtrInfo agent_registry_in)
    : perfetto_service(std::move(perfetto_service_in)),
      agent_registry(std::move(agent_registry_in)) {}

ConnectToTracingRequest::~ConnectToTracingRequest() = default;

bool ConnectToTracingRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char TracedProcess::Name_[] = "tracing.mojom.TracedProcess";

TracedProcessProxy::TracedProcessProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TracedProcessProxy::ConnectToTracingService(
    ConnectToTracingRequestPtr in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TracedProcess::ConnectToTracingService");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTracedProcess_ConnectToTracingService_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::tracing::mojom::internal::TracedProcess_ConnectToTracingService_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->request)::BaseType::BufferWriter
      request_writer;
  mojo::internal::Serialize<::tracing::mojom::ConnectToTracingRequestDataView>(
      in_request, buffer, &request_writer, &serialization_context);
  params->request.Set(
      request_writer.is_null() ? nullptr : request_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in TracedProcess.ConnectToTracingService request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracedProcess::Name_);
  message.set_method_name("ConnectToTracingService");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TracedProcessStubDispatch::Accept(
    TracedProcess* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTracedProcess_ConnectToTracingService_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TracedProcess::ConnectToTracingService",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TracedProcess_ConnectToTracingService_Params_Data* params =
          reinterpret_cast<internal::TracedProcess_ConnectToTracingService_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ConnectToTracingRequestPtr p_request{};
      TracedProcess_ConnectToTracingService_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequest(&p_request))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracedProcess::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConnectToTracingService(
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool TracedProcessStubDispatch::AcceptWithResponder(
    TracedProcess* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTracedProcess_ConnectToTracingService_Name: {
      break;
    }
  }
  return false;
}

bool TracedProcessRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TracedProcess RequestValidator");

  switch (message->header()->name) {
    case internal::kTracedProcess_ConnectToTracingService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TracedProcess_ConnectToTracingService_Params_Data>(
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
}  // namespace tracing

namespace mojo {


// static
bool StructTraits<::tracing::mojom::ConnectToTracingRequest::DataView, ::tracing::mojom::ConnectToTracingRequestPtr>::Read(
    ::tracing::mojom::ConnectToTracingRequest::DataView input,
    ::tracing::mojom::ConnectToTracingRequestPtr* output) {
  bool success = true;
  ::tracing::mojom::ConnectToTracingRequestPtr result(::tracing::mojom::ConnectToTracingRequest::New());
  
      result->perfetto_service =
          input.TakePerfettoService<decltype(result->perfetto_service)>();
      result->agent_registry =
          input.TakeAgentRegistry<decltype(result->agent_registry)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif