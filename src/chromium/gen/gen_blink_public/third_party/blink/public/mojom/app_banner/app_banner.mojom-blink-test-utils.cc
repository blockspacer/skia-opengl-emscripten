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


#include "third_party/blink/public/mojom/app_banner/app_banner.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void AppBannerControllerInterceptorForTesting::BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, bool require_gesture, BannerPromptRequestCallback callback) {
  GetForwardingInterface()->BannerPromptRequest(std::move(service), std::move(event), std::move(platform), std::move(require_gesture), std::move(callback));
}
AppBannerControllerAsyncWaiter::AppBannerControllerAsyncWaiter(
    AppBannerController* proxy) : proxy_(proxy) {}

AppBannerControllerAsyncWaiter::~AppBannerControllerAsyncWaiter() = default;

void AppBannerControllerAsyncWaiter::BannerPromptRequest(
    AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, bool require_gesture, AppBannerPromptReply* out_reply) {
  base::RunLoop loop;
  proxy_->BannerPromptRequest(std::move(service),std::move(event),std::move(platform),std::move(require_gesture),
      base::BindOnce(
          [](base::RunLoop* loop,
             AppBannerPromptReply* out_reply
,
             AppBannerPromptReply reply) {*out_reply = std::move(reply);
            loop->Quit();
          },
          &loop,
          out_reply));
  loop.Run();
}



void AppBannerEventInterceptorForTesting::BannerAccepted(const WTF::String& platform) {
  GetForwardingInterface()->BannerAccepted(std::move(platform));
}
void AppBannerEventInterceptorForTesting::BannerDismissed() {
  GetForwardingInterface()->BannerDismissed();
}
AppBannerEventAsyncWaiter::AppBannerEventAsyncWaiter(
    AppBannerEvent* proxy) : proxy_(proxy) {}

AppBannerEventAsyncWaiter::~AppBannerEventAsyncWaiter() = default;




void AppBannerServiceInterceptorForTesting::DisplayAppBanner() {
  GetForwardingInterface()->DisplayAppBanner();
}
AppBannerServiceAsyncWaiter::AppBannerServiceAsyncWaiter(
    AppBannerService* proxy) : proxy_(proxy) {}

AppBannerServiceAsyncWaiter::~AppBannerServiceAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif