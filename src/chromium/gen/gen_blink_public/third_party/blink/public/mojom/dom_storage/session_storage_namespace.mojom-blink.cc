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

#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-blink.h"

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

#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-params-data.h"
#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char SessionStorageNamespace::Name_[] = "blink.mojom.SessionStorageNamespace";

SessionStorageNamespaceProxy::SessionStorageNamespaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SessionStorageNamespaceProxy::OpenArea(
    const scoped_refptr<const ::blink::SecurityOrigin>& in_origin, ::blink::mojom::blink::StorageAreaAssociatedRequest in_area) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SessionStorageNamespace::OpenArea");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSessionStorageNamespace_OpenArea_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SessionStorageNamespace_OpenArea_Params_Data::BufferWriter
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
      "null origin in SessionStorageNamespace.OpenArea request");
  mojo::internal::Serialize<::blink::mojom::StorageAreaAssociatedRequestDataView>(
      in_area, &params->area, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->area),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid area in SessionStorageNamespace.OpenArea request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionStorageNamespace::Name_);
  message.set_method_name("OpenArea");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void SessionStorageNamespaceProxy::Clone(
    const WTF::String& in_clone_to_namespace) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SessionStorageNamespace::Clone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSessionStorageNamespace_Clone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SessionStorageNamespace_Clone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->clone_to_namespace)::BaseType::BufferWriter
      clone_to_namespace_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_clone_to_namespace, buffer, &clone_to_namespace_writer, &serialization_context);
  params->clone_to_namespace.Set(
      clone_to_namespace_writer.is_null() ? nullptr : clone_to_namespace_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->clone_to_namespace.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null clone_to_namespace in SessionStorageNamespace.Clone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionStorageNamespace::Name_);
  message.set_method_name("Clone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SessionStorageNamespaceStubDispatch::Accept(
    SessionStorageNamespace* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSessionStorageNamespace_OpenArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SessionStorageNamespace::OpenArea",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SessionStorageNamespace_OpenArea_Params_Data* params =
          reinterpret_cast<internal::SessionStorageNamespace_OpenArea_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<const ::blink::SecurityOrigin> p_origin{};
      ::blink::mojom::blink::StorageAreaAssociatedRequest p_area{};
      SessionStorageNamespace_OpenArea_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_area =
          input_data_view.TakeArea<decltype(p_area)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionStorageNamespace::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenArea(
std::move(p_origin), 
std::move(p_area));
      return true;
    }
    case internal::kSessionStorageNamespace_Clone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SessionStorageNamespace::Clone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SessionStorageNamespace_Clone_Params_Data* params =
          reinterpret_cast<internal::SessionStorageNamespace_Clone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_clone_to_namespace{};
      SessionStorageNamespace_Clone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCloneToNamespace(&p_clone_to_namespace))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionStorageNamespace::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clone(
std::move(p_clone_to_namespace));
      return true;
    }
  }
  return false;
}

// static
bool SessionStorageNamespaceStubDispatch::AcceptWithResponder(
    SessionStorageNamespace* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSessionStorageNamespace_OpenArea_Name: {
      break;
    }
    case internal::kSessionStorageNamespace_Clone_Name: {
      break;
    }
  }
  return false;
}

bool SessionStorageNamespaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SessionStorageNamespace RequestValidator");

  switch (message->header()->name) {
    case internal::kSessionStorageNamespace_OpenArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SessionStorageNamespace_OpenArea_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kSessionStorageNamespace_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SessionStorageNamespace_Clone_Params_Data>(
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