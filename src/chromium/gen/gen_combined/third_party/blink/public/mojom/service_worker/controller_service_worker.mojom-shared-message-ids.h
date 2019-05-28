// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 727817752 value is based on sha256(salt + "ControllerServiceWorker1").
constexpr uint32_t kControllerServiceWorker_DispatchFetchEvent_Name = 727817752;
// The 259125058 value is based on sha256(salt + "ControllerServiceWorker2").
constexpr uint32_t kControllerServiceWorker_Clone_Name = 259125058;
// The 322083697 value is based on sha256(salt + "ControllerServiceWorkerConnector1").
constexpr uint32_t kControllerServiceWorkerConnector_UpdateController_Name = 322083697;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_