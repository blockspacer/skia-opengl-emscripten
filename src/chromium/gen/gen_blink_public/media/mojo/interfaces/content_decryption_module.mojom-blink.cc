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

#include "media/mojo/interfaces/content_decryption_module.mojom-blink.h"

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

#include "media/mojo/interfaces/content_decryption_module.mojom-params-data.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/content_decryption_module.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
CdmPromiseResult::CdmPromiseResult()
    : success(),
      exception(),
      system_code(),
      error_message() {}

CdmPromiseResult::CdmPromiseResult(
    bool success_in,
    CdmPromiseResult::Exception exception_in,
    uint32_t system_code_in,
    const WTF::String& error_message_in)
    : success(std::move(success_in)),
      exception(std::move(exception_in)),
      system_code(std::move(system_code_in)),
      error_message(std::move(error_message_in)) {}

CdmPromiseResult::~CdmPromiseResult() = default;
size_t CdmPromiseResult::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->success);
  seed = mojo::internal::WTFHash(seed, this->exception);
  seed = mojo::internal::WTFHash(seed, this->system_code);
  seed = mojo::internal::WTFHash(seed, this->error_message);
  return seed;
}

bool CdmPromiseResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
CdmKeyInformation::CdmKeyInformation()
    : key_id(),
      status(),
      system_code() {}

CdmKeyInformation::CdmKeyInformation(
    const WTF::Vector<uint8_t>& key_id_in,
    CdmKeyStatus status_in,
    uint32_t system_code_in)
    : key_id(std::move(key_id_in)),
      status(std::move(status_in)),
      system_code(std::move(system_code_in)) {}

CdmKeyInformation::~CdmKeyInformation() = default;

bool CdmKeyInformation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ContentDecryptionModule::Name_[] = "media.mojom.ContentDecryptionModule";

class ContentDecryptionModule_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_Initialize_ForwardToCallback(
      ContentDecryptionModule::InitializeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::InitializeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_Initialize_ForwardToCallback);
};

class ContentDecryptionModule_SetServerCertificate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_SetServerCertificate_ForwardToCallback(
      ContentDecryptionModule::SetServerCertificateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::SetServerCertificateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_SetServerCertificate_ForwardToCallback);
};

class ContentDecryptionModule_GetStatusForPolicy_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_GetStatusForPolicy_ForwardToCallback(
      ContentDecryptionModule::GetStatusForPolicyCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::GetStatusForPolicyCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_GetStatusForPolicy_ForwardToCallback);
};

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback(
      ContentDecryptionModule::CreateSessionAndGenerateRequestCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::CreateSessionAndGenerateRequestCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback);
};

class ContentDecryptionModule_LoadSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_LoadSession_ForwardToCallback(
      ContentDecryptionModule::LoadSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::LoadSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_LoadSession_ForwardToCallback);
};

class ContentDecryptionModule_UpdateSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_UpdateSession_ForwardToCallback(
      ContentDecryptionModule::UpdateSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::UpdateSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_UpdateSession_ForwardToCallback);
};

class ContentDecryptionModule_CloseSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_CloseSession_ForwardToCallback(
      ContentDecryptionModule::CloseSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::CloseSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CloseSession_ForwardToCallback);
};

class ContentDecryptionModule_RemoveSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentDecryptionModule_RemoveSession_ForwardToCallback(
      ContentDecryptionModule::RemoveSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentDecryptionModule::RemoveSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_RemoveSession_ForwardToCallback);
};

ContentDecryptionModuleProxy::ContentDecryptionModuleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContentDecryptionModuleProxy::SetClient(
    ContentDecryptionModuleClientAssociatedPtrInfo in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModuleClientAssociatedPtrInfoDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in ContentDecryptionModule.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ContentDecryptionModuleProxy::Initialize(
    const WTF::String& in_key_system, const scoped_refptr<const ::blink::SecurityOrigin>& in_security_origin, CdmConfigPtr in_cdm_config, InitializeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::Initialize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_system)::BaseType::BufferWriter
      key_system_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_key_system, buffer, &key_system_writer, &serialization_context);
  params->key_system.Set(
      key_system_writer.is_null() ? nullptr : key_system_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_system.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_system in ContentDecryptionModule.Initialize request");
  typename decltype(params->security_origin)::BaseType::BufferWriter
      security_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_security_origin, buffer, &security_origin_writer, &serialization_context);
  params->security_origin.Set(
      security_origin_writer.is_null() ? nullptr : security_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->security_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null security_origin in ContentDecryptionModule.Initialize request");
  typename decltype(params->cdm_config)::BaseType::BufferWriter
      cdm_config_writer;
  mojo::internal::Serialize<::media::mojom::CdmConfigDataView>(
      in_cdm_config, buffer, &cdm_config_writer, &serialization_context);
  params->cdm_config.Set(
      cdm_config_writer.is_null() ? nullptr : cdm_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cdm_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cdm_config in ContentDecryptionModule.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("Initialize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_Initialize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::SetServerCertificate(
    const WTF::Vector<uint8_t>& in_certificate_data, SetServerCertificateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::SetServerCertificate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_SetServerCertificate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_SetServerCertificate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->certificate_data)::BaseType::BufferWriter
      certificate_data_writer;
  const mojo::internal::ContainerValidateParams certificate_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_certificate_data, buffer, &certificate_data_writer, &certificate_data_validate_params,
      &serialization_context);
  params->certificate_data.Set(
      certificate_data_writer.is_null() ? nullptr : certificate_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->certificate_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null certificate_data in ContentDecryptionModule.SetServerCertificate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("SetServerCertificate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_SetServerCertificate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::GetStatusForPolicy(
    HdcpVersion in_min_hdcp_version, GetStatusForPolicyCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::GetStatusForPolicy");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_GetStatusForPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::HdcpVersion>(
      in_min_hdcp_version, &params->min_hdcp_version);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("GetStatusForPolicy");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_GetStatusForPolicy_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::CreateSessionAndGenerateRequest(
    CdmSessionType in_session_type, EmeInitDataType in_init_data_type, const WTF::Vector<uint8_t>& in_init_data, CreateSessionAndGenerateRequestCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CreateSessionAndGenerateRequest");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmSessionType>(
      in_session_type, &params->session_type);
  mojo::internal::Serialize<::media::mojom::EmeInitDataType>(
      in_init_data_type, &params->init_data_type);
  typename decltype(params->init_data)::BaseType::BufferWriter
      init_data_writer;
  const mojo::internal::ContainerValidateParams init_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_init_data, buffer, &init_data_writer, &init_data_validate_params,
      &serialization_context);
  params->init_data.Set(
      init_data_writer.is_null() ? nullptr : init_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->init_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null init_data in ContentDecryptionModule.CreateSessionAndGenerateRequest request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("CreateSessionAndGenerateRequest");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::LoadSession(
    CdmSessionType in_session_type, const WTF::String& in_session_id, LoadSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::LoadSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_LoadSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_LoadSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::CdmSessionType>(
      in_session_type, &params->session_type);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.LoadSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("LoadSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_LoadSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::UpdateSession(
    const WTF::String& in_session_id, const WTF::Vector<uint8_t>& in_response, UpdateSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::UpdateSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_UpdateSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_UpdateSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.UpdateSession request");
  typename decltype(params->response)::BaseType::BufferWriter
      response_writer;
  const mojo::internal::ContainerValidateParams response_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_response, buffer, &response_writer, &response_validate_params,
      &serialization_context);
  params->response.Set(
      response_writer.is_null() ? nullptr : response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ContentDecryptionModule.UpdateSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("UpdateSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_UpdateSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::CloseSession(
    const WTF::String& in_session_id, CloseSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CloseSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_CloseSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_CloseSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.CloseSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("CloseSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_CloseSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ContentDecryptionModuleProxy::RemoveSession(
    const WTF::String& in_session_id, RemoveSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::RemoveSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_RemoveSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_RemoveSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModule.RemoveSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("RemoveSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ContentDecryptionModule_RemoveSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ContentDecryptionModule_Initialize_ProxyToResponder {
 public:
  static ContentDecryptionModule::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_Initialize_ProxyToResponder> proxy(
        new ContentDecryptionModule_Initialize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_Initialize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_Initialize_ProxyToResponder() {
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
  ContentDecryptionModule_Initialize_ProxyToResponder(
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
        << "ContentDecryptionModule::InitializeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result, int32_t in_cdm_id, ::media::mojom::blink::DecryptorPtr in_decryptor);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_Initialize_ProxyToResponder);
};

bool ContentDecryptionModule_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::InitializeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_Initialize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_Initialize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  int32_t p_cdm_id{};
  ::media::mojom::blink::DecryptorPtr p_decryptor{};
  ContentDecryptionModule_Initialize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  p_cdm_id = input_data_view.cdm_id();
  p_decryptor =
      input_data_view.TakeDecryptor<decltype(p_decryptor)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_cdm_id), 
std::move(p_decryptor));
  return true;
}

void ContentDecryptionModule_Initialize_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, int32_t in_cdm_id, ::media::mojom::blink::DecryptorPtr in_decryptor) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_Initialize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  params->cdm_id = in_cdm_id;
  mojo::internal::Serialize<::media::mojom::DecryptorPtrDataView>(
      in_decryptor, &params->decryptor, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::InitializeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("Initialize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_SetServerCertificate_ProxyToResponder {
 public:
  static ContentDecryptionModule::SetServerCertificateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_SetServerCertificate_ProxyToResponder> proxy(
        new ContentDecryptionModule_SetServerCertificate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_SetServerCertificate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_SetServerCertificate_ProxyToResponder() {
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
  ContentDecryptionModule_SetServerCertificate_ProxyToResponder(
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
        << "ContentDecryptionModule::SetServerCertificateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_SetServerCertificate_ProxyToResponder);
};

bool ContentDecryptionModule_SetServerCertificate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::SetServerCertificateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ContentDecryptionModule_SetServerCertificate_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_SetServerCertificate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::SetServerCertificateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("SetServerCertificate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder {
 public:
  static ContentDecryptionModule::GetStatusForPolicyCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder> proxy(
        new ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder() {
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
  ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder(
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
        << "ContentDecryptionModule::GetStatusForPolicyCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result, CdmKeyStatus in_key_status);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder);
};

bool ContentDecryptionModule_GetStatusForPolicy_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::GetStatusForPolicyCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  CdmKeyStatus p_key_status{};
  ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadKeyStatus(&p_key_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_key_status));
  return true;
}

void ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, CdmKeyStatus in_key_status) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_GetStatusForPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  mojo::internal::Serialize<::media::mojom::CdmKeyStatus>(
      in_key_status, &params->key_status);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::GetStatusForPolicyCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("GetStatusForPolicy");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder {
 public:
  static ContentDecryptionModule::CreateSessionAndGenerateRequestCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder> proxy(
        new ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder() {
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
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder(
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
        << "ContentDecryptionModule::CreateSessionAndGenerateRequestCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result, const WTF::String& in_session_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder);
};

bool ContentDecryptionModule_CreateSessionAndGenerateRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CreateSessionAndGenerateRequestCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  WTF::String p_session_id{};
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadSessionId(&p_session_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_session_id));
  return true;
}

void ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, const WTF::String& in_session_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CreateSessionAndGenerateRequestCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("CreateSessionAndGenerateRequest");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_LoadSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::LoadSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_LoadSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_LoadSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_LoadSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_LoadSession_ProxyToResponder() {
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
  ContentDecryptionModule_LoadSession_ProxyToResponder(
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
        << "ContentDecryptionModule::LoadSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result, const WTF::String& in_session_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_LoadSession_ProxyToResponder);
};

bool ContentDecryptionModule_LoadSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::LoadSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_LoadSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  WTF::String p_session_id{};
  ContentDecryptionModule_LoadSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadSessionId(&p_session_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_session_id));
  return true;
}

void ContentDecryptionModule_LoadSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result, const WTF::String& in_session_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_LoadSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_LoadSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::LoadSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("LoadSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_UpdateSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::UpdateSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_UpdateSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_UpdateSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_UpdateSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_UpdateSession_ProxyToResponder() {
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
  ContentDecryptionModule_UpdateSession_ProxyToResponder(
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
        << "ContentDecryptionModule::UpdateSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_UpdateSession_ProxyToResponder);
};

bool ContentDecryptionModule_UpdateSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::UpdateSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_UpdateSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ContentDecryptionModule_UpdateSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_UpdateSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::UpdateSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("UpdateSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_CloseSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::CloseSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_CloseSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_CloseSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_CloseSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_CloseSession_ProxyToResponder() {
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
  ContentDecryptionModule_CloseSession_ProxyToResponder(
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
        << "ContentDecryptionModule::CloseSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_CloseSession_ProxyToResponder);
};

bool ContentDecryptionModule_CloseSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CloseSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_CloseSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_CloseSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ContentDecryptionModule_CloseSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_CloseSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_CloseSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CloseSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("CloseSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ContentDecryptionModule_RemoveSession_ProxyToResponder {
 public:
  static ContentDecryptionModule::RemoveSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ContentDecryptionModule_RemoveSession_ProxyToResponder> proxy(
        new ContentDecryptionModule_RemoveSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ContentDecryptionModule_RemoveSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ContentDecryptionModule_RemoveSession_ProxyToResponder() {
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
  ContentDecryptionModule_RemoveSession_ProxyToResponder(
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
        << "ContentDecryptionModule::RemoveSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      CdmPromiseResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModule_RemoveSession_ProxyToResponder);
};

bool ContentDecryptionModule_RemoveSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::RemoveSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CdmPromiseResultPtr p_result{};
  ContentDecryptionModule_RemoveSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ContentDecryptionModule::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ContentDecryptionModule_RemoveSession_ProxyToResponder::Run(
    CdmPromiseResultPtr in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModule_RemoveSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::media::mojom::CdmPromiseResultDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::RemoveSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModule::Name_);
  message.set_method_name("RemoveSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ContentDecryptionModuleStubDispatch::Accept(
    ContentDecryptionModule* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContentDecryptionModule_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentDecryptionModule_SetClient_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModule_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ContentDecryptionModuleClientAssociatedPtrInfo p_client{};
      ContentDecryptionModule_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kContentDecryptionModule_Initialize_Name: {
      break;
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      break;
    }
    case internal::kContentDecryptionModule_GetStatusForPolicy_Name: {
      break;
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      break;
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      break;
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      break;
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      break;
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      break;
    }
  }
  return false;
}

// static
bool ContentDecryptionModuleStubDispatch::AcceptWithResponder(
    ContentDecryptionModule* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kContentDecryptionModule_SetClient_Name: {
      break;
    }
    case internal::kContentDecryptionModule_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::Initialize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_Initialize_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_Initialize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_key_system{};
      scoped_refptr<const ::blink::SecurityOrigin> p_security_origin{};
      CdmConfigPtr p_cdm_config{};
      ContentDecryptionModule_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeySystem(&p_key_system))
        success = false;
      if (!input_data_view.ReadSecurityOrigin(&p_security_origin))
        success = false;
      if (!input_data_view.ReadCdmConfig(&p_cdm_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 1, false);
        return false;
      }
      ContentDecryptionModule::InitializeCallback callback =
          ContentDecryptionModule_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(
std::move(p_key_system), 
std::move(p_security_origin), 
std::move(p_cdm_config), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::SetServerCertificate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_SetServerCertificate_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_SetServerCertificate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_certificate_data{};
      ContentDecryptionModule_SetServerCertificate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCertificateData(&p_certificate_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 2, false);
        return false;
      }
      ContentDecryptionModule::SetServerCertificateCallback callback =
          ContentDecryptionModule_SetServerCertificate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetServerCertificate(
std::move(p_certificate_data), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_GetStatusForPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::GetStatusForPolicy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HdcpVersion p_min_hdcp_version{};
      ContentDecryptionModule_GetStatusForPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMinHdcpVersion(&p_min_hdcp_version))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 3, false);
        return false;
      }
      ContentDecryptionModule::GetStatusForPolicyCallback callback =
          ContentDecryptionModule_GetStatusForPolicy_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetStatusForPolicy(
std::move(p_min_hdcp_version), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CreateSessionAndGenerateRequest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CdmSessionType p_session_type{};
      EmeInitDataType p_init_data_type{};
      WTF::Vector<uint8_t> p_init_data{};
      ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionType(&p_session_type))
        success = false;
      if (!input_data_view.ReadInitDataType(&p_init_data_type))
        success = false;
      if (!input_data_view.ReadInitData(&p_init_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 4, false);
        return false;
      }
      ContentDecryptionModule::CreateSessionAndGenerateRequestCallback callback =
          ContentDecryptionModule_CreateSessionAndGenerateRequest_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateSessionAndGenerateRequest(
std::move(p_session_type), 
std::move(p_init_data_type), 
std::move(p_init_data), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::LoadSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_LoadSession_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_LoadSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CdmSessionType p_session_type{};
      WTF::String p_session_id{};
      ContentDecryptionModule_LoadSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionType(&p_session_type))
        success = false;
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 5, false);
        return false;
      }
      ContentDecryptionModule::LoadSessionCallback callback =
          ContentDecryptionModule_LoadSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LoadSession(
std::move(p_session_type), 
std::move(p_session_id), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::UpdateSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_UpdateSession_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_UpdateSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      WTF::Vector<uint8_t> p_response{};
      ContentDecryptionModule_UpdateSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 6, false);
        return false;
      }
      ContentDecryptionModule::UpdateSessionCallback callback =
          ContentDecryptionModule_UpdateSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSession(
std::move(p_session_id), 
std::move(p_response), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::CloseSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_CloseSession_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_CloseSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      ContentDecryptionModule_CloseSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 7, false);
        return false;
      }
      ContentDecryptionModule::CloseSessionCallback callback =
          ContentDecryptionModule_CloseSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseSession(
std::move(p_session_id), std::move(callback));
      return true;
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModule::RemoveSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ContentDecryptionModule_RemoveSession_Params_Data* params =
          reinterpret_cast<
              internal::ContentDecryptionModule_RemoveSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      ContentDecryptionModule_RemoveSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModule::Name_, 8, false);
        return false;
      }
      ContentDecryptionModule::RemoveSessionCallback callback =
          ContentDecryptionModule_RemoveSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveSession(
std::move(p_session_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ContentDecryptionModuleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContentDecryptionModule RequestValidator");

  switch (message->header()->name) {
    case internal::kContentDecryptionModule_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_SetServerCertificate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_GetStatusForPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_LoadSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_UpdateSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CloseSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_RemoveSession_Params_Data>(
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

bool ContentDecryptionModuleResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContentDecryptionModule ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kContentDecryptionModule_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_SetServerCertificate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_GetStatusForPolicy_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_CreateSessionAndGenerateRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_LoadSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_LoadSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_UpdateSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_CloseSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_CloseSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModule_RemoveSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data>(
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
const char ContentDecryptionModuleClient::Name_[] = "media.mojom.ContentDecryptionModuleClient";

ContentDecryptionModuleClientProxy::ContentDecryptionModuleClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ContentDecryptionModuleClientProxy::OnSessionMessage(
    const WTF::String& in_session_id, CdmMessageType in_message_type, const WTF::Vector<uint8_t>& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModuleClient_OnSessionMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionMessage request");
  mojo::internal::Serialize<::media::mojom::CdmMessageType>(
      in_message_type, &params->message_type);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  const mojo::internal::ContainerValidateParams message_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_message, buffer, &message_writer, &message_validate_params,
      &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ContentDecryptionModuleClient.OnSessionMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModuleClient::Name_);
  message.set_method_name("OnSessionMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ContentDecryptionModuleClientProxy::OnSessionClosed(
    const WTF::String& in_session_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionClosed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModuleClient_OnSessionClosed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionClosed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModuleClient::Name_);
  message.set_method_name("OnSessionClosed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ContentDecryptionModuleClientProxy::OnSessionKeysChange(
    const WTF::String& in_session_id, bool in_has_additional_usable_key, WTF::Vector<CdmKeyInformationPtr> in_keys_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionKeysChange");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionKeysChange request");
  params->has_additional_usable_key = in_has_additional_usable_key;
  typename decltype(params->keys_info)::BaseType::BufferWriter
      keys_info_writer;
  const mojo::internal::ContainerValidateParams keys_info_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::CdmKeyInformationDataView>>(
      in_keys_info, buffer, &keys_info_writer, &keys_info_validate_params,
      &serialization_context);
  params->keys_info.Set(
      keys_info_writer.is_null() ? nullptr : keys_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->keys_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null keys_info in ContentDecryptionModuleClient.OnSessionKeysChange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModuleClient::Name_);
  message.set_method_name("OnSessionKeysChange");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ContentDecryptionModuleClientProxy::OnSessionExpirationUpdate(
    const WTF::String& in_session_id, double in_new_expiry_time_sec) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionExpirationUpdate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->session_id)::BaseType::BufferWriter
      session_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_session_id, buffer, &session_id_writer, &serialization_context);
  params->session_id.Set(
      session_id_writer.is_null() ? nullptr : session_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->session_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null session_id in ContentDecryptionModuleClient.OnSessionExpirationUpdate request");
  params->new_expiry_time_sec = in_new_expiry_time_sec;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ContentDecryptionModuleClient::Name_);
  message.set_method_name("OnSessionExpirationUpdate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ContentDecryptionModuleClientStubDispatch::Accept(
    ContentDecryptionModuleClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kContentDecryptionModuleClient_OnSessionMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      CdmMessageType p_message_type{};
      WTF::Vector<uint8_t> p_message{};
      ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!input_data_view.ReadMessageType(&p_message_type))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModuleClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSessionMessage(
std::move(p_session_id), 
std::move(p_message_type), 
std::move(p_message));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionClosed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionClosed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModuleClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSessionClosed(
std::move(p_session_id));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionKeysChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      bool p_has_additional_usable_key{};
      WTF::Vector<CdmKeyInformationPtr> p_keys_info{};
      ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      p_has_additional_usable_key = input_data_view.has_additional_usable_key();
      if (!input_data_view.ReadKeysInfo(&p_keys_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModuleClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSessionKeysChange(
std::move(p_session_id), 
std::move(p_has_additional_usable_key), 
std::move(p_keys_info));
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ContentDecryptionModuleClient::OnSessionExpirationUpdate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* params =
          reinterpret_cast<internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_session_id{};
      double p_new_expiry_time_sec{};
      ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSessionId(&p_session_id))
        success = false;
      p_new_expiry_time_sec = input_data_view.new_expiry_time_sec();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ContentDecryptionModuleClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSessionExpirationUpdate(
std::move(p_session_id), 
std::move(p_new_expiry_time_sec));
      return true;
    }
  }
  return false;
}

// static
bool ContentDecryptionModuleClientStubDispatch::AcceptWithResponder(
    ContentDecryptionModuleClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kContentDecryptionModuleClient_OnSessionMessage_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnSessionClosed_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name: {
      break;
    }
    case internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name: {
      break;
    }
  }
  return false;
}

bool ContentDecryptionModuleClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ContentDecryptionModuleClient RequestValidator");

  switch (message->header()->name) {
    case internal::kContentDecryptionModuleClient_OnSessionMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionClosed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionKeysChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kContentDecryptionModuleClient_OnSessionExpirationUpdate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data>(
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

const char CdmFactory::Name_[] = "media.mojom.CdmFactory";

CdmFactoryProxy::CdmFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CdmFactoryProxy::CreateCdm(
    const WTF::String& in_key_system, ContentDecryptionModuleRequest in_cdm) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CdmFactory::CreateCdm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCdmFactory_CreateCdm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::CdmFactory_CreateCdm_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_system)::BaseType::BufferWriter
      key_system_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_key_system, buffer, &key_system_writer, &serialization_context);
  params->key_system.Set(
      key_system_writer.is_null() ? nullptr : key_system_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_system.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_system in CdmFactory.CreateCdm request");
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModuleRequestDataView>(
      in_cdm, &params->cdm, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cdm),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cdm in CdmFactory.CreateCdm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CdmFactory::Name_);
  message.set_method_name("CreateCdm");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CdmFactoryStubDispatch::Accept(
    CdmFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCdmFactory_CreateCdm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CdmFactory::CreateCdm",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CdmFactory_CreateCdm_Params_Data* params =
          reinterpret_cast<internal::CdmFactory_CreateCdm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_key_system{};
      ContentDecryptionModuleRequest p_cdm{};
      CdmFactory_CreateCdm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeySystem(&p_key_system))
        success = false;
      p_cdm =
          input_data_view.TakeCdm<decltype(p_cdm)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CdmFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateCdm(
std::move(p_key_system), 
std::move(p_cdm));
      return true;
    }
  }
  return false;
}

// static
bool CdmFactoryStubDispatch::AcceptWithResponder(
    CdmFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCdmFactory_CreateCdm_Name: {
      break;
    }
  }
  return false;
}

bool CdmFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CdmFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kCdmFactory_CreateCdm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CdmFactory_CreateCdm_Params_Data>(
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


// static
bool StructTraits<::media::mojom::blink::CdmPromiseResult::DataView, ::media::mojom::blink::CdmPromiseResultPtr>::Read(
    ::media::mojom::blink::CdmPromiseResult::DataView input,
    ::media::mojom::blink::CdmPromiseResultPtr* output) {
  bool success = true;
  ::media::mojom::blink::CdmPromiseResultPtr result(::media::mojom::blink::CdmPromiseResult::New());
  
      result->success = input.success();
      if (!input.ReadException(&result->exception))
        success = false;
      result->system_code = input.system_code();
      if (!input.ReadErrorMessage(&result->error_message))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::CdmKeyInformation::DataView, ::media::mojom::blink::CdmKeyInformationPtr>::Read(
    ::media::mojom::blink::CdmKeyInformation::DataView input,
    ::media::mojom::blink::CdmKeyInformationPtr* output) {
  bool success = true;
  ::media::mojom::blink::CdmKeyInformationPtr result(::media::mojom::blink::CdmKeyInformation::New());
  
      if (!input.ReadKeyId(&result->key_id))
        success = false;
      if (!input.ReadStatus(&result->status))
        success = false;
      result->system_code = input.system_code();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif