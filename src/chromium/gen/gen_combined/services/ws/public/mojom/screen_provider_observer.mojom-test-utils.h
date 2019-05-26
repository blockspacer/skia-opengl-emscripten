// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/screen_provider_observer.mojom.h"


namespace ws {
namespace mojom {


class  ScreenProviderObserverInterceptorForTesting : public ScreenProviderObserver {
  virtual ScreenProviderObserver* GetForwardingInterface() = 0;
  void OnDisplaysChanged(std::vector<::ws::mojom::WsDisplayPtr> displays, int64_t primary_display_id, int64_t internal_display_id, int64_t display_id_for_new_windows) override;
};
class  ScreenProviderObserverAsyncWaiter {
 public:
  explicit ScreenProviderObserverAsyncWaiter(ScreenProviderObserver* proxy);
  ~ScreenProviderObserverAsyncWaiter();

 private:
  ScreenProviderObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ScreenProviderObserverAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_TEST_UTILS_H_