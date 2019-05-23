// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/app_banner/app_banner.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT AppBannerControllerInterceptorForTesting : public AppBannerController {
  virtual AppBannerController* GetForwardingInterface() = 0;
  void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const std::vector<std::string>& platform, bool require_gesture, BannerPromptRequestCallback callback) override;
};
class BLINK_COMMON_EXPORT AppBannerControllerAsyncWaiter {
 public:
  explicit AppBannerControllerAsyncWaiter(AppBannerController* proxy);
  ~AppBannerControllerAsyncWaiter();
  void BannerPromptRequest(
      AppBannerServicePtr service, AppBannerEventRequest event, const std::vector<std::string>& platform, bool require_gesture, AppBannerPromptReply* out_reply);

 private:
  AppBannerController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerControllerAsyncWaiter);
};


class BLINK_COMMON_EXPORT AppBannerEventInterceptorForTesting : public AppBannerEvent {
  virtual AppBannerEvent* GetForwardingInterface() = 0;
  void BannerAccepted(const std::string& platform) override;
  void BannerDismissed() override;
};
class BLINK_COMMON_EXPORT AppBannerEventAsyncWaiter {
 public:
  explicit AppBannerEventAsyncWaiter(AppBannerEvent* proxy);
  ~AppBannerEventAsyncWaiter();

 private:
  AppBannerEvent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerEventAsyncWaiter);
};


class BLINK_COMMON_EXPORT AppBannerServiceInterceptorForTesting : public AppBannerService {
  virtual AppBannerService* GetForwardingInterface() = 0;
  void DisplayAppBanner() override;
};
class BLINK_COMMON_EXPORT AppBannerServiceAsyncWaiter {
 public:
  explicit AppBannerServiceAsyncWaiter(AppBannerService* proxy);
  ~AppBannerServiceAsyncWaiter();

 private:
  AppBannerService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AppBannerServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_TEST_UTILS_H_