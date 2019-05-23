// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1640513074 value is based on sha256(salt + "ServiceWorkerObjectHost1").
constexpr uint32_t kServiceWorkerObjectHost_PostMessageToServiceWorker_Name = 1640513074;
// The 1639949278 value is based on sha256(salt + "ServiceWorkerObjectHost2").
constexpr uint32_t kServiceWorkerObjectHost_TerminateForTesting_Name = 1639949278;
// The 316404597 value is based on sha256(salt + "ServiceWorkerObject1").
constexpr uint32_t kServiceWorkerObject_StateChanged_Name = 316404597;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_MESSAGE_IDS_H_