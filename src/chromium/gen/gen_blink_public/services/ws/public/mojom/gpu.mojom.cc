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

#include "services/ws/public/mojom/gpu.mojom.h"

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

#include "services/ws/public/mojom/gpu.mojom-params-data.h"
#include "services/ws/public/mojom/gpu.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/gpu.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_JUMBO_H_
#include "gpu/ipc/common/gpu_feature_info_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
#endif
namespace ws {
namespace mojom {
const char GpuMemoryBufferFactory::Name_[] = "ws.mojom.GpuMemoryBufferFactory";

class GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ForwardToCallback(
      GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ForwardToCallback);
};

GpuMemoryBufferFactoryProxy::GpuMemoryBufferFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GpuMemoryBufferFactoryProxy::CreateGpuMemoryBuffer(
    gfx::GpuMemoryBufferId in_id, const gfx::Size& in_size, gfx::BufferFormat in_format, gfx::BufferUsage in_usage, CreateGpuMemoryBufferCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GpuMemoryBufferFactory::CreateGpuMemoryBuffer");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in GpuMemoryBufferFactory.CreateGpuMemoryBuffer request");
  typename decltype(params->size)::BaseType::BufferWriter
      size_writer;
  mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
      in_size, buffer, &size_writer, &serialization_context);
  params->size.Set(
      size_writer.is_null() ? nullptr : size_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->size.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null size in GpuMemoryBufferFactory.CreateGpuMemoryBuffer request");
  mojo::internal::Serialize<::gfx::mojom::BufferFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<::gfx::mojom::BufferUsage>(
      in_usage, &params->usage);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GpuMemoryBufferFactory::Name_);
  message.set_method_name("CreateGpuMemoryBuffer");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuMemoryBufferFactoryProxy::DestroyGpuMemoryBuffer(
    gfx::GpuMemoryBufferId in_id, const ::gpu::SyncToken& in_sync_token) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GpuMemoryBufferFactory::DestroyGpuMemoryBuffer");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in GpuMemoryBufferFactory.DestroyGpuMemoryBuffer request");
  typename decltype(params->sync_token)::BaseType::BufferWriter
      sync_token_writer;
  mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
      in_sync_token, buffer, &sync_token_writer, &serialization_context);
  params->sync_token.Set(
      sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sync_token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sync_token in GpuMemoryBufferFactory.DestroyGpuMemoryBuffer request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GpuMemoryBufferFactory::Name_);
  message.set_method_name("DestroyGpuMemoryBuffer");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder {
 public:
  static GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder> proxy(
        new GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder() {
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
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder(
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
        << "GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      gfx::GpuMemoryBufferHandle in_buffer_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder);
};

bool GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  gfx::GpuMemoryBufferHandle p_buffer_handle{};
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBufferHandle(&p_buffer_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GpuMemoryBufferFactory::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_buffer_handle));
  return true;
}

void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder::Run(
    gfx::GpuMemoryBufferHandle in_buffer_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->buffer_handle)::BaseType::BufferWriter
      buffer_handle_writer;
  mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferHandleDataView>(
      in_buffer_handle, buffer, &buffer_handle_writer, &serialization_context);
  params->buffer_handle.Set(
      buffer_handle_writer.is_null() ? nullptr : buffer_handle_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer_handle.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer_handle in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GpuMemoryBufferFactory::Name_);
  message.set_method_name("CreateGpuMemoryBuffer");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool GpuMemoryBufferFactoryStubDispatch::Accept(
    GpuMemoryBufferFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name: {
      break;
    }
    case internal::kGpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GpuMemoryBufferFactory::DestroyGpuMemoryBuffer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::GpuMemoryBufferId p_id{};
      ::gpu::SyncToken p_sync_token{};
      GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSyncToken(&p_sync_token))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GpuMemoryBufferFactory::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DestroyGpuMemoryBuffer(
std::move(p_id), 
std::move(p_sync_token));
      return true;
    }
  }
  return false;
}

// static
bool GpuMemoryBufferFactoryStubDispatch::AcceptWithResponder(
    GpuMemoryBufferFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GpuMemoryBufferFactory::CreateGpuMemoryBuffer",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* params =
          reinterpret_cast<
              internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gfx::GpuMemoryBufferId p_id{};
      gfx::Size p_size{};
      gfx::BufferFormat p_format{};
      gfx::BufferUsage p_usage{};
      GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadSize(&p_size))
        success = false;
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadUsage(&p_usage))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GpuMemoryBufferFactory::Name_, 0, false);
        return false;
      }
      GpuMemoryBufferFactory::CreateGpuMemoryBufferCallback callback =
          GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateGpuMemoryBuffer(
std::move(p_id), 
std::move(p_size), 
std::move(p_format), 
std::move(p_usage), std::move(callback));
      return true;
    }
    case internal::kGpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Name: {
      break;
    }
  }
  return false;
}

bool GpuMemoryBufferFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GpuMemoryBufferFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data>(
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

bool GpuMemoryBufferFactoryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GpuMemoryBufferFactory ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data>(
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
const char Gpu::Name_[] = "ws.mojom.Gpu";

class Gpu_EstablishGpuChannel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Gpu_EstablishGpuChannel_ForwardToCallback(
      Gpu::EstablishGpuChannelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Gpu::EstablishGpuChannelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Gpu_EstablishGpuChannel_ForwardToCallback);
};

GpuProxy::GpuProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GpuProxy::CreateGpuMemoryBufferFactory(
    GpuMemoryBufferFactoryRequest in_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Gpu::CreateGpuMemoryBufferFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_CreateGpuMemoryBufferFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::GpuMemoryBufferFactoryRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in Gpu.CreateGpuMemoryBufferFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Gpu::Name_);
  message.set_method_name("CreateGpuMemoryBufferFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GpuProxy::EstablishGpuChannel(
    EstablishGpuChannelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Gpu::EstablishGpuChannel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_EstablishGpuChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::Gpu_EstablishGpuChannel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Gpu::Name_);
  message.set_method_name("EstablishGpuChannel");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Gpu_EstablishGpuChannel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GpuProxy::CreateVideoEncodeAcceleratorProvider(
    ::media::mojom::VideoEncodeAcceleratorProviderRequest in_vea_provider) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Gpu::CreateVideoEncodeAcceleratorProvider");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::media::mojom::VideoEncodeAcceleratorProviderRequestDataView>(
      in_vea_provider, &params->vea_provider, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->vea_provider),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid vea_provider in Gpu.CreateVideoEncodeAcceleratorProvider request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Gpu::Name_);
  message.set_method_name("CreateVideoEncodeAcceleratorProvider");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Gpu_EstablishGpuChannel_ProxyToResponder {
 public:
  static Gpu::EstablishGpuChannelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Gpu_EstablishGpuChannel_ProxyToResponder> proxy(
        new Gpu_EstablishGpuChannel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Gpu_EstablishGpuChannel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Gpu_EstablishGpuChannel_ProxyToResponder() {
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
  Gpu_EstablishGpuChannel_ProxyToResponder(
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
        << "Gpu::EstablishGpuChannelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_client_id, mojo::ScopedMessagePipeHandle in_channel_handle, const gpu::GPUInfo& in_gpu_info, const gpu::GpuFeatureInfo& in_gpu_feature_info);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Gpu_EstablishGpuChannel_ProxyToResponder);
};

bool Gpu_EstablishGpuChannel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Gpu::EstablishGpuChannelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Gpu_EstablishGpuChannel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Gpu_EstablishGpuChannel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_client_id{};
  mojo::ScopedMessagePipeHandle p_channel_handle{};
  gpu::GPUInfo p_gpu_info{};
  gpu::GpuFeatureInfo p_gpu_feature_info{};
  Gpu_EstablishGpuChannel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_client_id = input_data_view.client_id();
  p_channel_handle = input_data_view.TakeChannelHandle();
  if (!input_data_view.ReadGpuInfo(&p_gpu_info))
    success = false;
  if (!input_data_view.ReadGpuFeatureInfo(&p_gpu_feature_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Gpu::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_client_id), 
std::move(p_channel_handle), 
std::move(p_gpu_info), 
std::move(p_gpu_feature_info));
  return true;
}

void Gpu_EstablishGpuChannel_ProxyToResponder::Run(
    int32_t in_client_id, mojo::ScopedMessagePipeHandle in_channel_handle, const gpu::GPUInfo& in_gpu_info, const gpu::GpuFeatureInfo& in_gpu_feature_info) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGpu_EstablishGpuChannel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::Gpu_EstablishGpuChannel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_channel_handle, &params->channel_handle, &serialization_context);
  typename decltype(params->gpu_info)::BaseType::BufferWriter
      gpu_info_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuInfoDataView>(
      in_gpu_info, buffer, &gpu_info_writer, &serialization_context);
  params->gpu_info.Set(
      gpu_info_writer.is_null() ? nullptr : gpu_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_info in ");
  typename decltype(params->gpu_feature_info)::BaseType::BufferWriter
      gpu_feature_info_writer;
  mojo::internal::Serialize<::gpu::mojom::GpuFeatureInfoDataView>(
      in_gpu_feature_info, buffer, &gpu_feature_info_writer, &serialization_context);
  params->gpu_feature_info.Set(
      gpu_feature_info_writer.is_null() ? nullptr : gpu_feature_info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gpu_feature_info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gpu_feature_info in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Gpu::EstablishGpuChannelCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Gpu::Name_);
  message.set_method_name("EstablishGpuChannel");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool GpuStubDispatch::Accept(
    Gpu* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGpu_CreateGpuMemoryBufferFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Gpu::CreateGpuMemoryBufferFactory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data* params =
          reinterpret_cast<internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GpuMemoryBufferFactoryRequest p_request{};
      Gpu_CreateGpuMemoryBufferFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Gpu::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateGpuMemoryBufferFactory(
std::move(p_request));
      return true;
    }
    case internal::kGpu_EstablishGpuChannel_Name: {
      break;
    }
    case internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Gpu::CreateVideoEncodeAcceleratorProvider",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* params =
          reinterpret_cast<internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::media::mojom::VideoEncodeAcceleratorProviderRequest p_vea_provider{};
      Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView input_data_view(params, &serialization_context);
      
      p_vea_provider =
          input_data_view.TakeVeaProvider<decltype(p_vea_provider)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Gpu::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateVideoEncodeAcceleratorProvider(
std::move(p_vea_provider));
      return true;
    }
  }
  return false;
}

// static
bool GpuStubDispatch::AcceptWithResponder(
    Gpu* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGpu_CreateGpuMemoryBufferFactory_Name: {
      break;
    }
    case internal::kGpu_EstablishGpuChannel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Gpu::EstablishGpuChannel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Gpu_EstablishGpuChannel_Params_Data* params =
          reinterpret_cast<
              internal::Gpu_EstablishGpuChannel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Gpu_EstablishGpuChannel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Gpu::Name_, 1, false);
        return false;
      }
      Gpu::EstablishGpuChannelCallback callback =
          Gpu_EstablishGpuChannel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EstablishGpuChannel(std::move(callback));
      return true;
    }
    case internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name: {
      break;
    }
  }
  return false;
}

bool GpuRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Gpu RequestValidator");

  switch (message->header()->name) {
    case internal::kGpu_CreateGpuMemoryBufferFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_EstablishGpuChannel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGpu_CreateVideoEncodeAcceleratorProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data>(
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

bool GpuResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Gpu ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGpu_EstablishGpuChannel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Gpu_EstablishGpuChannel_ResponseParams_Data>(
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
}  // namespace ws

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif