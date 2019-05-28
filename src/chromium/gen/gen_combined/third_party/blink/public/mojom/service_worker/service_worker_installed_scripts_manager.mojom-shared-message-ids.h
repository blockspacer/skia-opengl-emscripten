// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 760168323 value is based on sha256(salt + "ServiceWorkerInstalledScriptsManagerHost1").
constexpr uint32_t kServiceWorkerInstalledScriptsManagerHost_RequestInstalledScript_Name = 760168323;
// The 1106898383 value is based on sha256(salt + "ServiceWorkerInstalledScriptsManager1").
constexpr uint32_t kServiceWorkerInstalledScriptsManager_TransferInstalledScript_Name = 1106898383;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_MESSAGE_IDS_H_