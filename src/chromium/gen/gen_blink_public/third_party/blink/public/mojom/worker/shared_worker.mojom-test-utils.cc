// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/worker/shared_worker.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void SharedWorkerInterceptorForTesting::Connect(int32_t connection_id, mojo::ScopedMessagePipeHandle message_port) {
  GetForwardingInterface()->Connect(std::move(connection_id), std::move(message_port));
}
void SharedWorkerInterceptorForTesting::Terminate() {
  GetForwardingInterface()->Terminate();
}
void SharedWorkerInterceptorForTesting::BindDevToolsAgent(::blink::mojom::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::DevToolsAgentAssociatedRequest agent) {
  GetForwardingInterface()->BindDevToolsAgent(std::move(agent_host), std::move(agent));
}
SharedWorkerAsyncWaiter::SharedWorkerAsyncWaiter(
    SharedWorker* proxy) : proxy_(proxy) {}

SharedWorkerAsyncWaiter::~SharedWorkerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif