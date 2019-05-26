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


#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/big_string.mojom-blink.h"
#include "mojo/public/mojom/base/process_id.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"


#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/big_string_mojom_traits.h"
#endif


namespace memory_instrumentation {
namespace mojom {
namespace blink {


void ClientProcessInterceptorForTesting::RequestChromeMemoryDump(RequestArgsPtr args, RequestChromeMemoryDumpCallback callback) {
  GetForwardingInterface()->RequestChromeMemoryDump(std::move(args), std::move(callback));
}
void ClientProcessInterceptorForTesting::RequestOSMemoryDump(MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, RequestOSMemoryDumpCallback callback) {
  GetForwardingInterface()->RequestOSMemoryDump(std::move(option), std::move(pids), std::move(callback));
}
ClientProcessAsyncWaiter::ClientProcessAsyncWaiter(
    ClientProcess* proxy) : proxy_(proxy) {}

ClientProcessAsyncWaiter::~ClientProcessAsyncWaiter() = default;

void ClientProcessAsyncWaiter::RequestChromeMemoryDump(
    RequestArgsPtr args, bool* out_success, uint64_t* out_dump_id, RawProcessMemoryDumpPtr* out_raw_process_memory_dump) {
  base::RunLoop loop;
  proxy_->RequestChromeMemoryDump(std::move(args),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             uint64_t* out_dump_id
,
             RawProcessMemoryDumpPtr* out_raw_process_memory_dump
,
             bool success,
             uint64_t dump_id,
             RawProcessMemoryDumpPtr raw_process_memory_dump) {*out_success = std::move(success);*out_dump_id = std::move(dump_id);*out_raw_process_memory_dump = std::move(raw_process_memory_dump);
            loop->Quit();
          },
          &loop,
          out_success,
          out_dump_id,
          out_raw_process_memory_dump));
  loop.Run();
}
void ClientProcessAsyncWaiter::RequestOSMemoryDump(
    MemoryMapOption option, WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, bool* out_success, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, RawOSMemDumpPtr>* out_dumps) {
  base::RunLoop loop;
  proxy_->RequestOSMemoryDump(std::move(option),std::move(pids),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, RawOSMemDumpPtr>* out_dumps
,
             bool success,
             WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, RawOSMemDumpPtr> dumps) {*out_success = std::move(success);*out_dumps = std::move(dumps);
            loop->Quit();
          },
          &loop,
          out_success,
          out_dumps));
  loop.Run();
}



void HeapProfilerInterceptorForTesting::DumpProcessesForTracing(bool strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) {
  GetForwardingInterface()->DumpProcessesForTracing(std::move(strip_path_from_mapped_files), std::move(callback));
}
HeapProfilerAsyncWaiter::HeapProfilerAsyncWaiter(
    HeapProfiler* proxy) : proxy_(proxy) {}

HeapProfilerAsyncWaiter::~HeapProfilerAsyncWaiter() = default;

void HeapProfilerAsyncWaiter::DumpProcessesForTracing(
    bool strip_path_from_mapped_files, WTF::Vector<HeapProfileResultPtr>* out_results) {
  base::RunLoop loop;
  proxy_->DumpProcessesForTracing(std::move(strip_path_from_mapped_files),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<HeapProfileResultPtr>* out_results
,
             WTF::Vector<HeapProfileResultPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}



void HeapProfilerHelperInterceptorForTesting::GetVmRegionsForHeapProfiler(WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, GetVmRegionsForHeapProfilerCallback callback) {
  GetForwardingInterface()->GetVmRegionsForHeapProfiler(std::move(pids), std::move(callback));
}
HeapProfilerHelperAsyncWaiter::HeapProfilerHelperAsyncWaiter(
    HeapProfilerHelper* proxy) : proxy_(proxy) {}

HeapProfilerHelperAsyncWaiter::~HeapProfilerHelperAsyncWaiter() = default;

void HeapProfilerHelperAsyncWaiter::GetVmRegionsForHeapProfiler(
    WTF::Vector<::mojo_base::mojom::blink::ProcessIdPtr> pids, WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, WTF::Vector<VmRegionPtr>>* out_vm_regions) {
  base::RunLoop loop;
  proxy_->GetVmRegionsForHeapProfiler(std::move(pids),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, WTF::Vector<VmRegionPtr>>* out_vm_regions
,
             WTF::HashMap<::mojo_base::mojom::blink::ProcessIdPtr, WTF::Vector<VmRegionPtr>> vm_regions) {*out_vm_regions = std::move(vm_regions);
            loop->Quit();
          },
          &loop,
          out_vm_regions));
  loop.Run();
}



