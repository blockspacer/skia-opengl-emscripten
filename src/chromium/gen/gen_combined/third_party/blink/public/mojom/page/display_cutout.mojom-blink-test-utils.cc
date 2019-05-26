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


#include "third_party/blink/public/mojom/page/display_cutout.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void DisplayCutoutHostInterceptorForTesting::NotifyViewportFitChanged(ViewportFit value) {
  GetForwardingInterface()->NotifyViewportFitChanged(std::move(value));
}
DisplayCutoutHostAsyncWaiter::DisplayCutoutHostAsyncWaiter(
    DisplayCutoutHost* proxy) : proxy_(proxy) {}

DisplayCutoutHostAsyncWaiter::~DisplayCutoutHostAsyncWaiter() = default;




void DisplayCutoutClientInterceptorForTesting::SetSafeArea(DisplayCutoutSafeAreaPtr safe_area) {
  GetForwardingInterface()->SetSafeArea(std::move(safe_area));
}
DisplayCutoutClientAsyncWaiter::DisplayCutoutClientAsyncWaiter(
    DisplayCutoutClient* proxy) : proxy_(proxy) {}

DisplayCutoutClientAsyncWaiter::~DisplayCutoutClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif