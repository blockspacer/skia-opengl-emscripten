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

#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-blink.h"

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

#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-params-data.h"
#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char StoragePartitionService::Name_[] = "blink.mojom.StoragePartitionService";

StoragePartitionServiceProxy::StoragePartitionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StoragePartitionServiceProxy::OpenLocalStorage(
    const scoped_refptr<const ::blink::SecurityOrigin>& in_origin, ::blink::mojom::blink::StorageAreaRequest in_area) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StoragePartitionService::OpenLocalStorage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStoragePartitionService_OpenLocalStorage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StoragePartitionService_OpenLocalStorage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in StoragePartitionService.OpenLocalStorage request");
  mojo::internal::Serialize<::blink::mojom::StorageAreaRequestDataView>(
      in_area, &params->area, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->area),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid area in StoragePartitionService.OpenLocalStorage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StoragePartitionService::Name_);
  message.set_method_name("OpenLocalStorage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StoragePartitionServiceProxy::OpenSessionStorage(
    const WTF::String& in_namespace_id, ::blink::mojom::blink::SessionStorageNamespaceRequest in_session_namespace) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StoragePartitionService::OpenSessionStorage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStoragePartitionService_OpenSessionStorage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StoragePartitionService_OpenSessionStorage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->namespace_id)::BaseType::BufferWriter
      namespace_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_namespace_id, buffer, &namespace_id_writer, &serialization_context);
  params->namespace_id.Set(
      namespace_id_writer.is_null() ? nullptr : namespace_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->namespace_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null namespace_id in StoragePartitionService.OpenSessionStorage request");
  mojo::internal::Serialize<::blink::mojom::SessionStorageNamespaceRequestDataView>(
      in_session_namespace, &params->session_namespace, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->session_namespace),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid session_namespace in StoragePartitionService.OpenSessionStorage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StoragePartitionService::Name_);
  message.set_method_name("OpenSessionStorage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool StoragePartitionServiceStubDispatch::Accept(
    StoragePartitionService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StoragePartitionService::OpenLocalStorage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StoragePartitionService_OpenLocalStorage_Params_Data* params =
          reinterpret_cast<internal::StoragePartitionService_OpenLocalStorage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<const ::blink::SecurityOrigin> p_origin{};
      ::blink::mojom::blink::StorageAreaRequest p_area{};
      StoragePartitionService_OpenLocalStorage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_area =
          input_data_view.TakeArea<decltype(p_area)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StoragePartitionService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenLocalStorage(
std::move(p_origin), 
std::move(p_area));
      return true;
    }
    case internal::kStoragePartitionService_OpenSessionStorage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StoragePartitionService::OpenSessionStorage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StoragePartitionService_OpenSessionStorage_Params_Data* params =
          reinterpret_cast<internal::StoragePartitionService_OpenSessionStorage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_namespace_id{};
      ::blink::mojom::blink::SessionStorageNamespaceRequest p_session_namespace{};
      StoragePartitionService_OpenSessionStorage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNamespaceId(&p_namespace_id))
        success = false;
      p_session_namespace =
          input_data_view.TakeSessionNamespace<decltype(p_session_namespace)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StoragePartitionService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenSessionStorage(
std::move(p_namespace_id), 
std::move(p_session_namespace));
      return true;
    }
  }
  return false;
}

// static
bool StoragePartitionServiceStubDispatch::AcceptWithResponder(
    StoragePartitionService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
      break;
    }
    case internal::kStoragePartitionService_OpenSessionStorage_Name: {
      break;
    }
  }
  return false;
}

bool StoragePartitionServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StoragePartitionService RequestValidator");

  switch (message->header()->name) {
    case internal::kStoragePartitionService_OpenLocalStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StoragePartitionService_OpenLocalStorage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStoragePartitionService_OpenSessionStorage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StoragePartitionService_OpenSessionStorage_Params_Data>(
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