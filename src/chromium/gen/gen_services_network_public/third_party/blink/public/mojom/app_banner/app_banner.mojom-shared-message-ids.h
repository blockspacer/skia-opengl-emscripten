// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 2131117392 value is based on sha256(salt + "AppBannerController1").
constexpr uint32_t kAppBannerController_BannerPromptRequest_Name = 2131117392;
// The 55638029 value is based on sha256(salt + "AppBannerEvent1").
constexpr uint32_t kAppBannerEvent_BannerAccepted_Name = 55638029;
// The 1987592795 value is based on sha256(salt + "AppBannerEvent2").
constexpr uint32_t kAppBannerEvent_BannerDismissed_Name = 1987592795;
// The 4334810 value is based on sha256(salt + "AppBannerService1").
constexpr uint32_t kAppBannerService_DisplayAppBanner_Name = 4334810;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_SHARED_MESSAGE_IDS_H_