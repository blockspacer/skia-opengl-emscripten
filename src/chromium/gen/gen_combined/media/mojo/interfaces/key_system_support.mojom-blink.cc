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

#include "media/mojo/interfaces/key_system_support.mojom-blink.h"

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

#include "media/mojo/interfaces/key_system_support.mojom-params-data.h"
#include "media/mojo/interfaces/key_system_support.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/key_system_support.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_JUMBO_H_
#endif
namespace media {
namespace mojom {
namespace blink {
KeySystemCapability::KeySystemCapability()
    : video_codecs(),
      supports_vp9_profile2(),
      encryption_schemes(),
      hw_secure_video_codecs(),
      hw_secure_encryption_schemes(),
      session_types() {}

KeySystemCapability::KeySystemCapability(
    const WTF::Vector<::media::mojom::blink::VideoCodec>& video_codecs_in,
    bool supports_vp9_profile2_in,
    const WTF::Vector<::media::mojom::blink::EncryptionMode>& encryption_schemes_in,
    const WTF::Vector<::media::mojom::blink::VideoCodec>& hw_secure_video_codecs_in,
    const WTF::Vector<::media::mojom::blink::EncryptionMode>& hw_secure_encryption_schemes_in,
    const WTF::Vector<::media::mojom::blink::CdmSessionType>& session_types_in)
    : video_codecs(std::move(video_codecs_in)),
      supports_vp9_profile2(std::move(supports_vp9_profile2_in)),
      encryption_schemes(std::move(encryption_schemes_in)),
      hw_secure_video_codecs(std::move(hw_secure_video_codecs_in)),
      hw_secure_encryption_schemes(std::move(hw_secure_encryption_schemes_in)),
      session_types(std::move(session_types_in)) {}

KeySystemCapability::~KeySystemCapability() = default;

bool KeySystemCapability::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char KeySystemSupport::Name_[] = "media.mojom.KeySystemSupport";
bool KeySystemSupport::IsKeySystemSupported(const WTF::String& key_system, bool* out_is_supported, KeySystemCapabilityPtr* out_key_system_capability) {
  NOTREACHED();
  return false;
}
class KeySystemSupport_IsKeySystemSupported_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  KeySystemSupport_IsKeySystemSupported_HandleSyncResponse(
      bool* result, bool* out_is_supported, KeySystemCapabilityPtr* out_key_system_capability)
      : result_(result), out_is_supported_(out_is_supported), out_key_system_capability_(out_key_system_capability) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_is_supported_;
  KeySystemCapabilityPtr* out_key_system_capability_;DISALLOW_COPY_AND_ASSIGN(KeySystemSupport_IsKeySystemSupported_HandleSyncResponse);
};

class KeySystemSupport_IsKeySystemSupported_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  KeySystemSupport_IsKeySystemSupported_ForwardToCallback(
      KeySystemSupport::IsKeySystemSupportedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  KeySystemSupport::IsKeySystemSupportedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(KeySystemSupport_IsKeySystemSupported_ForwardToCallback);
};

KeySystemSupportProxy::KeySystemSupportProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool KeySystemSupportProxy::IsKeySystemSupported(
    const WTF::String& param_key_system, bool* out_param_is_supported, KeySystemCapabilityPtr* out_param_key_system_capability) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::KeySystemSupport::IsKeySystemSupported");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeySystemSupport_IsKeySystemSupported_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::KeySystemSupport_IsKeySystemSupported_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_system)::BaseType::BufferWriter
      key_system_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_key_system, buffer, &key_system_writer, &serialization_context);
  params->key_system.Set(
      key_system_writer.is_null() ? nullptr : key_system_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_system.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_system in KeySystemSupport.IsKeySystemSupported request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeySystemSupport::Name_);
  message.set_method_name("IsKeySystemSupported");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new KeySystemSupport_IsKeySystemSupported_HandleSyncResponse(
          &result, out_param_is_supported, out_param_key_system_capability));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void KeySystemSupportProxy::IsKeySystemSupported(
    const WTF::String& in_key_system, IsKeySystemSupportedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::KeySystemSupport::IsKeySystemSupported");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeySystemSupport_IsKeySystemSupported_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::KeySystemSupport_IsKeySystemSupported_Params_Data::BufferWriter
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
      "null key_system in KeySystemSupport.IsKeySystemSupported request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeySystemSupport::Name_);
  message.set_method_name("IsKeySystemSupported");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new KeySystemSupport_IsKeySystemSupported_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class KeySystemSupport_IsKeySystemSupported_ProxyToResponder {
 public:
  static KeySystemSupport::IsKeySystemSupportedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<KeySystemSupport_IsKeySystemSupported_ProxyToResponder> proxy(
        new KeySystemSupport_IsKeySystemSupported_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&KeySystemSupport_IsKeySystemSupported_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~KeySystemSupport_IsKeySystemSupported_ProxyToResponder() {
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
  KeySystemSupport_IsKeySystemSupported_ProxyToResponder(
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
        << "KeySystemSupport::IsKeySystemSupportedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_is_supported, KeySystemCapabilityPtr in_key_system_capability);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(KeySystemSupport_IsKeySystemSupported_ProxyToResponder);
};

bool KeySystemSupport_IsKeySystemSupported_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::KeySystemSupport::IsKeySystemSupportedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* params =
      reinterpret_cast<
          internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_supported{};
  KeySystemCapabilityPtr p_key_system_capability{};
  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_supported = input_data_view.is_supported();
  if (!input_data_view.ReadKeySystemCapability(&p_key_system_capability))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        KeySystemSupport::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_is_supported), 
std::move(p_key_system_capability));
  return true;
}

void KeySystemSupport_IsKeySystemSupported_ProxyToResponder::Run(
    bool in_is_supported, KeySystemCapabilityPtr in_key_system_capability) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kKeySystemSupport_IsKeySystemSupported_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_supported = in_is_supported;
  typename decltype(params->key_system_capability)::BaseType::BufferWriter
      key_system_capability_writer;
  mojo::internal::Serialize<::media::mojom::KeySystemCapabilityDataView>(
      in_key_system_capability, buffer, &key_system_capability_writer, &serialization_context);
  params->key_system_capability.Set(
      key_system_capability_writer.is_null() ? nullptr : key_system_capability_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::KeySystemSupport::IsKeySystemSupportedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(KeySystemSupport::Name_);
  message.set_method_name("IsKeySystemSupported");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool KeySystemSupport_IsKeySystemSupported_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* params =
      reinterpret_cast<internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_supported{};
  KeySystemCapabilityPtr p_key_system_capability{};
  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_supported = input_data_view.is_supported();
  if (!input_data_view.ReadKeySystemCapability(&p_key_system_capability))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        KeySystemSupport::Name_, 0, true);
    return false;
  }
  *out_is_supported_ = std::move(p_is_supported);
  *out_key_system_capability_ = std::move(p_key_system_capability);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool KeySystemSupportStubDispatch::Accept(
    KeySystemSupport* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
      break;
    }
  }
  return false;
}

