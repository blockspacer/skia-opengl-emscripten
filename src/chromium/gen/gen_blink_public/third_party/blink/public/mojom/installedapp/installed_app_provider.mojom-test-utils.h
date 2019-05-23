// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/installedapp/installed_app_provider.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT InstalledAppProviderInterceptorForTesting : public InstalledAppProvider {
  virtual InstalledAppProvider* GetForwardingInterface() = 0;
  void FilterInstalledApps(std::vector<::blink::mojom::RelatedApplicationPtr> related_apps, FilterInstalledAppsCallback callback) override;
};
class BLINK_COMMON_EXPORT InstalledAppProviderAsyncWaiter {
 public:
  explicit InstalledAppProviderAsyncWaiter(InstalledAppProvider* proxy);
  ~InstalledAppProviderAsyncWaiter();
  void FilterInstalledApps(
      std::vector<::blink::mojom::RelatedApplicationPtr> related_apps, std::vector<::blink::mojom::RelatedApplicationPtr>* out_installedApps);

 private:
  InstalledAppProvider* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InstalledAppProviderAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_INSTALLED_APP_PROVIDER_MOJOM_TEST_UTILS_H_