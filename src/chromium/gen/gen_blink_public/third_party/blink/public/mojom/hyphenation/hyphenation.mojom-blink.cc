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

#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom-blink.h"

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

#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom-params-data.h"
#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char Hyphenation::Name_[] = "blink.mojom.Hyphenation";
bool Hyphenation::OpenDictionary(const WTF::String& locale, base::File* out_hyphenation_dictionary_handle) {
  NOTREACHED();
  return false;
}
class Hyphenation_OpenDictionary_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  Hyphenation_OpenDictionary_HandleSyncResponse(
      bool* result, base::File* out_hyphenation_dictionary_handle)
      : result_(result), out_hyphenation_dictionary_handle_(out_hyphenation_dictionary_handle) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::File* out_hyphenation_dictionary_handle_;DISALLOW_COPY_AND_ASSIGN(Hyphenation_OpenDictionary_HandleSyncResponse);
};

class Hyphenation_OpenDictionary_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Hyphenation_OpenDictionary_ForwardToCallback(
      Hyphenation::OpenDictionaryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Hyphenation::OpenDictionaryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Hyphenation_OpenDictionary_ForwardToCallback);
};

HyphenationProxy::HyphenationProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool HyphenationProxy::OpenDictionary(
    const WTF::String& param_locale, base::File* out_param_hyphenation_dictionary_handle) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Hyphenation::OpenDictionary");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHyphenation_OpenDictionary_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Hyphenation_OpenDictionary_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->locale)::BaseType::BufferWriter
      locale_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_locale, buffer, &locale_writer, &serialization_context);
  params->locale.Set(
      locale_writer.is_null() ? nullptr : locale_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->locale.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null locale in Hyphenation.OpenDictionary request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Hyphenation::Name_);
  message.set_method_name("OpenDictionary");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Hyphenation_OpenDictionary_HandleSyncResponse(
          &result, out_param_hyphenation_dictionary_handle));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void HyphenationProxy::OpenDictionary(
    const WTF::String& in_locale, OpenDictionaryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Hyphenation::OpenDictionary");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHyphenation_OpenDictionary_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Hyphenation_OpenDictionary_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->locale)::BaseType::BufferWriter
      locale_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_locale, buffer, &locale_writer, &serialization_context);
  params->locale.Set(
      locale_writer.is_null() ? nullptr : locale_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->locale.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null locale in Hyphenation.OpenDictionary request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Hyphenation::Name_);
  message.set_method_name("OpenDictionary");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Hyphenation_OpenDictionary_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Hyphenation_OpenDictionary_ProxyToResponder {
 public:
  static Hyphenation::OpenDictionaryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Hyphenation_OpenDictionary_ProxyToResponder> proxy(
        new Hyphenation_OpenDictionary_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Hyphenation_OpenDictionary_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Hyphenation_OpenDictionary_ProxyToResponder() {
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
  Hyphenation_OpenDictionary_ProxyToResponder(
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
        << "Hyphenation::OpenDictionaryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_hyphenation_dictionary_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Hyphenation_OpenDictionary_ProxyToResponder);
};

bool Hyphenation_OpenDictionary_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Hyphenation::OpenDictionaryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Hyphenation_OpenDictionary_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Hyphenation_OpenDictionary_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_hyphenation_dictionary_handle{};
  Hyphenation_OpenDictionary_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadHyphenationDictionaryHandle(&p_hyphenation_dictionary_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Hyphenation::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_hyphenation_dictionary_handle));
  return true;
}

void Hyphenation_OpenDictionary_ProxyToResponder::Run(
    base::File in_hyphenation_dictionary_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHyphenation_OpenDictionary_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Hyphenation_OpenDictionary_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->hyphenation_dictionary_handle)::BaseType::BufferWriter
      hyphenation_dictionary_handle_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_hyphenation_dictionary_handle, buffer, &hyphenation_dictionary_handle_writer, &serialization_context);
  params->hyphenation_dictionary_handle.Set(
      hyphenation_dictionary_handle_writer.is_null() ? nullptr : hyphenation_dictionary_handle_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Hyphenation::OpenDictionaryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Hyphenation::Name_);
  message.set_method_name("OpenDictionary");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool Hyphenation_OpenDictionary_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::Hyphenation_OpenDictionary_ResponseParams_Data* params =
      reinterpret_cast<internal::Hyphenation_OpenDictionary_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_hyphenation_dictionary_handle{};
  Hyphenation_OpenDictionary_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadHyphenationDictionaryHandle(&p_hyphenation_dictionary_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Hyphenation::Name_, 0, true);
    return false;
  }
  *out_hyphenation_dictionary_handle_ = std::move(p_hyphenation_dictionary_handle);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool HyphenationStubDispatch::Accept(
    Hyphenation* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      break;
    }
  }
  return false;
}

// static
bool HyphenationStubDispatch::AcceptWithResponder(
    Hyphenation* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Hyphenation::OpenDictionary",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Hyphenation_OpenDictionary_Params_Data* params =
          reinterpret_cast<
              internal::Hyphenation_OpenDictionary_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_locale{};
      Hyphenation_OpenDictionary_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocale(&p_locale))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Hyphenation::Name_, 0, false);
        return false;
      }
      Hyphenation::OpenDictionaryCallback callback =
          Hyphenation_OpenDictionary_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenDictionary(
std::move(p_locale), std::move(callback));
      return true;
    }
  }
  return false;
}

bool HyphenationRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Hyphenation RequestValidator");

  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Hyphenation_OpenDictionary_Params_Data>(
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

bool HyphenationResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Hyphenation ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHyphenation_OpenDictionary_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Hyphenation_OpenDictionary_ResponseParams_Data>(
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