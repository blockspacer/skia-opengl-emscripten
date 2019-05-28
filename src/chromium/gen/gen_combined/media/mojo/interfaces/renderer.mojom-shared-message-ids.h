// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 949316768 value is based on sha256(salt + "Renderer1").
constexpr uint32_t kRenderer_Initialize_Name = 949316768;
// The 1785500237 value is based on sha256(salt + "Renderer2").
constexpr uint32_t kRenderer_Flush_Name = 1785500237;
// The 1799304730 value is based on sha256(salt + "Renderer3").
constexpr uint32_t kRenderer_StartPlayingFrom_Name = 1799304730;
// The 330833136 value is based on sha256(salt + "Renderer4").
constexpr uint32_t kRenderer_SetPlaybackRate_Name = 330833136;
// The 1785447019 value is based on sha256(salt + "Renderer5").
constexpr uint32_t kRenderer_SetVolume_Name = 1785447019;
// The 1246289852 value is based on sha256(salt + "Renderer6").
constexpr uint32_t kRenderer_SetCdm_Name = 1246289852;
// The 578289171 value is based on sha256(salt + "RendererClient1").
constexpr uint32_t kRendererClient_OnTimeUpdate_Name = 578289171;
// The 548449708 value is based on sha256(salt + "RendererClient2").
constexpr uint32_t kRendererClient_OnBufferingStateChange_Name = 548449708;
// The 1599273608 value is based on sha256(salt + "RendererClient3").
constexpr uint32_t kRendererClient_OnEnded_Name = 1599273608;
// The 851564752 value is based on sha256(salt + "RendererClient4").
constexpr uint32_t kRendererClient_OnError_Name = 851564752;
// The 1073931321 value is based on sha256(salt + "RendererClient5").
constexpr uint32_t kRendererClient_OnAudioConfigChange_Name = 1073931321;
// The 1784179500 value is based on sha256(salt + "RendererClient6").
constexpr uint32_t kRendererClient_OnVideoConfigChange_Name = 1784179500;
// The 884485920 value is based on sha256(salt + "RendererClient7").
constexpr uint32_t kRendererClient_OnVideoNaturalSizeChange_Name = 884485920;
// The 814240764 value is based on sha256(salt + "RendererClient8").
constexpr uint32_t kRendererClient_OnVideoOpacityChange_Name = 814240764;
// The 1722242111 value is based on sha256(salt + "RendererClient9").
constexpr uint32_t kRendererClient_OnStatisticsUpdate_Name = 1722242111;
// The 1217102967 value is based on sha256(salt + "RendererClient10").
constexpr uint32_t kRendererClient_OnWaiting_Name = 1217102967;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_SHARED_MESSAGE_IDS_H_