// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace viz {
namespace mojom {

namespace internal {


// The 1993786273 value is based on sha256(salt + "CompositorFrameSink1").
constexpr uint32_t kCompositorFrameSink_SetNeedsBeginFrame_Name = 1993786273;
// The 1430360963 value is based on sha256(salt + "CompositorFrameSink2").
constexpr uint32_t kCompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Name = 1430360963;
// The 649592102 value is based on sha256(salt + "CompositorFrameSink3").
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrame_Name = 649592102;
// The 1098152945 value is based on sha256(salt + "CompositorFrameSink4").
constexpr uint32_t kCompositorFrameSink_SubmitCompositorFrameSync_Name = 1098152945;
// The 280403670 value is based on sha256(salt + "CompositorFrameSink5").
constexpr uint32_t kCompositorFrameSink_DidNotProduceFrame_Name = 280403670;
// The 99245752 value is based on sha256(salt + "CompositorFrameSink6").
constexpr uint32_t kCompositorFrameSink_DidAllocateSharedBitmap_Name = 99245752;
// The 307998388 value is based on sha256(salt + "CompositorFrameSink7").
constexpr uint32_t kCompositorFrameSink_DidDeleteSharedBitmap_Name = 307998388;
// The 1712904177 value is based on sha256(salt + "CompositorFrameSinkClient1").
constexpr uint32_t kCompositorFrameSinkClient_DidReceiveCompositorFrameAck_Name = 1712904177;
// The 1257227813 value is based on sha256(salt + "CompositorFrameSinkClient2").
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFrame_Name = 1257227813;
// The 1737048750 value is based on sha256(salt + "CompositorFrameSinkClient3").
constexpr uint32_t kCompositorFrameSinkClient_OnBeginFramePausedChanged_Name = 1737048750;
// The 1526739050 value is based on sha256(salt + "CompositorFrameSinkClient4").
constexpr uint32_t kCompositorFrameSinkClient_ReclaimResources_Name = 1526739050;

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_