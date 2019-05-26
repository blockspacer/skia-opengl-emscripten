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


#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void InstalledAppProviderInterceptorForTesting::FilterInstalledApps(std::vector<::blink::mojom::RelatedApplicationPtr> related_apps, FilterInstalledAppsCallback callback) {
  GetForwardingInterface()->FilterInstalledApps(std::move(related_apps), std::move(callback));
}
InstalledAppProviderAsyncWaiter::InstalledAppProviderAsyncWaiter(
    InstalledAppProvider* proxy) : proxy_(proxy) {}

InstalledAppProviderAsyncWaiter::~InstalledAppProviderAsyncWaiter() = default;

void InstalledAppProviderAsyncWaiter::FilterInstalledApps(
    std::vector<::blink::mojom::RelatedApplicationPtr> related_apps, std::vector<::blink::mojom::RelatedApplicationPtr>* out_installedApps) {
  base::RunLoop loop;
  proxy_->FilterInstalledApps(std::move(related_apps),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::blink::mojom::RelatedApplicationPtr>* out_installedApps
,
             std::vector<::blink::mojom::RelatedApplicationPtr> installedApps) {*out_installedApps = std::move(installedApps);
            loop->Quit();
          },
          &loop,
          out_installedApps));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif