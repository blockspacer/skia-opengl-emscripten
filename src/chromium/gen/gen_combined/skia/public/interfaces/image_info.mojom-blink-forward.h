// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_BLINK_FORWARD_H_
#define SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace skia {
namespace mojom {

enum class ColorType : int32_t;

enum class AlphaType : int32_t;
}  // namespace skia
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct skia_mojom_internal_ColorType_DataHashFn;

template <>
struct DefaultHash<::skia::mojom::ColorType> {
  using Hash = skia_mojom_internal_ColorType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct skia_mojom_internal_AlphaType_DataHashFn;

template <>
struct DefaultHash<::skia::mojom::AlphaType> {
  using Hash = skia_mojom_internal_AlphaType_DataHashFn;
};
}  // namespace WTF


namespace skia {
namespace mojom {
namespace blink {
using ColorType = ColorType;  // Alias for definition in the parent namespace.
using AlphaType = AlphaType;  // Alias for definition in the parent namespace.
class ImageInfo;
using ImageInfoPtr = mojo::StructPtr<ImageInfo>;




}  // namespace blink
}  // namespace mojom
}  // namespace skia

#endif  // SKIA_PUBLIC_INTERFACES_IMAGE_INFO_MOJOM_BLINK_FORWARD_H_