// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 341103377 value is based on sha256(salt + "ServiceWorkerHost1").
constexpr uint32_t kServiceWorkerHost_SetCachedMetadata_Name = 341103377;
// The 1530066974 value is based on sha256(salt + "ServiceWorkerHost2").
constexpr uint32_t kServiceWorkerHost_ClearCachedMetadata_Name = 1530066974;
// The 1538523540 value is based on sha256(salt + "ServiceWorkerHost3").
constexpr uint32_t kServiceWorkerHost_GetClients_Name = 1538523540;
// The 468151863 value is based on sha256(salt + "ServiceWorkerHost4").
constexpr uint32_t kServiceWorkerHost_GetClient_Name = 468151863;
// The 1851773340 value is based on sha256(salt + "ServiceWorkerHost5").
constexpr uint32_t kServiceWorkerHost_OpenNewTab_Name = 1851773340;
// The 1964479397 value is based on sha256(salt + "ServiceWorkerHost6").
constexpr uint32_t kServiceWorkerHost_OpenPaymentHandlerWindow_Name = 1964479397;
// The 1473089908 value is based on sha256(salt + "ServiceWorkerHost7").
constexpr uint32_t kServiceWorkerHost_PostMessageToClient_Name = 1473089908;
// The 897089838 value is based on sha256(salt + "ServiceWorkerHost8").
constexpr uint32_t kServiceWorkerHost_FocusClient_Name = 897089838;
// The 1372142900 value is based on sha256(salt + "ServiceWorkerHost9").
constexpr uint32_t kServiceWorkerHost_NavigateClient_Name = 1372142900;
// The 1537681156 value is based on sha256(salt + "ServiceWorkerHost10").
constexpr uint32_t kServiceWorkerHost_SkipWaiting_Name = 1537681156;
// The 1627559407 value is based on sha256(salt + "ServiceWorkerHost11").
constexpr uint32_t kServiceWorkerHost_ClaimClients_Name = 1627559407;
// The 290434742 value is based on sha256(salt + "ServiceWorker1").
constexpr uint32_t kServiceWorker_InitializeGlobalScope_Name = 290434742;
// The 894878487 value is based on sha256(salt + "ServiceWorker2").
constexpr uint32_t kServiceWorker_DispatchInstallEvent_Name = 894878487;
// The 1874624477 value is based on sha256(salt + "ServiceWorker3").
constexpr uint32_t kServiceWorker_DispatchActivateEvent_Name = 1874624477;
// The 383727272 value is based on sha256(salt + "ServiceWorker4").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchAbortEvent_Name = 383727272;
// The 1449543621 value is based on sha256(salt + "ServiceWorker5").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchClickEvent_Name = 1449543621;
// The 145704989 value is based on sha256(salt + "ServiceWorker6").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchFailEvent_Name = 145704989;
// The 1515964977 value is based on sha256(salt + "ServiceWorker7").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name = 1515964977;
// The 105858412 value is based on sha256(salt + "ServiceWorker8").
constexpr uint32_t kServiceWorker_DispatchCookieChangeEvent_Name = 105858412;
// The 159908538 value is based on sha256(salt + "ServiceWorker9").
constexpr uint32_t kServiceWorker_DispatchFetchEvent_Name = 159908538;
// The 1286317956 value is based on sha256(salt + "ServiceWorker10").
constexpr uint32_t kServiceWorker_DispatchNotificationClickEvent_Name = 1286317956;
// The 795054590 value is based on sha256(salt + "ServiceWorker11").
constexpr uint32_t kServiceWorker_DispatchNotificationCloseEvent_Name = 795054590;
// The 520314214 value is based on sha256(salt + "ServiceWorker12").
constexpr uint32_t kServiceWorker_DispatchPushEvent_Name = 520314214;
// The 1020890463 value is based on sha256(salt + "ServiceWorker13").
constexpr uint32_t kServiceWorker_DispatchSyncEvent_Name = 1020890463;
// The 992529201 value is based on sha256(salt + "ServiceWorker14").
constexpr uint32_t kServiceWorker_DispatchAbortPaymentEvent_Name = 992529201;
// The 1947028480 value is based on sha256(salt + "ServiceWorker15").
constexpr uint32_t kServiceWorker_DispatchCanMakePaymentEvent_Name = 1947028480;
// The 2126164794 value is based on sha256(salt + "ServiceWorker16").
constexpr uint32_t kServiceWorker_DispatchPaymentRequestEvent_Name = 2126164794;
// The 2036117365 value is based on sha256(salt + "ServiceWorker17").
constexpr uint32_t kServiceWorker_DispatchExtendableMessageEvent_Name = 2036117365;
// The 1573836792 value is based on sha256(salt + "ServiceWorker18").
constexpr uint32_t kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name = 1573836792;
// The 1454710848 value is based on sha256(salt + "ServiceWorker19").
constexpr uint32_t kServiceWorker_Ping_Name = 1454710848;
// The 1194778990 value is based on sha256(salt + "ServiceWorker20").
constexpr uint32_t kServiceWorker_SetIdleTimerDelayToZero_Name = 1194778990;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_