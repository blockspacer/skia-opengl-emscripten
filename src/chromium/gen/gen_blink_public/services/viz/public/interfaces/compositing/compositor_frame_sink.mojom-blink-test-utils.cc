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


#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/returned_resource.mojom-blink.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/presentation_feedback.mojom-blink.h"
#include "gpu/ipc/common/mailbox.mojom-blink.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_BLINK_JUMBO_H_
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/begin_frame_args_struct_traits.h"
#include "services/viz/public/cpp/compositing/compositor_frame_metadata_struct_traits.h"
#include "services/viz/public/cpp/compositing/compositor_frame_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operation_struct_traits.h"
#include "services/viz/public/cpp/compositing/filter_operations_struct_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/quads_struct_traits.h"
#include "services/viz/public/cpp/compositing/render_pass_struct_traits.h"
#include "services/viz/public/cpp/compositing/returned_resource_struct_traits.h"
#include "services/viz/public/cpp/compositing/selection_struct_traits.h"
#include "services/viz/public/cpp/compositing/shared_quad_state_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/transferable_resource_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif


namespace viz {
namespace mojom {
namespace blink {


void CompositorFrameSinkInterceptorForTesting::SetNeedsBeginFrame(bool needs_begin_frame) {
  GetForwardingInterface()->SetNeedsBeginFrame(std::move(needs_begin_frame));
}
void CompositorFrameSinkInterceptorForTesting::SetWantsAnimateOnlyBeginFrames() {
  GetForwardingInterface()->SetWantsAnimateOnlyBeginFrames();
}
void CompositorFrameSinkInterceptorForTesting::SubmitCompositorFrame(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time) {
  GetForwardingInterface()->SubmitCompositorFrame(std::move(local_surface_id), std::move(frame), std::move(hit_test_region_list), std::move(submit_time));
}
void CompositorFrameSinkInterceptorForTesting::SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, SubmitCompositorFrameSyncCallback callback) {
  GetForwardingInterface()->SubmitCompositorFrameSync(std::move(local_surface_id), std::move(frame), std::move(hit_test_region_list), std::move(submit_time), std::move(callback));
}
void CompositorFrameSinkInterceptorForTesting::DidNotProduceFrame(const viz::BeginFrameAck& ack) {
  GetForwardingInterface()->DidNotProduceFrame(std::move(ack));
}
void CompositorFrameSinkInterceptorForTesting::DidAllocateSharedBitmap(mojo::ScopedSharedBufferHandle buffer, ::gpu::mojom::blink::MailboxPtr id) {
  GetForwardingInterface()->DidAllocateSharedBitmap(std::move(buffer), std::move(id));
}
void CompositorFrameSinkInterceptorForTesting::DidDeleteSharedBitmap(::gpu::mojom::blink::MailboxPtr id) {
  GetForwardingInterface()->DidDeleteSharedBitmap(std::move(id));
}
CompositorFrameSinkAsyncWaiter::CompositorFrameSinkAsyncWaiter(
    CompositorFrameSink* proxy) : proxy_(proxy) {}

CompositorFrameSinkAsyncWaiter::~CompositorFrameSinkAsyncWaiter() = default;

void CompositorFrameSinkAsyncWaiter::SubmitCompositorFrameSync(
    const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, ::viz::mojom::blink::HitTestRegionListPtr hit_test_region_list, uint64_t submit_time, WTF::Vector<viz::ReturnedResource>* out_resources) {
  base::RunLoop loop;
  proxy_->SubmitCompositorFrameSync(std::move(local_surface_id),std::move(frame),std::move(hit_test_region_list),std::move(submit_time),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<viz::ReturnedResource>* out_resources
,
             const WTF::Vector<viz::ReturnedResource>& resources) {*out_resources = std::move(resources);
            loop->Quit();
          },
          &loop,
          out_resources));
  loop.Run();
}



void CompositorFrameSinkClientInterceptorForTesting::DidReceiveCompositorFrameAck(const WTF::Vector<viz::ReturnedResource>& resources) {
  GetForwardingInterface()->DidReceiveCompositorFrameAck(std::move(resources));
}
void CompositorFrameSinkClientInterceptorForTesting::OnBeginFrame(const viz::BeginFrameArgs& args, WTF::HashMap<uint32_t, ::gfx::mojom::blink::PresentationFeedbackPtr> presentations) {
  GetForwardingInterface()->OnBeginFrame(std::move(args), std::move(presentations));
}
void CompositorFrameSinkClientInterceptorForTesting::OnBeginFramePausedChanged(bool paused) {
  GetForwardingInterface()->OnBeginFramePausedChanged(std::move(paused));
}
void CompositorFrameSinkClientInterceptorForTesting::ReclaimResources(const WTF::Vector<viz::ReturnedResource>& resources) {
  GetForwardingInterface()->ReclaimResources(std::move(resources));
}
CompositorFrameSinkClientAsyncWaiter::CompositorFrameSinkClientAsyncWaiter(
    CompositorFrameSinkClient* proxy) : proxy_(proxy) {}

CompositorFrameSinkClientAsyncWaiter::~CompositorFrameSinkClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif