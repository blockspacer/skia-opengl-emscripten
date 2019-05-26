// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/presentation_feedback.mojom.h"
#include "gpu/ipc/common/mailbox.mojom.h"


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


void CompositorFrameSinkInterceptorForTesting::SetNeedsBeginFrame(bool needs_begin_frame) {
  GetForwardingInterface()->SetNeedsBeginFrame(std::move(needs_begin_frame));
}
void CompositorFrameSinkInterceptorForTesting::SetWantsAnimateOnlyBeginFrames() {
  GetForwardingInterface()->SetWantsAnimateOnlyBeginFrames();
}
void CompositorFrameSinkInterceptorForTesting::SubmitCompositorFrame(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time) {
  GetForwardingInterface()->SubmitCompositorFrame(std::move(local_surface_id), std::move(frame), std::move(hit_test_region_list), std::move(submit_time));
}
void CompositorFrameSinkInterceptorForTesting::SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time, SubmitCompositorFrameSyncCallback callback) {
  GetForwardingInterface()->SubmitCompositorFrameSync(std::move(local_surface_id), std::move(frame), std::move(hit_test_region_list), std::move(submit_time), std::move(callback));
}
void CompositorFrameSinkInterceptorForTesting::DidNotProduceFrame(const viz::BeginFrameAck& ack) {
  GetForwardingInterface()->DidNotProduceFrame(std::move(ack));
}
void CompositorFrameSinkInterceptorForTesting::DidAllocateSharedBitmap(mojo::ScopedSharedBufferHandle buffer, const gpu::Mailbox& id) {
  GetForwardingInterface()->DidAllocateSharedBitmap(std::move(buffer), std::move(id));
}
void CompositorFrameSinkInterceptorForTesting::DidDeleteSharedBitmap(const gpu::Mailbox& id) {
  GetForwardingInterface()->DidDeleteSharedBitmap(std::move(id));
}
CompositorFrameSinkAsyncWaiter::CompositorFrameSinkAsyncWaiter(
    CompositorFrameSink* proxy) : proxy_(proxy) {}

CompositorFrameSinkAsyncWaiter::~CompositorFrameSinkAsyncWaiter() = default;

void CompositorFrameSinkAsyncWaiter::SubmitCompositorFrameSync(
    const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time, std::vector<viz::ReturnedResource>* out_resources) {
  base::RunLoop loop;
  proxy_->SubmitCompositorFrameSync(std::move(local_surface_id),std::move(frame),std::move(hit_test_region_list),std::move(submit_time),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<viz::ReturnedResource>* out_resources
,
             const std::vector<viz::ReturnedResource>& resources) {*out_resources = std::move(resources);
            loop->Quit();
          },
          &loop,
          out_resources));
  loop.Run();
}



void CompositorFrameSinkClientInterceptorForTesting::DidReceiveCompositorFrameAck(const std::vector<viz::ReturnedResource>& resources) {
  GetForwardingInterface()->DidReceiveCompositorFrameAck(std::move(resources));
}
void CompositorFrameSinkClientInterceptorForTesting::OnBeginFrame(const viz::BeginFrameArgs& args, const base::flat_map<uint32_t, gfx::PresentationFeedback>& presentations) {
  GetForwardingInterface()->OnBeginFrame(std::move(args), std::move(presentations));
}
void CompositorFrameSinkClientInterceptorForTesting::OnBeginFramePausedChanged(bool paused) {
  GetForwardingInterface()->OnBeginFramePausedChanged(std::move(paused));
}
void CompositorFrameSinkClientInterceptorForTesting::ReclaimResources(const std::vector<viz::ReturnedResource>& resources) {
  GetForwardingInterface()->ReclaimResources(std::move(resources));
}
CompositorFrameSinkClientAsyncWaiter::CompositorFrameSinkClientAsyncWaiter(
    CompositorFrameSinkClient* proxy) : proxy_(proxy) {}

CompositorFrameSinkClientAsyncWaiter::~CompositorFrameSinkClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif