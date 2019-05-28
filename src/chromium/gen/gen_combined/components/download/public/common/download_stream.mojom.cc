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

#include "components/download/public/common/download_stream.mojom.h"

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

#include "components/download/public/common/download_stream.mojom-params-data.h"
#include "components/download/public/common/download_stream.mojom-shared-message-ids.h"

#include "components/download/public/common/download_stream.mojom-import-headers.h"


#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_JUMBO_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_JUMBO_H_
#endif
namespace download {
namespace mojom {
DownloadStreamHandle::DownloadStreamHandle()
    : stream(),
      client_request() {}

DownloadStreamHandle::DownloadStreamHandle(
    mojo::ScopedDataPipeConsumerHandle stream_in,
    DownloadStreamClientRequest client_request_in)
    : stream(std::move(stream_in)),
      client_request(std::move(client_request_in)) {}

DownloadStreamHandle::~DownloadStreamHandle() = default;

bool DownloadStreamHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char DownloadStreamClient::Name_[] = "download.mojom.DownloadStreamClient";

DownloadStreamClientProxy::DownloadStreamClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DownloadStreamClientProxy::OnStreamCompleted(
    NetworkRequestStatus in_status) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DownloadStreamClient::OnStreamCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDownloadStreamClient_OnStreamCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::download::mojom::internal::DownloadStreamClient_OnStreamCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::download::mojom::NetworkRequestStatus>(
      in_status, &params->status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DownloadStreamClient::Name_);
  message.set_method_name("OnStreamCompleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DownloadStreamClientStubDispatch::Accept(
    DownloadStreamClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDownloadStreamClient_OnStreamCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DownloadStreamClient::OnStreamCompleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DownloadStreamClient_OnStreamCompleted_Params_Data* params =
          reinterpret_cast<internal::DownloadStreamClient_OnStreamCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkRequestStatus p_status{};
      DownloadStreamClient_OnStreamCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStatus(&p_status))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DownloadStreamClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnStreamCompleted(
std::move(p_status));
      return true;
    }
  }
  return false;
}

// static
bool DownloadStreamClientStubDispatch::AcceptWithResponder(
    DownloadStreamClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDownloadStreamClient_OnStreamCompleted_Name: {
      break;
    }
  }
  return false;
}

bool DownloadStreamClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DownloadStreamClient RequestValidator");

  switch (message->header()->name) {
    case internal::kDownloadStreamClient_OnStreamCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DownloadStreamClient_OnStreamCompleted_Params_Data>(
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
}  // namespace download

namespace mojo {


// static
bool StructTraits<::download::mojom::DownloadStreamHandle::DataView, ::download::mojom::DownloadStreamHandlePtr>::Read(
    ::download::mojom::DownloadStreamHandle::DataView input,
    ::download::mojom::DownloadStreamHandlePtr* output) {
  bool success = true;
  ::download::mojom::DownloadStreamHandlePtr result(::download::mojom::DownloadStreamHandle::New());
  
      result->stream = input.TakeStream();
      result->client_request =
          input.TakeClientRequest<decltype(result->client_request)>();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif