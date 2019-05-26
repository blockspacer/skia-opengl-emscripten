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

#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.h"

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

#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
#include "services/viz/public/cpp/compositing/compositor_frame_metadata_struct_traits.h"
#include "services/viz/public/cpp/compositing/compositor_frame_struct_traits.h"
#include "services/viz/public/cpp/compositing/copy_output_request_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operation_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operations_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_deadline_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/paint_filter_struct_traits.h"
#include "services/viz/public/cpp/compositing/quads_struct_traits.h"
#include "services/viz/public/cpp/compositing/render_pass_struct_traits.h"
#include "services/viz/public/cpp/compositing/returned_resource_struct_traits.h"
#include "services/viz/public/cpp/compositing/shared_quad_state_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_range_struct_traits.h"
#include "services/viz/public/cpp/compositing/transferable_resource_struct_traits.h"
#include "services/viz/public/cpp/hit_test/hit_test_region_list_struct_traits.h"
#include "skia/public/interfaces/blur_image_filter_tile_mode_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#include "ui/gfx/mojo/presentation_feedback_struct_traits.h"
#include "ui/gfx/mojo/rrect_f_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif
namespace viz {
namespace mojom {
const char CompositorFrameSink::Name_[] = "viz.mojom.CompositorFrameSink";
bool CompositorFrameSink::SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time, std::vector<viz::ReturnedResource>* out_resources) {
  NOTREACHED();
  return false;
}
class CompositorFrameSink_SubmitCompositorFrameSync_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  CompositorFrameSink_SubmitCompositorFrameSync_HandleSyncResponse(
      bool* result, std::vector<viz::ReturnedResource>* out_resources)
      : result_(result), out_resources_(out_resources) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<viz::ReturnedResource>* out_resources_;DISALLOW_COPY_AND_ASSIGN(CompositorFrameSink_SubmitCompositorFrameSync_HandleSyncResponse);
};

class CompositorFrameSink_SubmitCompositorFrameSync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CompositorFrameSink_SubmitCompositorFrameSync_ForwardToCallback(
      CompositorFrameSink::SubmitCompositorFrameSyncCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CompositorFrameSink::SubmitCompositorFrameSyncCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CompositorFrameSink_SubmitCompositorFrameSync_ForwardToCallback);
};

CompositorFrameSinkProxy::CompositorFrameSinkProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CompositorFrameSinkProxy::SetNeedsBeginFrame(
    bool in_needs_begin_frame) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SetNeedsBeginFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_SetNeedsBeginFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->needs_begin_frame = in_needs_begin_frame;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("SetNeedsBeginFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkProxy::SetWantsAnimateOnlyBeginFrames(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SetWantsAnimateOnlyBeginFrames");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("SetWantsAnimateOnlyBeginFrames");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkProxy::SubmitCompositorFrame(
    const viz::LocalSurfaceId& in_local_surface_id, viz::CompositorFrame in_frame, base::Optional<viz::HitTestRegionList> in_hit_test_region_list, uint64_t in_submit_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_SubmitCompositorFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data::BufferWriter
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
      "null local_surface_id in CompositorFrameSink.SubmitCompositorFrame request");
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameDataView>(
      in_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in CompositorFrameSink.SubmitCompositorFrame request");
  typename decltype(params->hit_test_region_list)::BaseType::BufferWriter
      hit_test_region_list_writer;
  mojo::internal::Serialize<::viz::mojom::HitTestRegionListDataView>(
      in_hit_test_region_list, buffer, &hit_test_region_list_writer, &serialization_context);
  params->hit_test_region_list.Set(
      hit_test_region_list_writer.is_null() ? nullptr : hit_test_region_list_writer.data());
  params->submit_time = in_submit_time;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("SubmitCompositorFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool CompositorFrameSinkProxy::SubmitCompositorFrameSync(
    const viz::LocalSurfaceId& param_local_surface_id, viz::CompositorFrame param_frame, base::Optional<viz::HitTestRegionList> param_hit_test_region_list, uint64_t param_submit_time, std::vector<viz::ReturnedResource>* out_param_resources) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrameSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_surface_id)::BaseType::BufferWriter
      local_surface_id_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
      param_local_surface_id, buffer, &local_surface_id_writer, &serialization_context);
  params->local_surface_id.Set(
      local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_surface_id in CompositorFrameSink.SubmitCompositorFrameSync request");
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameDataView>(
      param_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in CompositorFrameSink.SubmitCompositorFrameSync request");
  typename decltype(params->hit_test_region_list)::BaseType::BufferWriter
      hit_test_region_list_writer;
  mojo::internal::Serialize<::viz::mojom::HitTestRegionListDataView>(
      param_hit_test_region_list, buffer, &hit_test_region_list_writer, &serialization_context);
  params->hit_test_region_list.Set(
      hit_test_region_list_writer.is_null() ? nullptr : hit_test_region_list_writer.data());
  params->submit_time = param_submit_time;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("SubmitCompositorFrameSync");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CompositorFrameSink_SubmitCompositorFrameSync_HandleSyncResponse(
          &result, out_param_resources));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void CompositorFrameSinkProxy::SubmitCompositorFrameSync(
    const viz::LocalSurfaceId& in_local_surface_id, viz::CompositorFrame in_frame, base::Optional<viz::HitTestRegionList> in_hit_test_region_list, uint64_t in_submit_time, SubmitCompositorFrameSyncCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrameSync");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data::BufferWriter
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
      "null local_surface_id in CompositorFrameSink.SubmitCompositorFrameSync request");
  typename decltype(params->frame)::BaseType::BufferWriter
      frame_writer;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameDataView>(
      in_frame, buffer, &frame_writer, &serialization_context);
  params->frame.Set(
      frame_writer.is_null() ? nullptr : frame_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in CompositorFrameSink.SubmitCompositorFrameSync request");
  typename decltype(params->hit_test_region_list)::BaseType::BufferWriter
      hit_test_region_list_writer;
  mojo::internal::Serialize<::viz::mojom::HitTestRegionListDataView>(
      in_hit_test_region_list, buffer, &hit_test_region_list_writer, &serialization_context);
  params->hit_test_region_list.Set(
      hit_test_region_list_writer.is_null() ? nullptr : hit_test_region_list_writer.data());
  params->submit_time = in_submit_time;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("SubmitCompositorFrameSync");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CompositorFrameSink_SubmitCompositorFrameSync_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CompositorFrameSinkProxy::DidNotProduceFrame(
    const viz::BeginFrameAck& in_ack) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::DidNotProduceFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_DidNotProduceFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_DidNotProduceFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->ack)::BaseType::BufferWriter
      ack_writer;
  mojo::internal::Serialize<::viz::mojom::BeginFrameAckDataView>(
      in_ack, buffer, &ack_writer, &serialization_context);
  params->ack.Set(
      ack_writer.is_null() ? nullptr : ack_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ack.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ack in CompositorFrameSink.DidNotProduceFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("DidNotProduceFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkProxy::DidAllocateSharedBitmap(
    mojo::ScopedSharedBufferHandle in_buffer, const gpu::Mailbox& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::DidAllocateSharedBitmap");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_DidAllocateSharedBitmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_buffer, &params->buffer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid buffer in CompositorFrameSink.DidAllocateSharedBitmap request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::gpu::mojom::MailboxDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in CompositorFrameSink.DidAllocateSharedBitmap request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("DidAllocateSharedBitmap");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkProxy::DidDeleteSharedBitmap(
    const gpu::Mailbox& in_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::DidDeleteSharedBitmap");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_DidDeleteSharedBitmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<::gpu::mojom::MailboxDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in CompositorFrameSink.DidDeleteSharedBitmap request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("DidDeleteSharedBitmap");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder {
 public:
  static CompositorFrameSink::SubmitCompositorFrameSyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder> proxy(
        new CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder() {
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
  CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder(
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
        << "CompositorFrameSink::SubmitCompositorFrameSyncCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<viz::ReturnedResource>& in_resources);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder);
};

bool CompositorFrameSink_SubmitCompositorFrameSync_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrameSyncCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<viz::ReturnedResource> p_resources{};
  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResources(&p_resources))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CompositorFrameSink::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_resources));
  return true;
}

void CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder::Run(
    const std::vector<viz::ReturnedResource>& in_resources) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->resources)::BaseType::BufferWriter
      resources_writer;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
      in_resources, buffer, &resources_writer, &resources_validate_params,
      &serialization_context);
  params->resources.Set(
      resources_writer.is_null() ? nullptr : resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrameSyncCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSink::Name_);
  message.set_method_name("SubmitCompositorFrameSync");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool CompositorFrameSink_SubmitCompositorFrameSync_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* params =
      reinterpret_cast<internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<viz::ReturnedResource> p_resources{};
  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResources(&p_resources))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CompositorFrameSink::Name_, 3, true);
    return false;
  }
  *out_resources_ = std::move(p_resources);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool CompositorFrameSinkStubDispatch::Accept(
    CompositorFrameSink* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCompositorFrameSink_SetNeedsBeginFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SetNeedsBeginFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_needs_begin_frame{};
      CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      p_needs_begin_frame = input_data_view.needs_begin_frame();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetNeedsBeginFrame(
std::move(p_needs_begin_frame));
      return true;
    }
    case internal::kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SetWantsAnimateOnlyBeginFrames",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWantsAnimateOnlyBeginFrames();
      return true;
    }
    case internal::kCompositorFrameSink_SubmitCompositorFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::LocalSurfaceId p_local_surface_id{};
      viz::CompositorFrame p_frame{};
      base::Optional<viz::HitTestRegionList> p_hit_test_region_list{};
      uint64_t p_submit_time{};
      CompositorFrameSink_SubmitCompositorFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      if (!input_data_view.ReadHitTestRegionList(&p_hit_test_region_list))
        success = false;
      p_submit_time = input_data_view.submit_time();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitCompositorFrame(
std::move(p_local_surface_id), 
std::move(p_frame), 
std::move(p_hit_test_region_list), 
std::move(p_submit_time));
      return true;
    }
    case internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name: {
      break;
    }
    case internal::kCompositorFrameSink_DidNotProduceFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::DidNotProduceFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSink_DidNotProduceFrame_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSink_DidNotProduceFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::BeginFrameAck p_ack{};
      CompositorFrameSink_DidNotProduceFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadAck(&p_ack))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidNotProduceFrame(
std::move(p_ack));
      return true;
    }
    case internal::kCompositorFrameSink_DidAllocateSharedBitmap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::DidAllocateSharedBitmap",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      mojo::ScopedSharedBufferHandle p_buffer{};
      gpu::Mailbox p_id{};
      CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView input_data_view(params, &serialization_context);
      
      p_buffer = input_data_view.TakeBuffer();
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidAllocateSharedBitmap(
std::move(p_buffer), 
std::move(p_id));
      return true;
    }
    case internal::kCompositorFrameSink_DidDeleteSharedBitmap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::DidDeleteSharedBitmap",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      gpu::Mailbox p_id{};
      CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidDeleteSharedBitmap(
std::move(p_id));
      return true;
    }
  }
  return false;
}

