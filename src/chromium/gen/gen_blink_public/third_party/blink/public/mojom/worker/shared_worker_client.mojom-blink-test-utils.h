// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_client.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SharedWorkerClientInterceptorForTesting : public SharedWorkerClient {
  virtual SharedWorkerClient* GetForwardingInterface() = 0;
  void OnCreated(::blink::mojom::blink::SharedWorkerCreationContextType creation_context_type) override;
  void OnConnected(const WTF::Vector<::blink::mojom::blink::WebFeature>& features_used) override;
  void OnScriptLoadFailed() override;
  void OnFeatureUsed(::blink::mojom::blink::WebFeature feature) override;
};
class PLATFORM_EXPORT SharedWorkerClientAsyncWaiter {
 public:
  explicit SharedWorkerClientAsyncWaiter(SharedWorkerClient* proxy);
  ~SharedWorkerClientAsyncWaiter();

 private:
  SharedWorkerClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_BLINK_TEST_UTILS_H_