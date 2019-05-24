// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SpatialNavigationHostInterceptorForTesting : public SpatialNavigationHost {
  virtual SpatialNavigationHost* GetForwardingInterface() = 0;
  void SpatialNavigationStateChanged(SpatialNavigationStatePtr state) override;
};
class PLATFORM_EXPORT SpatialNavigationHostAsyncWaiter {
 public:
  explicit SpatialNavigationHostAsyncWaiter(SpatialNavigationHost* proxy);
  ~SpatialNavigationHostAsyncWaiter();

 private:
  SpatialNavigationHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SpatialNavigationHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_TEST_UTILS_H_