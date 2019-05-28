// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 397206122 value is based on sha256(salt + "SharedWorkerHost1").
constexpr uint32_t kSharedWorkerHost_OnConnected_Name = 397206122;
// The 1978282767 value is based on sha256(salt + "SharedWorkerHost2").
constexpr uint32_t kSharedWorkerHost_OnContextClosed_Name = 1978282767;
// The 289060479 value is based on sha256(salt + "SharedWorkerHost3").
constexpr uint32_t kSharedWorkerHost_OnReadyForInspection_Name = 289060479;
// The 811568556 value is based on sha256(salt + "SharedWorkerHost4").
constexpr uint32_t kSharedWorkerHost_OnScriptLoaded_Name = 811568556;
// The 1189729301 value is based on sha256(salt + "SharedWorkerHost5").
constexpr uint32_t kSharedWorkerHost_OnScriptLoadFailed_Name = 1189729301;
// The 1488786389 value is based on sha256(salt + "SharedWorkerHost6").
constexpr uint32_t kSharedWorkerHost_OnFeatureUsed_Name = 1488786389;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_