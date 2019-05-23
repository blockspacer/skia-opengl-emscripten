// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/page/display_cutout.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT DisplayCutoutHostInterceptorForTesting : public DisplayCutoutHost {
  virtual DisplayCutoutHost* GetForwardingInterface() = 0;
  void NotifyViewportFitChanged(ViewportFit value) override;
};
class BLINK_COMMON_EXPORT DisplayCutoutHostAsyncWaiter {
 public:
  explicit DisplayCutoutHostAsyncWaiter(DisplayCutoutHost* proxy);
  ~DisplayCutoutHostAsyncWaiter();

 private:
  DisplayCutoutHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayCutoutHostAsyncWaiter);
};


class BLINK_COMMON_EXPORT DisplayCutoutClientInterceptorForTesting : public DisplayCutoutClient {
  virtual DisplayCutoutClient* GetForwardingInterface() = 0;
  void SetSafeArea(DisplayCutoutSafeAreaPtr safe_area) override;
};
class BLINK_COMMON_EXPORT DisplayCutoutClientAsyncWaiter {
 public:
  explicit DisplayCutoutClientAsyncWaiter(DisplayCutoutClient* proxy);
  ~DisplayCutoutClientAsyncWaiter();

 private:
  DisplayCutoutClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DisplayCutoutClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_TEST_UTILS_H_