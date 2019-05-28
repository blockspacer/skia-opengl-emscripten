// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 871113896 value is based on sha256(salt + "BackgroundFetchRegistrationObserver1").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnProgress_Name = 871113896;
// The 2125312477 value is based on sha256(salt + "BackgroundFetchRegistrationObserver2").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnRecordsUnavailable_Name = 2125312477;
// The 1597155213 value is based on sha256(salt + "BackgroundFetchRegistrationObserver3").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnRequestCompleted_Name = 1597155213;
// The 1614585878 value is based on sha256(salt + "BackgroundFetchService1").
constexpr uint32_t kBackgroundFetchService_Fetch_Name = 1614585878;
// The 1355730223 value is based on sha256(salt + "BackgroundFetchService2").
constexpr uint32_t kBackgroundFetchService_GetRegistration_Name = 1355730223;
// The 1249517665 value is based on sha256(salt + "BackgroundFetchService3").
constexpr uint32_t kBackgroundFetchService_GetDeveloperIds_Name = 1249517665;
// The 211142581 value is based on sha256(salt + "BackgroundFetchService4").
constexpr uint32_t kBackgroundFetchService_GetIconDisplaySize_Name = 211142581;
// The 177129600 value is based on sha256(salt + "BackgroundFetchRegistrationService1").
constexpr uint32_t kBackgroundFetchRegistrationService_UpdateUI_Name = 177129600;
// The 1604363771 value is based on sha256(salt + "BackgroundFetchRegistrationService2").
constexpr uint32_t kBackgroundFetchRegistrationService_Abort_Name = 1604363771;
// The 376613658 value is based on sha256(salt + "BackgroundFetchRegistrationService3").
constexpr uint32_t kBackgroundFetchRegistrationService_MatchRequests_Name = 376613658;
// The 736860190 value is based on sha256(salt + "BackgroundFetchRegistrationService4").
constexpr uint32_t kBackgroundFetchRegistrationService_AddRegistrationObserver_Name = 736860190;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_