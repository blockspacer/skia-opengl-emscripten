// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_FORWARD_H_
#define UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class ImageSkiaRepDataView;

class ImageSkiaDataView;

class ImageSkiaRep;
using ImageSkiaRepPtr = mojo::StructPtr<ImageSkiaRep>;

class ImageSkia;
using ImageSkiaPtr = mojo::StructPtr<ImageSkia>;




}  // namespace mojom
}  // namespace gfx
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/image/image_skia.h"
#include "ui/gfx/image/image_skia_rep.h"

#endif  // UI_GFX_IMAGE_MOJO_IMAGE_MOJOM_FORWARD_H_