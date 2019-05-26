// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1358937465 value is based on sha256(salt + "DedicatedWorkerHostFactoryClient1").
constexpr uint32_t kDedicatedWorkerHostFactoryClient_OnWorkerHostCreated_Name = 1358937465;
// The 1882046388 value is based on sha256(salt + "DedicatedWorkerHostFactoryClient2").
constexpr uint32_t kDedicatedWorkerHostFactoryClient_OnScriptLoadStarted_Name = 1882046388;
// The 1268873498 value is based on sha256(salt + "DedicatedWorkerHostFactoryClient3").
constexpr uint32_t kDedicatedWorkerHostFactoryClient_OnScriptLoadStartFailed_Name = 1268873498;
// The 42267342 value is based on sha256(salt + "DedicatedWorkerHostFactory1").
constexpr uint32_t kDedicatedWorkerHostFactory_CreateWorkerHost_Name = 42267342;
// The 1068515061 value is based on sha256(salt + "DedicatedWorkerHostFactory2").
constexpr uint32_t kDedicatedWorkerHostFactory_CreateWorkerHostAndStartScriptLoad_Name = 1068515061;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_SHARED_MESSAGE_IDS_H_