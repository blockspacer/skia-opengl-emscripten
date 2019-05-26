// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_FORWARD_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace skia {
namespace mojom {
class ImageInfoDataView;


enum class ColorType : int32_t;

enum class AlphaType : int32_t;
class ImageInfo;
using ImageInfoPtr = mojo::StructPtr<ImageInfo>;




}  // namespace mojom
}  // namespace skia
#include "third_party/skia/include/core/SkImageInfo.h"

#endif  // SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_FORWARD_H_