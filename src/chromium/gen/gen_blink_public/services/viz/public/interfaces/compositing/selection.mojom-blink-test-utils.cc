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


#include "services/viz/public/interfaces/compositing/selection.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ui/gfx/mojo/selection_bound.mojom-blink.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SELECTION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SELECTION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace viz {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif