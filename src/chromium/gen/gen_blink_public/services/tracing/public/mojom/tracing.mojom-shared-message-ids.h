// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace tracing {
namespace mojom {

namespace internal {


// The 588883638 value is based on sha256(salt + "AgentRegistry1").
constexpr uint32_t kAgentRegistry_RegisterAgent_Name = 588883638;
// The 1024314505 value is based on sha256(salt + "Agent1").
constexpr uint32_t kAgent_StartTracing_Name = 1024314505;
// The 122835825 value is based on sha256(salt + "Agent2").
constexpr uint32_t kAgent_StopAndFlush_Name = 122835825;
// The 1138327975 value is based on sha256(salt + "Agent3").
constexpr uint32_t kAgent_RequestBufferStatus_Name = 1138327975;
// The 367599084 value is based on sha256(salt + "Recorder1").
constexpr uint32_t kRecorder_AddChunk_Name = 367599084;
// The 251732832 value is based on sha256(salt + "Recorder2").
constexpr uint32_t kRecorder_AddMetadata_Name = 251732832;
// The 1755927300 value is based on sha256(salt + "Coordinator1").
constexpr uint32_t kCoordinator_StartTracing_Name = 1755927300;
// The 1903602841 value is based on sha256(salt + "Coordinator2").
constexpr uint32_t kCoordinator_StopAndFlush_Name = 1903602841;
// The 1467436387 value is based on sha256(salt + "Coordinator3").
constexpr uint32_t kCoordinator_StopAndFlushAgent_Name = 1467436387;
// The 1351796908 value is based on sha256(salt + "Coordinator4").
constexpr uint32_t kCoordinator_IsTracing_Name = 1351796908;
// The 1895760151 value is based on sha256(salt + "Coordinator5").
constexpr uint32_t kCoordinator_RequestBufferUsage_Name = 1895760151;

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_SHARED_MESSAGE_IDS_H_