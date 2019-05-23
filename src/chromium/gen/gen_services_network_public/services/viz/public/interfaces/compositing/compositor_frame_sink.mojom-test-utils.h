// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_TEST_UTILS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_TEST_UTILS_H_

#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom.h"


namespace viz {
namespace mojom {


class  CompositorFrameSinkInterceptorForTesting : public CompositorFrameSink {
  virtual CompositorFrameSink* GetForwardingInterface() = 0;
  void SetNeedsBeginFrame(bool needs_begin_frame) override;
  void SetWantsAnimateOnlyBeginFrames() override;
  void SubmitCompositorFrame(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time) override;
  void SubmitCompositorFrameSync(const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time, SubmitCompositorFrameSyncCallback callback) override;
  void DidNotProduceFrame(const viz::BeginFrameAck& ack) override;
  void DidAllocateSharedBitmap(mojo::ScopedSharedBufferHandle buffer, const gpu::Mailbox& id) override;
  void DidDeleteSharedBitmap(const gpu::Mailbox& id) override;
};
class  CompositorFrameSinkAsyncWaiter {
 public:
  explicit CompositorFrameSinkAsyncWaiter(CompositorFrameSink* proxy);
  ~CompositorFrameSinkAsyncWaiter();
  void SubmitCompositorFrameSync(
      const viz::LocalSurfaceId& local_surface_id, viz::CompositorFrame frame, base::Optional<viz::HitTestRegionList> hit_test_region_list, uint64_t submit_time, std::vector<viz::ReturnedResource>* out_resources);

 private:
  CompositorFrameSink* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CompositorFrameSinkAsyncWaiter);
};


class  CompositorFrameSinkClientInterceptorForTesting : public CompositorFrameSinkClient {
  virtual CompositorFrameSinkClient* GetForwardingInterface() = 0;
  void DidReceiveCompositorFrameAck(const std::vector<viz::ReturnedResource>& resources) override;
  void OnBeginFrame(const viz::BeginFrameArgs& args, const base::flat_map<uint32_t, gfx::PresentationFeedback>& presentations) override;
  void OnBeginFramePausedChanged(bool paused) override;
  void ReclaimResources(const std::vector<viz::ReturnedResource>& resources) override;
};
class  CompositorFrameSinkClientAsyncWaiter {
 public:
  explicit CompositorFrameSinkClientAsyncWaiter(CompositorFrameSinkClient* proxy);
  ~CompositorFrameSinkClientAsyncWaiter();

 private:
  CompositorFrameSinkClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CompositorFrameSinkClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_TEST_UTILS_H_