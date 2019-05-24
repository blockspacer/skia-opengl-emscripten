// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_FONT_RENDER_PARAMS_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_FONT_RENDER_PARAMS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace gfx {
namespace mojom {

enum class Hinting : int32_t;

enum class SubpixelRendering : int32_t;
}  // namespace gfx
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gfx_mojom_internal_Hinting_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::Hinting> {
  using Hash = gfx_mojom_internal_Hinting_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gfx_mojom_internal_SubpixelRendering_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::SubpixelRendering> {
  using Hash = gfx_mojom_internal_SubpixelRendering_DataHashFn;
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using Hinting = Hinting;  // Alias for definition in the parent namespace.
using SubpixelRendering = SubpixelRendering;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_FONT_RENDER_PARAMS_MOJOM_BLINK_FORWARD_H_