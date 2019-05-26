// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_RRECT_F_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_RRECT_F_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gfx {
namespace mojom {

enum class RRectFType : int32_t;
}  // namespace gfx
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct gfx_mojom_internal_RRectFType_DataHashFn;

template <>
struct DefaultHash<::gfx::mojom::RRectFType> {
  using Hash = gfx_mojom_internal_RRectFType_DataHashFn;
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {
using RRectFType = RRectFType;  // Alias for definition in the parent namespace.
class RRectF;
using RRectFPtr = mojo::StructPtr<RRectF>;




}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_RRECT_F_MOJOM_BLINK_FORWARD_H_