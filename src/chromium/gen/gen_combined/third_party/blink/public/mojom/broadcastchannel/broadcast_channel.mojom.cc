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

#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom.h"

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

#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom-params-data.h"
#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/broadcastchannel/broadcast_channel.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROADCASTCHANNEL_BROADCAST_CHANNEL_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/public/common/messaging/cloneable_message_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char BroadcastChannelClient::Name_[] = "blink.mojom.BroadcastChannelClient";

BroadcastChannelClientProxy::BroadcastChannelClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BroadcastChannelClientProxy::OnMessage(
    ::blink::CloneableMessage in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BroadcastChannelClient::OnMessage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBroadcastChannelClient_OnMessage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BroadcastChannelClient_OnMessage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<::blink::mojom::CloneableMessageDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in BroadcastChannelClient.OnMessage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BroadcastChannelClient::Name_);
  message.set_method_name("OnMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool BroadcastChannelClientStubDispatch::Accept(
    BroadcastChannelClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBroadcastChannelClient_OnMessage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BroadcastChannelClient::OnMessage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BroadcastChannelClient_OnMessage_Params_Data* params =
          reinterpret_cast<internal::BroadcastChannelClient_OnMessage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::blink::CloneableMessage p_message{};
      BroadcastChannelClient_OnMessage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BroadcastChannelClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnMessage(
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool BroadcastChannelClientStubDispatch::AcceptWithResponder(
    BroadcastChannelClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBroadcastChannelClient_OnMessage_Name: {
      break;
    }
  }
  return false;
}

bool BroadcastChannelClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BroadcastChannelClient RequestValidator");

  switch (message->header()->name) {
    case internal::kBroadcastChannelClient_OnMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BroadcastChannelClient_OnMessage_Params_Data>(
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

const char BroadcastChannelProvider::Name_[] = "blink.mojom.BroadcastChannelProvider";

BroadcastChannelProviderProxy::BroadcastChannelProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BroadcastChannelProviderProxy::ConnectToChannel(
    const url::Origin& in_origin, const std::string& in_name, BroadcastChannelClientAssociatedPtrInfo in_receiver, BroadcastChannelClientAssociatedRequest in_sender) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::BroadcastChannelProvider::ConnectToChannel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kBroadcastChannelProvider_ConnectToChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::BroadcastChannelProvider_ConnectToChannel_Params_Data::BufferWriter
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
      "null origin in BroadcastChannelProvider.ConnectToChannel request");
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in BroadcastChannelProvider.ConnectToChannel request");
  mojo::internal::Serialize<::blink::mojom::BroadcastChannelClientAssociatedPtrInfoDataView>(
      in_receiver, &params->receiver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid receiver in BroadcastChannelProvider.ConnectToChannel request");
  mojo::internal::Serialize<::blink::mojom::BroadcastChannelClientAssociatedRequestDataView>(
      in_sender, &params->sender, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->sender),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid sender in BroadcastChannelProvider.ConnectToChannel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BroadcastChannelProvider::Name_);
  message.set_method_name("ConnectToChannel");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool BroadcastChannelProviderStubDispatch::Accept(
    BroadcastChannelProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBroadcastChannelProvider_ConnectToChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::BroadcastChannelProvider::ConnectToChannel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::BroadcastChannelProvider_ConnectToChannel_Params_Data* params =
          reinterpret_cast<internal::BroadcastChannelProvider_ConnectToChannel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_origin{};
      std::string p_name{};
      BroadcastChannelClientAssociatedPtrInfo p_receiver{};
      BroadcastChannelClientAssociatedRequest p_sender{};
      BroadcastChannelProvider_ConnectToChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      p_sender =
          input_data_view.TakeSender<decltype(p_sender)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BroadcastChannelProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConnectToChannel(
std::move(p_origin), 
std::move(p_name), 
std::move(p_receiver), 
std::move(p_sender));
      return true;
    }
  }
  return false;
}

// static
bool BroadcastChannelProviderStubDispatch::AcceptWithResponder(
    BroadcastChannelProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kBroadcastChannelProvider_ConnectToChannel_Name: {
      break;
    }
  }
  return false;
}

bool BroadcastChannelProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "BroadcastChannelProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kBroadcastChannelProvider_ConnectToChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BroadcastChannelProvider_ConnectToChannel_Params_Data>(
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