// static
bool KeySystemSupportStubDispatch::AcceptWithResponder(
    KeySystemSupport* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::KeySystemSupport::IsKeySystemSupported",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::KeySystemSupport_IsKeySystemSupported_Params_Data* params =
          reinterpret_cast<
              internal::KeySystemSupport_IsKeySystemSupported_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_key_system{};
      KeySystemSupport_IsKeySystemSupported_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeySystem(&p_key_system))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            KeySystemSupport::Name_, 0, false);
        return false;
      }
      KeySystemSupport::IsKeySystemSupportedCallback callback =
          KeySystemSupport_IsKeySystemSupported_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsKeySystemSupported(
std::move(p_key_system), std::move(callback));
      return true;
    }
  }
  return false;
}

bool KeySystemSupportRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeySystemSupport RequestValidator");

  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeySystemSupport_IsKeySystemSupported_Params_Data>(
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

bool KeySystemSupportResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "KeySystemSupport ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kKeySystemSupport_IsKeySystemSupported_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data>(
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
bool StructTraits<::media::mojom::blink::KeySystemCapability::DataView, ::media::mojom::blink::KeySystemCapabilityPtr>::Read(
    ::media::mojom::blink::KeySystemCapability::DataView input,
    ::media::mojom::blink::KeySystemCapabilityPtr* output) {
  bool success = true;
  ::media::mojom::blink::KeySystemCapabilityPtr result(::media::mojom::blink::KeySystemCapability::New());
  
      if (!input.ReadVideoCodecs(&result->video_codecs))
        success = false;
      result->supports_vp9_profile2 = input.supports_vp9_profile2();
      if (!input.ReadEncryptionSchemes(&result->encryption_schemes))
        success = false;
      if (!input.ReadHwSecureVideoCodecs(&result->hw_secure_video_codecs))
        success = false;
      if (!input.ReadHwSecureEncryptionSchemes(&result->hw_secure_encryption_schemes))
        success = false;
      if (!input.ReadSessionTypes(&result->session_types))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif