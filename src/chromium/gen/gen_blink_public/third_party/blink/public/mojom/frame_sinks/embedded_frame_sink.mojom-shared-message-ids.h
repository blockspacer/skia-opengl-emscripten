// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 371881454 value is based on sha256(salt + "SurfaceEmbedder1").
constexpr uint32_t kSurfaceEmbedder_SetLocalSurfaceId_Name = 371881454;
// The 1709247850 value is based on sha256(salt + "EmbeddedFrameSinkClient1").
constexpr uint32_t kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name = 1709247850;
// The 637633289 value is based on sha256(salt + "EmbeddedFrameSinkClient2").
constexpr uint32_t kEmbeddedFrameSinkClient_BindSurfaceEmbedder_Name = 637633289;
// The 1400555214 value is based on sha256(salt + "EmbeddedFrameSinkProvider1").
constexpr uint32_t kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name = 1400555214;
// The 96487411 value is based on sha256(salt + "EmbeddedFrameSinkProvider2").
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name = 96487411;
// The 1971874312 value is based on sha256(salt + "EmbeddedFrameSinkProvider3").
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name = 1971874312;
// The 582313515 value is based on sha256(salt + "EmbeddedFrameSinkProvider4").
constexpr uint32_t kEmbeddedFrameSinkProvider_ConnectToEmbedder_Name = 582313515;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_