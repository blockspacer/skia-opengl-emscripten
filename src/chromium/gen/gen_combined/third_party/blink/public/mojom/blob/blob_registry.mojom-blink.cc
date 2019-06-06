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

#include "third_party/blink/public/mojom/blob/blob_registry.mojom-blink.h"

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

#include "third_party/blink/public/mojom/blob/blob_registry.mojom-params-data.h"
#include "third_party/blink/public/mojom/blob/blob_registry.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/blob/blob_registry.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char ProgressClient::Name_[] = "blink.mojom.ProgressClient";

ProgressClientProxy::ProgressClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProgressClientProxy::OnProgress(
    uint64_t in_delta) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ProgressClient::OnProgress");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kProgressClient_OnProgress_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ProgressClient_OnProgress_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->delta = in_delta;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProgressClient::Name_);
  message.set_method_name("OnProgress");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ProgressClientStubDispatch::Accept(
    ProgressClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProgressClient_OnProgress_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ProgressClient::OnProgress",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ProgressClient_OnProgress_Params_Data* params =
          reinterpret_cast<internal::ProgressClient_OnProgress_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_delta{};
      ProgressClient_OnProgress_ParamsDataView input_data_view(params, &serialization_context);
      
      p_delta = input_data_view.delta();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProgressClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnProgress(
std::move(p_delta));
      return true;
    }
  }
  return false;
}

// static
bool ProgressClientStubDispatch::AcceptWithResponder(
    ProgressClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kProgressClient_OnProgress_Name: {
      break;
    }
  }
  return false;
}

bool ProgressClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ProgressClient RequestValidator");

  switch (message->header()->name) {
    case internal::kProgressClient_OnProgress_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProgressClient_OnProgress_Params_Data>(
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

const char BlobRegistry::Name_[] = "blink.mojom.BlobRegistry";
bool BlobRegistry::Register(::blink::mojom::blink::BlobRequest blob, const WTF::String& uuid, const WTF::String& content_type, const WTF::String& content_disposition, WTF::Vector<::blink::mojom::blink::DataElementPtr> elements) {
  NOTREACHED();
  return false;
}
bool BlobRegistry::GetBlobFromUUID(::blink::mojom::blink::BlobRequest blob, const WTF::String& uuid) {
  NOTREACHED();
  return false;
}
class BlobRegistry_Register_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  BlobRegistry_Register_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(BlobRegistry_Register_HandleSyncResponse);
};

class BlobRegistry_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BlobRegistry_Register_ForwardToCallback(
      BlobRegistry::RegisterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BlobRegistry::RegisterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BlobRegistry_Register_ForwardToCallback);
};

class BlobRegistry_RegisterFromStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BlobRegistry_RegisterFromStream_ForwardToCallback(
      BlobRegistry::RegisterFromStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BlobRegistry::RegisterFromStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BlobRegistry_RegisterFromStream_ForwardToCallback);
};
class BlobRegistry_GetBlobFromUUID_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  BlobRegistry_GetBlobFromUUID_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(BlobRegistry_GetBlobFromUUID_HandleSyncResponse);
};

class BlobRegistry_GetBlobFromUUID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BlobRegistry_GetBlobFromUUID_ForwardToCallback(
      BlobRegistry::GetBlobFromUUIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BlobRegistry::GetBlobFromUUIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(BlobRegistry_GetBlobFromUUID_ForwardToCallback);
};

BlobRegistryProxy::BlobRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool BlobRegistryProxy::Register(
    ::blink::mojom::blink::BlobRequest param_blob, const WTF::String& param_uuid, const WTF::String& param_content_type, const WTF::String& param_content_disposition, WTF::Vector<::blink::mojom::blink::DataElementPtr> param_elements) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_Register_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobRequestDataView>(
      param_blob, &params->blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid blob in BlobRegistry.Register request");
  typename decltype(params->uuid)::BaseType::BufferWriter
      uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_uuid, buffer, &uuid_writer, &serialization_context);
  params->uuid.Set(
      uuid_writer.is_null() ? nullptr : uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null uuid in BlobRegistry.Register request");
  typename decltype(params->content_type)::BaseType::BufferWriter
      content_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_content_type, buffer, &content_type_writer, &serialization_context);
  params->content_type.Set(
      content_type_writer.is_null() ? nullptr : content_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_type in BlobRegistry.Register request");
  typename decltype(params->content_disposition)::BaseType::BufferWriter
      content_disposition_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_content_disposition, buffer, &content_disposition_writer, &serialization_context);
  params->content_disposition.Set(
      content_disposition_writer.is_null() ? nullptr : content_disposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_disposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_disposition in BlobRegistry.Register request");
  typename decltype(params->elements)::BaseType::BufferWriter
      elements_writer;
  const mojo::internal::ContainerValidateParams elements_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::DataElementDataView>>(
      param_elements, buffer, &elements_writer, &elements_validate_params,
      &serialization_context);
  params->elements.Set(
      elements_writer.is_null() ? nullptr : elements_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->elements.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null elements in BlobRegistry.Register request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("Register");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobRegistry_Register_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void BlobRegistryProxy::Register(
    ::blink::mojom::blink::BlobRequest in_blob, const WTF::String& in_uuid, const WTF::String& in_content_type, const WTF::String& in_content_disposition, WTF::Vector<::blink::mojom::blink::DataElementPtr> in_elements, RegisterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::Register");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_Register_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobRequestDataView>(
      in_blob, &params->blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid blob in BlobRegistry.Register request");
  typename decltype(params->uuid)::BaseType::BufferWriter
      uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_uuid, buffer, &uuid_writer, &serialization_context);
  params->uuid.Set(
      uuid_writer.is_null() ? nullptr : uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null uuid in BlobRegistry.Register request");
  typename decltype(params->content_type)::BaseType::BufferWriter
      content_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_content_type, buffer, &content_type_writer, &serialization_context);
  params->content_type.Set(
      content_type_writer.is_null() ? nullptr : content_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_type in BlobRegistry.Register request");
  typename decltype(params->content_disposition)::BaseType::BufferWriter
      content_disposition_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_content_disposition, buffer, &content_disposition_writer, &serialization_context);
  params->content_disposition.Set(
      content_disposition_writer.is_null() ? nullptr : content_disposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_disposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_disposition in BlobRegistry.Register request");
  typename decltype(params->elements)::BaseType::BufferWriter
      elements_writer;
  const mojo::internal::ContainerValidateParams elements_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::DataElementDataView>>(
      in_elements, buffer, &elements_writer, &elements_validate_params,
      &serialization_context);
  params->elements.Set(
      elements_writer.is_null() ? nullptr : elements_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->elements.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null elements in BlobRegistry.Register request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("Register");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobRegistry_Register_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void BlobRegistryProxy::RegisterFromStream(
    const WTF::String& in_content_type, const WTF::String& in_content_disposition, uint64_t in_length_hint, mojo::ScopedDataPipeConsumerHandle in_data, ProgressClientAssociatedPtrInfo in_progress_client, RegisterFromStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::RegisterFromStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_RegisterFromStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_RegisterFromStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->content_type)::BaseType::BufferWriter
      content_type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_content_type, buffer, &content_type_writer, &serialization_context);
  params->content_type.Set(
      content_type_writer.is_null() ? nullptr : content_type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_type in BlobRegistry.RegisterFromStream request");
  typename decltype(params->content_disposition)::BaseType::BufferWriter
      content_disposition_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_content_disposition, buffer, &content_disposition_writer, &serialization_context);
  params->content_disposition.Set(
      content_disposition_writer.is_null() ? nullptr : content_disposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_disposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_disposition in BlobRegistry.RegisterFromStream request");
  params->length_hint = in_length_hint;
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_data, &params->data, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->data),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid data in BlobRegistry.RegisterFromStream request");
  mojo::internal::Serialize<::blink::mojom::ProgressClientAssociatedPtrInfoDataView>(
      in_progress_client, &params->progress_client, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("RegisterFromStream");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobRegistry_RegisterFromStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool BlobRegistryProxy::GetBlobFromUUID(
    ::blink::mojom::blink::BlobRequest param_blob, const WTF::String& param_uuid) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::GetBlobFromUUID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_GetBlobFromUUID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_GetBlobFromUUID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobRequestDataView>(
      param_blob, &params->blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid blob in BlobRegistry.GetBlobFromUUID request");
  typename decltype(params->uuid)::BaseType::BufferWriter
      uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_uuid, buffer, &uuid_writer, &serialization_context);
  params->uuid.Set(
      uuid_writer.is_null() ? nullptr : uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null uuid in BlobRegistry.GetBlobFromUUID request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("GetBlobFromUUID");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobRegistry_GetBlobFromUUID_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void BlobRegistryProxy::GetBlobFromUUID(
    ::blink::mojom::blink::BlobRequest in_blob, const WTF::String& in_uuid, GetBlobFromUUIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::GetBlobFromUUID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_GetBlobFromUUID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_GetBlobFromUUID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::BlobRequestDataView>(
      in_blob, &params->blob, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->blob),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid blob in BlobRegistry.GetBlobFromUUID request");
  typename decltype(params->uuid)::BaseType::BufferWriter
      uuid_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_uuid, buffer, &uuid_writer, &serialization_context);
  params->uuid.Set(
      uuid_writer.is_null() ? nullptr : uuid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->uuid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null uuid in BlobRegistry.GetBlobFromUUID request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("GetBlobFromUUID");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BlobRegistry_GetBlobFromUUID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
#if defined(ENABLE_GNET)
void BlobRegistryProxy::URLStoreForOrigin(
    const scoped_refptr<const ::blink::SecurityOrigin>& in_origin, ::blink::mojom::blink::BlobURLStoreAssociatedRequest in_url_store) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::URLStoreForOrigin");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_URLStoreForOrigin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_URLStoreForOrigin_Params_Data::BufferWriter
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
      "null origin in BlobRegistry.URLStoreForOrigin request");
  mojo::internal::Serialize<::blink::mojom::BlobURLStoreAssociatedRequestDataView>(
      in_url_store, &params->url_store, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->url_store),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid url_store in BlobRegistry.URLStoreForOrigin request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("URLStoreForOrigin");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
#endif // ENABLE_GNET
class BlobRegistry_Register_ProxyToResponder {
 public:
  static BlobRegistry::RegisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BlobRegistry_Register_ProxyToResponder> proxy(
        new BlobRegistry_Register_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BlobRegistry_Register_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BlobRegistry_Register_ProxyToResponder() {
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
  BlobRegistry_Register_ProxyToResponder(
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
        << "BlobRegistry::RegisterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BlobRegistry_Register_ProxyToResponder);
};

bool BlobRegistry_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::RegisterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BlobRegistry_Register_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BlobRegistry_Register_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobRegistry_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BlobRegistry::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void BlobRegistry_Register_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_Register_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_Register_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::RegisterCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("Register");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool BlobRegistry_Register_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::BlobRegistry_Register_ResponseParams_Data* params =
      reinterpret_cast<internal::BlobRegistry_Register_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobRegistry_Register_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BlobRegistry::Name_, 0, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class BlobRegistry_RegisterFromStream_ProxyToResponder {
 public:
  static BlobRegistry::RegisterFromStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BlobRegistry_RegisterFromStream_ProxyToResponder> proxy(
        new BlobRegistry_RegisterFromStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BlobRegistry_RegisterFromStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BlobRegistry_RegisterFromStream_ProxyToResponder() {
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
  BlobRegistry_RegisterFromStream_ProxyToResponder(
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
        << "BlobRegistry::RegisterFromStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const scoped_refptr<::blink::BlobDataHandle>& in_blob);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BlobRegistry_RegisterFromStream_ProxyToResponder);
};

bool BlobRegistry_RegisterFromStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::RegisterFromStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BlobRegistry_RegisterFromStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BlobRegistry_RegisterFromStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  scoped_refptr<::blink::BlobDataHandle> p_blob{};
  BlobRegistry_RegisterFromStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBlob(&p_blob))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BlobRegistry::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_blob));
  return true;
}

void BlobRegistry_RegisterFromStream_ProxyToResponder::Run(
    const scoped_refptr<::blink::BlobDataHandle>& in_blob) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_RegisterFromStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_RegisterFromStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->blob)::BaseType::BufferWriter
      blob_writer;
  mojo::internal::Serialize<::blink::mojom::SerializedBlobDataView>(
      in_blob, buffer, &blob_writer, &serialization_context);
  params->blob.Set(
      blob_writer.is_null() ? nullptr : blob_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::RegisterFromStreamCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("RegisterFromStream");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class BlobRegistry_GetBlobFromUUID_ProxyToResponder {
 public:
  static BlobRegistry::GetBlobFromUUIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BlobRegistry_GetBlobFromUUID_ProxyToResponder> proxy(
        new BlobRegistry_GetBlobFromUUID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&BlobRegistry_GetBlobFromUUID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BlobRegistry_GetBlobFromUUID_ProxyToResponder() {
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
  BlobRegistry_GetBlobFromUUID_ProxyToResponder(
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
        << "BlobRegistry::GetBlobFromUUIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(BlobRegistry_GetBlobFromUUID_ProxyToResponder);
};

bool BlobRegistry_GetBlobFromUUID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::BlobRegistry::GetBlobFromUUIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobRegistry_GetBlobFromUUID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BlobRegistry::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void BlobRegistry_GetBlobFromUUID_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBlobRegistry_GetBlobFromUUID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::GetBlobFromUUIDCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BlobRegistry::Name_);
  message.set_method_name("GetBlobFromUUID");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool BlobRegistry_GetBlobFromUUID_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data* params =
      reinterpret_cast<internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobRegistry_GetBlobFromUUID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BlobRegistry::Name_, 2, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool BlobRegistryStubDispatch::Accept(
    BlobRegistry* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBlobRegistry_Register_Name: {
      break;
    }
    case internal::kBlobRegistry_RegisterFromStream_Name: {
      break;
    }
    case internal::kBlobRegistry_GetBlobFromUUID_Name: {
      break;
    }
    case internal::kBlobRegistry_URLStoreForOrigin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::URLStoreForOrigin",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BlobRegistry_URLStoreForOrigin_Params_Data* params =
          reinterpret_cast<internal::BlobRegistry_URLStoreForOrigin_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<const ::blink::SecurityOrigin> p_origin{};
      ::blink::mojom::blink::BlobURLStoreAssociatedRequest p_url_store{};
      BlobRegistry_URLStoreForOrigin_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_url_store =
          input_data_view.TakeUrlStore<decltype(p_url_store)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BlobRegistry::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->URLStoreForOrigin(
std::move(p_origin), 
std::move(p_url_store));
      return true;
    }
  }
  return false;
}

// static
bool BlobRegistryStubDispatch::AcceptWithResponder(
    BlobRegistry* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBlobRegistry_Register_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::Register",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BlobRegistry_Register_Params_Data* params =
          reinterpret_cast<
              internal::BlobRegistry_Register_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::BlobRequest p_blob{};
      WTF::String p_uuid{};
      WTF::String p_content_type{};
      WTF::String p_content_disposition{};
      WTF::Vector<::blink::mojom::blink::DataElementPtr> p_elements{};
      BlobRegistry_Register_ParamsDataView input_data_view(params, &serialization_context);
      
      p_blob =
          input_data_view.TakeBlob<decltype(p_blob)>();
      if (!input_data_view.ReadUuid(&p_uuid))
        success = false;
      if (!input_data_view.ReadContentType(&p_content_type))
        success = false;
      if (!input_data_view.ReadContentDisposition(&p_content_disposition))
        success = false;
      if (!input_data_view.ReadElements(&p_elements))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BlobRegistry::Name_, 0, false);
        return false;
      }
      BlobRegistry::RegisterCallback callback =
          BlobRegistry_Register_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Register(
std::move(p_blob), 
std::move(p_uuid), 
std::move(p_content_type), 
std::move(p_content_disposition), 
std::move(p_elements), std::move(callback));
      return true;
    }
    case internal::kBlobRegistry_RegisterFromStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::RegisterFromStream",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BlobRegistry_RegisterFromStream_Params_Data* params =
          reinterpret_cast<
              internal::BlobRegistry_RegisterFromStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_content_type{};
      WTF::String p_content_disposition{};
      uint64_t p_length_hint{};
      mojo::ScopedDataPipeConsumerHandle p_data{};
      ProgressClientAssociatedPtrInfo p_progress_client{};
      BlobRegistry_RegisterFromStream_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadContentType(&p_content_type))
        success = false;
      if (!input_data_view.ReadContentDisposition(&p_content_disposition))
        success = false;
      p_length_hint = input_data_view.length_hint();
      p_data = input_data_view.TakeData();
      p_progress_client =
          input_data_view.TakeProgressClient<decltype(p_progress_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BlobRegistry::Name_, 1, false);
        return false;
      }
      BlobRegistry::RegisterFromStreamCallback callback =
          BlobRegistry_RegisterFromStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterFromStream(
std::move(p_content_type), 
std::move(p_content_disposition), 
std::move(p_length_hint), 
std::move(p_data), 
std::move(p_progress_client), std::move(callback));
      return true;
    }
    case internal::kBlobRegistry_GetBlobFromUUID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BlobRegistry::GetBlobFromUUID",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::BlobRegistry_GetBlobFromUUID_Params_Data* params =
          reinterpret_cast<
              internal::BlobRegistry_GetBlobFromUUID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::mojom::blink::BlobRequest p_blob{};
      WTF::String p_uuid{};
      BlobRegistry_GetBlobFromUUID_ParamsDataView input_data_view(params, &serialization_context);
      
      p_blob =
          input_data_view.TakeBlob<decltype(p_blob)>();
      if (!input_data_view.ReadUuid(&p_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BlobRegistry::Name_, 2, false);
        return false;
      }
      BlobRegistry::GetBlobFromUUIDCallback callback =
          BlobRegistry_GetBlobFromUUID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetBlobFromUUID(
std::move(p_blob), 
std::move(p_uuid), std::move(callback));
      return true;
    }
    case internal::kBlobRegistry_URLStoreForOrigin_Name: {
      break;
    }
  }
  return false;
}

bool BlobRegistryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BlobRegistry RequestValidator");

  switch (message->header()->name) {
    case internal::kBlobRegistry_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_Register_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobRegistry_RegisterFromStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_RegisterFromStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobRegistry_GetBlobFromUUID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_GetBlobFromUUID_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobRegistry_URLStoreForOrigin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_URLStoreForOrigin_Params_Data>(
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

bool BlobRegistryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BlobRegistry ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBlobRegistry_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_Register_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobRegistry_RegisterFromStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_RegisterFromStream_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kBlobRegistry_GetBlobFromUUID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data>(
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
