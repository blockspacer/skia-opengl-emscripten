// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "ui/base/mojo/cursor.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef UI_BASE_MOJO_CURSOR_MOJOM_JUMBO_H_
#define UI_BASE_MOJO_CURSOR_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/cursor_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace ui {
namespace mojom {




}  // namespace mojom
}  // namespace ui

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif