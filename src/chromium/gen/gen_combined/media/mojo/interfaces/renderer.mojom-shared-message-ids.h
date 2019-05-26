// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1202796772 value is based on sha256(salt + "Renderer1").
constexpr uint32_t kRenderer_Initialize_Name = 1202796772;
// The 1546775515 value is based on sha256(salt + "Renderer2").
constexpr uint32_t kRenderer_Flush_Name = 1546775515;
// The 84776222 value is based on sha256(salt + "Renderer3").
constexpr uint32_t kRenderer_StartPlayingFrom_Name = 84776222;
// The 2121316095 value is based on sha256(salt + "Renderer4").
constexpr uint32_t kRenderer_SetPlaybackRate_Name = 2121316095;
// The 349279257 value is based on sha256(salt + "Renderer5").
constexpr uint32_t kRenderer_SetVolume_Name = 349279257;
// The 161414629 value is based on sha256(salt + "Renderer6").
constexpr uint32_t kRenderer_SetCdm_Name = 161414629;
// The 926680398 value is based on sha256(salt + "RendererClient1").
constexpr uint32_t kRendererClient_OnTimeUpdate_Name = 926680398;
// The 1806265612 value is based on sha256(salt + "RendererClient2").
constexpr uint32_t kRendererClient_OnBufferingStateChange_Name = 1806265612;
// The 1347589818 value is based on sha256(salt + "RendererClient3").
constexpr uint32_t kRendererClient_OnEnded_Name = 1347589818;
// The 1832716856 value is based on sha256(salt + "RendererClient4").
constexpr uint32_t kRendererClient_OnError_Name = 1832716856;
// The 1988318062 value is based on sha256(salt + "RendererClient5").
constexpr uint32_t kRendererClient_OnAudioConfigChange_Name = 1988318062;
// The 959034290 value is based on sha256(salt + "RendererClient6").
constexpr uint32_t kRendererClient_OnVideoConfigChange_Name = 959034290;
// The 128591908 value is based on sha256(salt + "RendererClient7").
constexpr uint32_t kRendererClient_OnVideoNaturalSizeChange_Name = 128591908;
// The 580953779 value is based on sha256(salt + "RendererClient8").
constexpr uint32_t kRendererClient_OnVideoOpacityChange_Name = 580953779;
// The 1182639154 value is based on sha256(salt + "RendererClient9").
constexpr uint32_t kRendererClient_OnStatisticsUpdate_Name = 1182639154;
// The 898913442 value is based on sha256(salt + "RendererClient10").
constexpr uint32_t kRendererClient_OnWaiting_Name = 898913442;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_