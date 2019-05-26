// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SharedWorkerInterceptorForTesting : public SharedWorker {
  virtual SharedWorker* GetForwardingInterface() = 0;
  void Connect(int32_t connection_id, mojo::ScopedMessagePipeHandle message_port) override;
  void Terminate() override;
  void BindDevToolsAgent(::blink::mojom::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::DevToolsAgentAssociatedRequest agent) override;
};
class BLINK_COMMON_EXPORT SharedWorkerAsyncWaiter {
 public:
  explicit SharedWorkerAsyncWaiter(SharedWorker* proxy);
  ~SharedWorkerAsyncWaiter();

 private:
  SharedWorker* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_TEST_UTILS_H_