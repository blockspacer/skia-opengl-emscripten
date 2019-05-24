// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_MOJOM_BLINK_FORWARD_H_
#define UI_DISPLAY_MOJO_DISPLAY_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {

enum class Rotation : int32_t;

enum class TouchSupport : int32_t;

enum class AccelerometerSupport : int32_t;
}  // namespace display
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct display_mojom_internal_Rotation_DataHashFn;

template <>
struct DefaultHash<::display::mojom::Rotation> {
  using Hash = display_mojom_internal_Rotation_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct display_mojom_internal_TouchSupport_DataHashFn;

template <>
struct DefaultHash<::display::mojom::TouchSupport> {
  using Hash = display_mojom_internal_TouchSupport_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct display_mojom_internal_AccelerometerSupport_DataHashFn;

template <>
struct DefaultHash<::display::mojom::AccelerometerSupport> {
  using Hash = display_mojom_internal_AccelerometerSupport_DataHashFn;
};
}  // namespace WTF


namespace display {
namespace mojom {
namespace blink {
using Rotation = Rotation;  // Alias for definition in the parent namespace.
using TouchSupport = TouchSupport;  // Alias for definition in the parent namespace.
using AccelerometerSupport = AccelerometerSupport;  // Alias for definition in the parent namespace.
class Display;
using DisplayPtr = mojo::StructPtr<Display>;




}  // namespace blink
}  // namespace mojom
}  // namespace display
#include "ui/display/display.h"

#endif  // UI_DISPLAY_MOJO_DISPLAY_MOJOM_BLINK_FORWARD_H_