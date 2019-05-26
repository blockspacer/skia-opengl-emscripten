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


#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void DevToolsAgentInterceptorForTesting::AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, DevToolsSessionStatePtr reattach_session_state) {
  GetForwardingInterface()->AttachDevToolsSession(std::move(host), std::move(session), std::move(io_session), std::move(reattach_session_state));
}
void DevToolsAgentInterceptorForTesting::InspectElement(const ::blink::WebPoint& point) {
  GetForwardingInterface()->InspectElement(std::move(point));
}
void DevToolsAgentInterceptorForTesting::ReportChildWorkers(bool report, bool wait_for_debugger, ReportChildWorkersCallback callback) {
  GetForwardingInterface()->ReportChildWorkers(std::move(report), std::move(wait_for_debugger), std::move(callback));
}
DevToolsAgentAsyncWaiter::DevToolsAgentAsyncWaiter(
    DevToolsAgent* proxy) : proxy_(proxy) {}

DevToolsAgentAsyncWaiter::~DevToolsAgentAsyncWaiter() = default;

void DevToolsAgentAsyncWaiter::ReportChildWorkers(
    bool report, bool wait_for_debugger) {
  base::RunLoop loop;
  proxy_->ReportChildWorkers(std::move(report),std::move(wait_for_debugger),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void DevToolsAgentHostInterceptorForTesting::ChildWorkerCreated(DevToolsAgentPtr worker_devtools_agent, DevToolsAgentHostRequest worker_devtools_agent_host, const ::blink::KURL& url, const WTF::String& name, const base::UnguessableToken& devtools_worker_token, bool waiting_for_debugger) {
  GetForwardingInterface()->ChildWorkerCreated(std::move(worker_devtools_agent), std::move(worker_devtools_agent_host), std::move(url), std::move(name), std::move(devtools_worker_token), std::move(waiting_for_debugger));
}
DevToolsAgentHostAsyncWaiter::DevToolsAgentHostAsyncWaiter(
    DevToolsAgentHost* proxy) : proxy_(proxy) {}

DevToolsAgentHostAsyncWaiter::~DevToolsAgentHostAsyncWaiter() = default;




void DevToolsSessionInterceptorForTesting::DispatchProtocolCommand(int32_t call_id, const WTF::String& method, DevToolsMessagePtr message) {
  GetForwardingInterface()->DispatchProtocolCommand(std::move(call_id), std::move(method), std::move(message));
}
DevToolsSessionAsyncWaiter::DevToolsSessionAsyncWaiter(
    DevToolsSession* proxy) : proxy_(proxy) {}

DevToolsSessionAsyncWaiter::~DevToolsSessionAsyncWaiter() = default;




void DevToolsSessionHostInterceptorForTesting::DispatchProtocolResponse(DevToolsMessagePtr message, int32_t call_id, DevToolsSessionStatePtr updates) {
  GetForwardingInterface()->DispatchProtocolResponse(std::move(message), std::move(call_id), std::move(updates));
}
void DevToolsSessionHostInterceptorForTesting::DispatchProtocolNotification(DevToolsMessagePtr message, DevToolsSessionStatePtr updates) {
  GetForwardingInterface()->DispatchProtocolNotification(std::move(message), std::move(updates));
}
DevToolsSessionHostAsyncWaiter::DevToolsSessionHostAsyncWaiter(
    DevToolsSessionHost* proxy) : proxy_(proxy) {}

DevToolsSessionHostAsyncWaiter::~DevToolsSessionHostAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif