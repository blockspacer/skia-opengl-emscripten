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


#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_JUMBO_H_
#endif


namespace viz {
namespace mojom {
namespace blink {


void CompositingModeWatcherInterceptorForTesting::CompositingModeFallbackToSoftware() {
  GetForwardingInterface()->CompositingModeFallbackToSoftware();
}
CompositingModeWatcherAsyncWaiter::CompositingModeWatcherAsyncWaiter(
    CompositingModeWatcher* proxy) : proxy_(proxy) {}

CompositingModeWatcherAsyncWaiter::~CompositingModeWatcherAsyncWaiter() = default;




void CompositingModeReporterInterceptorForTesting::AddCompositingModeWatcher(CompositingModeWatcherPtr watcher) {
  GetForwardingInterface()->AddCompositingModeWatcher(std::move(watcher));
}
CompositingModeReporterAsyncWaiter::CompositingModeReporterAsyncWaiter(
    CompositingModeReporter* proxy) : proxy_(proxy) {}

CompositingModeReporterAsyncWaiter::~CompositingModeReporterAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif