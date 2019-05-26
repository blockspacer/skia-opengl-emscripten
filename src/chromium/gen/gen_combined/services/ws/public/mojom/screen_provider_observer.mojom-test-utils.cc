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


#include "services/ws/public/mojom/screen_provider_observer.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/ws/public/mojom/window_tree_constants.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_JUMBO_H_
#include "ui/display/mojo/display_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace ws {
namespace mojom {


void ScreenProviderObserverInterceptorForTesting::OnDisplaysChanged(std::vector<::ws::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id, int64_t display_id_for_new_windows) {
  GetForwardingInterface()->OnDisplaysChanged(std::move(displays), std::move(primary_display_id), std::move(internal_display_id), std::move(display_id_for_new_windows));
}
ScreenProviderObserverAsyncWaiter::ScreenProviderObserverAsyncWaiter(
    ScreenProviderObserver* proxy) : proxy_(proxy) {}

ScreenProviderObserverAsyncWaiter::~ScreenProviderObserverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif