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

#include "third_party/blink/public/mojom/portal/portal.mojom.h"

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

#include "third_party/blink/public/mojom/portal/portal.mojom-params-data.h"
#include "third_party/blink/public/mojom/portal/portal.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/portal/portal.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char Portal::Name_[] = "blink.mojom.Portal";

class Portal_Activate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Portal_Activate_ForwardToCallback(
      Portal::ActivateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Portal::ActivateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Portal_Activate_ForwardToCallback);
};

PortalProxy::PortalProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PortalProxy::Navigate(
    const GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Portal::Navigate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortal_Navigate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Portal_Navigate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in Portal.Navigate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Portal::Name_);
  message.set_method_name("Navigate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PortalProxy::Activate(
    ::blink::TransferableMessage in_data, ActivateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Portal::Activate");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortal_Activate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Portal_Activate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Portal.Activate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Portal::Name_);
  message.set_method_name("Activate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Portal_Activate_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PortalProxy::PostMessageToGuest(
    ::blink::TransferableMessage in_message, const base::Optional<url::Origin>& in_target_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Portal::PostMessageToGuest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortal_PostMessageToGuest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Portal_PostMessageToGuest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in Portal.PostMessageToGuest request");
  typename decltype(params->target_origin)::BaseType::BufferWriter
      target_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_target_origin, buffer, &target_origin_writer, &serialization_context);
  params->target_origin.Set(
      target_origin_writer.is_null() ? nullptr : target_origin_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Portal::Name_);
  message.set_method_name("PostMessageToGuest");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Portal_Activate_ProxyToResponder {
 public:
  static Portal::ActivateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Portal_Activate_ProxyToResponder> proxy(
        new Portal_Activate_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Portal_Activate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Portal_Activate_ProxyToResponder() {
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
  Portal_Activate_ProxyToResponder(
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
        << "Portal::ActivateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_was_adopted);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Portal_Activate_ProxyToResponder);
};

bool Portal_Activate_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Portal::ActivateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Portal_Activate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Portal_Activate_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_was_adopted{};
  Portal_Activate_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_was_adopted = input_data_view.was_adopted();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Portal::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_was_adopted));
  return true;
}

void Portal_Activate_ProxyToResponder::Run(
    bool in_was_adopted) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortal_Activate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::Portal_Activate_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->was_adopted = in_was_adopted;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Portal::ActivateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Portal::Name_);
  message.set_method_name("Activate");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PortalStubDispatch::Accept(
    Portal* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPortal_Navigate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Portal::Navigate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Portal_Navigate_Params_Data* params =
          reinterpret_cast<internal::Portal_Navigate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      Portal_Navigate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Portal::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Navigate(
std::move(p_url));
      return true;
    }
    case internal::kPortal_Activate_Name: {
      break;
    }
    case internal::kPortal_PostMessageToGuest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Portal::PostMessageToGuest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Portal_PostMessageToGuest_Params_Data* params =
          reinterpret_cast<internal::Portal_PostMessageToGuest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::TransferableMessage p_message{};
      base::Optional<url::Origin> p_target_origin{};
      Portal_PostMessageToGuest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadTargetOrigin(&p_target_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Portal::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PostMessageToGuest(
std::move(p_message), 
std::move(p_target_origin));
      return true;
    }
  }
  return false;
}

// static
bool PortalStubDispatch::AcceptWithResponder(
    Portal* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPortal_Navigate_Name: {
      break;
    }
    case internal::kPortal_Activate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Portal::Activate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Portal_Activate_Params_Data* params =
          reinterpret_cast<
              internal::Portal_Activate_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::TransferableMessage p_data{};
      Portal_Activate_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Portal::Name_, 1, false);
        return false;
      }
      Portal::ActivateCallback callback =
          Portal_Activate_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Activate(
std::move(p_data), std::move(callback));
      return true;
    }
    case internal::kPortal_PostMessageToGuest_Name: {
      break;
    }
  }
  return false;
}

bool PortalRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Portal RequestValidator");

  switch (message->header()->name) {
    case internal::kPortal_Navigate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Portal_Navigate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPortal_Activate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Portal_Activate_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPortal_PostMessageToGuest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Portal_PostMessageToGuest_Params_Data>(
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

bool PortalResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Portal ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPortal_Activate_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Portal_Activate_ResponseParams_Data>(
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
const char PortalClient::Name_[] = "blink.mojom.PortalClient";

PortalClientProxy::PortalClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PortalClientProxy::ForwardMessageFromGuest(
    ::blink::TransferableMessage in_message, const url::Origin& in_source_origin, const base::Optional<url::Origin>& in_target_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PortalClient::ForwardMessageFromGuest");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortalClient_ForwardMessageFromGuest_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PortalClient_ForwardMessageFromGuest_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in PortalClient.ForwardMessageFromGuest request");
  typename decltype(params->source_origin)::BaseType::BufferWriter
      source_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_source_origin, buffer, &source_origin_writer, &serialization_context);
  params->source_origin.Set(
      source_origin_writer.is_null() ? nullptr : source_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_origin in PortalClient.ForwardMessageFromGuest request");
  typename decltype(params->target_origin)::BaseType::BufferWriter
      target_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_target_origin, buffer, &target_origin_writer, &serialization_context);
  params->target_origin.Set(
      target_origin_writer.is_null() ? nullptr : target_origin_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PortalClient::Name_);
  message.set_method_name("ForwardMessageFromGuest");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PortalClientProxy::DispatchLoadEvent(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PortalClient::DispatchLoadEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortalClient_DispatchLoadEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PortalClient_DispatchLoadEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PortalClient::Name_);
  message.set_method_name("DispatchLoadEvent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PortalClientStubDispatch::Accept(
    PortalClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPortalClient_ForwardMessageFromGuest_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PortalClient::ForwardMessageFromGuest",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PortalClient_ForwardMessageFromGuest_Params_Data* params =
          reinterpret_cast<internal::PortalClient_ForwardMessageFromGuest_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::TransferableMessage p_message{};
      url::Origin p_source_origin{};
      base::Optional<url::Origin> p_target_origin{};
      PortalClient_ForwardMessageFromGuest_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadSourceOrigin(&p_source_origin))
        success = false;
      if (!input_data_view.ReadTargetOrigin(&p_target_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PortalClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ForwardMessageFromGuest(
std::move(p_message), 
std::move(p_source_origin), 
std::move(p_target_origin));
      return true;
    }
    case internal::kPortalClient_DispatchLoadEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PortalClient::DispatchLoadEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PortalClient_DispatchLoadEvent_Params_Data* params =
          reinterpret_cast<internal::PortalClient_DispatchLoadEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PortalClient_DispatchLoadEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PortalClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DispatchLoadEvent();
      return true;
    }
  }
  return false;
}

// static
bool PortalClientStubDispatch::AcceptWithResponder(
    PortalClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPortalClient_ForwardMessageFromGuest_Name: {
      break;
    }
    case internal::kPortalClient_DispatchLoadEvent_Name: {
      break;
    }
  }
  return false;
}

bool PortalClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PortalClient RequestValidator");

  switch (message->header()->name) {
    case internal::kPortalClient_ForwardMessageFromGuest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PortalClient_ForwardMessageFromGuest_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPortalClient_DispatchLoadEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PortalClient_DispatchLoadEvent_Params_Data>(
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

const char PortalHost::Name_[] = "blink.mojom.PortalHost";

PortalHostProxy::PortalHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PortalHostProxy::PostMessageToHost(
    ::blink::TransferableMessage in_message, const base::Optional<url::Origin>& in_target_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PortalHost::PostMessageToHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPortalHost_PostMessageToHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PortalHost_PostMessageToHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in PortalHost.PostMessageToHost request");
  typename decltype(params->target_origin)::BaseType::BufferWriter
      target_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_target_origin, buffer, &target_origin_writer, &serialization_context);
  params->target_origin.Set(
      target_origin_writer.is_null() ? nullptr : target_origin_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PortalHost::Name_);
  message.set_method_name("PostMessageToHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PortalHostStubDispatch::Accept(
    PortalHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPortalHost_PostMessageToHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PortalHost::PostMessageToHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PortalHost_PostMessageToHost_Params_Data* params =
          reinterpret_cast<internal::PortalHost_PostMessageToHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::TransferableMessage p_message{};
      base::Optional<url::Origin> p_target_origin{};
      PortalHost_PostMessageToHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadTargetOrigin(&p_target_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PortalHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PostMessageToHost(
std::move(p_message), 
std::move(p_target_origin));
      return true;
    }
  }
  return false;
}

// static
bool PortalHostStubDispatch::AcceptWithResponder(
    PortalHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPortalHost_PostMessageToHost_Name: {
      break;
    }
  }
  return false;
}

bool PortalHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PortalHost RequestValidator");

  switch (message->header()->name) {
    case internal::kPortalHost_PostMessageToHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PortalHost_PostMessageToHost_Params_Data>(
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