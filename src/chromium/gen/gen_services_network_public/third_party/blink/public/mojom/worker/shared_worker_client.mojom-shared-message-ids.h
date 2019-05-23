// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 239712803 value is based on sha256(salt + "SharedWorkerClient1").
constexpr uint32_t kSharedWorkerClient_OnCreated_Name = 239712803;
// The 538787941 value is based on sha256(salt + "SharedWorkerClient2").
constexpr uint32_t kSharedWorkerClient_OnConnected_Name = 538787941;
// The 1948898834 value is based on sha256(salt + "SharedWorkerClient3").
constexpr uint32_t kSharedWorkerClient_OnScriptLoadFailed_Name = 1948898834;
// The 1201579910 value is based on sha256(salt + "SharedWorkerClient4").
constexpr uint32_t kSharedWorkerClient_OnFeatureUsed_Name = 1201579910;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_