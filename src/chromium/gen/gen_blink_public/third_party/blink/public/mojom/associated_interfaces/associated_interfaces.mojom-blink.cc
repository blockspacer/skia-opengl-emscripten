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

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink.h"

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

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-params-data.h"
#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
const char AssociatedInterface::Name_[] = "blink.mojom.AssociatedInterface";

AssociatedInterfaceProxy::AssociatedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool AssociatedInterfaceStubDispatch::Accept(
    AssociatedInterface* impl,
    mojo::Message* message) {
  return false;
}

// static
bool AssociatedInterfaceStubDispatch::AcceptWithResponder(
    AssociatedInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool AssociatedInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AssociatedInterface RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char AssociatedInterfaceProvider::Name_[] = "blink.mojom.AssociatedInterfaceProvider";

AssociatedInterfaceProviderProxy::AssociatedInterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AssociatedInterfaceProviderProxy::GetAssociatedInterface(
    const WTF::String& in_name, AssociatedInterfaceAssociatedRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::AssociatedInterfaceProvider::GetAssociatedInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in AssociatedInterfaceProvider.GetAssociatedInterface request");
  mojo::internal::Serialize<::blink::mojom::AssociatedInterfaceAssociatedRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid request in AssociatedInterfaceProvider.GetAssociatedInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AssociatedInterfaceProvider::Name_);
  message.set_method_name("GetAssociatedInterface");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool AssociatedInterfaceProviderStubDispatch::Accept(
    AssociatedInterfaceProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::AssociatedInterfaceProvider::GetAssociatedInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data* params =
          reinterpret_cast<internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_name{};
      AssociatedInterfaceAssociatedRequest p_request{};
      AssociatedInterfaceProvider_GetAssociatedInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AssociatedInterfaceProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAssociatedInterface(
std::move(p_name), 
std::move(p_request));
      return true;
    }
  }
  return false;
}

// static
bool AssociatedInterfaceProviderStubDispatch::AcceptWithResponder(
    AssociatedInterfaceProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
      break;
    }
  }
  return false;
}

bool AssociatedInterfaceProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "AssociatedInterfaceProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kAssociatedInterfaceProvider_GetAssociatedInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AssociatedInterfaceProvider_GetAssociatedInterface_Params_Data>(
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