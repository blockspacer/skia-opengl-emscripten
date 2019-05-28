// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 205921227 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost1").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Update_Name = 205921227;
// The 992426839 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost2").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_Unregister_Name = 992426839;
// The 34874914 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost3").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_EnableNavigationPreload_Name = 34874914;
// The 1215205942 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost4").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_GetNavigationPreloadState_Name = 1215205942;
// The 1578465064 value is based on sha256(salt + "ServiceWorkerRegistrationObjectHost5").
constexpr uint32_t kServiceWorkerRegistrationObjectHost_SetNavigationPreloadHeader_Name = 1578465064;
// The 1611896611 value is based on sha256(salt + "ServiceWorkerRegistrationObject1").
constexpr uint32_t kServiceWorkerRegistrationObject_SetServiceWorkerObjects_Name = 1611896611;
// The 273501503 value is based on sha256(salt + "ServiceWorkerRegistrationObject2").
constexpr uint32_t kServiceWorkerRegistrationObject_SetUpdateViaCache_Name = 273501503;
// The 1462862369 value is based on sha256(salt + "ServiceWorkerRegistrationObject3").
constexpr uint32_t kServiceWorkerRegistrationObject_UpdateFound_Name = 1462862369;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_MESSAGE_IDS_H_