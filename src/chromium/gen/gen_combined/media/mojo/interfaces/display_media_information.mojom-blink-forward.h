// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {

enum class DisplayCaptureSurfaceType : int32_t;

enum class CursorCaptureType : int32_t;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_DisplayCaptureSurfaceType_DataHashFn;

template <>
struct DefaultHash<::media::mojom::DisplayCaptureSurfaceType> {
  using Hash = media_mojom_internal_DisplayCaptureSurfaceType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_CursorCaptureType_DataHashFn;

template <>
struct DefaultHash<::media::mojom::CursorCaptureType> {
  using Hash = media_mojom_internal_CursorCaptureType_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using DisplayCaptureSurfaceType = DisplayCaptureSurfaceType;  // Alias for definition in the parent namespace.
using CursorCaptureType = CursorCaptureType;  // Alias for definition in the parent namespace.
class DisplayMediaInformation;
using DisplayMediaInformationPtr = mojo::InlinedStructPtr<DisplayMediaInformation>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_BLINK_FORWARD_H_