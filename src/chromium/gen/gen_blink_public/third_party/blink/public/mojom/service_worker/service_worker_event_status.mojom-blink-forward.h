// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_EVENT_STATUS_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_EVENT_STATUS_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class ServiceWorkerEventStatus : int32_t;

enum class ServiceWorkerStartStatus : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_ServiceWorkerEventStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ServiceWorkerEventStatus> {
  using Hash = blink_mojom_internal_ServiceWorkerEventStatus_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_ServiceWorkerStartStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ServiceWorkerStartStatus> {
  using Hash = blink_mojom_internal_ServiceWorkerStartStatus_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using ServiceWorkerEventStatus = ServiceWorkerEventStatus;  // Alias for definition in the parent namespace.
using ServiceWorkerStartStatus = ServiceWorkerStartStatus;  // Alias for definition in the parent namespace.



}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_EVENT_STATUS_MOJOM_BLINK_FORWARD_H_