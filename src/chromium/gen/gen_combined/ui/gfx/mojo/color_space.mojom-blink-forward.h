// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_COLOR_SPACE_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_COLOR_SPACE_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gfx {
namespace mojom {

enum class ColorSpacePrimaryID : int32_t;

enum class ColorSpaceTransferID : int32_t;

enum class ColorSpaceMatrixID : int32_t;

enum class ColorSpaceRangeID : int32_t;
}  // namespace gfx
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gfx_mojom_internal_ColorSpacePrimaryID_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::ColorSpacePrimaryID> {
  using Hash = gfx_mojom_internal_ColorSpacePrimaryID_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gfx_mojom_internal_ColorSpaceTransferID_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::ColorSpaceTransferID> {
  using Hash = gfx_mojom_internal_ColorSpaceTransferID_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gfx_mojom_internal_ColorSpaceMatrixID_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::ColorSpaceMatrixID> {
  using Hash = gfx_mojom_internal_ColorSpaceMatrixID_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct gfx_mojom_internal_ColorSpaceRangeID_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::ColorSpaceRangeID> {
  using Hash = gfx_mojom_internal_ColorSpaceRangeID_DataHashFn;
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using ColorSpacePrimaryID = ColorSpacePrimaryID;  // Alias for definition in the parent namespace.
using ColorSpaceTransferID = ColorSpaceTransferID;  // Alias for definition in the parent namespace.
using ColorSpaceMatrixID = ColorSpaceMatrixID;  // Alias for definition in the parent namespace.
using ColorSpaceRangeID = ColorSpaceRangeID;  // Alias for definition in the parent namespace.
class ColorSpace;
using ColorSpacePtr = mojo::StructPtr<ColorSpace>;




}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_COLOR_SPACE_MOJOM_BLINK_FORWARD_H_