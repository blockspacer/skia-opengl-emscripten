// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 988472052 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback1").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponse_Name = 988472052;
// The 231235060 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback2").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseStream_Name = 231235060;
// The 952947685 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback3").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnFallback_Name = 952947685;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_