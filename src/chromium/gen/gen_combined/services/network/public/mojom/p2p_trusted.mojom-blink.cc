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

#include "services/network/public/mojom/p2p_trusted.mojom-blink.h"

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

#include "services/network/public/mojom/p2p_trusted.mojom-params-data.h"
#include "services/network/public/mojom/p2p_trusted.mojom-shared-message-ids.h"

#include "services/network/public/mojom/p2p_trusted.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
const char P2PTrustedSocketManagerClient::Name_[] = "network.mojom.P2PTrustedSocketManagerClient";

P2PTrustedSocketManagerClientProxy::P2PTrustedSocketManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PTrustedSocketManagerClientProxy::InvalidSocketPortRangeRequested(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManagerClient::Name_);
  message.set_method_name("InvalidSocketPortRangeRequested");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PTrustedSocketManagerClientProxy::DumpPacket(
    const WTF::Vector<uint8_t>& in_packet_header, uint64_t in_packet_length, bool in_incoming) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManagerClient::DumpPacket");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManagerClient_DumpPacket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->packet_header)::BaseType::BufferWriter
      packet_header_writer;
  const mojo::internal::ContainerValidateParams packet_header_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_packet_header, buffer, &packet_header_writer, &packet_header_validate_params,
      &serialization_context);
  params->packet_header.Set(
      packet_header_writer.is_null() ? nullptr : packet_header_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->packet_header.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_header in P2PTrustedSocketManagerClient.DumpPacket request");
  params->packet_length = in_packet_length;
  params->incoming = in_incoming;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManagerClient::Name_);
  message.set_method_name("DumpPacket");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool P2PTrustedSocketManagerClientStubDispatch::Accept(
    P2PTrustedSocketManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManagerClient::InvalidSocketPortRangeRequested",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManagerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->InvalidSocketPortRangeRequested();
      return true;
    }
    case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManagerClient::DumpPacket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_packet_header{};
      uint64_t p_packet_length{};
      bool p_incoming{};
      P2PTrustedSocketManagerClient_DumpPacket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPacketHeader(&p_packet_header))
        success = false;
      p_packet_length = input_data_view.packet_length();
      p_incoming = input_data_view.incoming();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManagerClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DumpPacket(
std::move(p_packet_header), 
std::move(p_packet_length), 
std::move(p_incoming));
      return true;
    }
  }
  return false;
}

// static
bool P2PTrustedSocketManagerClientStubDispatch::AcceptWithResponder(
    P2PTrustedSocketManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name: {
      break;
    }
    case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name: {
      break;
    }
  }
  return false;
}

bool P2PTrustedSocketManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PTrustedSocketManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PTrustedSocketManagerClient_InvalidSocketPortRangeRequested_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PTrustedSocketManagerClient_DumpPacket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PTrustedSocketManagerClient_DumpPacket_Params_Data>(
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

const char P2PTrustedSocketManager::Name_[] = "network.mojom.P2PTrustedSocketManager";

P2PTrustedSocketManagerProxy::P2PTrustedSocketManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void P2PTrustedSocketManagerProxy::StartRtpDump(
    bool in_incoming, bool in_outgoing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManager::StartRtpDump");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManager_StartRtpDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PTrustedSocketManager_StartRtpDump_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->incoming = in_incoming;
  params->outgoing = in_outgoing;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManager::Name_);
  message.set_method_name("StartRtpDump");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void P2PTrustedSocketManagerProxy::StopRtpDump(
    bool in_incoming, bool in_outgoing) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManager::StopRtpDump");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kP2PTrustedSocketManager_StopRtpDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::P2PTrustedSocketManager_StopRtpDump_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->incoming = in_incoming;
  params->outgoing = in_outgoing;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(P2PTrustedSocketManager::Name_);
  message.set_method_name("StopRtpDump");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool P2PTrustedSocketManagerStubDispatch::Accept(
    P2PTrustedSocketManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManager_StartRtpDump_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManager::StartRtpDump",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManager_StartRtpDump_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManager_StartRtpDump_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_incoming{};
      bool p_outgoing{};
      P2PTrustedSocketManager_StartRtpDump_ParamsDataView input_data_view(params, &serialization_context);
      
      p_incoming = input_data_view.incoming();
      p_outgoing = input_data_view.outgoing();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartRtpDump(
std::move(p_incoming), 
std::move(p_outgoing));
      return true;
    }
    case internal::kP2PTrustedSocketManager_StopRtpDump_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::P2PTrustedSocketManager::StopRtpDump",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::P2PTrustedSocketManager_StopRtpDump_Params_Data* params =
          reinterpret_cast<internal::P2PTrustedSocketManager_StopRtpDump_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_incoming{};
      bool p_outgoing{};
      P2PTrustedSocketManager_StopRtpDump_ParamsDataView input_data_view(params, &serialization_context);
      
      p_incoming = input_data_view.incoming();
      p_outgoing = input_data_view.outgoing();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            P2PTrustedSocketManager::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopRtpDump(
std::move(p_incoming), 
std::move(p_outgoing));
      return true;
    }
  }
  return false;
}

// static
bool P2PTrustedSocketManagerStubDispatch::AcceptWithResponder(
    P2PTrustedSocketManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManager_StartRtpDump_Name: {
      break;
    }
    case internal::kP2PTrustedSocketManager_StopRtpDump_Name: {
      break;
    }
  }
  return false;
}

bool P2PTrustedSocketManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "P2PTrustedSocketManager RequestValidator");

  switch (message->header()->name) {
    case internal::kP2PTrustedSocketManager_StartRtpDump_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PTrustedSocketManager_StartRtpDump_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kP2PTrustedSocketManager_StopRtpDump_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::P2PTrustedSocketManager_StopRtpDump_Params_Data>(
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
}  // namespace network

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif