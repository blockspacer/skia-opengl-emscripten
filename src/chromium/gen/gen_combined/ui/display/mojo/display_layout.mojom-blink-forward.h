// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_FORWARD_H_
#define UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {

enum class Position : int32_t;

enum class OffsetReference : int32_t;
}  // namespace display
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct display_mojom_internal_Position_DataHashFn;

template <>
struct DefaultHash<::display::mojom::Position> {
  using Hash = display_mojom_internal_Position_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct display_mojom_internal_OffsetReference_DataHashFn;

template <>
struct DefaultHash<::display::mojom::OffsetReference> {
  using Hash = display_mojom_internal_OffsetReference_DataHashFn;
};
}  // namespace WTF


namespace display {
namespace mojom {
namespace blink {
using Position = Position;  // Alias for definition in the parent namespace.
using OffsetReference = OffsetReference;  // Alias for definition in the parent namespace.
class DisplayPlacement;
using DisplayPlacementPtr = mojo::StructPtr<DisplayPlacement>;

class DisplayLayout;
using DisplayLayoutPtr = mojo::StructPtr<DisplayLayout>;




}  // namespace blink
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_LAYOUT_MOJOM_BLINK_FORWARD_H_