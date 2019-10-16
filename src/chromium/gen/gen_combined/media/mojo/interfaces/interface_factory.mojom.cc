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

#include "media/mojo/interfaces/interface_factory.mojom.h"

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

#include "media/mojo/interfaces/interface_factory.mojom-params-data.h"
#include "media/mojo/interfaces/interface_factory.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/interface_factory.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_INTERFACE_FACTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/token_mojom_traits.h"
#endif
namespace media {
namespace mojom {
const char InterfaceFactory::Name_[] = "media.mojom.InterfaceFactory";

InterfaceFactoryProxy::InterfaceFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void InterfaceFactoryProxy::CreateAudioDecoder(
    ::media::mojom::AudioDecoderRequest in_audio_decoder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateAudioDecoder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceFactory_CreateAudioDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::InterfaceFactory_CreateAudioDecoder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::AudioDecoderRequestDataView>(
      in_audio_decoder, &params->audio_decoder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->audio_decoder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid audio_decoder in InterfaceFactory.CreateAudioDecoder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InterfaceFactory::Name_);
  message.set_method_name("CreateAudioDecoder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterfaceFactoryProxy::CreateVideoDecoder(
    ::media::mojom::VideoDecoderRequest in_video_decoder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateVideoDecoder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceFactory_CreateVideoDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::InterfaceFactory_CreateVideoDecoder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoDecoderRequestDataView>(
      in_video_decoder, &params->video_decoder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_decoder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_decoder in InterfaceFactory.CreateVideoDecoder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InterfaceFactory::Name_);
  message.set_method_name("CreateVideoDecoder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterfaceFactoryProxy::CreateDefaultRenderer(
    const std::string& in_audio_device_id, ::media::mojom::RendererRequest in_renderer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateDefaultRenderer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceFactory_CreateDefaultRenderer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::InterfaceFactory_CreateDefaultRenderer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->audio_device_id)::BaseType::BufferWriter
      audio_device_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_audio_device_id, buffer, &audio_device_id_writer, &serialization_context);
  params->audio_device_id.Set(
      audio_device_id_writer.is_null() ? nullptr : audio_device_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_device_id in InterfaceFactory.CreateDefaultRenderer request");
  mojo::internal::Serialize<::media::mojom::RendererRequestDataView>(
      in_renderer, &params->renderer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->renderer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid renderer in InterfaceFactory.CreateDefaultRenderer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InterfaceFactory::Name_);
  message.set_method_name("CreateDefaultRenderer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterfaceFactoryProxy::CreateCdm(
    const std::string& in_key_system, ::media::mojom::ContentDecryptionModuleRequest in_cdm) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateCdm");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceFactory_CreateCdm_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::InterfaceFactory_CreateCdm_Params_Data::BufferWriter
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
      "null key_system in InterfaceFactory.CreateCdm request");
  mojo::internal::Serialize<::media::mojom::ContentDecryptionModuleRequestDataView>(
      in_cdm, &params->cdm, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cdm),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cdm in InterfaceFactory.CreateCdm request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InterfaceFactory::Name_);
  message.set_method_name("CreateCdm");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterfaceFactoryProxy::CreateDecryptor(
    int32_t in_cdm_id, ::media::mojom::DecryptorRequest in_decryptor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateDecryptor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceFactory_CreateDecryptor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::InterfaceFactory_CreateDecryptor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->cdm_id = in_cdm_id;
  mojo::internal::Serialize<::media::mojom::DecryptorRequestDataView>(
      in_decryptor, &params->decryptor, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->decryptor),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid decryptor in InterfaceFactory.CreateDecryptor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InterfaceFactory::Name_);
  message.set_method_name("CreateDecryptor");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void InterfaceFactoryProxy::CreateCdmProxy(
    const base::BaseToken& in_cdm_guid, ::media::mojom::CdmProxyRequest in_cdm_proxy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateCdmProxy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kInterfaceFactory_CreateCdmProxy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::InterfaceFactory_CreateCdmProxy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cdm_guid)::BaseType::BufferWriter
      cdm_guid_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
      in_cdm_guid, buffer, &cdm_guid_writer, &serialization_context);
  params->cdm_guid.Set(
      cdm_guid_writer.is_null() ? nullptr : cdm_guid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cdm_guid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cdm_guid in InterfaceFactory.CreateCdmProxy request");
  mojo::internal::Serialize<::media::mojom::CdmProxyRequestDataView>(
      in_cdm_proxy, &params->cdm_proxy, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cdm_proxy),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cdm_proxy in InterfaceFactory.CreateCdmProxy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(InterfaceFactory::Name_);
  message.set_method_name("CreateCdmProxy");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool InterfaceFactoryStubDispatch::Accept(
    InterfaceFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kInterfaceFactory_CreateAudioDecoder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateAudioDecoder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceFactory_CreateAudioDecoder_Params_Data* params =
          reinterpret_cast<internal::InterfaceFactory_CreateAudioDecoder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::AudioDecoderRequest p_audio_decoder{};
      InterfaceFactory_CreateAudioDecoder_ParamsDataView input_data_view(params, &serialization_context);
      
      p_audio_decoder =
          input_data_view.TakeAudioDecoder<decltype(p_audio_decoder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InterfaceFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateAudioDecoder(
std::move(p_audio_decoder));
      return true;
    }
    case internal::kInterfaceFactory_CreateVideoDecoder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateVideoDecoder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceFactory_CreateVideoDecoder_Params_Data* params =
          reinterpret_cast<internal::InterfaceFactory_CreateVideoDecoder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::VideoDecoderRequest p_video_decoder{};
      InterfaceFactory_CreateVideoDecoder_ParamsDataView input_data_view(params, &serialization_context);
      
      p_video_decoder =
          input_data_view.TakeVideoDecoder<decltype(p_video_decoder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InterfaceFactory::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateVideoDecoder(
std::move(p_video_decoder));
      return true;
    }
    case internal::kInterfaceFactory_CreateDefaultRenderer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateDefaultRenderer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceFactory_CreateDefaultRenderer_Params_Data* params =
          reinterpret_cast<internal::InterfaceFactory_CreateDefaultRenderer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_audio_device_id{};
      ::media::mojom::RendererRequest p_renderer{};
      InterfaceFactory_CreateDefaultRenderer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAudioDeviceId(&p_audio_device_id))
        success = false;
      p_renderer =
          input_data_view.TakeRenderer<decltype(p_renderer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InterfaceFactory::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateDefaultRenderer(
std::move(p_audio_device_id), 
std::move(p_renderer));
      return true;
    }
    case internal::kInterfaceFactory_CreateCdm_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateCdm",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceFactory_CreateCdm_Params_Data* params =
          reinterpret_cast<internal::InterfaceFactory_CreateCdm_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_key_system{};
      ::media::mojom::ContentDecryptionModuleRequest p_cdm{};
      InterfaceFactory_CreateCdm_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeySystem(&p_key_system))
        success = false;
      p_cdm =
          input_data_view.TakeCdm<decltype(p_cdm)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InterfaceFactory::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateCdm(
std::move(p_key_system), 
std::move(p_cdm));
      return true;
    }
    case internal::kInterfaceFactory_CreateDecryptor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateDecryptor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceFactory_CreateDecryptor_Params_Data* params =
          reinterpret_cast<internal::InterfaceFactory_CreateDecryptor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_cdm_id{};
      ::media::mojom::DecryptorRequest p_decryptor{};
      InterfaceFactory_CreateDecryptor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cdm_id = input_data_view.cdm_id();
      p_decryptor =
          input_data_view.TakeDecryptor<decltype(p_decryptor)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InterfaceFactory::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateDecryptor(
std::move(p_cdm_id), 
std::move(p_decryptor));
      return true;
    }
    case internal::kInterfaceFactory_CreateCdmProxy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::InterfaceFactory::CreateCdmProxy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::InterfaceFactory_CreateCdmProxy_Params_Data* params =
          reinterpret_cast<internal::InterfaceFactory_CreateCdmProxy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::BaseToken p_cdm_guid{};
      ::media::mojom::CdmProxyRequest p_cdm_proxy{};
      InterfaceFactory_CreateCdmProxy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCdmGuid(&p_cdm_guid))
        success = false;
      p_cdm_proxy =
          input_data_view.TakeCdmProxy<decltype(p_cdm_proxy)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            InterfaceFactory::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateCdmProxy(
std::move(p_cdm_guid), 
std::move(p_cdm_proxy));
      return true;
    }
  }
  return false;
}

// static
bool InterfaceFactoryStubDispatch::AcceptWithResponder(
    InterfaceFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kInterfaceFactory_CreateAudioDecoder_Name: {
      break;
    }
    case internal::kInterfaceFactory_CreateVideoDecoder_Name: {
      break;
    }
    case internal::kInterfaceFactory_CreateDefaultRenderer_Name: {
      break;
    }
    case internal::kInterfaceFactory_CreateCdm_Name: {
      break;
    }
    case internal::kInterfaceFactory_CreateDecryptor_Name: {
      break;
    }
    case internal::kInterfaceFactory_CreateCdmProxy_Name: {
      break;
    }
  }
  return false;
}

bool InterfaceFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterfaceFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kInterfaceFactory_CreateAudioDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceFactory_CreateAudioDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterfaceFactory_CreateVideoDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceFactory_CreateVideoDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterfaceFactory_CreateDefaultRenderer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceFactory_CreateDefaultRenderer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterfaceFactory_CreateCdm_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceFactory_CreateCdm_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterfaceFactory_CreateDecryptor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceFactory_CreateDecryptor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kInterfaceFactory_CreateCdmProxy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceFactory_CreateCdmProxy_Params_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif
