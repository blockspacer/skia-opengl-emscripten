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

#include "media/mojo/interfaces/platform_verification.mojom-blink.h"

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

#include "media/mojo/interfaces/platform_verification.mojom-params-data.h"
#include "media/mojo/interfaces/platform_verification.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/platform_verification.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_JUMBO_H_
#endif
namespace media {
namespace mojom {
namespace blink {
const char PlatformVerification::Name_[] = "media.mojom.PlatformVerification";

class PlatformVerification_ChallengePlatform_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PlatformVerification_ChallengePlatform_ForwardToCallback(
      PlatformVerification::ChallengePlatformCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PlatformVerification::ChallengePlatformCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PlatformVerification_ChallengePlatform_ForwardToCallback);
};

class PlatformVerification_GetStorageId_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PlatformVerification_GetStorageId_ForwardToCallback(
      PlatformVerification::GetStorageIdCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PlatformVerification::GetStorageIdCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PlatformVerification_GetStorageId_ForwardToCallback);
};

PlatformVerificationProxy::PlatformVerificationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PlatformVerificationProxy::ChallengePlatform(
    const WTF::String& in_service_id, const WTF::String& in_challenge, ChallengePlatformCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PlatformVerification::ChallengePlatform");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPlatformVerification_ChallengePlatform_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::PlatformVerification_ChallengePlatform_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->service_id)::BaseType::BufferWriter
      service_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_service_id, buffer, &service_id_writer, &serialization_context);
  params->service_id.Set(
      service_id_writer.is_null() ? nullptr : service_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_id in PlatformVerification.ChallengePlatform request");
  typename decltype(params->challenge)::BaseType::BufferWriter
      challenge_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_challenge, buffer, &challenge_writer, &serialization_context);
  params->challenge.Set(
      challenge_writer.is_null() ? nullptr : challenge_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->challenge.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null challenge in PlatformVerification.ChallengePlatform request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PlatformVerification::Name_);
  message.set_method_name("ChallengePlatform");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PlatformVerification_ChallengePlatform_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PlatformVerificationProxy::GetStorageId(
    uint32_t in_version, GetStorageIdCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PlatformVerification::GetStorageId");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPlatformVerification_GetStorageId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::PlatformVerification_GetStorageId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->version = in_version;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PlatformVerification::Name_);
  message.set_method_name("GetStorageId");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PlatformVerification_GetStorageId_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PlatformVerification_ChallengePlatform_ProxyToResponder {
 public:
  static PlatformVerification::ChallengePlatformCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PlatformVerification_ChallengePlatform_ProxyToResponder> proxy(
        new PlatformVerification_ChallengePlatform_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PlatformVerification_ChallengePlatform_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PlatformVerification_ChallengePlatform_ProxyToResponder() {
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
  PlatformVerification_ChallengePlatform_ProxyToResponder(
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
        << "PlatformVerification::ChallengePlatformCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const WTF::String& in_signed_data, const WTF::String& in_signed_data_signature, const WTF::String& in_platform_key_certificate);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PlatformVerification_ChallengePlatform_ProxyToResponder);
};

bool PlatformVerification_ChallengePlatform_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PlatformVerification::ChallengePlatformCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PlatformVerification_ChallengePlatform_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PlatformVerification_ChallengePlatform_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WTF::String p_signed_data{};
  WTF::String p_signed_data_signature{};
  WTF::String p_platform_key_certificate{};
  PlatformVerification_ChallengePlatform_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadSignedData(&p_signed_data))
    success = false;
  if (!input_data_view.ReadSignedDataSignature(&p_signed_data_signature))
    success = false;
  if (!input_data_view.ReadPlatformKeyCertificate(&p_platform_key_certificate))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PlatformVerification::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_signed_data), 
std::move(p_signed_data_signature), 
std::move(p_platform_key_certificate));
  return true;
}

void PlatformVerification_ChallengePlatform_ProxyToResponder::Run(
    bool in_success, const WTF::String& in_signed_data, const WTF::String& in_signed_data_signature, const WTF::String& in_platform_key_certificate) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPlatformVerification_ChallengePlatform_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::PlatformVerification_ChallengePlatform_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->signed_data)::BaseType::BufferWriter
      signed_data_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_signed_data, buffer, &signed_data_writer, &serialization_context);
  params->signed_data.Set(
      signed_data_writer.is_null() ? nullptr : signed_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signed_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signed_data in ");
  typename decltype(params->signed_data_signature)::BaseType::BufferWriter
      signed_data_signature_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_signed_data_signature, buffer, &signed_data_signature_writer, &serialization_context);
  params->signed_data_signature.Set(
      signed_data_signature_writer.is_null() ? nullptr : signed_data_signature_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->signed_data_signature.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signed_data_signature in ");
  typename decltype(params->platform_key_certificate)::BaseType::BufferWriter
      platform_key_certificate_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_platform_key_certificate, buffer, &platform_key_certificate_writer, &serialization_context);
  params->platform_key_certificate.Set(
      platform_key_certificate_writer.is_null() ? nullptr : platform_key_certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->platform_key_certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null platform_key_certificate in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PlatformVerification::ChallengePlatformCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PlatformVerification::Name_);
  message.set_method_name("ChallengePlatform");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PlatformVerification_GetStorageId_ProxyToResponder {
 public:
  static PlatformVerification::GetStorageIdCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PlatformVerification_GetStorageId_ProxyToResponder> proxy(
        new PlatformVerification_GetStorageId_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PlatformVerification_GetStorageId_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PlatformVerification_GetStorageId_ProxyToResponder() {
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
  PlatformVerification_GetStorageId_ProxyToResponder(
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
        << "PlatformVerification::GetStorageIdCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_version, const WTF::Vector<uint8_t>& in_storage_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PlatformVerification_GetStorageId_ProxyToResponder);
};

bool PlatformVerification_GetStorageId_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PlatformVerification::GetStorageIdCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PlatformVerification_GetStorageId_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PlatformVerification_GetStorageId_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_version{};
  WTF::Vector<uint8_t> p_storage_id{};
  PlatformVerification_GetStorageId_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_version = input_data_view.version();
  if (!input_data_view.ReadStorageId(&p_storage_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PlatformVerification::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_version), 
std::move(p_storage_id));
  return true;
}

void PlatformVerification_GetStorageId_ProxyToResponder::Run(
    uint32_t in_version, const WTF::Vector<uint8_t>& in_storage_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPlatformVerification_GetStorageId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::PlatformVerification_GetStorageId_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->version = in_version;
  typename decltype(params->storage_id)::BaseType::BufferWriter
      storage_id_writer;
  const mojo::internal::ContainerValidateParams storage_id_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_storage_id, buffer, &storage_id_writer, &storage_id_validate_params,
      &serialization_context);
  params->storage_id.Set(
      storage_id_writer.is_null() ? nullptr : storage_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->storage_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null storage_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PlatformVerification::GetStorageIdCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PlatformVerification::Name_);
  message.set_method_name("GetStorageId");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PlatformVerificationStubDispatch::Accept(
    PlatformVerification* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPlatformVerification_ChallengePlatform_Name: {
      break;
    }
    case internal::kPlatformVerification_GetStorageId_Name: {
      break;
    }
  }
  return false;
}

// static
bool PlatformVerificationStubDispatch::AcceptWithResponder(
    PlatformVerification* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPlatformVerification_ChallengePlatform_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PlatformVerification::ChallengePlatform",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PlatformVerification_ChallengePlatform_Params_Data* params =
          reinterpret_cast<
              internal::PlatformVerification_ChallengePlatform_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_service_id{};
      WTF::String p_challenge{};
      PlatformVerification_ChallengePlatform_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadServiceId(&p_service_id))
        success = false;
      if (!input_data_view.ReadChallenge(&p_challenge))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PlatformVerification::Name_, 0, false);
        return false;
      }
      PlatformVerification::ChallengePlatformCallback callback =
          PlatformVerification_ChallengePlatform_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChallengePlatform(
std::move(p_service_id), 
std::move(p_challenge), std::move(callback));
      return true;
    }
    case internal::kPlatformVerification_GetStorageId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PlatformVerification::GetStorageId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PlatformVerification_GetStorageId_Params_Data* params =
          reinterpret_cast<
              internal::PlatformVerification_GetStorageId_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_version{};
      PlatformVerification_GetStorageId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_version = input_data_view.version();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PlatformVerification::Name_, 1, false);
        return false;
      }
      PlatformVerification::GetStorageIdCallback callback =
          PlatformVerification_GetStorageId_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetStorageId(
std::move(p_version), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PlatformVerificationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PlatformVerification RequestValidator");

  switch (message->header()->name) {
    case internal::kPlatformVerification_ChallengePlatform_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PlatformVerification_ChallengePlatform_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPlatformVerification_GetStorageId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PlatformVerification_GetStorageId_Params_Data>(
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

bool PlatformVerificationResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PlatformVerification ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPlatformVerification_ChallengePlatform_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PlatformVerification_ChallengePlatform_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPlatformVerification_GetStorageId_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PlatformVerification_GetStorageId_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif