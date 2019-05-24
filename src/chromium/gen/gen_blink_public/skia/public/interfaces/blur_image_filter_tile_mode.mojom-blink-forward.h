// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BLUR_IMAGE_FILTER_TILE_MODE_MOJOM_BLINK_FORWARD_H_
#define SKIA_PUBLIC_INTERFACES_BLUR_IMAGE_FILTER_TILE_MODE_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace skia {
namespace mojom {

enum class BlurTileMode : int32_t;
}  // namespace skia
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct skia_mojom_internal_BlurTileMode_DataHashFn;

template <>
struct DefaultHash<::skia::mojom::BlurTileMode> {
  using Hash = skia_mojom_internal_BlurTileMode_DataHashFn;
};
}  // namespace WTF


namespace skia {
namespace mojom {
namespace blink {
using BlurTileMode = BlurTileMode;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_BLUR_IMAGE_FILTER_TILE_MODE_MOJOM_BLINK_FORWARD_H_