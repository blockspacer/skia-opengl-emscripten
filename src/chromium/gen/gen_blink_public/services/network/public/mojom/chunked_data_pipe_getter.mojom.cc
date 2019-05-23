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

#include "services/network/public/mojom/chunked_data_pipe_getter.mojom.h"

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

#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-params-data.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared-message-ids.h"

#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_JUMBO_H_
#endif
namespace network {
namespace mojom {
const char ChunkedDataPipeGetter::Name_[] = "network.mojom.ChunkedDataPipeGetter";

class ChunkedDataPipeGetter_GetSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ChunkedDataPipeGetter_GetSize_ForwardToCallback(
      ChunkedDataPipeGetter::GetSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ChunkedDataPipeGetter::GetSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ChunkedDataPipeGetter_GetSize_ForwardToCallback);
};

ChunkedDataPipeGetterProxy::ChunkedDataPipeGetterProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ChunkedDataPipeGetterProxy::GetSize(
    GetSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ChunkedDataPipeGetter::GetSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChunkedDataPipeGetter_GetSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ChunkedDataPipeGetter_GetSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ChunkedDataPipeGetter::Name_);
  message.set_method_name("GetSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ChunkedDataPipeGetter_GetSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ChunkedDataPipeGetterProxy::StartReading(
    mojo::ScopedDataPipeProducerHandle in_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ChunkedDataPipeGetter::StartReading");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChunkedDataPipeGetter_StartReading_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ChunkedDataPipeGetter_StartReading_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_pipe, &params->pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in ChunkedDataPipeGetter.StartReading request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ChunkedDataPipeGetter::Name_);
  message.set_method_name("StartReading");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ChunkedDataPipeGetter_GetSize_ProxyToResponder {
 public:
  static ChunkedDataPipeGetter::GetSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ChunkedDataPipeGetter_GetSize_ProxyToResponder> proxy(
        new ChunkedDataPipeGetter_GetSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ChunkedDataPipeGetter_GetSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ChunkedDataPipeGetter_GetSize_ProxyToResponder() {
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
  ChunkedDataPipeGetter_GetSize_ProxyToResponder(
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
        << "ChunkedDataPipeGetter::GetSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_status, uint64_t in_size);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ChunkedDataPipeGetter_GetSize_ProxyToResponder);
};

bool ChunkedDataPipeGetter_GetSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ChunkedDataPipeGetter::GetSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_status{};
  uint64_t p_size{};
  ChunkedDataPipeGetter_GetSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_status = input_data_view.status();
  p_size = input_data_view.size();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ChunkedDataPipeGetter::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_size));
  return true;
}

void ChunkedDataPipeGetter_GetSize_ProxyToResponder::Run(
    int32_t in_status, uint64_t in_size) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kChunkedDataPipeGetter_GetSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->status = in_status;
  params->size = in_size;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ChunkedDataPipeGetter::GetSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ChunkedDataPipeGetter::Name_);
  message.set_method_name("GetSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ChunkedDataPipeGetterStubDispatch::Accept(
    ChunkedDataPipeGetter* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kChunkedDataPipeGetter_GetSize_Name: {
      break;
    }
    case internal::kChunkedDataPipeGetter_StartReading_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ChunkedDataPipeGetter::StartReading",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ChunkedDataPipeGetter_StartReading_Params_Data* params =
          reinterpret_cast<internal::ChunkedDataPipeGetter_StartReading_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeProducerHandle p_pipe{};
      ChunkedDataPipeGetter_StartReading_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pipe = input_data_view.TakePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ChunkedDataPipeGetter::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartReading(
std::move(p_pipe));
      return true;
    }
  }
  return false;
}

// static
bool ChunkedDataPipeGetterStubDispatch::AcceptWithResponder(
    ChunkedDataPipeGetter* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kChunkedDataPipeGetter_GetSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ChunkedDataPipeGetter::GetSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ChunkedDataPipeGetter_GetSize_Params_Data* params =
          reinterpret_cast<
              internal::ChunkedDataPipeGetter_GetSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ChunkedDataPipeGetter_GetSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ChunkedDataPipeGetter::Name_, 0, false);
        return false;
      }
      ChunkedDataPipeGetter::GetSizeCallback callback =
          ChunkedDataPipeGetter_GetSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSize(std::move(callback));
      return true;
    }
    case internal::kChunkedDataPipeGetter_StartReading_Name: {
      break;
    }
  }
  return false;
}

bool ChunkedDataPipeGetterRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChunkedDataPipeGetter RequestValidator");

  switch (message->header()->name) {
    case internal::kChunkedDataPipeGetter_GetSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChunkedDataPipeGetter_GetSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kChunkedDataPipeGetter_StartReading_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChunkedDataPipeGetter_StartReading_Params_Data>(
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

bool ChunkedDataPipeGetterResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ChunkedDataPipeGetter ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kChunkedDataPipeGetter_GetSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data>(
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