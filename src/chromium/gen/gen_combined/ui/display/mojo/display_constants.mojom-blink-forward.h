// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_CONSTANTS_MOJOM_BLINK_FORWARD_H_
#define UI_DISPLAY_MOJO_DISPLAY_CONSTANTS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace display {
namespace mojom {

enum class DisplayConnectionType : int32_t;

enum class HDCPState : int32_t;
}  // namespace display
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct display_mojom_internal_DisplayConnectionType_DataHashFn;

template <>
struct DefaultHash<::display::mojom::DisplayConnectionType> {
  using Hash = display_mojom_internal_DisplayConnectionType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct display_mojom_internal_HDCPState_DataHashFn;

template <>
struct DefaultHash<::display::mojom::HDCPState> {
  using Hash = display_mojom_internal_HDCPState_DataHashFn;
};
}  // namespace WTF


namespace display {
namespace mojom {
namespace blink {
using DisplayConnectionType = DisplayConnectionType;  // Alias for definition in the parent namespace.
using HDCPState = HDCPState;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_CONSTANTS_MOJOM_BLINK_FORWARD_H_