// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_SWAP_RESULT_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_SWAP_RESULT_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace gfx {
namespace mojom {

enum class SwapResult : int32_t;
}  // namespace gfx
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gfx_mojom_internal_SwapResult_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::SwapResult> {
  using Hash = gfx_mojom_internal_SwapResult_DataHashFn;
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using SwapResult = SwapResult;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_SWAP_RESULT_MOJOM_BLINK_FORWARD_H_