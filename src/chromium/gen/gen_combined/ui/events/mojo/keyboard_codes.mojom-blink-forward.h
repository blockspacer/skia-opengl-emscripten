// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_KEYBOARD_CODES_MOJOM_BLINK_FORWARD_H_
#define UI_EVENTS_MOJO_KEYBOARD_CODES_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace ui {
namespace mojom {

enum class KeyboardCode : int32_t;
}  // namespace ui
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct ui_mojom_internal_KeyboardCode_DataHashFn;

template <>
struct DefaultHash<::ui::mojom::KeyboardCode> {
  using Hash = ui_mojom_internal_KeyboardCode_DataHashFn;
};
}  // namespace WTF


namespace ui {
namespace mojom {
namespace blink {
using KeyboardCode = KeyboardCode;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_KEYBOARD_CODES_MOJOM_BLINK_FORWARD_H_