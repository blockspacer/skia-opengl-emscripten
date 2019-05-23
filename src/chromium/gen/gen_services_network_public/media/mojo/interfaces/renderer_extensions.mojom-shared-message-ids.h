// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1478620038 value is based on sha256(salt + "MediaPlayerRendererClientExtension1").
constexpr uint32_t kMediaPlayerRendererClientExtension_OnVideoSizeChange_Name = 1478620038;
// The 695075540 value is based on sha256(salt + "MediaPlayerRendererClientExtension2").
constexpr uint32_t kMediaPlayerRendererClientExtension_OnDurationChange_Name = 695075540;
// The 73283758 value is based on sha256(salt + "MediaPlayerRendererExtension1").
constexpr uint32_t kMediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Name = 73283758;
// The 1454122019 value is based on sha256(salt + "FlingingRendererClientExtension1").
constexpr uint32_t kFlingingRendererClientExtension_OnRemotePlayStateChange_Name = 1454122019;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_SHARED_MESSAGE_IDS_H_