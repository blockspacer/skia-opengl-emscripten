// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_BLINK_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace viz {
namespace mojom {

enum class ProtectedVideoState : int32_t;
}  // namespace viz
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct viz_mojom_internal_ProtectedVideoState_DataHashFn;

template <>
struct DefaultHash<::viz::mojom::ProtectedVideoState> {
  using Hash = viz_mojom_internal_ProtectedVideoState_DataHashFn;
};
}  // namespace WTF


namespace viz {
namespace mojom {
namespace blink {
using ProtectedVideoState = ProtectedVideoState;  // Alias for definition in the parent namespace.
class DebugBorderQuadState;
using DebugBorderQuadStatePtr = mojo::InlinedStructPtr<DebugBorderQuadState>;

class RenderPassQuadState;
using RenderPassQuadStatePtr = mojo::StructPtr<RenderPassQuadState>;

class SolidColorQuadState;
using SolidColorQuadStatePtr = mojo::InlinedStructPtr<SolidColorQuadState>;

class StreamVideoQuadState;
using StreamVideoQuadStatePtr = mojo::StructPtr<StreamVideoQuadState>;

class SurfaceQuadState;
using SurfaceQuadStatePtr = mojo::StructPtr<SurfaceQuadState>;

class TextureQuadState;
using TextureQuadStatePtr = mojo::StructPtr<TextureQuadState>;

class TileQuadState;
using TileQuadStatePtr = mojo::StructPtr<TileQuadState>;

class YUVVideoQuadState;
using YUVVideoQuadStatePtr = mojo::StructPtr<YUVVideoQuadState>;

class VideoHoleQuadState;
using VideoHoleQuadStatePtr = mojo::StructPtr<VideoHoleQuadState>;

class DrawQuad;
using DrawQuadPtr = mojo::StructPtr<DrawQuad>;

class DrawQuadState;

typedef mojo::StructPtr<DrawQuadState> DrawQuadStatePtr;




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_BLINK_FORWARD_H_