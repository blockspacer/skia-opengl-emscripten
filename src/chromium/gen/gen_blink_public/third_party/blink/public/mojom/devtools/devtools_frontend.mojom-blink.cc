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

#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-blink.h"

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

#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-params-data.h"
#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
const char DevToolsFrontend::Name_[] = "blink.mojom.DevToolsFrontend";

DevToolsFrontendProxy::DevToolsFrontendProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsFrontendProxy::SetupDevToolsFrontend(
    const WTF::String& in_api_script, DevToolsFrontendHostAssociatedPtrInfo in_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsFrontend::SetupDevToolsFrontend");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsFrontend_SetupDevToolsFrontend_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->api_script)::BaseType::BufferWriter
      api_script_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_api_script, buffer, &api_script_writer, &serialization_context);
  params->api_script.Set(
      api_script_writer.is_null() ? nullptr : api_script_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->api_script.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null api_script in DevToolsFrontend.SetupDevToolsFrontend request");
  mojo::internal::Serialize<::blink::mojom::DevToolsFrontendHostAssociatedPtrInfoDataView>(
      in_host, &params->host, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid host in DevToolsFrontend.SetupDevToolsFrontend request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsFrontend::Name_);
  message.set_method_name("SetupDevToolsFrontend");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DevToolsFrontendProxy::SetupDevToolsExtensionAPI(
    const WTF::String& in_extension_api) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsFrontend::SetupDevToolsExtensionAPI");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsFrontend_SetupDevToolsExtensionAPI_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->extension_api)::BaseType::BufferWriter
      extension_api_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_extension_api, buffer, &extension_api_writer, &serialization_context);
  params->extension_api.Set(
      extension_api_writer.is_null() ? nullptr : extension_api_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extension_api.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extension_api in DevToolsFrontend.SetupDevToolsExtensionAPI request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsFrontend::Name_);
  message.set_method_name("SetupDevToolsExtensionAPI");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsFrontendStubDispatch::Accept(
    DevToolsFrontend* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsFrontend_SetupDevToolsFrontend_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsFrontend::SetupDevToolsFrontend",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data* params =
          reinterpret_cast<internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_api_script{};
      DevToolsFrontendHostAssociatedPtrInfo p_host{};
      DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadApiScript(&p_api_script))
        success = false;
      p_host =
          input_data_view.TakeHost<decltype(p_host)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsFrontend::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetupDevToolsFrontend(
std::move(p_api_script), 
std::move(p_host));
      return true;
    }
    case internal::kDevToolsFrontend_SetupDevToolsExtensionAPI_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsFrontend::SetupDevToolsExtensionAPI",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* params =
          reinterpret_cast<internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_extension_api{};
      DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadExtensionApi(&p_extension_api))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsFrontend::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetupDevToolsExtensionAPI(
std::move(p_extension_api));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsFrontendStubDispatch::AcceptWithResponder(
    DevToolsFrontend* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsFrontend_SetupDevToolsFrontend_Name: {
      break;
    }
    case internal::kDevToolsFrontend_SetupDevToolsExtensionAPI_Name: {
      break;
    }
  }
  return false;
}

bool DevToolsFrontendRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsFrontend RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsFrontend_SetupDevToolsFrontend_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDevToolsFrontend_SetupDevToolsExtensionAPI_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data>(
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

const char DevToolsFrontendHost::Name_[] = "blink.mojom.DevToolsFrontendHost";

DevToolsFrontendHostProxy::DevToolsFrontendHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DevToolsFrontendHostProxy::DispatchEmbedderMessage(
    const WTF::String& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DevToolsFrontendHost::DispatchEmbedderMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDevToolsFrontendHost_DispatchEmbedderMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in DevToolsFrontendHost.DispatchEmbedderMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DevToolsFrontendHost::Name_);
  message.set_method_name("DispatchEmbedderMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DevToolsFrontendHostStubDispatch::Accept(
    DevToolsFrontendHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDevToolsFrontendHost_DispatchEmbedderMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DevToolsFrontendHost::DispatchEmbedderMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* params =
          reinterpret_cast<internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_message{};
      DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DevToolsFrontendHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchEmbedderMessage(
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool DevToolsFrontendHostStubDispatch::AcceptWithResponder(
    DevToolsFrontendHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDevToolsFrontendHost_DispatchEmbedderMessage_Name: {
      break;
    }
  }
  return false;
}

bool DevToolsFrontendHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DevToolsFrontendHost RequestValidator");

  switch (message->header()->name) {
    case internal::kDevToolsFrontendHost_DispatchEmbedderMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data>(
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