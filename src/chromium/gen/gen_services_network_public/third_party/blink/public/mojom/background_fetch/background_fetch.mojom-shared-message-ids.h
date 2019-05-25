// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 50409076 value is based on sha256(salt + "BackgroundFetchRegistrationObserver1").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnProgress_Name = 50409076;
// The 567813130 value is based on sha256(salt + "BackgroundFetchRegistrationObserver2").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnRecordsUnavailable_Name = 567813130;
// The 1298566091 value is based on sha256(salt + "BackgroundFetchRegistrationObserver3").
constexpr uint32_t kBackgroundFetchRegistrationObserver_OnRequestCompleted_Name = 1298566091;
// The 1726890115 value is based on sha256(salt + "BackgroundFetchService1").
constexpr uint32_t kBackgroundFetchService_Fetch_Name = 1726890115;
// The 637746350 value is based on sha256(salt + "BackgroundFetchService2").
constexpr uint32_t kBackgroundFetchService_GetRegistration_Name = 637746350;
// The 1701826751 value is based on sha256(salt + "BackgroundFetchService3").
constexpr uint32_t kBackgroundFetchService_GetDeveloperIds_Name = 1701826751;
// The 2102262936 value is based on sha256(salt + "BackgroundFetchService4").
constexpr uint32_t kBackgroundFetchService_GetIconDisplaySize_Name = 2102262936;
// The 1855074542 value is based on sha256(salt + "BackgroundFetchRegistrationService1").
constexpr uint32_t kBackgroundFetchRegistrationService_UpdateUI_Name = 1855074542;
// The 2010005149 value is based on sha256(salt + "BackgroundFetchRegistrationService2").
constexpr uint32_t kBackgroundFetchRegistrationService_Abort_Name = 2010005149;
// The 132437146 value is based on sha256(salt + "BackgroundFetchRegistrationService3").
constexpr uint32_t kBackgroundFetchRegistrationService_MatchRequests_Name = 132437146;
// The 1355952840 value is based on sha256(salt + "BackgroundFetchRegistrationService4").
constexpr uint32_t kBackgroundFetchRegistrationService_AddRegistrationObserver_Name = 1355952840;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_MESSAGE_IDS_H_