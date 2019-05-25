// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1286638787 value is based on sha256(salt + "SharedWorkerClient1").
constexpr uint32_t kSharedWorkerClient_OnCreated_Name = 1286638787;
// The 918176878 value is based on sha256(salt + "SharedWorkerClient2").
constexpr uint32_t kSharedWorkerClient_OnConnected_Name = 918176878;
// The 17433806 value is based on sha256(salt + "SharedWorkerClient3").
constexpr uint32_t kSharedWorkerClient_OnScriptLoadFailed_Name = 17433806;
// The 417403362 value is based on sha256(salt + "SharedWorkerClient4").
constexpr uint32_t kSharedWorkerClient_OnFeatureUsed_Name = 417403362;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_