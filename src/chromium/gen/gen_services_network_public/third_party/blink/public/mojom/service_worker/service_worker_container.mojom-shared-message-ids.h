// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1577417059 value is based on sha256(salt + "ServiceWorkerContainerHost1").
constexpr uint32_t kServiceWorkerContainerHost_Register_Name = 1577417059;
// The 272368236 value is based on sha256(salt + "ServiceWorkerContainerHost2").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistration_Name = 272368236;
// The 1945626248 value is based on sha256(salt + "ServiceWorkerContainerHost3").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrations_Name = 1945626248;
// The 1328628282 value is based on sha256(salt + "ServiceWorkerContainerHost4").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrationForReady_Name = 1328628282;
// The 1292023059 value is based on sha256(salt + "ServiceWorkerContainerHost5").
constexpr uint32_t kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name = 1292023059;
// The 706468329 value is based on sha256(salt + "ServiceWorkerContainerHost6").
constexpr uint32_t kServiceWorkerContainerHost_CloneContainerHost_Name = 706468329;
// The 385514728 value is based on sha256(salt + "ServiceWorkerContainerHost7").
constexpr uint32_t kServiceWorkerContainerHost_Ping_Name = 385514728;
// The 463220336 value is based on sha256(salt + "ServiceWorkerContainerHost8").
constexpr uint32_t kServiceWorkerContainerHost_HintToUpdateServiceWorker_Name = 463220336;
// The 1782222231 value is based on sha256(salt + "ServiceWorkerContainerHost9").
constexpr uint32_t kServiceWorkerContainerHost_OnExecutionReady_Name = 1782222231;
// The 823778778 value is based on sha256(salt + "ServiceWorkerContainer1").
constexpr uint32_t kServiceWorkerContainer_SetController_Name = 823778778;
// The 804309029 value is based on sha256(salt + "ServiceWorkerContainer2").
constexpr uint32_t kServiceWorkerContainer_PostMessageToClient_Name = 804309029;
// The 244622660 value is based on sha256(salt + "ServiceWorkerContainer3").
constexpr uint32_t kServiceWorkerContainer_CountFeature_Name = 244622660;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_