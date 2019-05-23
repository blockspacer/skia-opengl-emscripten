// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 69552737 value is based on sha256(salt + "SharedWorker1").
constexpr uint32_t kSharedWorker_Connect_Name = 69552737;
// The 433823138 value is based on sha256(salt + "SharedWorker2").
constexpr uint32_t kSharedWorker_Terminate_Name = 433823138;
// The 660176603 value is based on sha256(salt + "SharedWorker3").
constexpr uint32_t kSharedWorker_BindDevToolsAgent_Name = 660176603;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_SHARED_MESSAGE_IDS_H_