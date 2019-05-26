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

#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom.h"

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

#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-params-data.h"
#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char FrameHostTestInterface::Name_[] = "blink.mojom.FrameHostTestInterface";

class FrameHostTestInterface_GetName_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FrameHostTestInterface_GetName_ForwardToCallback(
      FrameHostTestInterface::GetNameCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FrameHostTestInterface::GetNameCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FrameHostTestInterface_GetName_ForwardToCallback);
};

FrameHostTestInterfaceProxy::FrameHostTestInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameHostTestInterfaceProxy::Ping(
    const GURL& in_source_url, const std::string& in_source_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FrameHostTestInterface::Ping");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHostTestInterface_Ping_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FrameHostTestInterface_Ping_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_url)::BaseType::BufferWriter
      source_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_source_url, buffer, &source_url_writer, &serialization_context);
  params->source_url.Set(
      source_url_writer.is_null() ? nullptr : source_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_url in FrameHostTestInterface.Ping request");
  typename decltype(params->source_event)::BaseType::BufferWriter
      source_event_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_event, buffer, &source_event_writer, &serialization_context);
  params->source_event.Set(
      source_event_writer.is_null() ? nullptr : source_event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_event in FrameHostTestInterface.Ping request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameHostTestInterface::Name_);
  message.set_method_name("Ping");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FrameHostTestInterfaceProxy::GetName(
    GetNameCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FrameHostTestInterface::GetName");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHostTestInterface_GetName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FrameHostTestInterface_GetName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameHostTestInterface::Name_);
  message.set_method_name("GetName");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameHostTestInterface_GetName_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FrameHostTestInterface_GetName_ProxyToResponder {
 public:
  static FrameHostTestInterface::GetNameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FrameHostTestInterface_GetName_ProxyToResponder> proxy(
        new FrameHostTestInterface_GetName_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FrameHostTestInterface_GetName_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FrameHostTestInterface_GetName_ProxyToResponder() {
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
  FrameHostTestInterface_GetName_ProxyToResponder(
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
        << "FrameHostTestInterface::GetNameCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_name);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FrameHostTestInterface_GetName_ProxyToResponder);
};

bool FrameHostTestInterface_GetName_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FrameHostTestInterface::GetNameCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FrameHostTestInterface_GetName_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FrameHostTestInterface_GetName_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_name{};
  FrameHostTestInterface_GetName_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadName(&p_name))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FrameHostTestInterface::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_name));
  return true;
}

void FrameHostTestInterface_GetName_ProxyToResponder::Run(
    const std::string& in_name) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFrameHostTestInterface_GetName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FrameHostTestInterface_GetName_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FrameHostTestInterface::GetNameCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameHostTestInterface::Name_);
  message.set_method_name("GetName");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FrameHostTestInterfaceStubDispatch::Accept(
    FrameHostTestInterface* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameHostTestInterface_Ping_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FrameHostTestInterface::Ping",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FrameHostTestInterface_Ping_Params_Data* params =
          reinterpret_cast<internal::FrameHostTestInterface_Ping_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_source_url{};
      std::string p_source_event{};
      FrameHostTestInterface_Ping_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceUrl(&p_source_url))
        success = false;
      if (!input_data_view.ReadSourceEvent(&p_source_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FrameHostTestInterface::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Ping(
std::move(p_source_url), 
std::move(p_source_event));
      return true;
    }
    case internal::kFrameHostTestInterface_GetName_Name: {
      break;
    }
  }
  return false;
}

// static
bool FrameHostTestInterfaceStubDispatch::AcceptWithResponder(
    FrameHostTestInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFrameHostTestInterface_Ping_Name: {
      break;
    }
    case internal::kFrameHostTestInterface_GetName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FrameHostTestInterface::GetName",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FrameHostTestInterface_GetName_Params_Data* params =
          reinterpret_cast<
              internal::FrameHostTestInterface_GetName_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FrameHostTestInterface_GetName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FrameHostTestInterface::Name_, 1, false);
        return false;
      }
      FrameHostTestInterface::GetNameCallback callback =
          FrameHostTestInterface_GetName_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetName(std::move(callback));
      return true;
    }
  }
  return false;
}

bool FrameHostTestInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameHostTestInterface RequestValidator");

  switch (message->header()->name) {
    case internal::kFrameHostTestInterface_Ping_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHostTestInterface_Ping_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFrameHostTestInterface_GetName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHostTestInterface_GetName_Params_Data>(
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

bool FrameHostTestInterfaceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FrameHostTestInterface ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFrameHostTestInterface_GetName_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FrameHostTestInterface_GetName_ResponseParams_Data>(
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