// static
bool CompositorFrameSinkStubDispatch::AcceptWithResponder(
    CompositorFrameSink* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCompositorFrameSink_SetNeedsBeginFrame_Name: {
      break;
    }
    case internal::kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name: {
      break;
    }
    case internal::kCompositorFrameSink_SubmitCompositorFrame_Name: {
      break;
    }
    case internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSink::SubmitCompositorFrameSync",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* params =
          reinterpret_cast<
              internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::LocalSurfaceId p_local_surface_id{};
      viz::CompositorFrame p_frame{};
      base::Optional<viz::HitTestRegionList> p_hit_test_region_list{};
      uint64_t p_submit_time{};
      CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalSurfaceId(&p_local_surface_id))
        success = false;
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      if (!input_data_view.ReadHitTestRegionList(&p_hit_test_region_list))
        success = false;
      p_submit_time = input_data_view.submit_time();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSink::Name_, 3, false);
        return false;
      }
      CompositorFrameSink::SubmitCompositorFrameSyncCallback callback =
          CompositorFrameSink_SubmitCompositorFrameSync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SubmitCompositorFrameSync(
std::move(p_local_surface_id), 
std::move(p_frame), 
std::move(p_hit_test_region_list), 
std::move(p_submit_time), std::move(callback));
      return true;
    }
    case internal::kCompositorFrameSink_DidNotProduceFrame_Name: {
      break;
    }
    case internal::kCompositorFrameSink_DidAllocateSharedBitmap_Name: {
      break;
    }
    case internal::kCompositorFrameSink_DidDeleteSharedBitmap_Name: {
      break;
    }
  }
  return false;
}

bool CompositorFrameSinkRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CompositorFrameSink RequestValidator");

  switch (message->header()->name) {
    case internal::kCompositorFrameSink_SetNeedsBeginFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSink_SubmitCompositorFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSink_DidNotProduceFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_DidNotProduceFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSink_DidAllocateSharedBitmap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSink_DidDeleteSharedBitmap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data>(
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

bool CompositorFrameSinkResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CompositorFrameSink ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCompositorFrameSink_SubmitCompositorFrameSync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data>(
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
const char CompositorFrameSinkClient::Name_[] = "viz.mojom.CompositorFrameSinkClient";

CompositorFrameSinkClientProxy::CompositorFrameSinkClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CompositorFrameSinkClientProxy::DidReceiveCompositorFrameAck(
    const std::vector<viz::ReturnedResource>& in_resources) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::DidReceiveCompositorFrameAck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->resources)::BaseType::BufferWriter
      resources_writer;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
      in_resources, buffer, &resources_writer, &resources_validate_params,
      &serialization_context);
  params->resources.Set(
      resources_writer.is_null() ? nullptr : resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in CompositorFrameSinkClient.DidReceiveCompositorFrameAck request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSinkClient::Name_);
  message.set_method_name("DidReceiveCompositorFrameAck");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkClientProxy::OnBeginFrame(
    const viz::BeginFrameArgs& in_args, const base::flat_map<uint32_t, gfx::PresentationFeedback>& in_presentations) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::OnBeginFrame");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSinkClient_OnBeginFrame_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->args)::BaseType::BufferWriter
      args_writer;
  mojo::internal::Serialize<::viz::mojom::BeginFrameArgsDataView>(
      in_args, buffer, &args_writer, &serialization_context);
  params->args.Set(
      args_writer.is_null() ? nullptr : args_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null args in CompositorFrameSinkClient.OnBeginFrame request");
  typename decltype(params->presentations)::BaseType::BufferWriter
      presentations_writer;
  const mojo::internal::ContainerValidateParams presentations_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<uint32_t, ::gfx::mojom::PresentationFeedbackDataView>>(
      in_presentations, buffer, &presentations_writer, &presentations_validate_params,
      &serialization_context);
  params->presentations.Set(
      presentations_writer.is_null() ? nullptr : presentations_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->presentations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentations in CompositorFrameSinkClient.OnBeginFrame request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSinkClient::Name_);
  message.set_method_name("OnBeginFrame");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkClientProxy::OnBeginFramePausedChanged(
    bool in_paused) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::OnBeginFramePausedChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->paused = in_paused;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSinkClient::Name_);
  message.set_method_name("OnBeginFramePausedChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CompositorFrameSinkClientProxy::ReclaimResources(
    const std::vector<viz::ReturnedResource>& in_resources) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::ReclaimResources");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCompositorFrameSinkClient_ReclaimResources_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::viz::mojom::internal::CompositorFrameSinkClient_ReclaimResources_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->resources)::BaseType::BufferWriter
      resources_writer;
  const mojo::internal::ContainerValidateParams resources_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
      in_resources, buffer, &resources_writer, &resources_validate_params,
      &serialization_context);
  params->resources.Set(
      resources_writer.is_null() ? nullptr : resources_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->resources.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resources in CompositorFrameSinkClient.ReclaimResources request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CompositorFrameSinkClient::Name_);
  message.set_method_name("ReclaimResources");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool CompositorFrameSinkClientStubDispatch::Accept(
    CompositorFrameSinkClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::DidReceiveCompositorFrameAck",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<viz::ReturnedResource> p_resources{};
      CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResources(&p_resources))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSinkClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidReceiveCompositorFrameAck(
std::move(p_resources));
      return true;
    }
    case internal::kCompositorFrameSinkClient_OnBeginFrame_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::OnBeginFrame",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      viz::BeginFrameArgs p_args{};
      base::flat_map<uint32_t, gfx::PresentationFeedback> p_presentations{};
      CompositorFrameSinkClient_OnBeginFrame_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadArgs(&p_args))
        success = false;
      if (!input_data_view.ReadPresentations(&p_presentations))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSinkClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBeginFrame(
std::move(p_args), 
std::move(p_presentations));
      return true;
    }
    case internal::kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::OnBeginFramePausedChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_paused{};
      CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_paused = input_data_view.paused();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSinkClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBeginFramePausedChanged(
std::move(p_paused));
      return true;
    }
    case internal::kCompositorFrameSinkClient_ReclaimResources_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CompositorFrameSinkClient::ReclaimResources",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CompositorFrameSinkClient_ReclaimResources_Params_Data* params =
          reinterpret_cast<internal::CompositorFrameSinkClient_ReclaimResources_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<viz::ReturnedResource> p_resources{};
      CompositorFrameSinkClient_ReclaimResources_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadResources(&p_resources))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CompositorFrameSinkClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReclaimResources(
std::move(p_resources));
      return true;
    }
  }
  return false;
}

// static
bool CompositorFrameSinkClientStubDispatch::AcceptWithResponder(
    CompositorFrameSinkClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name: {
      break;
    }
    case internal::kCompositorFrameSinkClient_OnBeginFrame_Name: {
      break;
    }
    case internal::kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name: {
      break;
    }
    case internal::kCompositorFrameSinkClient_ReclaimResources_Name: {
      break;
    }
  }
  return false;
}

bool CompositorFrameSinkClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CompositorFrameSinkClient RequestValidator");

  switch (message->header()->name) {
    case internal::kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSinkClient_OnBeginFrame_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCompositorFrameSinkClient_ReclaimResources_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CompositorFrameSinkClient_ReclaimResources_Params_Data>(
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
}  // namespace viz

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif