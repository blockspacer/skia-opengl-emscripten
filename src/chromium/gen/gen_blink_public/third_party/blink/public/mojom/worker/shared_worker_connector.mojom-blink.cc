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

#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-blink.h"

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

#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-params-data.h"
#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char SharedWorkerConnector::Name_[] = "blink.mojom.SharedWorkerConnector";

SharedWorkerConnectorProxy::SharedWorkerConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SharedWorkerConnectorProxy::Connect(
    ::blink::mojom::blink::SharedWorkerInfoPtr in_info, ::blink::mojom::blink::SharedWorkerClientPtr in_client, ::blink::mojom::blink::SharedWorkerCreationContextType in_creation_context_type, mojo::ScopedMessagePipeHandle in_message_port, ::blink::mojom::blink::BlobURLTokenPtr in_blob_url_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SharedWorkerConnector::Connect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSharedWorkerConnector_Connect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SharedWorkerConnector_Connect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::blink::mojom::SharedWorkerInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in SharedWorkerConnector.Connect request");
  mojo::internal::Serialize<::blink::mojom::SharedWorkerClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in SharedWorkerConnector.Connect request");
  mojo::internal::Serialize<::blink::mojom::SharedWorkerCreationContextType>(
      in_creation_context_type, &params->creation_context_type);
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_message_port, &params->message_port, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->message_port),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid message_port in SharedWorkerConnector.Connect request");
  mojo::internal::Serialize<::blink::mojom::BlobURLTokenPtrDataView>(
      in_blob_url_token, &params->blob_url_token, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SharedWorkerConnector::Name_);
  message.set_method_name("Connect");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SharedWorkerConnectorStubDispatch::Accept(
    SharedWorkerConnector* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSharedWorkerConnector_Connect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SharedWorkerConnector::Connect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SharedWorkerConnector_Connect_Params_Data* params =
          reinterpret_cast<internal::SharedWorkerConnector_Connect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::SharedWorkerInfoPtr p_info{};
      ::blink::mojom::blink::SharedWorkerClientPtr p_client{};
      ::blink::mojom::blink::SharedWorkerCreationContextType p_creation_context_type{};
      mojo::ScopedMessagePipeHandle p_message_port{};
      ::blink::mojom::blink::BlobURLTokenPtr p_blob_url_token{};
      SharedWorkerConnector_Connect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!input_data_view.ReadCreationContextType(&p_creation_context_type))
        success = false;
      p_message_port = input_data_view.TakeMessagePort();
      p_blob_url_token =
          input_data_view.TakeBlobUrlToken<decltype(p_blob_url_token)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SharedWorkerConnector::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Connect(
std::move(p_info), 
std::move(p_client), 
std::move(p_creation_context_type), 
std::move(p_message_port), 
std::move(p_blob_url_token));
      return true;
    }
  }
  return false;
}

// static
bool SharedWorkerConnectorStubDispatch::AcceptWithResponder(
    SharedWorkerConnector* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSharedWorkerConnector_Connect_Name: {
      break;
    }
  }
  return false;
}

bool SharedWorkerConnectorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SharedWorkerConnector RequestValidator");

  switch (message->header()->name) {
    case internal::kSharedWorkerConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SharedWorkerConnector_Connect_Params_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif