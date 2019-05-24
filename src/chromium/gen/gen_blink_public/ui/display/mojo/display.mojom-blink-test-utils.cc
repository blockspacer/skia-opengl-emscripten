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


#include "ui/display/mojo/display.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef UI_DISPLAY_MOJO_DISPLAY_MOJOM_BLINK_JUMBO_H_
#define UI_DISPLAY_MOJO_DISPLAY_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace display {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace display

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif