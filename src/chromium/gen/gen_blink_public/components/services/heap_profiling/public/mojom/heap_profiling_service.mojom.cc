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

#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom.h"

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

#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-params-data.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-shared-message-ids.h"

#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-import-headers.h"


#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#endif
namespace heap_profiling {
namespace mojom {
const char ProfilingService::Name_[] = "heap_profiling.mojom.ProfilingService";

class ProfilingService_GetProfiledPids_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProfilingService_GetProfiledPids_ForwardToCallback(
      ProfilingService::GetProfiledPidsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProfilingService::GetProfiledPidsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ProfilingService_GetProfiledPids_ForwardToCallback);
};

ProfilingServiceProxy::ProfilingServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProfilingServiceProxy::AddProfilingClient(
    base::ProcessId in_pid, ::heap_profiling::mojom::ProfilingClientPtr in_client, ProcessType in_process_type, ::heap_profiling::mojom::ProfilingParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProfilingService::AddProfilingClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingService_AddProfilingClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingService_AddProfilingClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pid)::BaseType::BufferWriter
      pid_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
      in_pid, buffer, &pid_writer, &serialization_context);
  params->pid.Set(
      pid_writer.is_null() ? nullptr : pid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pid in ProfilingService.AddProfilingClient request");
  mojo::internal::Serialize<::heap_profiling::mojom::ProfilingClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProfilingService.AddProfilingClient request");
  mojo::internal::Serialize<::heap_profiling::mojom::ProcessType>(
      in_process_type, &params->process_type);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::heap_profiling::mojom::ProfilingParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in ProfilingService.AddProfilingClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProfilingService::Name_);
  message.set_method_name("AddProfilingClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ProfilingServiceProxy::GetProfiledPids(
    GetProfiledPidsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProfilingService::GetProfiledPids");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingService_GetProfiledPids_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingService_GetProfiledPids_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProfilingService::Name_);
  message.set_method_name("GetProfiledPids");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ProfilingService_GetProfiledPids_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ProfilingService_GetProfiledPids_ProxyToResponder {
 public:
  static ProfilingService::GetProfiledPidsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ProfilingService_GetProfiledPids_ProxyToResponder> proxy(
        new ProfilingService_GetProfiledPids_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ProfilingService_GetProfiledPids_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ProfilingService_GetProfiledPids_ProxyToResponder() {
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
  ProfilingService_GetProfiledPids_ProxyToResponder(
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
        << "ProfilingService::GetProfiledPidsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<base::ProcessId>& in_pids);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ProfilingService_GetProfiledPids_ProxyToResponder);
};

bool ProfilingService_GetProfiledPids_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ProfilingService::GetProfiledPidsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ProfilingService_GetProfiledPids_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ProfilingService_GetProfiledPids_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<base::ProcessId> p_pids{};
  ProfilingService_GetProfiledPids_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPids(&p_pids))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ProfilingService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_pids));
  return true;
}

void ProfilingService_GetProfiledPids_ProxyToResponder::Run(
    const std::vector<base::ProcessId>& in_pids) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProfilingService_GetProfiledPids_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::heap_profiling::mojom::internal::ProfilingService_GetProfiledPids_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pids)::BaseType::BufferWriter
      pids_writer;
  const mojo::internal::ContainerValidateParams pids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
      in_pids, buffer, &pids_writer, &pids_validate_params,
      &serialization_context);
  params->pids.Set(
      pids_writer.is_null() ? nullptr : pids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pids in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ProfilingService::GetProfiledPidsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProfilingService::Name_);
  message.set_method_name("GetProfiledPids");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ProfilingServiceStubDispatch::Accept(
    ProfilingService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProfilingService_AddProfilingClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProfilingService::AddProfilingClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProfilingService_AddProfilingClient_Params_Data* params =
          reinterpret_cast<internal::ProfilingService_AddProfilingClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::ProcessId p_pid{};
      ::heap_profiling::mojom::ProfilingClientPtr p_client{};
      ProcessType p_process_type{};
      ::heap_profiling::mojom::ProfilingParamsPtr p_params{};
      ProfilingService_AddProfilingClient_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPid(&p_pid))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadProcessType(&p_process_type))
        success = false;
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProfilingService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddProfilingClient(
std::move(p_pid), 
std::move(p_client), 
std::move(p_process_type), 
std::move(p_params));
      return true;
    }
    case internal::kProfilingService_GetProfiledPids_Name: {
      break;
    }
  }
  return false;
}

// static
bool ProfilingServiceStubDispatch::AcceptWithResponder(
    ProfilingService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProfilingService_AddProfilingClient_Name: {
      break;
    }
    case internal::kProfilingService_GetProfiledPids_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProfilingService::GetProfiledPids",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ProfilingService_GetProfiledPids_Params_Data* params =
          reinterpret_cast<
              internal::ProfilingService_GetProfiledPids_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ProfilingService_GetProfiledPids_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProfilingService::Name_, 1, false);
        return false;
      }
      ProfilingService::GetProfiledPidsCallback callback =
          ProfilingService_GetProfiledPids_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetProfiledPids(std::move(callback));
      return true;
    }
  }
  return false;
}

bool ProfilingServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfilingService RequestValidator");

  switch (message->header()->name) {
    case internal::kProfilingService_AddProfilingClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingService_AddProfilingClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kProfilingService_GetProfiledPids_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingService_GetProfiledPids_Params_Data>(
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

bool ProfilingServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProfilingService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProfilingService_GetProfiledPids_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProfilingService_GetProfiledPids_ResponseParams_Data>(
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
}  // namespace heap_profiling

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif