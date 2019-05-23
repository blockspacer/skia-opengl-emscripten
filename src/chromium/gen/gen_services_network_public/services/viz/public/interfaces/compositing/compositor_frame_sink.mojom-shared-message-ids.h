// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 1173771966 value is based on sha256(salt + "CompositorFrameSink1").
constexpr uint32_t kCompositorFrameSink_SetNeedsBeginFrame_Name = 1173771966;
// The 2053343606 value is based on sha256(salt + "CompositorFrameSink2").
constexpr uint32_t kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name = 2053343606;
// The 905079522 value is based on sha256(salt + "CompositorFrameSink3").
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrame_Name = 905079522;
// The 472708910 value is based on sha256(salt + "CompositorFrameSink4").
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrameSync_Name = 472708910;
// The 600636426 value is based on sha256(salt + "CompositorFrameSink5").
constexpr uint32_t kCompositorFrameSink_DidNotProduceFrame_Name = 600636426;
// The 1904722982 value is based on sha256(salt + "CompositorFrameSink6").
constexpr uint32_t kCompositorFrameSink_DidAllocateSharedBitmap_Name = 1904722982;
// The 685486194 value is based on sha256(salt + "CompositorFrameSink7").
constexpr uint32_t kCompositorFrameSink_DidDeleteSharedBitmap_Name = 685486194;
// The 1148482709 value is based on sha256(salt + "CompositorFrameSinkClient1").
constexpr uint32_t kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name = 1148482709;
// The 356353648 value is based on sha256(salt + "CompositorFrameSinkClient2").
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFrame_Name = 356353648;
// The 776005784 value is based on sha256(salt + "CompositorFrameSinkClient3").
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name = 776005784;
// The 919962509 value is based on sha256(salt + "CompositorFrameSinkClient4").
constexpr uint32_t kCompositorFrameSinkClient_ReclaimResources_Name = 919962509;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_