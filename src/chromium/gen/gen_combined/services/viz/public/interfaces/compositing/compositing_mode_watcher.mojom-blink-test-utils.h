// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/viz/public/interfaces/compositing/compositing_mode_watcher.mojom-blink.h"


namespace viz {
namespace mojom {
namespace blink {


class  CompositingModeWatcherInterceptorForTesting : public CompositingModeWatcher {
  virtual CompositingModeWatcher* GetForwardingInterface() = 0;
  void CompositingModeFallbackToSoftware() override;
};
class  CompositingModeWatcherAsyncWaiter {
 public:
  explicit CompositingModeWatcherAsyncWaiter(CompositingModeWatcher* proxy);
  ~CompositingModeWatcherAsyncWaiter();

 private:
  CompositingModeWatcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CompositingModeWatcherAsyncWaiter);
};


class  CompositingModeReporterInterceptorForTesting : public CompositingModeReporter {
  virtual CompositingModeReporter* GetForwardingInterface() = 0;
  void AddCompositingModeWatcher(CompositingModeWatcherPtr watcher) override;
};
class  CompositingModeReporterAsyncWaiter {
 public:
  explicit CompositingModeReporterAsyncWaiter(CompositingModeReporter* proxy);
  ~CompositingModeReporterAsyncWaiter();

 private:
  CompositingModeReporter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CompositingModeReporterAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_BLINK_TEST_UTILS_H_