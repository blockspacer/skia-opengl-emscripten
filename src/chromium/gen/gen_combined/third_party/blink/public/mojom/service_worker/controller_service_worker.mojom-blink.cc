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

#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink.h"

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

#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
ControllerServiceWorkerInfo::ControllerServiceWorkerInfo()
    : mode(::blink::mojom::blink::ControllerServiceWorkerMode::kNoController),
      endpoint(),
      client_id(),
      fetch_request_window_id(),
      object_info(),
      used_features() {}

ControllerServiceWorkerInfo::ControllerServiceWorkerInfo(
    ::blink::mojom::blink::ControllerServiceWorkerMode mode_in,
    ControllerServiceWorkerPtrInfo endpoint_in,
    const WTF::String& client_id_in,
    const base::Optional<base::UnguessableToken>& fetch_request_window_id_in,
    ::blink::mojom::blink::ServiceWorkerObjectInfoPtr object_info_in,
    const WTF::Vector<::blink::mojom::blink::WebFeature>& used_features_in)
    : mode(std::move(mode_in)),
      endpoint(std::move(endpoint_in)),
      client_id(std::move(client_id_in)),
      fetch_request_window_id(std::move(fetch_request_window_id_in)),
      object_info(std::move(object_info_in)),
      used_features(std::move(used_features_in)) {}

ControllerServiceWorkerInfo::~ControllerServiceWorkerInfo() = default;

bool ControllerServiceWorkerInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ControllerServiceWorker::Name_[] = "blink.mojom.ControllerServiceWorker";

class ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback(
      ControllerServiceWorker::DispatchFetchEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ControllerServiceWorker::DispatchFetchEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback);
};

ControllerServiceWorkerProxy::ControllerServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ControllerServiceWorkerProxy::DispatchFetchEvent(
    ::blink::mojom::blink::DispatchFetchEventParamsPtr in_params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr in_response_callback, DispatchFetchEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ControllerServiceWorker::DispatchFetchEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorker_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::blink::mojom::DispatchFetchEventParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in ControllerServiceWorker.DispatchFetchEvent request");
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
      in_response_callback, &params->response_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_callback in ControllerServiceWorker.DispatchFetchEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ControllerServiceWorker::Name_);
  message.set_method_name("DispatchFetchEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ControllerServiceWorkerProxy::Clone(
    ControllerServiceWorkerRequest in_controller) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ControllerServiceWorker::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorker_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ControllerServiceWorker_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerRequestDataView>(
      in_controller, &params->controller, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->controller),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid controller in ControllerServiceWorker.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ControllerServiceWorker::Name_);
  message.set_method_name("Clone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder {
 public:
  static ControllerServiceWorker::DispatchFetchEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder> proxy(
        new ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder() {
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
  ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder(
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
        << "ControllerServiceWorker::DispatchFetchEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::blink::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder);
};

bool ControllerServiceWorker_DispatchFetchEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ControllerServiceWorker::DispatchFetchEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::blink::mojom::blink::ServiceWorkerEventStatus p_status{};
  ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ControllerServiceWorker::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status));
  return true;
}

void ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder::Run(
    ::blink::mojom::blink::ServiceWorkerEventStatus in_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorker_DispatchFetchEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ControllerServiceWorker::DispatchFetchEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ControllerServiceWorker::Name_);
  message.set_method_name("DispatchFetchEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ControllerServiceWorkerStubDispatch::Accept(
    ControllerServiceWorker* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
      break;
    }
    case internal::kControllerServiceWorker_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ControllerServiceWorker::Clone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ControllerServiceWorker_Clone_Params_Data* params =
          reinterpret_cast<internal::ControllerServiceWorker_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ControllerServiceWorkerRequest p_controller{};
      ControllerServiceWorker_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller =
          input_data_view.TakeController<decltype(p_controller)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ControllerServiceWorker::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clone(
std::move(p_controller));
      return true;
    }
  }
  return false;
}

// static
bool ControllerServiceWorkerStubDispatch::AcceptWithResponder(
    ControllerServiceWorker* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ControllerServiceWorker::DispatchFetchEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data* params =
          reinterpret_cast<
              internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::DispatchFetchEventParamsPtr p_params{};
      ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr p_response_callback{};
      ControllerServiceWorker_DispatchFetchEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      p_response_callback =
          input_data_view.TakeResponseCallback<decltype(p_response_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ControllerServiceWorker::Name_, 0, false);
        return false;
      }
      ControllerServiceWorker::DispatchFetchEventCallback callback =
          ControllerServiceWorker_DispatchFetchEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchFetchEvent(
std::move(p_params), 
std::move(p_response_callback), std::move(callback));
      return true;
    }
    case internal::kControllerServiceWorker_Clone_Name: {
      break;
    }
  }
  return false;
}

bool ControllerServiceWorkerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ControllerServiceWorker RequestValidator");

  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kControllerServiceWorker_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorker_Clone_Params_Data>(
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

bool ControllerServiceWorkerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ControllerServiceWorker ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kControllerServiceWorker_DispatchFetchEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data>(
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
const char ControllerServiceWorkerConnector::Name_[] = "blink.mojom.ControllerServiceWorkerConnector";

ControllerServiceWorkerConnectorProxy::ControllerServiceWorkerConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ControllerServiceWorkerConnectorProxy::UpdateController(
    ControllerServiceWorkerPtr in_controller) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ControllerServiceWorkerConnector::UpdateController");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kControllerServiceWorkerConnector_UpdateController_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ControllerServiceWorkerConnector_UpdateController_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerPtrDataView>(
      in_controller, &params->controller, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ControllerServiceWorkerConnector::Name_);
  message.set_method_name("UpdateController");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ControllerServiceWorkerConnectorStubDispatch::Accept(
    ControllerServiceWorkerConnector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kControllerServiceWorkerConnector_UpdateController_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ControllerServiceWorkerConnector::UpdateController",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ControllerServiceWorkerConnector_UpdateController_Params_Data* params =
          reinterpret_cast<internal::ControllerServiceWorkerConnector_UpdateController_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ControllerServiceWorkerPtr p_controller{};
      ControllerServiceWorkerConnector_UpdateController_ParamsDataView input_data_view(params, &serialization_context);
      
      p_controller =
          input_data_view.TakeController<decltype(p_controller)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ControllerServiceWorkerConnector::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateController(
std::move(p_controller));
      return true;
    }
  }
  return false;
}

// static
bool ControllerServiceWorkerConnectorStubDispatch::AcceptWithResponder(
    ControllerServiceWorkerConnector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kControllerServiceWorkerConnector_UpdateController_Name: {
      break;
    }
  }
  return false;
}

bool ControllerServiceWorkerConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ControllerServiceWorkerConnector RequestValidator");

  switch (message->header()->name) {
    case internal::kControllerServiceWorkerConnector_UpdateController_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ControllerServiceWorkerConnector_UpdateController_Params_Data>(
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
bool StructTraits<::blink::mojom::blink::ControllerServiceWorkerInfo::DataView, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr>::Read(
    ::blink::mojom::blink::ControllerServiceWorkerInfo::DataView input,
    ::blink::mojom::blink::ControllerServiceWorkerInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ControllerServiceWorkerInfoPtr result(::blink::mojom::blink::ControllerServiceWorkerInfo::New());
  
      if (!input.ReadMode(&result->mode))
        success = false;
      result->endpoint =
          input.TakeEndpoint<decltype(result->endpoint)>();
      if (!input.ReadClientId(&result->client_id))
        success = false;
      if (!input.ReadFetchRequestWindowId(&result->fetch_request_window_id))
        success = false;
      if (!input.ReadObjectInfo(&result->object_info))
        success = false;
      if (!input.ReadUsedFeatures(&result->used_features))
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