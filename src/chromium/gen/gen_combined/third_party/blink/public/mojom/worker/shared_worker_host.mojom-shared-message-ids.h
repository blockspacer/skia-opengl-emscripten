// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1030529365 value is based on sha256(salt + "SharedWorkerHost1").
constexpr uint32_t kSharedWorkerHost_OnConnected_Name = 1030529365;
// The 1661059892 value is based on sha256(salt + "SharedWorkerHost2").
constexpr uint32_t kSharedWorkerHost_OnContextClosed_Name = 1661059892;
// The 2113835523 value is based on sha256(salt + "SharedWorkerHost3").
constexpr uint32_t kSharedWorkerHost_OnReadyForInspection_Name = 2113835523;
// The 269919914 value is based on sha256(salt + "SharedWorkerHost4").
constexpr uint32_t kSharedWorkerHost_OnScriptLoaded_Name = 269919914;
// The 41514925 value is based on sha256(salt + "SharedWorkerHost5").
constexpr uint32_t kSharedWorkerHost_OnScriptLoadFailed_Name = 41514925;
// The 2019352621 value is based on sha256(salt + "SharedWorkerHost6").
constexpr uint32_t kSharedWorkerHost_OnFeatureUsed_Name = 2019352621;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_SHARED_MESSAGE_IDS_H_