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

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
ServiceWorkerFetchEventTiming::ServiceWorkerFetchEventTiming()
    : dispatch_event_time(),
      respond_with_settled_time() {}

ServiceWorkerFetchEventTiming::ServiceWorkerFetchEventTiming(
    base::TimeTicks dispatch_event_time_in,
    base::TimeTicks respond_with_settled_time_in)
    : dispatch_event_time(std::move(dispatch_event_time_in)),
      respond_with_settled_time(std::move(respond_with_settled_time_in)) {}

ServiceWorkerFetchEventTiming::~ServiceWorkerFetchEventTiming() = default;

bool ServiceWorkerFetchEventTiming::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerFetchResponseCallback::Name_[] = "blink.mojom.ServiceWorkerFetchResponseCallback";

ServiceWorkerFetchResponseCallbackProxy::ServiceWorkerFetchResponseCallbackProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerFetchResponseCallbackProxy::OnResponse(
    ::blink::mojom::FetchAPIResponsePtr in_response, ServiceWorkerFetchEventTimingPtr in_timing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerFetchResponseCallback::OnResponse");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponse_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ServiceWorkerFetchResponseCallback.OnResponse request");
  typename decltype(params->timing)::BaseType::BufferWriter
      timing_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerFetchEventTimingDataView>(
      in_timing, buffer, &timing_writer, &serialization_context);
  params->timing.Set(
      timing_writer.is_null() ? nullptr : timing_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timing.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timing in ServiceWorkerFetchResponseCallback.OnResponse request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerFetchResponseCallback::Name_);
  message.set_method_name("OnResponse");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerFetchResponseCallbackProxy::OnResponseStream(
    ::blink::mojom::FetchAPIResponsePtr in_response, ::blink::mojom::ServiceWorkerStreamHandlePtr in_body_as_stream, ServiceWorkerFetchEventTimingPtr in_timing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerFetchResponseCallback::OnResponseStream");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  mojo::internal::Serialize<::blink::mojom::FetchAPIResponseDataView>(
      in_response, buffer, &response_writer, &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ServiceWorkerFetchResponseCallback.OnResponseStream request");
  typename decltype(params->body_as_stream)::BaseType::BufferWriter
      body_as_stream_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerStreamHandleDataView>(
      in_body_as_stream, buffer, &body_as_stream_writer, &serialization_context);
  params->body_as_stream.Set(
      body_as_stream_writer.is_null() ? nullptr : body_as_stream_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->body_as_stream.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null body_as_stream in ServiceWorkerFetchResponseCallback.OnResponseStream request");
  typename decltype(params->timing)::BaseType::BufferWriter
      timing_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerFetchEventTimingDataView>(
      in_timing, buffer, &timing_writer, &serialization_context);
  params->timing.Set(
      timing_writer.is_null() ? nullptr : timing_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timing.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timing in ServiceWorkerFetchResponseCallback.OnResponseStream request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerFetchResponseCallback::Name_);
  message.set_method_name("OnResponseStream");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ServiceWorkerFetchResponseCallbackProxy::OnFallback(
    ServiceWorkerFetchEventTimingPtr in_timing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ServiceWorkerFetchResponseCallback::OnFallback");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kServiceWorkerFetchResponseCallback_OnFallback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->timing)::BaseType::BufferWriter
      timing_writer;
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerFetchEventTimingDataView>(
      in_timing, buffer, &timing_writer, &serialization_context);
  params->timing.Set(
      timing_writer.is_null() ? nullptr : timing_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timing.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timing in ServiceWorkerFetchResponseCallback.OnFallback request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerFetchResponseCallback::Name_);
  message.set_method_name("OnFallback");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ServiceWorkerFetchResponseCallbackStubDispatch::Accept(
    ServiceWorkerFetchResponseCallback* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponse_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerFetchResponseCallback::OnResponse",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIResponsePtr p_response{};
      ServiceWorkerFetchEventTimingPtr p_timing{};
      ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!input_data_view.ReadTiming(&p_timing))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerFetchResponseCallback::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnResponse(
std::move(p_response), 
std::move(p_timing));
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerFetchResponseCallback::OnResponseStream",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::FetchAPIResponsePtr p_response{};
      ::blink::mojom::ServiceWorkerStreamHandlePtr p_body_as_stream{};
      ServiceWorkerFetchEventTimingPtr p_timing{};
      ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!input_data_view.ReadBodyAsStream(&p_body_as_stream))
        success = false;
      if (!input_data_view.ReadTiming(&p_timing))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerFetchResponseCallback::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnResponseStream(
std::move(p_response), 
std::move(p_body_as_stream), 
std::move(p_timing));
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnFallback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ServiceWorkerFetchResponseCallback::OnFallback",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ServiceWorkerFetchEventTimingPtr p_timing{};
      ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTiming(&p_timing))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerFetchResponseCallback::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFallback(
std::move(p_timing));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerFetchResponseCallbackStubDispatch::AcceptWithResponder(
    ServiceWorkerFetchResponseCallback* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponse_Name: {
      break;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name: {
      break;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnFallback_Name: {
      break;
    }
  }
  return false;
}

bool ServiceWorkerFetchResponseCallbackRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ServiceWorkerFetchResponseCallback RequestValidator");

  switch (message->header()->name) {
    case internal::kServiceWorkerFetchResponseCallback_OnResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnResponseStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kServiceWorkerFetchResponseCallback_OnFallback_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::ServiceWorkerFetchEventTiming::DataView, ::blink::mojom::ServiceWorkerFetchEventTimingPtr>::Read(
    ::blink::mojom::ServiceWorkerFetchEventTiming::DataView input,
    ::blink::mojom::ServiceWorkerFetchEventTimingPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerFetchEventTimingPtr result(::blink::mojom::ServiceWorkerFetchEventTiming::New());
  
      if (!input.ReadDispatchEventTime(&result->dispatch_event_time))
        success = false;
      if (!input.ReadRespondWithSettledTime(&result->respond_with_settled_time))
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