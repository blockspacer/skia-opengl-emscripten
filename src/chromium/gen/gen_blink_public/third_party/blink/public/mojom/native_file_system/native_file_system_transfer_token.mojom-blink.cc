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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-blink.h"

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

#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-params-data.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char NativeFileSystemTransferToken::Name_[] = "blink.mojom.NativeFileSystemTransferToken";

class NativeFileSystemTransferToken_GetInternalID_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NativeFileSystemTransferToken_GetInternalID_ForwardToCallback(
      NativeFileSystemTransferToken::GetInternalIDCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NativeFileSystemTransferToken::GetInternalIDCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemTransferToken_GetInternalID_ForwardToCallback);
};

NativeFileSystemTransferTokenProxy::NativeFileSystemTransferTokenProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NativeFileSystemTransferTokenProxy::GetInternalID(
    GetInternalIDCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemTransferToken::GetInternalID");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemTransferToken_GetInternalID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemTransferToken_GetInternalID_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemTransferToken::Name_);
  message.set_method_name("GetInternalID");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NativeFileSystemTransferToken_GetInternalID_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NativeFileSystemTransferToken_GetInternalID_ProxyToResponder {
 public:
  static NativeFileSystemTransferToken::GetInternalIDCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NativeFileSystemTransferToken_GetInternalID_ProxyToResponder> proxy(
        new NativeFileSystemTransferToken_GetInternalID_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NativeFileSystemTransferToken_GetInternalID_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NativeFileSystemTransferToken_GetInternalID_ProxyToResponder() {
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
  NativeFileSystemTransferToken_GetInternalID_ProxyToResponder(
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
        << "NativeFileSystemTransferToken::GetInternalIDCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemTransferToken_GetInternalID_ProxyToResponder);
};

bool NativeFileSystemTransferToken_GetInternalID_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NativeFileSystemTransferToken::GetInternalIDCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_id{};
  NativeFileSystemTransferToken_GetInternalID_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadId(&p_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NativeFileSystemTransferToken::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_id));
  return true;
}

void NativeFileSystemTransferToken_GetInternalID_ProxyToResponder::Run(
    const base::UnguessableToken& in_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNativeFileSystemTransferToken_GetInternalID_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemTransferToken::GetInternalIDCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NativeFileSystemTransferToken::Name_);
  message.set_method_name("GetInternalID");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NativeFileSystemTransferTokenStubDispatch::Accept(
    NativeFileSystemTransferToken* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemTransferToken_GetInternalID_Name: {
      break;
    }
  }
  return false;
}

// static
bool NativeFileSystemTransferTokenStubDispatch::AcceptWithResponder(
    NativeFileSystemTransferToken* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNativeFileSystemTransferToken_GetInternalID_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NativeFileSystemTransferToken::GetInternalID",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NativeFileSystemTransferToken_GetInternalID_Params_Data* params =
          reinterpret_cast<
              internal::NativeFileSystemTransferToken_GetInternalID_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NativeFileSystemTransferToken_GetInternalID_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NativeFileSystemTransferToken::Name_, 0, false);
        return false;
      }
      NativeFileSystemTransferToken::GetInternalIDCallback callback =
          NativeFileSystemTransferToken_GetInternalID_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetInternalID(std::move(callback));
      return true;
    }
  }
  return false;
}

bool NativeFileSystemTransferTokenRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemTransferToken RequestValidator");

  switch (message->header()->name) {
    case internal::kNativeFileSystemTransferToken_GetInternalID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemTransferToken_GetInternalID_Params_Data>(
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

bool NativeFileSystemTransferTokenResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NativeFileSystemTransferToken ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNativeFileSystemTransferToken_GetInternalID_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data>(
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