// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1935336746 value is based on sha256(salt + "SurfaceEmbedder1").
constexpr uint32_t kSurfaceEmbedder_SetLocalSurfaceId_Name = 1935336746;
// The 332424837 value is based on sha256(salt + "EmbeddedFrameSinkClient1").
constexpr uint32_t kEmbeddedFrameSinkClient_OnFirstSurfaceActivation_Name = 332424837;
// The 968279526 value is based on sha256(salt + "EmbeddedFrameSinkClient2").
constexpr uint32_t kEmbeddedFrameSinkClient_BindSurfaceEmbedder_Name = 968279526;
// The 537181413 value is based on sha256(salt + "EmbeddedFrameSinkProvider1").
constexpr uint32_t kEmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Name = 537181413;
// The 917919577 value is based on sha256(salt + "EmbeddedFrameSinkProvider2").
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateCompositorFrameSink_Name = 917919577;
// The 1656389559 value is based on sha256(salt + "EmbeddedFrameSinkProvider3").
constexpr uint32_t kEmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Name = 1656389559;
// The 722714353 value is based on sha256(salt + "EmbeddedFrameSinkProvider4").
constexpr uint32_t kEmbeddedFrameSinkProvider_ConnectToEmbedder_Name = 722714353;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_SHARED_MESSAGE_IDS_H_