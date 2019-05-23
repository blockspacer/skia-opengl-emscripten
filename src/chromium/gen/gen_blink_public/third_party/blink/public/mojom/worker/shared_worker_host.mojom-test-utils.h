// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SharedWorkerHostInterceptorForTesting : public SharedWorkerHost {
  virtual SharedWorkerHost* GetForwardingInterface() = 0;
  void OnConnected(int32_t connection_id) override;
  void OnContextClosed() override;
  void OnReadyForInspection() override;
  void OnScriptLoaded() override;
  void OnScriptLoadFailed() override;
  void OnFeatureUsed(::blink::mojom::WebFeature feature) override;
};
class BLINK_COMMON_EXPORT SharedWorkerHostAsyncWaiter {
 public:
  explicit SharedWorkerHostAsyncWaiter(SharedWorkerHost* proxy);
  ~SharedWorkerHostAsyncWaiter();

 private:
  SharedWorkerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_TEST_UTILS_H_