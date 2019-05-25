// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace memory_instrumentation {
namespace mojom {

namespace internal {


// The 284774441 value is based on sha256(salt + "ClientProcess1").
constexpr uint32_t kClientProcess_RequestChromeMemoryDump_Name = 284774441;
// The 418999089 value is based on sha256(salt + "ClientProcess2").
constexpr uint32_t kClientProcess_RequestOSMemoryDump_Name = 418999089;
// The 46401998 value is based on sha256(salt + "HeapProfiler1").
constexpr uint32_t kHeapProfiler_DumpProcessesForTracing_Name = 46401998;
// The 871431103 value is based on sha256(salt + "HeapProfilerHelper1").
constexpr uint32_t kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name = 871431103;
// The 2081116682 value is based on sha256(salt + "Coordinator1").
constexpr uint32_t kCoordinator_RegisterClientProcess_Name = 2081116682;
// The 226090531 value is based on sha256(salt + "Coordinator2").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDump_Name = 226090531;
// The 1882671527 value is based on sha256(salt + "Coordinator3").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpForPid_Name = 1882671527;
// The 860837762 value is based on sha256(salt + "Coordinator4").
constexpr uint32_t kCoordinator_RequestPrivateMemoryFootprint_Name = 860837762;
// The 603434616 value is based on sha256(salt + "Coordinator5").
constexpr uint32_t kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name = 603434616;
// The 1968783795 value is based on sha256(salt + "Coordinator6").
constexpr uint32_t kCoordinator_RegisterHeapProfiler_Name = 1968783795;

}  // namespace internal
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_MESSAGE_IDS_H_