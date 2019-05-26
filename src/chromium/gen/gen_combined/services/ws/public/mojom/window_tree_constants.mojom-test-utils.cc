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


#include "services/ws/public/mojom/window_tree_constants.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "ui/base/mojo/ui_base_types.mojom.h"
#include "ui/display/mojo/display.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_CONSTANTS_MOJOM_JUMBO_H_
#include "ui/base/mojo/ui_base_types_struct_traits.h"
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace ws {
namespace mojom {




}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif