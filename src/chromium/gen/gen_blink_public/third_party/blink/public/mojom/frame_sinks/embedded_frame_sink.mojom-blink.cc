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

#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-blink.h"

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

#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-params-data.h"
#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_info_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char SurfaceEmbedder::Name_[] = "blink.mojom.SurfaceEmbedder";

SurfaceEmbedderProxy::SurfaceEmbedderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SurfaceEmbedderProxy::SetLocalSurfaceId(
    const viz::LocalSurfaceId& in_local_surface_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SurfaceEmbedder::SetLocalSurfaceId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kSurfaceEmbedder_SetLocalSurfaceId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::SurfaceEmbedder_SetLocalSurfaceId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      in_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_surface_id in SurfaceEmbedder.SetLocalSurfaceId request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SurfaceEmbedder::Name_);
  message.set_method_name("SetLocalSurfaceId");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool SurfaceEmbedderStubDispatch::Accept(
    SurfaceEmbedder* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSurfaceEmbedder_SetLocalSurfaceId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SurfaceEmbedder::SetLocalSurfaceId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::SurfaceEmbedder_SetLocalSurfaceId_Params_Data* params =
          reinterpret_cast<internal::SurfaceEmbedder_SetLocalSurfaceId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::LocalSurfaceId p_local_surface_id{};
      SurfaceEmbedder_SetLocalSurfaceId_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SurfaceEmbedder::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetLocalSurfaceId(
std::move(p_local_surface_id));
      return true;
    }
  }
  return false;
}

// static
bool SurfaceEmbedderStubDispatch::AcceptWithResponder(
    SurfaceEmbedder* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSurfaceEmbedder_SetLocalSurfaceId_Name: {
      break;
    }
  }
  return false;
}

