// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SharedWorkerHostInterceptorForTesting : public SharedWorkerHost {
  virtual SharedWorkerHost* GetForwardingInterface() = 0;
  void OnConnected(int32_t connection_id) override;
  void OnContextClosed() override;
  void OnReadyForInspection() override;
  void OnScriptLoaded() override;
  void OnScriptLoadFailed() override;
  void OnFeatureUsed(::blink::mojom::blink::WebFeature feature) override;
};
class PLATFORM_EXPORT SharedWorkerHostAsyncWaiter {
 public:
  explicit SharedWorkerHostAsyncWaiter(SharedWorkerHost* proxy);
  ~SharedWorkerHostAsyncWaiter();

 private:
  SharedWorkerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_BLINK_TEST_UTILS_H_