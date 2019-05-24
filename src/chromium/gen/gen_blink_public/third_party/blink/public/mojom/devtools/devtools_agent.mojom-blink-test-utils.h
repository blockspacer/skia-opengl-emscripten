// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT DevToolsAgentInterceptorForTesting : public DevToolsAgent {
  virtual DevToolsAgent* GetForwardingInterface() = 0;
  void AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, DevToolsSessionStatePtr reattach_session_state) override;
  void InspectElement(const ::blink::WebPoint& point) override;
  void ReportChildWorkers(bool report, bool wait_for_debugger, ReportChildWorkersCallback callback) override;
};
class PLATFORM_EXPORT DevToolsAgentAsyncWaiter {
 public:
  explicit DevToolsAgentAsyncWaiter(DevToolsAgent* proxy);
  ~DevToolsAgentAsyncWaiter();
  void ReportChildWorkers(
      bool report, bool wait_for_debugger);

 private:
  DevToolsAgent* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsAgentAsyncWaiter);
};


class PLATFORM_EXPORT DevToolsAgentHostInterceptorForTesting : public DevToolsAgentHost {
  virtual DevToolsAgentHost* GetForwardingInterface() = 0;
  void ChildWorkerCreated(DevToolsAgentPtr worker_devtools_agent, DevToolsAgentHostRequest worker_devtools_agent_host, const ::blink::KURL& url, const WTF::String& name, const base::UnguessableToken& devtools_worker_token, bool waiting_for_debugger) override;
};
class PLATFORM_EXPORT DevToolsAgentHostAsyncWaiter {
 public:
  explicit DevToolsAgentHostAsyncWaiter(DevToolsAgentHost* proxy);
  ~DevToolsAgentHostAsyncWaiter();

 private:
  DevToolsAgentHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsAgentHostAsyncWaiter);
};


class PLATFORM_EXPORT DevToolsSessionInterceptorForTesting : public DevToolsSession {
  virtual DevToolsSession* GetForwardingInterface() = 0;
  void DispatchProtocolCommand(int32_t call_id, const WTF::String& method, DevToolsMessagePtr message) override;
};
class PLATFORM_EXPORT DevToolsSessionAsyncWaiter {
 public:
  explicit DevToolsSessionAsyncWaiter(DevToolsSession* proxy);
  ~DevToolsSessionAsyncWaiter();

 private:
  DevToolsSession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsSessionAsyncWaiter);
};


class PLATFORM_EXPORT DevToolsSessionHostInterceptorForTesting : public DevToolsSessionHost {
  virtual DevToolsSessionHost* GetForwardingInterface() = 0;
  void DispatchProtocolResponse(DevToolsMessagePtr message, int32_t call_id, DevToolsSessionStatePtr updates) override;
  void DispatchProtocolNotification(DevToolsMessagePtr message, DevToolsSessionStatePtr updates) override;
};
class PLATFORM_EXPORT DevToolsSessionHostAsyncWaiter {
 public:
  explicit DevToolsSessionHostAsyncWaiter(DevToolsSessionHost* proxy);
  ~DevToolsSessionHostAsyncWaiter();

 private:
  DevToolsSessionHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsSessionHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_TEST_UTILS_H_