bool SurfaceEmbedderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SurfaceEmbedder RequestValidator");

  switch (message->header()->name) {
    case internal::kSurfaceEmbedder_SetLocalSurfaceId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SurfaceEmbedder_SetLocalSurfaceId_Params_Data>(
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

const char EmbeddedFrameSinkClient::Name_[] = "blink.mojom.EmbeddedFrameSinkClient";

EmbeddedFrameSinkClientProxy::EmbeddedFrameSinkClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedFrameSinkClientProxy::OnFirstSurfaceActivation(
    const viz::SurfaceInfo& in_surface_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkClient::OnFirstSurfaceActivation");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->surface_info)::BaseType::BufferWriter
      surface_info_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceInfoDataView>(
      in_surface_info, buffer, &surface_info_writer, &serialization_context);
  params->surface_info.Set(
      surface_info_writer.is_null() ? nullptr : surface_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_info in EmbeddedFrameSinkClient.OnFirstSurfaceActivation request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedFrameSinkClient::Name_);
  message.set_method_name("OnFirstSurfaceActivation");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedFrameSinkClientProxy::BindSurfaceEmbedder(
    SurfaceEmbedderRequest in_embedder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkClient::BindSurfaceEmbedder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedFrameSinkClient_BindSurfaceEmbedder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::SurfaceEmbedderRequestDataView>(
      in_embedder, &params->embedder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->embedder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid embedder in EmbeddedFrameSinkClient.BindSurfaceEmbedder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedFrameSinkClient::Name_);
  message.set_method_name("BindSurfaceEmbedder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool EmbeddedFrameSinkClientStubDispatch::Accept(
    EmbeddedFrameSinkClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkClient::OnFirstSurfaceActivation",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* params =
          reinterpret_cast<internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::SurfaceInfo p_surface_info{};
      EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSurfaceInfo(&p_surface_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedFrameSinkClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFirstSurfaceActivation(
std::move(p_surface_info));
      return true;
    }
    case internal::kEmbeddedFrameSinkClient_BindSurfaceEmbedder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkClient::BindSurfaceEmbedder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data* params =
          reinterpret_cast<internal::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SurfaceEmbedderRequest p_embedder{};
      EmbeddedFrameSinkClient_BindSurfaceEmbedder_ParamsDataView input_data_view(params, &serialization_context);
      
      p_embedder =
          input_data_view.TakeEmbedder<decltype(p_embedder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedFrameSinkClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindSurfaceEmbedder(
std::move(p_embedder));
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedFrameSinkClientStubDispatch::AcceptWithResponder(
    EmbeddedFrameSinkClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name: {
      break;
    }
    case internal::kEmbeddedFrameSinkClient_BindSurfaceEmbedder_Name: {
      break;
    }
  }
  return false;
}

bool EmbeddedFrameSinkClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedFrameSinkClient RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedFrameSinkClient_BindSurfaceEmbedder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data>(
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

const char EmbeddedFrameSinkProvider::Name_[] = "blink.mojom.EmbeddedFrameSinkProvider";

EmbeddedFrameSinkProviderProxy::EmbeddedFrameSinkProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void EmbeddedFrameSinkProviderProxy::RegisterEmbeddedFrameSink(
    const viz::FrameSinkId& in_parent_frame_sink_id, const viz::FrameSinkId& in_frame_sink_id, EmbeddedFrameSinkClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::RegisterEmbeddedFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->parent_frame_sink_id)::BaseType::BufferWriter
      parent_frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_parent_frame_sink_id, buffer, &parent_frame_sink_id_writer, &serialization_context);
  params->parent_frame_sink_id.Set(
      parent_frame_sink_id_writer.is_null() ? nullptr : parent_frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->parent_frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null parent_frame_sink_id in EmbeddedFrameSinkProvider.RegisterEmbeddedFrameSink request");
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in EmbeddedFrameSinkProvider.RegisterEmbeddedFrameSink request");
  mojo::internal::Serialize<::blink::mojom::EmbeddedFrameSinkClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in EmbeddedFrameSinkProvider.RegisterEmbeddedFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedFrameSinkProvider::Name_);
  message.set_method_name("RegisterEmbeddedFrameSink");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedFrameSinkProviderProxy::CreateCompositorFrameSink(
    const viz::FrameSinkId& in_frame_sink_id, ::viz::mojom::blink::CompositorFrameSinkClientPtr in_client, ::viz::mojom::blink::CompositorFrameSinkRequest in_sink) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::CreateCompositorFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in EmbeddedFrameSinkProvider.CreateCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in EmbeddedFrameSinkProvider.CreateCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
      in_sink, &params->sink, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->sink),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid sink in EmbeddedFrameSinkProvider.CreateCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedFrameSinkProvider::Name_);
  message.set_method_name("CreateCompositorFrameSink");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedFrameSinkProviderProxy::CreateSimpleCompositorFrameSink(
    const viz::FrameSinkId& in_parent_frame_sink_id, const viz::FrameSinkId& in_frame_sink_id, EmbeddedFrameSinkClientPtr in_surface_client, ::viz::mojom::blink::CompositorFrameSinkClientPtr in_client, ::viz::mojom::blink::CompositorFrameSinkRequest in_sink) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::CreateSimpleCompositorFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->parent_frame_sink_id)::BaseType::BufferWriter
      parent_frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_parent_frame_sink_id, buffer, &parent_frame_sink_id_writer, &serialization_context);
  params->parent_frame_sink_id.Set(
      parent_frame_sink_id_writer.is_null() ? nullptr : parent_frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->parent_frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null parent_frame_sink_id in EmbeddedFrameSinkProvider.CreateSimpleCompositorFrameSink request");
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in EmbeddedFrameSinkProvider.CreateSimpleCompositorFrameSink request");
  mojo::internal::Serialize<::blink::mojom::EmbeddedFrameSinkClientPtrDataView>(
      in_surface_client, &params->surface_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->surface_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid surface_client in EmbeddedFrameSinkProvider.CreateSimpleCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in EmbeddedFrameSinkProvider.CreateSimpleCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
      in_sink, &params->sink, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->sink),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid sink in EmbeddedFrameSinkProvider.CreateSimpleCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedFrameSinkProvider::Name_);
  message.set_method_name("CreateSimpleCompositorFrameSink");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void EmbeddedFrameSinkProviderProxy::ConnectToEmbedder(
    const viz::FrameSinkId& in_frame_sink_id, SurfaceEmbedderRequest in_embedder) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::ConnectToEmbedder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kEmbeddedFrameSinkProvider_ConnectToEmbedder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in EmbeddedFrameSinkProvider.ConnectToEmbedder request");
  mojo::internal::Serialize<::blink::mojom::SurfaceEmbedderRequestDataView>(
      in_embedder, &params->embedder, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->embedder),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid embedder in EmbeddedFrameSinkProvider.ConnectToEmbedder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(EmbeddedFrameSinkProvider::Name_);
  message.set_method_name("ConnectToEmbedder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool EmbeddedFrameSinkProviderStubDispatch::Accept(
    EmbeddedFrameSinkProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::RegisterEmbeddedFrameSink",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* params =
          reinterpret_cast<internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_parent_frame_sink_id{};
      viz::FrameSinkId p_frame_sink_id{};
      EmbeddedFrameSinkClientPtr p_client{};
      EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParentFrameSinkId(&p_parent_frame_sink_id))
        success = false;
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedFrameSinkProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterEmbeddedFrameSink(
std::move(p_parent_frame_sink_id), 
std::move(p_frame_sink_id), 
std::move(p_client));
      return true;
    }
    case internal::kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::CreateCompositorFrameSink",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* params =
          reinterpret_cast<internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      ::viz::mojom::blink::CompositorFrameSinkClientPtr p_client{};
      ::viz::mojom::blink::CompositorFrameSinkRequest p_sink{};
      EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_sink =
          input_data_view.TakeSink<decltype(p_sink)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedFrameSinkProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateCompositorFrameSink(
std::move(p_frame_sink_id), 
std::move(p_client), 
std::move(p_sink));
      return true;
    }
    case internal::kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::CreateSimpleCompositorFrameSink",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* params =
          reinterpret_cast<internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_parent_frame_sink_id{};
      viz::FrameSinkId p_frame_sink_id{};
      EmbeddedFrameSinkClientPtr p_surface_client{};
      ::viz::mojom::blink::CompositorFrameSinkClientPtr p_client{};
      ::viz::mojom::blink::CompositorFrameSinkRequest p_sink{};
      EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadParentFrameSinkId(&p_parent_frame_sink_id))
        success = false;
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      p_surface_client =
          input_data_view.TakeSurfaceClient<decltype(p_surface_client)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_sink =
          input_data_view.TakeSink<decltype(p_sink)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedFrameSinkProvider::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateSimpleCompositorFrameSink(
std::move(p_parent_frame_sink_id), 
std::move(p_frame_sink_id), 
std::move(p_surface_client), 
std::move(p_client), 
std::move(p_sink));
      return true;
    }
    case internal::kEmbeddedFrameSinkProvider_ConnectToEmbedder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::EmbeddedFrameSinkProvider::ConnectToEmbedder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data* params =
          reinterpret_cast<internal::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::FrameSinkId p_frame_sink_id{};
      SurfaceEmbedderRequest p_embedder{};
      EmbeddedFrameSinkProvider_ConnectToEmbedder_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      p_embedder =
          input_data_view.TakeEmbedder<decltype(p_embedder)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            EmbeddedFrameSinkProvider::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConnectToEmbedder(
std::move(p_frame_sink_id), 
std::move(p_embedder));
      return true;
    }
  }
  return false;
}

// static
bool EmbeddedFrameSinkProviderStubDispatch::AcceptWithResponder(
    EmbeddedFrameSinkProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name: {
      break;
    }
    case internal::kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name: {
      break;
    }
    case internal::kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name: {
      break;
    }
    case internal::kEmbeddedFrameSinkProvider_ConnectToEmbedder_Name: {
      break;
    }
  }
  return false;
}

bool EmbeddedFrameSinkProviderRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "EmbeddedFrameSinkProvider RequestValidator");

  switch (message->header()->name) {
    case internal::kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kEmbeddedFrameSinkProvider_ConnectToEmbedder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data>(
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