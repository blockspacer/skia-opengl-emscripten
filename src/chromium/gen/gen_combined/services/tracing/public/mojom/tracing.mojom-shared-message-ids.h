// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 175006192 value is based on sha256(salt + "AgentRegistry1").
constexpr uint32_t kAgentRegistry_RegisterAgent_Name = 175006192;
// The 640054809 value is based on sha256(salt + "Agent1").
constexpr uint32_t kAgent_StartTracing_Name = 640054809;
// The 363432031 value is based on sha256(salt + "Agent2").
constexpr uint32_t kAgent_StopAndFlush_Name = 363432031;
// The 1596579999 value is based on sha256(salt + "Agent3").
constexpr uint32_t kAgent_RequestBufferStatus_Name = 1596579999;
// The 1990933037 value is based on sha256(salt + "Recorder1").
constexpr uint32_t kRecorder_AddChunk_Name = 1990933037;
// The 256896159 value is based on sha256(salt + "Recorder2").
constexpr uint32_t kRecorder_AddMetadata_Name = 256896159;
// The 2081116682 value is based on sha256(salt + "Coordinator1").
constexpr uint32_t kCoordinator_StartTracing_Name = 2081116682;
// The 226090531 value is based on sha256(salt + "Coordinator2").
constexpr uint32_t kCoordinator_StopAndFlush_Name = 226090531;
// The 1882671527 value is based on sha256(salt + "Coordinator3").
constexpr uint32_t kCoordinator_StopAndFlushAgent_Name = 1882671527;
// The 860837762 value is based on sha256(salt + "Coordinator4").
constexpr uint32_t kCoordinator_IsTracing_Name = 860837762;
// The 603434616 value is based on sha256(salt + "Coordinator5").
constexpr uint32_t kCoordinator_RequestBufferUsage_Name = 603434616;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_