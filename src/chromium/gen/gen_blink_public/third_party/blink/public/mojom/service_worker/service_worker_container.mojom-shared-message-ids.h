// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1204956712 value is based on sha256(salt + "ServiceWorkerContainerHost1").
constexpr uint32_t kServiceWorkerContainerHost_Register_Name = 1204956712;
// The 832717590 value is based on sha256(salt + "ServiceWorkerContainerHost2").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistration_Name = 832717590;
// The 1266048640 value is based on sha256(salt + "ServiceWorkerContainerHost3").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrations_Name = 1266048640;
// The 728034426 value is based on sha256(salt + "ServiceWorkerContainerHost4").
constexpr uint32_t kServiceWorkerContainerHost_GetRegistrationForReady_Name = 728034426;
// The 680369627 value is based on sha256(salt + "ServiceWorkerContainerHost5").
constexpr uint32_t kServiceWorkerContainerHost_EnsureControllerServiceWorker_Name = 680369627;
// The 1101959722 value is based on sha256(salt + "ServiceWorkerContainerHost6").
constexpr uint32_t kServiceWorkerContainerHost_CloneContainerHost_Name = 1101959722;
// The 1877469278 value is based on sha256(salt + "ServiceWorkerContainerHost7").
constexpr uint32_t kServiceWorkerContainerHost_Ping_Name = 1877469278;
// The 1616927503 value is based on sha256(salt + "ServiceWorkerContainerHost8").
constexpr uint32_t kServiceWorkerContainerHost_HintToUpdateServiceWorker_Name = 1616927503;
// The 642910875 value is based on sha256(salt + "ServiceWorkerContainerHost9").
constexpr uint32_t kServiceWorkerContainerHost_OnExecutionReady_Name = 642910875;
// The 1749515989 value is based on sha256(salt + "ServiceWorkerContainer1").
constexpr uint32_t kServiceWorkerContainer_SetController_Name = 1749515989;
// The 321281574 value is based on sha256(salt + "ServiceWorkerContainer2").
constexpr uint32_t kServiceWorkerContainer_PostMessageToClient_Name = 321281574;
// The 274720268 value is based on sha256(salt + "ServiceWorkerContainer3").
constexpr uint32_t kServiceWorkerContainer_CountFeature_Name = 274720268;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_SHARED_MESSAGE_IDS_H_