// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-blink.h"
#include "base/component_export.h"


namespace memory_instrumentation {
namespace mojom {
namespace blink {


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessInterceptorForTesting : public ClientProcess {
  virtual ClientProcess* GetForwardingInterface() = 0;
  void RequestChromeMemoryDump(RequestArgsPtr args, RequestChromeMemoryDumpCallback callback) override;
  void RequestOSMemoryDump(MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, RequestOSMemoryDumpCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) ClientProcessAsyncWaiter {
 public:
  explicit ClientProcessAsyncWaiter(ClientProcess* proxy);
  ~ClientProcessAsyncWaiter();
  void RequestChromeMemoryDump(
      RequestArgsPtr args, bool* out_success, uint64_t* out_dump_id, RawProcessMemoryDumpPtr* out_raw_process_memory_dump);
  void RequestOSMemoryDump(
      MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, bool* out_success, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, RawOSMemDumpPtr>* out_dumps);

 private:
  ClientProcess* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClientProcessAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerInterceptorForTesting : public HeapProfiler {
  virtual HeapProfiler* GetForwardingInterface() = 0;
  void DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerAsyncWaiter {
 public:
  explicit HeapProfilerAsyncWaiter(HeapProfiler* proxy);
  ~HeapProfilerAsyncWaiter();
  void DumpProcessesForTracing(
      bool strip_path_from_mapped_files, WTF::Vector<HeapProfileResultPtr>* out_results);

 private:
  HeapProfiler* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperInterceptorForTesting : public HeapProfilerHelper {
  virtual HeapProfilerHelper* GetForwardingInterface() = 0;
  void GetVmRegionsForHeapProfiler(WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, GetVmRegionsForHeapProfilerCallback callback) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) HeapProfilerHelperAsyncWaiter {
 public:
  explicit HeapProfilerHelperAsyncWaiter(HeapProfilerHelper* proxy);
  ~HeapProfilerHelperAsyncWaiter();
  void GetVmRegionsForHeapProfiler(
      WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, WTF::Vector<VmRegionPtr>>* out_vm_regions);

 private:
  HeapProfilerHelper* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerHelperAsyncWaiter);
};


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorInterceptorForTesting : public Coordinator {
  virtual Coordinator* GetForwardingInterface() = 0;
  void RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) override;
  void RequestGlobalMemoryDump(DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) override;
  void RequestGlobalMemoryDumpForPid(::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) override;
  void RequestPrivateMemoryFootprint(::mojo_base::mojom::blink::ProcessIdPtr pid, RequestPrivateMemoryFootprintCallback callback) override;
  void RequestGlobalMemoryDumpAndAppendToTrace(DumpType dump_type, LevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) override;
  void RegisterHeapProfiler(HeapProfilerPtr heap_profiler) override;
};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_BLINK) CoordinatorAsyncWaiter {
 public:
  explicit CoordinatorAsyncWaiter(Coordinator* proxy);
  ~CoordinatorAsyncWaiter();
  void RequestGlobalMemoryDump(
      DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestGlobalMemoryDumpForPid(
      ::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestPrivateMemoryFootprint(
      ::mojo_base::mojom::blink::ProcessIdPtr pid, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump);
  void RequestGlobalMemoryDumpAndAppendToTrace(
      DumpType dump_type, LevelOfDetail level_of_detail, bool* out_success, uint64_t* out_dump_id);

 private:
  Coordinator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CoordinatorAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_TEST_UTILS_H_