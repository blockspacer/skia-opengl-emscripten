// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_FORWARD_H_
#define SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace skia {
namespace mojom {
class BitmapDataView;

class InlineBitmapDataView;

class Bitmap;
using BitmapPtr = mojo::StructPtr<Bitmap>;

class InlineBitmap;
using InlineBitmapPtr = mojo::StructPtr<InlineBitmap>;




}  // namespace mojom
}  // namespace skia
#include "third_party/skia/include/core/SkBitmap.h"

#endif  // SKIA_PUBLIC_INTERFACES_BITMAP_MOJOM_FORWARD_H_