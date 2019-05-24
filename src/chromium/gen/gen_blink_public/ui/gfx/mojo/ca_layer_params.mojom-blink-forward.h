// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_BLINK_FORWARD_H_
#define UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace gfx {
namespace mojom {
}  // namespace gfx
}  // namespace mojom


namespace gfx {
namespace mojom {
namespace blink {
class CALayerParams;
using CALayerParamsPtr = mojo::StructPtr<CALayerParams>;

class CALayerContent;

typedef mojo::StructPtr<CALayerContent> CALayerContentPtr;




}  // namespace blink
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_BLINK_FORWARD_H_