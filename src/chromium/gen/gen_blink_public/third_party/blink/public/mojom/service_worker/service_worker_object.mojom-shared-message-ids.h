// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 880670748 value is based on sha256(salt + "ServiceWorkerObjectHost1").
constexpr uint32_t kServiceWorkerObjectHost_PostMessageToServiceWorker_Name = 880670748;
// The 2042239554 value is based on sha256(salt + "ServiceWorkerObjectHost2").
constexpr uint32_t kServiceWorkerObjectHost_TerminateForTesting_Name = 2042239554;
// The 1154112678 value is based on sha256(salt + "ServiceWorkerObject1").
constexpr uint32_t kServiceWorkerObject_StateChanged_Name = 1154112678;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_MESSAGE_IDS_H_