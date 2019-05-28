// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 934176978 value is based on sha256(salt + "DevToolsAgent1").
constexpr uint32_t kDevToolsAgent_AttachDevToolsSession_Name = 934176978;
// The 290367616 value is based on sha256(salt + "DevToolsAgent2").
constexpr uint32_t kDevToolsAgent_InspectElement_Name = 290367616;
// The 905002776 value is based on sha256(salt + "DevToolsAgent3").
constexpr uint32_t kDevToolsAgent_ReportChildWorkers_Name = 905002776;
// The 1945682867 value is based on sha256(salt + "DevToolsAgentHost1").
constexpr uint32_t kDevToolsAgentHost_ChildWorkerCreated_Name = 1945682867;
// The 747939576 value is based on sha256(salt + "DevToolsSession1").
constexpr uint32_t kDevToolsSession_DispatchProtocolCommand_Name = 747939576;
// The 1475297298 value is based on sha256(salt + "DevToolsSessionHost1").
constexpr uint32_t kDevToolsSessionHost_DispatchProtocolResponse_Name = 1475297298;
// The 755300329 value is based on sha256(salt + "DevToolsSessionHost2").
constexpr uint32_t kDevToolsSessionHost_DispatchProtocolNotification_Name = 755300329;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_SHARED_MESSAGE_IDS_H_