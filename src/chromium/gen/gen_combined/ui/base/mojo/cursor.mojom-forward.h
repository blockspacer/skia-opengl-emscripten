// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CURSOR_MOJOM_FORWARD_H_
#define UI_BASE_MOJO_CURSOR_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class CursorDataView;


enum class CursorType : int32_t;

enum class CursorSize : int32_t;
class Cursor;
using CursorPtr = mojo::StructPtr<Cursor>;




}  // namespace mojom
}  // namespace ui
#include "ui/base/cursor/cursor.h"
#include "ui/base/cursor/cursor_type.h"

#endif  // UI_BASE_MOJO_CURSOR_MOJOM_FORWARD_H_