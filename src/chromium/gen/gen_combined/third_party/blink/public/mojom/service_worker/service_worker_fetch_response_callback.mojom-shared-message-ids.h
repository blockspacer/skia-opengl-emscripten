// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1066105635 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback1").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponse_Name = 1066105635;
// The 1520083992 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback2").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnResponseStream_Name = 1520083992;
// The 1547471388 value is based on sha256(salt + "ServiceWorkerFetchResponseCallback3").
constexpr uint32_t kServiceWorkerFetchResponseCallback_OnFallback_Name = 1547471388;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_MESSAGE_IDS_H_