void CoordinatorInterceptorForTesting::RegisterClientProcess(ClientProcessPtr client_process, ProcessType process_type) {
  GetForwardingInterface()->RegisterClientProcess(std::move(client_process), std::move(process_type));
}
void CoordinatorInterceptorForTesting::RequestGlobalMemoryDump(DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpCallback callback) {
  GetForwardingInterface()->RequestGlobalMemoryDump(std::move(dump_type), std::move(level_of_detail), std::move(allocator_dump_names), std::move(callback));
}
void CoordinatorInterceptorForTesting::RequestGlobalMemoryDumpForPid(::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) {
  GetForwardingInterface()->RequestGlobalMemoryDumpForPid(std::move(pid), std::move(allocator_dump_names), std::move(callback));
}
void CoordinatorInterceptorForTesting::RequestPrivateMemoryFootprint(::mojo_base::mojom::blink::ProcessIdPtr pid, RequestPrivateMemoryFootprintCallback callback) {
  GetForwardingInterface()->RequestPrivateMemoryFootprint(std::move(pid), std::move(callback));
}
void CoordinatorInterceptorForTesting::RequestGlobalMemoryDumpAndAppendToTrace(DumpType dump_type, LevelOfDetail level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) {
  GetForwardingInterface()->RequestGlobalMemoryDumpAndAppendToTrace(std::move(dump_type), std::move(level_of_detail), std::move(callback));
}
void CoordinatorInterceptorForTesting::RegisterHeapProfiler(HeapProfilerPtr heap_profiler) {
  GetForwardingInterface()->RegisterHeapProfiler(std::move(heap_profiler));
}
CoordinatorAsyncWaiter::CoordinatorAsyncWaiter(
    Coordinator* proxy) : proxy_(proxy) {}

CoordinatorAsyncWaiter::~CoordinatorAsyncWaiter() = default;

void CoordinatorAsyncWaiter::RequestGlobalMemoryDump(
    DumpType dump_type, LevelOfDetail level_of_detail, const WTF::Vector<WTF::String>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump) {
  base::RunLoop loop;
  proxy_->RequestGlobalMemoryDump(std::move(dump_type),std::move(level_of_detail),std::move(allocator_dump_names),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             GlobalMemoryDumpPtr* out_global_memory_dump
,
             bool success,
             GlobalMemoryDumpPtr global_memory_dump) {*out_success = std::move(success);*out_global_memory_dump = std::move(global_memory_dump);
            loop->Quit();
          },
          &loop,
          out_success,
          out_global_memory_dump));
  loop.Run();
}
void CoordinatorAsyncWaiter::RequestGlobalMemoryDumpForPid(
    ::mojo_base::mojom::blink::ProcessIdPtr pid, const WTF::Vector<WTF::String>& allocator_dump_names, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump) {
  base::RunLoop loop;
  proxy_->RequestGlobalMemoryDumpForPid(std::move(pid),std::move(allocator_dump_names),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             GlobalMemoryDumpPtr* out_global_memory_dump
,
             bool success,
             GlobalMemoryDumpPtr global_memory_dump) {*out_success = std::move(success);*out_global_memory_dump = std::move(global_memory_dump);
            loop->Quit();
          },
          &loop,
          out_success,
          out_global_memory_dump));
  loop.Run();
}
void CoordinatorAsyncWaiter::RequestPrivateMemoryFootprint(
    ::mojo_base::mojom::blink::ProcessIdPtr pid, bool* out_success, GlobalMemoryDumpPtr* out_global_memory_dump) {
  base::RunLoop loop;
  proxy_->RequestPrivateMemoryFootprint(std::move(pid),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             GlobalMemoryDumpPtr* out_global_memory_dump
,
             bool success,
             GlobalMemoryDumpPtr global_memory_dump) {*out_success = std::move(success);*out_global_memory_dump = std::move(global_memory_dump);
            loop->Quit();
          },
          &loop,
          out_success,
          out_global_memory_dump));
  loop.Run();
}
void CoordinatorAsyncWaiter::RequestGlobalMemoryDumpAndAppendToTrace(
    DumpType dump_type, LevelOfDetail level_of_detail, bool* out_success, uint64_t* out_dump_id) {
  base::RunLoop loop;
  proxy_->RequestGlobalMemoryDumpAndAppendToTrace(std::move(dump_type),std::move(level_of_detail),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             uint64_t* out_dump_id
,
             bool success,
             uint64_t dump_id) {*out_success = std::move(success);*out_dump_id = std::move(dump_id);
            loop->Quit();
          },
          &loop,
          out_success,
          out_dump_id));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace memory_instrumentation

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif