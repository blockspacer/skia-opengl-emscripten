// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 325600445 value is based on sha256(salt + "DevToolsAgent1").
constexpr uint32_t kDevToolsAgent_AttachDevToolsSession_Name = 325600445;
// The 1052150033 value is based on sha256(salt + "DevToolsAgent2").
constexpr uint32_t kDevToolsAgent_InspectElement_Name = 1052150033;
// The 308093741 value is based on sha256(salt + "DevToolsAgent3").
constexpr uint32_t kDevToolsAgent_ReportChildWorkers_Name = 308093741;
// The 1874120896 value is based on sha256(salt + "DevToolsAgentHost1").
constexpr uint32_t kDevToolsAgentHost_ChildWorkerCreated_Name = 1874120896;
// The 669588158 value is based on sha256(salt + "DevToolsSession1").
constexpr uint32_t kDevToolsSession_DispatchProtocolCommand_Name = 669588158;
// The 209777570 value is based on sha256(salt + "DevToolsSessionHost1").
constexpr uint32_t kDevToolsSessionHost_DispatchProtocolResponse_Name = 209777570;
// The 1341723868 value is based on sha256(salt + "DevToolsSessionHost2").
constexpr uint32_t kDevToolsSessionHost_DispatchProtocolNotification_Name = 1341723868;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_