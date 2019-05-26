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

#include "media/mojo/interfaces/decryptor.mojom.h"

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

#include "media/mojo/interfaces/decryptor.mojom-params-data.h"
#include "media/mojo/interfaces/decryptor.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/decryptor.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/audio_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/encryption_scheme_struct_traits.h"
#include "media/mojo/interfaces/hdr_metadata_struct_traits.h"
#include "media/mojo/interfaces/video_color_space_struct_traits.h"
#include "media/mojo/interfaces/video_decoder_config_struct_traits.h"
#include "media/mojo/interfaces/video_frame_struct_traits.h"
#include "media/mojo/interfaces/video_transformation_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#endif
namespace media {
namespace mojom {
const char Decryptor::Name_[] = "media.mojom.Decryptor";

class Decryptor_Decrypt_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_Decrypt_ForwardToCallback(
      Decryptor::DecryptCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::DecryptCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_Decrypt_ForwardToCallback);
};

class Decryptor_InitializeAudioDecoder_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_InitializeAudioDecoder_ForwardToCallback(
      Decryptor::InitializeAudioDecoderCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::InitializeAudioDecoderCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeAudioDecoder_ForwardToCallback);
};

class Decryptor_InitializeVideoDecoder_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_InitializeVideoDecoder_ForwardToCallback(
      Decryptor::InitializeVideoDecoderCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::InitializeVideoDecoderCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeVideoDecoder_ForwardToCallback);
};

class Decryptor_DecryptAndDecodeAudio_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_DecryptAndDecodeAudio_ForwardToCallback(
      Decryptor::DecryptAndDecodeAudioCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::DecryptAndDecodeAudioCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeAudio_ForwardToCallback);
};

class Decryptor_DecryptAndDecodeVideo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_DecryptAndDecodeVideo_ForwardToCallback(
      Decryptor::DecryptAndDecodeVideoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::DecryptAndDecodeVideoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeVideo_ForwardToCallback);
};

DecryptorProxy::DecryptorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DecryptorProxy::Initialize(
    mojo::ScopedDataPipeConsumerHandle in_audio_pipe, mojo::ScopedDataPipeConsumerHandle in_video_pipe, mojo::ScopedDataPipeConsumerHandle in_decrypt_pipe, mojo::ScopedDataPipeProducerHandle in_decrypted_pipe) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::Initialize");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_Initialize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_Initialize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_audio_pipe, &params->audio_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->audio_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid audio_pipe in Decryptor.Initialize request");
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_video_pipe, &params->video_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->video_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid video_pipe in Decryptor.Initialize request");
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_decrypt_pipe, &params->decrypt_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->decrypt_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid decrypt_pipe in Decryptor.Initialize request");
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_decrypted_pipe, &params->decrypted_pipe, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->decrypted_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid decrypted_pipe in Decryptor.Initialize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("Initialize");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DecryptorProxy::Decrypt(
    media::Decryptor::StreamType in_stream_type, ::media::mojom::DecoderBufferPtr in_encrypted, DecryptCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::Decrypt");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_Decrypt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_Decrypt_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_StreamType>(
      in_stream_type, &params->stream_type);
  typename decltype(params->encrypted)::BaseType::BufferWriter
      encrypted_writer;
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_encrypted, buffer, &encrypted_writer, &serialization_context);
  params->encrypted.Set(
      encrypted_writer.is_null() ? nullptr : encrypted_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encrypted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encrypted in Decryptor.Decrypt request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("Decrypt");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Decryptor_Decrypt_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DecryptorProxy::CancelDecrypt(
    media::Decryptor::StreamType in_stream_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::CancelDecrypt");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_CancelDecrypt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_CancelDecrypt_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_StreamType>(
      in_stream_type, &params->stream_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("CancelDecrypt");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DecryptorProxy::InitializeAudioDecoder(
    const ::media::AudioDecoderConfig& in_config, InitializeAudioDecoderCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::InitializeAudioDecoder");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_InitializeAudioDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_InitializeAudioDecoder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in Decryptor.InitializeAudioDecoder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("InitializeAudioDecoder");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Decryptor_InitializeAudioDecoder_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DecryptorProxy::InitializeVideoDecoder(
    const media::VideoDecoderConfig& in_config, InitializeVideoDecoderCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::InitializeVideoDecoder");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_InitializeVideoDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_InitializeVideoDecoder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config)::BaseType::BufferWriter
      config_writer;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
      in_config, buffer, &config_writer, &serialization_context);
  params->config.Set(
      config_writer.is_null() ? nullptr : config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in Decryptor.InitializeVideoDecoder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("InitializeVideoDecoder");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Decryptor_InitializeVideoDecoder_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DecryptorProxy::DecryptAndDecodeAudio(
    ::media::mojom::DecoderBufferPtr in_encrypted, DecryptAndDecodeAudioCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeAudio");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_DecryptAndDecodeAudio_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_DecryptAndDecodeAudio_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->encrypted)::BaseType::BufferWriter
      encrypted_writer;
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_encrypted, buffer, &encrypted_writer, &serialization_context);
  params->encrypted.Set(
      encrypted_writer.is_null() ? nullptr : encrypted_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encrypted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encrypted in Decryptor.DecryptAndDecodeAudio request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("DecryptAndDecodeAudio");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Decryptor_DecryptAndDecodeAudio_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DecryptorProxy::DecryptAndDecodeVideo(
    ::media::mojom::DecoderBufferPtr in_encrypted, DecryptAndDecodeVideoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeVideo");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_DecryptAndDecodeVideo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_DecryptAndDecodeVideo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->encrypted)::BaseType::BufferWriter
      encrypted_writer;
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_encrypted, buffer, &encrypted_writer, &serialization_context);
  params->encrypted.Set(
      encrypted_writer.is_null() ? nullptr : encrypted_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encrypted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encrypted in Decryptor.DecryptAndDecodeVideo request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("DecryptAndDecodeVideo");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Decryptor_DecryptAndDecodeVideo_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void DecryptorProxy::ResetDecoder(
    media::Decryptor::StreamType in_stream_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::ResetDecoder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_ResetDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_ResetDecoder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_StreamType>(
      in_stream_type, &params->stream_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("ResetDecoder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void DecryptorProxy::DeinitializeDecoder(
    media::Decryptor::StreamType in_stream_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::DeinitializeDecoder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_DeinitializeDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_DeinitializeDecoder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_StreamType>(
      in_stream_type, &params->stream_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("DeinitializeDecoder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Decryptor_Decrypt_ProxyToResponder {
 public:
  static Decryptor::DecryptCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Decryptor_Decrypt_ProxyToResponder> proxy(
        new Decryptor_Decrypt_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Decryptor_Decrypt_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Decryptor_Decrypt_ProxyToResponder() {
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
  Decryptor_Decrypt_ProxyToResponder(
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
        << "Decryptor::DecryptCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::Decryptor::Status in_status, ::media::mojom::DecoderBufferPtr in_buffer);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_Decrypt_ProxyToResponder);
};

bool Decryptor_Decrypt_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::DecryptCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Decryptor_Decrypt_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Decryptor_Decrypt_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::Decryptor::Status p_status{};
  ::media::mojom::DecoderBufferPtr p_buffer{};
  Decryptor_Decrypt_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Decryptor::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_buffer));
  return true;
}

void Decryptor_Decrypt_ProxyToResponder::Run(
    media::Decryptor::Status in_status, ::media::mojom::DecoderBufferPtr in_buffer) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_Decrypt_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_Decrypt_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_Status>(
      in_status, &params->status);
  typename decltype(params->buffer)::BaseType::BufferWriter
      buffer_writer;
  mojo::internal::Serialize<::media::mojom::DecoderBufferDataView>(
      in_buffer, buffer, &buffer_writer, &serialization_context);
  params->buffer.Set(
      buffer_writer.is_null() ? nullptr : buffer_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::DecryptCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("Decrypt");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Decryptor_InitializeAudioDecoder_ProxyToResponder {
 public:
  static Decryptor::InitializeAudioDecoderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Decryptor_InitializeAudioDecoder_ProxyToResponder> proxy(
        new Decryptor_InitializeAudioDecoder_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Decryptor_InitializeAudioDecoder_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Decryptor_InitializeAudioDecoder_ProxyToResponder() {
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
  Decryptor_InitializeAudioDecoder_ProxyToResponder(
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
        << "Decryptor::InitializeAudioDecoderCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeAudioDecoder_ProxyToResponder);
};

bool Decryptor_InitializeAudioDecoder_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::InitializeAudioDecoderCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Decryptor_InitializeAudioDecoder_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Decryptor::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Decryptor_InitializeAudioDecoder_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_InitializeAudioDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::InitializeAudioDecoderCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("InitializeAudioDecoder");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Decryptor_InitializeVideoDecoder_ProxyToResponder {
 public:
  static Decryptor::InitializeVideoDecoderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Decryptor_InitializeVideoDecoder_ProxyToResponder> proxy(
        new Decryptor_InitializeVideoDecoder_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Decryptor_InitializeVideoDecoder_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Decryptor_InitializeVideoDecoder_ProxyToResponder() {
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
  Decryptor_InitializeVideoDecoder_ProxyToResponder(
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
        << "Decryptor::InitializeVideoDecoderCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeVideoDecoder_ProxyToResponder);
};

bool Decryptor_InitializeVideoDecoder_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::InitializeVideoDecoderCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Decryptor_InitializeVideoDecoder_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Decryptor::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Decryptor_InitializeVideoDecoder_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_InitializeVideoDecoder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::InitializeVideoDecoderCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("InitializeVideoDecoder");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Decryptor_DecryptAndDecodeAudio_ProxyToResponder {
 public:
  static Decryptor::DecryptAndDecodeAudioCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Decryptor_DecryptAndDecodeAudio_ProxyToResponder> proxy(
        new Decryptor_DecryptAndDecodeAudio_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Decryptor_DecryptAndDecodeAudio_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Decryptor_DecryptAndDecodeAudio_ProxyToResponder() {
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
  Decryptor_DecryptAndDecodeAudio_ProxyToResponder(
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
        << "Decryptor::DecryptAndDecodeAudioCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::Decryptor::Status in_status, std::vector<::media::mojom::AudioBufferPtr> in_audio_buffers);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeAudio_ProxyToResponder);
};

bool Decryptor_DecryptAndDecodeAudio_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeAudioCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::Decryptor::Status p_status{};
  std::vector<::media::mojom::AudioBufferPtr> p_audio_buffers{};
  Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadAudioBuffers(&p_audio_buffers))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Decryptor::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_audio_buffers));
  return true;
}

void Decryptor_DecryptAndDecodeAudio_ProxyToResponder::Run(
    media::Decryptor::Status in_status, std::vector<::media::mojom::AudioBufferPtr> in_audio_buffers) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_DecryptAndDecodeAudio_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_Status>(
      in_status, &params->status);
  typename decltype(params->audio_buffers)::BaseType::BufferWriter
      audio_buffers_writer;
  const mojo::internal::ContainerValidateParams audio_buffers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::media::mojom::AudioBufferDataView>>(
      in_audio_buffers, buffer, &audio_buffers_writer, &audio_buffers_validate_params,
      &serialization_context);
  params->audio_buffers.Set(
      audio_buffers_writer.is_null() ? nullptr : audio_buffers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->audio_buffers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null audio_buffers in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeAudioCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("DecryptAndDecodeAudio");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Decryptor_DecryptAndDecodeVideo_ProxyToResponder {
 public:
  static Decryptor::DecryptAndDecodeVideoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Decryptor_DecryptAndDecodeVideo_ProxyToResponder> proxy(
        new Decryptor_DecryptAndDecodeVideo_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Decryptor_DecryptAndDecodeVideo_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Decryptor_DecryptAndDecodeVideo_ProxyToResponder() {
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
  Decryptor_DecryptAndDecodeVideo_ProxyToResponder(
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
        << "Decryptor::DecryptAndDecodeVideoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      media::Decryptor::Status in_status, const scoped_refptr<media::VideoFrame>& in_video_frame, FrameResourceReleaserPtr in_releaser);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeVideo_ProxyToResponder);
};

bool Decryptor_DecryptAndDecodeVideo_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeVideoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  media::Decryptor::Status p_status{};
  scoped_refptr<media::VideoFrame> p_video_frame{};
  FrameResourceReleaserPtr p_releaser{};
  Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadVideoFrame(&p_video_frame))
    success = false;
  p_releaser =
      input_data_view.TakeReleaser<decltype(p_releaser)>();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Decryptor::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_status), 
std::move(p_video_frame), 
std::move(p_releaser));
  return true;
}

void Decryptor_DecryptAndDecodeVideo_ProxyToResponder::Run(
    media::Decryptor::Status in_status, const scoped_refptr<media::VideoFrame>& in_video_frame, FrameResourceReleaserPtr in_releaser) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDecryptor_DecryptAndDecodeVideo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::Decryptor_Status>(
      in_status, &params->status);
  typename decltype(params->video_frame)::BaseType::BufferWriter
      video_frame_writer;
  mojo::internal::Serialize<::media::mojom::VideoFrameDataView>(
      in_video_frame, buffer, &video_frame_writer, &serialization_context);
  params->video_frame.Set(
      video_frame_writer.is_null() ? nullptr : video_frame_writer.data());
  mojo::internal::Serialize<::media::mojom::FrameResourceReleaserPtrDataView>(
      in_releaser, &params->releaser, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeVideoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Decryptor::Name_);
  message.set_method_name("DecryptAndDecodeVideo");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool DecryptorStubDispatch::Accept(
    Decryptor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDecryptor_Initialize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::Initialize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Decryptor_Initialize_Params_Data* params =
          reinterpret_cast<internal::Decryptor_Initialize_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_audio_pipe{};
      mojo::ScopedDataPipeConsumerHandle p_video_pipe{};
      mojo::ScopedDataPipeConsumerHandle p_decrypt_pipe{};
      mojo::ScopedDataPipeProducerHandle p_decrypted_pipe{};
      Decryptor_Initialize_ParamsDataView input_data_view(params, &serialization_context);
      
      p_audio_pipe = input_data_view.TakeAudioPipe();
      p_video_pipe = input_data_view.TakeVideoPipe();
      p_decrypt_pipe = input_data_view.TakeDecryptPipe();
      p_decrypted_pipe = input_data_view.TakeDecryptedPipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(
std::move(p_audio_pipe), 
std::move(p_video_pipe), 
std::move(p_decrypt_pipe), 
std::move(p_decrypted_pipe));
      return true;
    }
    case internal::kDecryptor_Decrypt_Name: {
      break;
    }
    case internal::kDecryptor_CancelDecrypt_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::CancelDecrypt",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Decryptor_CancelDecrypt_Params_Data* params =
          reinterpret_cast<internal::Decryptor_CancelDecrypt_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::Decryptor::StreamType p_stream_type{};
      Decryptor_CancelDecrypt_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelDecrypt(
std::move(p_stream_type));
      return true;
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      break;
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      break;
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      break;
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      break;
    }
    case internal::kDecryptor_ResetDecoder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::ResetDecoder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Decryptor_ResetDecoder_Params_Data* params =
          reinterpret_cast<internal::Decryptor_ResetDecoder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::Decryptor::StreamType p_stream_type{};
      Decryptor_ResetDecoder_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResetDecoder(
std::move(p_stream_type));
      return true;
    }
    case internal::kDecryptor_DeinitializeDecoder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::DeinitializeDecoder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Decryptor_DeinitializeDecoder_Params_Data* params =
          reinterpret_cast<internal::Decryptor_DeinitializeDecoder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::Decryptor::StreamType p_stream_type{};
      Decryptor_DeinitializeDecoder_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeinitializeDecoder(
std::move(p_stream_type));
      return true;
    }
  }
  return false;
}

// static
bool DecryptorStubDispatch::AcceptWithResponder(
    Decryptor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDecryptor_Initialize_Name: {
      break;
    }
    case internal::kDecryptor_Decrypt_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::Decrypt",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Decryptor_Decrypt_Params_Data* params =
          reinterpret_cast<
              internal::Decryptor_Decrypt_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::Decryptor::StreamType p_stream_type{};
      ::media::mojom::DecoderBufferPtr p_encrypted{};
      Decryptor_Decrypt_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!input_data_view.ReadEncrypted(&p_encrypted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 1, false);
        return false;
      }
      Decryptor::DecryptCallback callback =
          Decryptor_Decrypt_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Decrypt(
std::move(p_stream_type), 
std::move(p_encrypted), std::move(callback));
      return true;
    }
    case internal::kDecryptor_CancelDecrypt_Name: {
      break;
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::InitializeAudioDecoder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Decryptor_InitializeAudioDecoder_Params_Data* params =
          reinterpret_cast<
              internal::Decryptor_InitializeAudioDecoder_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::AudioDecoderConfig p_config{};
      Decryptor_InitializeAudioDecoder_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 3, false);
        return false;
      }
      Decryptor::InitializeAudioDecoderCallback callback =
          Decryptor_InitializeAudioDecoder_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InitializeAudioDecoder(
std::move(p_config), std::move(callback));
      return true;
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::InitializeVideoDecoder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Decryptor_InitializeVideoDecoder_Params_Data* params =
          reinterpret_cast<
              internal::Decryptor_InitializeVideoDecoder_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      media::VideoDecoderConfig p_config{};
      Decryptor_InitializeVideoDecoder_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 4, false);
        return false;
      }
      Decryptor::InitializeVideoDecoderCallback callback =
          Decryptor_InitializeVideoDecoder_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InitializeVideoDecoder(
std::move(p_config), std::move(callback));
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeAudio",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Decryptor_DecryptAndDecodeAudio_Params_Data* params =
          reinterpret_cast<
              internal::Decryptor_DecryptAndDecodeAudio_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_encrypted{};
      Decryptor_DecryptAndDecodeAudio_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEncrypted(&p_encrypted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 5, false);
        return false;
      }
      Decryptor::DecryptAndDecodeAudioCallback callback =
          Decryptor_DecryptAndDecodeAudio_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DecryptAndDecodeAudio(
std::move(p_encrypted), std::move(callback));
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Decryptor::DecryptAndDecodeVideo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Decryptor_DecryptAndDecodeVideo_Params_Data* params =
          reinterpret_cast<
              internal::Decryptor_DecryptAndDecodeVideo_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_encrypted{};
      Decryptor_DecryptAndDecodeVideo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEncrypted(&p_encrypted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Decryptor::Name_, 6, false);
        return false;
      }
      Decryptor::DecryptAndDecodeVideoCallback callback =
          Decryptor_DecryptAndDecodeVideo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DecryptAndDecodeVideo(
std::move(p_encrypted), std::move(callback));
      return true;
    }
    case internal::kDecryptor_ResetDecoder_Name: {
      break;
    }
    case internal::kDecryptor_DeinitializeDecoder_Name: {
      break;
    }
  }
  return false;
}

bool DecryptorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Decryptor RequestValidator");

  switch (message->header()->name) {
    case internal::kDecryptor_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_Decrypt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_Decrypt_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_CancelDecrypt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_CancelDecrypt_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeAudioDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeVideoDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeAudio_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeVideo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_ResetDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_ResetDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_DeinitializeDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DeinitializeDecoder_Params_Data>(
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

bool DecryptorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Decryptor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDecryptor_Decrypt_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_Decrypt_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data>(
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
const char FrameResourceReleaser::Name_[] = "media.mojom.FrameResourceReleaser";

FrameResourceReleaserProxy::FrameResourceReleaserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool FrameResourceReleaserStubDispatch::Accept(
    FrameResourceReleaser* impl,
    mojo::Message* message) {
  return false;
}

// static
bool FrameResourceReleaserStubDispatch::AcceptWithResponder(
    FrameResourceReleaser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool FrameResourceReleaserRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameResourceReleaser RequestValidator");

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

}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif