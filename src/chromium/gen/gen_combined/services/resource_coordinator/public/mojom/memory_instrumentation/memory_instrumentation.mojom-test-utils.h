// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_TEST_UTILS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_TEST_UTILS_H_

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom.h"
#include "base/component_export.h"


namespace memory_instrumentation {
namespace mojom {


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcessInterceptorForTesting : public ClientProcess {
  virtual ClientProcess* GetForwardingInterface() = 0;
  void RequestChromeMemoryDump(const base::trace_event::MemoryDumpRequestArgs& args, RequestChromeMemoryDumpCallback callback) override;
  void RequestOSMemoryDump(MemoryMapOption option, const std::vector<base::ProcessId>& pids, RequestOSMemoryDumpCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) ClientProcessAsyncWaiter {
 public:
  explicit ClientProcessAsyncWaiter(ClientProcess* proxy);
  ~ClientProcessAsyncWaiter();
  void RequestChromeMemoryDump(
      const base::trace_event::MemoryDumpRequestArgs& args, bool* out_success, uint64_t* out_dump_id, std::unique_ptr<base::trace_event::ProcessMemoryDump>* out_raw_process_memory_dump);
  void RequestOSMemoryDump(
      MemoryMapOption option, const std::vector<base::ProcessId>& pids, bool* out_success, base::flat_map<base::ProcessId, RawOSMemDumpPtr>* out_dumps);

 private:
  ClientProcess* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClientProcessAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerInterceptorForTesting : public HeapProfiler {
  virtual HeapProfiler* GetForwardingInterface() = 0;
  void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerAsyncWaiter {
 public:
  explicit HeapProfilerAsyncWaiter(HeapProfiler* proxy);
  ~HeapProfilerAsyncWaiter();
  void DumpProcessesForTracing(
      bool strip_path_from_mapped_files, std::vector<HeapProfileResultPtr>* out_results);

 private:
  HeapProfiler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelperInterceptorForTesting : public HeapProfilerHelper {
  virtual HeapProfilerHelper* GetForwardingInterface() = 0;
  void GetVmRegionsForHeapProfiler(const std::vector<base::ProcessId>& pids, GetVmRegionsForHeapProfilerCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) HeapProfilerHelperAsyncWaiter {
 public:
  explicit HeapProfilerHelperAsyncWaiter(HeapProfilerHelper* proxy);
  ~HeapProfilerHelperAsyncWaiter();
  void GetVmRegionsForHeapProfiler(
      const std::vector<base::ProcessId>& pids, base::flat_map<base::ProcessId, std::vector<VmRegionPtr>>* out_vm_regions);

 private:
  HeapProfilerHelper* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerHelperAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinatorInterceptorForTesting : public Coordinator {
  virtual Coordinator* GetForwardingInterface() = 0;
  void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) override;
  void RequestGlobalMemoryDump(base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, const std::vector<std::string>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) override;
  void RequestGlobalMemoryDumpForPid(base::ProcessId pid, const std::vector<std::string>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) override;
  void RequestPrivateMemoryFootprint(base::ProcessId pid, RequestPrivateMemoryFootprintCallback callback) override;
  void RequestGlobalMemoryDumpAndAppendToTrace(base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) override;
  void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM) CoordinatorAsyncWaiter {
 public:
  explicit CoordinatorAsyncWaiter(Coordinator* proxy);
  ~CoordinatorAsyncWaiter();
  void RequestGlobalMemoryDump(
      base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, const std::vector<std::string>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestGlobalMemoryDumpForPid(
      base::ProcessId pid, const std::vector<std::string>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestPrivateMemoryFootprint(
      base::ProcessId pid, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestGlobalMemoryDumpAndAppendToTrace(
      base::trace_event::MemoryDumpType dump_type, base::trace_event::MemoryDumpLevelOfDetail level_of_detail, bool* out_success, uint64_t* out_dump_id);

 private:
  Coordinator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CoordinatorAsyncWaiter);
};




}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_TEST_UTILS_H_