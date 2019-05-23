// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 436490254 value is based on sha256(salt + "DedicatedWorkerHostFactoryClient1").
constexpr uint32_t kDedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Name = 436490254;
// The 161089953 value is based on sha256(salt + "DedicatedWorkerHostFactoryClient2").
constexpr uint32_t kDedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Name = 161089953;
// The 209213555 value is based on sha256(salt + "DedicatedWorkerHostFactoryClient3").
constexpr uint32_t kDedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Name = 209213555;
// The 1634645954 value is based on sha256(salt + "DedicatedWorkerHostFactory1").
constexpr uint32_t kDedicatedWorkerHostFactory_CreateWorkerHost_Name = 1634645954;
// The 1629205479 value is based on sha256(salt + "DedicatedWorkerHostFactory2").
constexpr uint32_t kDedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Name = 1629205479;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_