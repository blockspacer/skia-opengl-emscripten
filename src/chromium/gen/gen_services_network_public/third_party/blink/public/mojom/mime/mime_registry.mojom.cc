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

#include "third_party/blink/public/mojom/mime/mime_registry.mojom.h"

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

#include "third_party/blink/public/mojom/mime/mime_registry.mojom-params-data.h"
#include "third_party/blink/public/mojom/mime/mime_registry.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/mime/mime_registry.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_JUMBO_H_
#endif
namespace blink {
namespace mojom {
const char MimeRegistry::Name_[] = "blink.mojom.MimeRegistry";
bool MimeRegistry::GetMimeTypeFromExtension(const std::string& extension, std::string* out_mime_type) {
  NOTREACHED();
  return false;
}
class MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse(
      bool* result, std::string* out_mime_type)
      : result_(result), out_mime_type_(out_mime_type) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_mime_type_;DISALLOW_COPY_AND_ASSIGN(MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse);
};

class MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback(
      MimeRegistry::GetMimeTypeFromExtensionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MimeRegistry::GetMimeTypeFromExtensionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback);
};

MimeRegistryProxy::MimeRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool MimeRegistryProxy::GetMimeTypeFromExtension(
    const std::string& param_extension, std::string* out_param_mime_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MimeRegistry::GetMimeTypeFromExtension");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeRegistry_GetMimeTypeFromExtension_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->extension)::BaseType::BufferWriter
      extension_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_extension, buffer, &extension_writer, &serialization_context);
  params->extension.Set(
      extension_writer.is_null() ? nullptr : extension_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extension.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extension in MimeRegistry.GetMimeTypeFromExtension request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MimeRegistry::Name_);
  message.set_method_name("GetMimeTypeFromExtension");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse(
          &result, out_param_mime_type));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void MimeRegistryProxy::GetMimeTypeFromExtension(
    const std::string& in_extension, GetMimeTypeFromExtensionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MimeRegistry::GetMimeTypeFromExtension");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeRegistry_GetMimeTypeFromExtension_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->extension)::BaseType::BufferWriter
      extension_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_extension, buffer, &extension_writer, &serialization_context);
  params->extension.Set(
      extension_writer.is_null() ? nullptr : extension_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->extension.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extension in MimeRegistry.GetMimeTypeFromExtension request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MimeRegistry::Name_);
  message.set_method_name("GetMimeTypeFromExtension");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder {
 public:
  static MimeRegistry::GetMimeTypeFromExtensionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder> proxy(
        new MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder() {
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
  MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder(
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
        << "MimeRegistry::GetMimeTypeFromExtensionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_mime_type);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder);
};

bool MimeRegistry_GetMimeTypeFromExtension_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::MimeRegistry::GetMimeTypeFromExtensionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* params =
      reinterpret_cast<
          internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_mime_type{};
  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMimeType(&p_mime_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MimeRegistry::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_mime_type));
  return true;
}

void MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder::Run(
    const std::string& in_mime_type) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMimeRegistry_GetMimeTypeFromExtension_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->mime_type)::BaseType::BufferWriter
      mime_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_mime_type, buffer, &mime_type_writer, &serialization_context);
  params->mime_type.Set(
      mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mime_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::MimeRegistry::GetMimeTypeFromExtensionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MimeRegistry::Name_);
  message.set_method_name("GetMimeTypeFromExtension");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool MimeRegistry_GetMimeTypeFromExtension_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* params =
      reinterpret_cast<internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_mime_type{};
  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMimeType(&p_mime_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        MimeRegistry::Name_, 0, true);
    return false;
  }
  *out_mime_type_ = std::move(p_mime_type);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool MimeRegistryStubDispatch::Accept(
    MimeRegistry* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      break;
    }
  }
  return false;
}

// static
bool MimeRegistryStubDispatch::AcceptWithResponder(
    MimeRegistry* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MimeRegistry::GetMimeTypeFromExtension",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data* params =
          reinterpret_cast<
              internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_extension{};
      MimeRegistry_GetMimeTypeFromExtension_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadExtension(&p_extension))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MimeRegistry::Name_, 0, false);
        return false;
      }
      MimeRegistry::GetMimeTypeFromExtensionCallback callback =
          MimeRegistry_GetMimeTypeFromExtension_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetMimeTypeFromExtension(
std::move(p_extension), std::move(callback));
      return true;
    }
  }
  return false;
}

bool MimeRegistryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MimeRegistry RequestValidator");

  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data>(
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

bool MimeRegistryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MimeRegistry ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kMimeRegistry_GetMimeTypeFromExtension_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data>(
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

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif