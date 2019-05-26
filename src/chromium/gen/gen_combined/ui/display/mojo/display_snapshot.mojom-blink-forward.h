// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_FORWARD_H_
#define UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace display {
namespace mojom {
}  // namespace display
}  // namespace mojom


namespace display {
namespace mojom {
namespace blink {
class DisplaySnapshot;
using DisplaySnapshotPtr = mojo::StructPtr<DisplaySnapshot>;




}  // namespace blink
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_FORWARD_H_