// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/app_banner/app_banner.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT AppBannerControllerInterceptorForTesting : public AppBannerController {
  virtual AppBannerController* GetForwardingInterface() = 0;
  void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, bool require_gesture, BannerPromptRequestCallback callback) override;
};
class PLATFORM_EXPORT AppBannerControllerAsyncWaiter {
 public:
  explicit AppBannerControllerAsyncWaiter(AppBannerController* proxy);
  ~AppBannerControllerAsyncWaiter();
  void BannerPromptRequest(
      AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, bool require_gesture, AppBannerPromptReply* out_reply);

 private:
  AppBannerController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerControllerAsyncWaiter);
};


class PLATFORM_EXPORT AppBannerEventInterceptorForTesting : public AppBannerEvent {
  virtual AppBannerEvent* GetForwardingInterface() = 0;
  void BannerAccepted(const WTF::String& platform) override;
  void BannerDismissed() override;
};
class PLATFORM_EXPORT AppBannerEventAsyncWaiter {
 public:
  explicit AppBannerEventAsyncWaiter(AppBannerEvent* proxy);
  ~AppBannerEventAsyncWaiter();

 private:
  AppBannerEvent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerEventAsyncWaiter);
};


class PLATFORM_EXPORT AppBannerServiceInterceptorForTesting : public AppBannerService {
  virtual AppBannerService* GetForwardingInterface() = 0;
  void DisplayAppBanner() override;
};
class PLATFORM_EXPORT AppBannerServiceAsyncWaiter {
 public:
  explicit AppBannerServiceAsyncWaiter(AppBannerService* proxy);
  ~AppBannerServiceAsyncWaiter();

 private:
  AppBannerService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_TEST_UTILS_H_