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

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom.h"

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

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-params-data.h"
#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace blink {
namespace mojom {
const char PictureInPictureDelegate::Name_[] = "blink.mojom.PictureInPictureDelegate";

PictureInPictureDelegateProxy::PictureInPictureDelegateProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PictureInPictureDelegateProxy::PictureInPictureWindowSizeChanged(
    const gfx::Size& in_size) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureDelegate::PictureInPictureWindowSizeChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureDelegate_PictureInPictureWindowSizeChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in PictureInPictureDelegate.PictureInPictureWindowSizeChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureDelegate::Name_);
  message.set_method_name("PictureInPictureWindowSizeChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool PictureInPictureDelegateStubDispatch::Accept(
    PictureInPictureDelegate* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPictureInPictureDelegate_PictureInPictureWindowSizeChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureDelegate::PictureInPictureWindowSizeChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data* params =
          reinterpret_cast<internal::PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::Size p_size{};
      PictureInPictureDelegate_PictureInPictureWindowSizeChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PictureInPictureDelegate::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PictureInPictureWindowSizeChanged(
std::move(p_size));
      return true;
    }
  }
  return false;
}

// static
bool PictureInPictureDelegateStubDispatch::AcceptWithResponder(
    PictureInPictureDelegate* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPictureInPictureDelegate_PictureInPictureWindowSizeChanged_Name: {
      break;
    }
  }
  return false;
}

bool PictureInPictureDelegateRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PictureInPictureDelegate RequestValidator");

  switch (message->header()->name) {
    case internal::kPictureInPictureDelegate_PictureInPictureWindowSizeChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data>(
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

const char PictureInPictureService::Name_[] = "blink.mojom.PictureInPictureService";

class PictureInPictureService_StartSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PictureInPictureService_StartSession_ForwardToCallback(
      PictureInPictureService::StartSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PictureInPictureService::StartSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PictureInPictureService_StartSession_ForwardToCallback);
};

class PictureInPictureService_EndSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PictureInPictureService_EndSession_ForwardToCallback(
      PictureInPictureService::EndSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PictureInPictureService::EndSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PictureInPictureService_EndSession_ForwardToCallback);
};

PictureInPictureServiceProxy::PictureInPictureServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PictureInPictureServiceProxy::StartSession(
    uint32_t in_player_id, const base::Optional<viz::SurfaceId>& in_surface_id, const gfx::Size& in_natural_size, bool in_show_play_pause_button, bool in_show_mute_button, StartSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureService::StartSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureService_StartSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureService_StartSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->player_id = in_player_id;
  typename decltype(params->surface_id)::BaseType::BufferWriter
      surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
      in_surface_id, buffer, &surface_id_writer, &serialization_context);
  params->surface_id.Set(
      surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
  typename decltype(params->natural_size)::BaseType::BufferWriter
      natural_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_natural_size, buffer, &natural_size_writer, &serialization_context);
  params->natural_size.Set(
      natural_size_writer.is_null() ? nullptr : natural_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->natural_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null natural_size in PictureInPictureService.StartSession request");
  params->show_play_pause_button = in_show_play_pause_button;
  params->show_mute_button = in_show_mute_button;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureService::Name_);
  message.set_method_name("StartSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PictureInPictureService_StartSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PictureInPictureServiceProxy::EndSession(
    EndSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureService::EndSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureService_EndSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureService_EndSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureService::Name_);
  message.set_method_name("EndSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PictureInPictureService_EndSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void PictureInPictureServiceProxy::UpdateSession(
    uint32_t in_player_id, const base::Optional<viz::SurfaceId>& in_surface_id, const gfx::Size& in_natural_size, bool in_show_play_pause_button, bool in_show_mute_button) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureService::UpdateSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureService_UpdateSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureService_UpdateSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->player_id = in_player_id;
  typename decltype(params->surface_id)::BaseType::BufferWriter
      surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
      in_surface_id, buffer, &surface_id_writer, &serialization_context);
  params->surface_id.Set(
      surface_id_writer.is_null() ? nullptr : surface_id_writer.data());
  typename decltype(params->natural_size)::BaseType::BufferWriter
      natural_size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_natural_size, buffer, &natural_size_writer, &serialization_context);
  params->natural_size.Set(
      natural_size_writer.is_null() ? nullptr : natural_size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->natural_size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null natural_size in PictureInPictureService.UpdateSession request");
  params->show_play_pause_button = in_show_play_pause_button;
  params->show_mute_button = in_show_mute_button;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureService::Name_);
  message.set_method_name("UpdateSession");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void PictureInPictureServiceProxy::SetDelegate(
    PictureInPictureDelegatePtr in_delegate) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureService::SetDelegate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureService_SetDelegate_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureService_SetDelegate_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::PictureInPictureDelegatePtrDataView>(
      in_delegate, &params->delegate, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->delegate),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid delegate in PictureInPictureService.SetDelegate request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureService::Name_);
  message.set_method_name("SetDelegate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class PictureInPictureService_StartSession_ProxyToResponder {
 public:
  static PictureInPictureService::StartSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PictureInPictureService_StartSession_ProxyToResponder> proxy(
        new PictureInPictureService_StartSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PictureInPictureService_StartSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PictureInPictureService_StartSession_ProxyToResponder() {
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
  PictureInPictureService_StartSession_ProxyToResponder(
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
        << "PictureInPictureService::StartSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const gfx::Size& in_size);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PictureInPictureService_StartSession_ProxyToResponder);
};

bool PictureInPictureService_StartSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureService::StartSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PictureInPictureService_StartSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PictureInPictureService_StartSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gfx::Size p_size{};
  PictureInPictureService_StartSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadSize(&p_size))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PictureInPictureService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_size));
  return true;
}

void PictureInPictureService_StartSession_ProxyToResponder::Run(
    const gfx::Size& in_size) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureService_StartSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureService_StartSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureService::StartSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureService::Name_);
  message.set_method_name("StartSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class PictureInPictureService_EndSession_ProxyToResponder {
 public:
  static PictureInPictureService::EndSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PictureInPictureService_EndSession_ProxyToResponder> proxy(
        new PictureInPictureService_EndSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PictureInPictureService_EndSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PictureInPictureService_EndSession_ProxyToResponder() {
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
  PictureInPictureService_EndSession_ProxyToResponder(
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
        << "PictureInPictureService::EndSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PictureInPictureService_EndSession_ProxyToResponder);
};

bool PictureInPictureService_EndSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PictureInPictureService::EndSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PictureInPictureService_EndSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PictureInPictureService_EndSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PictureInPictureService_EndSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PictureInPictureService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void PictureInPictureService_EndSession_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPictureInPictureService_EndSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PictureInPictureService_EndSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureService::EndSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PictureInPictureService::Name_);
  message.set_method_name("EndSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool PictureInPictureServiceStubDispatch::Accept(
    PictureInPictureService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPictureInPictureService_StartSession_Name: {
      break;
    }
    case internal::kPictureInPictureService_EndSession_Name: {
      break;
    }
    case internal::kPictureInPictureService_UpdateSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureService::UpdateSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PictureInPictureService_UpdateSession_Params_Data* params =
          reinterpret_cast<internal::PictureInPictureService_UpdateSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_player_id{};
      base::Optional<viz::SurfaceId> p_surface_id{};
      gfx::Size p_natural_size{};
      bool p_show_play_pause_button{};
      bool p_show_mute_button{};
      PictureInPictureService_UpdateSession_ParamsDataView input_data_view(params, &serialization_context);
      
      p_player_id = input_data_view.player_id();
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!input_data_view.ReadNaturalSize(&p_natural_size))
        success = false;
      p_show_play_pause_button = input_data_view.show_play_pause_button();
      p_show_mute_button = input_data_view.show_mute_button();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PictureInPictureService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSession(
std::move(p_player_id), 
std::move(p_surface_id), 
std::move(p_natural_size), 
std::move(p_show_play_pause_button), 
std::move(p_show_mute_button));
      return true;
    }
    case internal::kPictureInPictureService_SetDelegate_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureService::SetDelegate",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::PictureInPictureService_SetDelegate_Params_Data* params =
          reinterpret_cast<internal::PictureInPictureService_SetDelegate_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PictureInPictureDelegatePtr p_delegate{};
      PictureInPictureService_SetDelegate_ParamsDataView input_data_view(params, &serialization_context);
      
      p_delegate =
          input_data_view.TakeDelegate<decltype(p_delegate)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PictureInPictureService::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetDelegate(
std::move(p_delegate));
      return true;
    }
  }
  return false;
}

// static
bool PictureInPictureServiceStubDispatch::AcceptWithResponder(
    PictureInPictureService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPictureInPictureService_StartSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureService::StartSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PictureInPictureService_StartSession_Params_Data* params =
          reinterpret_cast<
              internal::PictureInPictureService_StartSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_player_id{};
      base::Optional<viz::SurfaceId> p_surface_id{};
      gfx::Size p_natural_size{};
      bool p_show_play_pause_button{};
      bool p_show_mute_button{};
      PictureInPictureService_StartSession_ParamsDataView input_data_view(params, &serialization_context);
      
      p_player_id = input_data_view.player_id();
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!input_data_view.ReadNaturalSize(&p_natural_size))
        success = false;
      p_show_play_pause_button = input_data_view.show_play_pause_button();
      p_show_mute_button = input_data_view.show_mute_button();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PictureInPictureService::Name_, 0, false);
        return false;
      }
      PictureInPictureService::StartSessionCallback callback =
          PictureInPictureService_StartSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartSession(
std::move(p_player_id), 
std::move(p_surface_id), 
std::move(p_natural_size), 
std::move(p_show_play_pause_button), 
std::move(p_show_mute_button), std::move(callback));
      return true;
    }
    case internal::kPictureInPictureService_EndSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PictureInPictureService::EndSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PictureInPictureService_EndSession_Params_Data* params =
          reinterpret_cast<
              internal::PictureInPictureService_EndSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      PictureInPictureService_EndSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PictureInPictureService::Name_, 1, false);
        return false;
      }
      PictureInPictureService::EndSessionCallback callback =
          PictureInPictureService_EndSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EndSession(std::move(callback));
      return true;
    }
    case internal::kPictureInPictureService_UpdateSession_Name: {
      break;
    }
    case internal::kPictureInPictureService_SetDelegate_Name: {
      break;
    }
  }
  return false;
}

bool PictureInPictureServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PictureInPictureService RequestValidator");

  switch (message->header()->name) {
    case internal::kPictureInPictureService_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureService_StartSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPictureInPictureService_EndSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureService_EndSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPictureInPictureService_UpdateSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureService_UpdateSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPictureInPictureService_SetDelegate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureService_SetDelegate_Params_Data>(
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

bool PictureInPictureServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PictureInPictureService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPictureInPictureService_StartSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureService_StartSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kPictureInPictureService_EndSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PictureInPictureService_EndSession_ResponseParams_Data>(
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