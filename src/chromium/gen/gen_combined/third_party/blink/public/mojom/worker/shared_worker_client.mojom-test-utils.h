// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_client.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SharedWorkerClientInterceptorForTesting : public SharedWorkerClient {
  virtual SharedWorkerClient* GetForwardingInterface() = 0;
  void OnCreated(::blink::mojom::SharedWorkerCreationContextType creation_context_type) override;
  void OnConnected(const std::vector<::blink::mojom::WebFeature>& features_used) override;
  void OnScriptLoadFailed() override;
  void OnFeatureUsed(::blink::mojom::WebFeature feature) override;
};
class BLINK_COMMON_EXPORT SharedWorkerClientAsyncWaiter {
 public:
  explicit SharedWorkerClientAsyncWaiter(SharedWorkerClient* proxy);
  ~SharedWorkerClientAsyncWaiter();

 private:
  SharedWorkerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_TEST_UTILS_H_