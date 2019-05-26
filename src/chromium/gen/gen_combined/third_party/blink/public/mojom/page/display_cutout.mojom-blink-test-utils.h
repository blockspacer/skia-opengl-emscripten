// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/page/display_cutout.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT DisplayCutoutHostInterceptorForTesting : public DisplayCutoutHost {
  virtual DisplayCutoutHost* GetForwardingInterface() = 0;
  void NotifyViewportFitChanged(ViewportFit value) override;
};
class PLATFORM_EXPORT DisplayCutoutHostAsyncWaiter {
 public:
  explicit DisplayCutoutHostAsyncWaiter(DisplayCutoutHost* proxy);
  ~DisplayCutoutHostAsyncWaiter();

 private:
  DisplayCutoutHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayCutoutHostAsyncWaiter);
};


class PLATFORM_EXPORT DisplayCutoutClientInterceptorForTesting : public DisplayCutoutClient {
  virtual DisplayCutoutClient* GetForwardingInterface() = 0;
  void SetSafeArea(DisplayCutoutSafeAreaPtr safe_area) override;
};
class PLATFORM_EXPORT DisplayCutoutClientAsyncWaiter {
 public:
  explicit DisplayCutoutClientAsyncWaiter(DisplayCutoutClient* proxy);
  ~DisplayCutoutClientAsyncWaiter();

 private:
  DisplayCutoutClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayCutoutClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_BLINK_TEST_UTILS_H_