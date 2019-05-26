// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1707425076 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost1").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Update_Name = 1707425076;
// The 859830129 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost2").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Unregister_Name = 859830129;
// The 1230382757 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost3").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name = 1230382757;
// The 914027493 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost4").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name = 914027493;
// The 1845512147 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost5").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name = 1845512147;
// The 899577248 value is based on sha256(salt + "ServiceWorkerRegistrationObject1").
constexpr uint32_t kServiceWorkerRegistrationObject_SetServiceWorkerObjects_Name = 899577248;
// The 183199759 value is based on sha256(salt + "ServiceWorkerRegistrationObject2").
constexpr uint32_t kServiceWorkerRegistrationObject_SetUpdateViaCache_Name = 183199759;
// The 1999347965 value is based on sha256(salt + "ServiceWorkerRegistrationObject3").
constexpr uint32_t kServiceWorkerRegistrationObject_UpdateFound_Name = 1999347965;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_