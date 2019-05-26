// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SharedWorkerInterceptorForTesting : public SharedWorker {
  virtual SharedWorker* GetForwardingInterface() = 0;
  void Connect(int32_t connection_id, mojo::ScopedMessagePipeHandle message_port) override;
  void Terminate() override;
  void BindDevToolsAgent(::blink::mojom::blink::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::blink::DevToolsAgentAssociatedRequest agent) override;
};
class PLATFORM_EXPORT SharedWorkerAsyncWaiter {
 public:
  explicit SharedWorkerAsyncWaiter(SharedWorker* proxy);
  ~SharedWorkerAsyncWaiter();

 private:
  SharedWorker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_BLINK_TEST_UTILS_H_