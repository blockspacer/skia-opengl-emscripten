// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace memory_instrumentation {
namespace mojom {

namespace internal {


// The 1103987692 value is based on sha256(salt + "ClientProcess1").
constexpr uint32_t kClientProcess_RequestChromeMemoryDump_Name = 1103987692;
// The 709517803 value is based on sha256(salt + "ClientProcess2").
constexpr uint32_t kClientProcess_RequestOSMemoryDump_Name = 709517803;
// The 1159309029 value is based on sha256(salt + "HeapProfiler1").
constexpr uint32_t kHeapProfiler_DumpProcessesForTracing_Name = 1159309029;
// The 477720517 value is based on sha256(salt + "HeapProfilerHelper1").
constexpr uint32_t kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name = 477720517;
// The 1755927300 value is based on sha256(salt + "Coordinator1").
constexpr uint32_t kCoordinator_RegisterClientProcess_Name = 1755927300;
// The 1903602841 value is based on sha256(salt + "Coordinator2").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDump_Name = 1903602841;
// The 1467436387 value is based on sha256(salt + "Coordinator3").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpForPid_Name = 1467436387;
// The 1351796908 value is based on sha256(salt + "Coordinator4").
constexpr uint32_t kCoordinator_RequestPrivateMemoryFootprint_Name = 1351796908;
// The 1895760151 value is based on sha256(salt + "Coordinator5").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name = 1895760151;
// The 1746776072 value is based on sha256(salt + "Coordinator6").
constexpr uint32_t kCoordinator_RegisterHeapProfiler_Name = 1746776072;

}  // namespace internal
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_