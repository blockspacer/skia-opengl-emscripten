// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 639563774 value is based on sha256(salt + "ServiceWorkerHost1").
constexpr uint32_t kServiceWorkerHost_SetCachedMetadata_Name = 639563774;
// The 2064167537 value is based on sha256(salt + "ServiceWorkerHost2").
constexpr uint32_t kServiceWorkerHost_ClearCachedMetadata_Name = 2064167537;
// The 1316526984 value is based on sha256(salt + "ServiceWorkerHost3").
constexpr uint32_t kServiceWorkerHost_GetClients_Name = 1316526984;
// The 262803922 value is based on sha256(salt + "ServiceWorkerHost4").
constexpr uint32_t kServiceWorkerHost_GetClient_Name = 262803922;
// The 152544446 value is based on sha256(salt + "ServiceWorkerHost5").
constexpr uint32_t kServiceWorkerHost_OpenNewTab_Name = 152544446;
// The 1932628790 value is based on sha256(salt + "ServiceWorkerHost6").
constexpr uint32_t kServiceWorkerHost_OpenPaymentHandlerWindow_Name = 1932628790;
// The 1797037471 value is based on sha256(salt + "ServiceWorkerHost7").
constexpr uint32_t kServiceWorkerHost_PostMessageToClient_Name = 1797037471;
// The 547291066 value is based on sha256(salt + "ServiceWorkerHost8").
constexpr uint32_t kServiceWorkerHost_FocusClient_Name = 547291066;
// The 237626426 value is based on sha256(salt + "ServiceWorkerHost9").
constexpr uint32_t kServiceWorkerHost_NavigateClient_Name = 237626426;
// The 211663176 value is based on sha256(salt + "ServiceWorkerHost10").
constexpr uint32_t kServiceWorkerHost_SkipWaiting_Name = 211663176;
// The 2015541623 value is based on sha256(salt + "ServiceWorkerHost11").
constexpr uint32_t kServiceWorkerHost_ClaimClients_Name = 2015541623;
// The 1266084035 value is based on sha256(salt + "ServiceWorker1").
constexpr uint32_t kServiceWorker_InitializeGlobalScope_Name = 1266084035;
// The 1394230937 value is based on sha256(salt + "ServiceWorker2").
constexpr uint32_t kServiceWorker_DispatchInstallEvent_Name = 1394230937;
// The 142269055 value is based on sha256(salt + "ServiceWorker3").
constexpr uint32_t kServiceWorker_DispatchActivateEvent_Name = 142269055;
// The 670176291 value is based on sha256(salt + "ServiceWorker4").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchAbortEvent_Name = 670176291;
// The 927885999 value is based on sha256(salt + "ServiceWorker5").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchClickEvent_Name = 927885999;
// The 1053037364 value is based on sha256(salt + "ServiceWorker6").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchFailEvent_Name = 1053037364;
// The 62839675 value is based on sha256(salt + "ServiceWorker7").
constexpr uint32_t kServiceWorker_DispatchBackgroundFetchSuccessEvent_Name = 62839675;
// The 696240994 value is based on sha256(salt + "ServiceWorker8").
constexpr uint32_t kServiceWorker_DispatchCookieChangeEvent_Name = 696240994;
// The 1977288696 value is based on sha256(salt + "ServiceWorker9").
constexpr uint32_t kServiceWorker_DispatchFetchEvent_Name = 1977288696;
// The 182478623 value is based on sha256(salt + "ServiceWorker10").
constexpr uint32_t kServiceWorker_DispatchNotificationClickEvent_Name = 182478623;
// The 90361052 value is based on sha256(salt + "ServiceWorker11").
constexpr uint32_t kServiceWorker_DispatchNotificationCloseEvent_Name = 90361052;
// The 187462691 value is based on sha256(salt + "ServiceWorker12").
constexpr uint32_t kServiceWorker_DispatchPushEvent_Name = 187462691;
// The 1561719022 value is based on sha256(salt + "ServiceWorker13").
constexpr uint32_t kServiceWorker_DispatchSyncEvent_Name = 1561719022;
// The 527262154 value is based on sha256(salt + "ServiceWorker14").
constexpr uint32_t kServiceWorker_DispatchAbortPaymentEvent_Name = 527262154;
// The 690996367 value is based on sha256(salt + "ServiceWorker15").
constexpr uint32_t kServiceWorker_DispatchCanMakePaymentEvent_Name = 690996367;
// The 1067168173 value is based on sha256(salt + "ServiceWorker16").
constexpr uint32_t kServiceWorker_DispatchPaymentRequestEvent_Name = 1067168173;
// The 2102202557 value is based on sha256(salt + "ServiceWorker17").
constexpr uint32_t kServiceWorker_DispatchExtendableMessageEvent_Name = 2102202557;
// The 917160971 value is based on sha256(salt + "ServiceWorker18").
constexpr uint32_t kServiceWorker_DispatchExtendableMessageEventWithCustomTimeout_Name = 917160971;
// The 465244756 value is based on sha256(salt + "ServiceWorker19").
constexpr uint32_t kServiceWorker_Ping_Name = 465244756;
// The 1829486711 value is based on sha256(salt + "ServiceWorker20").
constexpr uint32_t kServiceWorker_SetIdleTimerDelayToZero_Name = 1829486711;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_