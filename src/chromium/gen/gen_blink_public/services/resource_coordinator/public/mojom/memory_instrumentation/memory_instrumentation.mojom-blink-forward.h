// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_FORWARD_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace memory_instrumentation {
namespace mojom {

enum class DumpType : int32_t;

enum class LevelOfDetail : int32_t;

enum class ProcessType : int32_t;

enum class MemoryMapOption : int32_t;
}  // namespace memory_instrumentation
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct memory_instrumentation_mojom_internal_DumpType_DataHashFn;

template <>
struct DefaultHash<::memory_instrumentation::mojom::DumpType> {
  using Hash = memory_instrumentation_mojom_internal_DumpType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct memory_instrumentation_mojom_internal_LevelOfDetail_DataHashFn;

template <>
struct DefaultHash<::memory_instrumentation::mojom::LevelOfDetail> {
  using Hash = memory_instrumentation_mojom_internal_LevelOfDetail_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct memory_instrumentation_mojom_internal_ProcessType_DataHashFn;

template <>
struct DefaultHash<::memory_instrumentation::mojom::ProcessType> {
  using Hash = memory_instrumentation_mojom_internal_ProcessType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct memory_instrumentation_mojom_internal_MemoryMapOption_DataHashFn;

template <>
struct DefaultHash<::memory_instrumentation::mojom::MemoryMapOption> {
  using Hash = memory_instrumentation_mojom_internal_MemoryMapOption_DataHashFn;
};
}  // namespace WTF


namespace memory_instrumentation {
namespace mojom {
namespace blink {
using DumpType = DumpType;  // Alias for definition in the parent namespace.
using LevelOfDetail = LevelOfDetail;  // Alias for definition in the parent namespace.
using ProcessType = ProcessType;  // Alias for definition in the parent namespace.
using MemoryMapOption = MemoryMapOption;  // Alias for definition in the parent namespace.
class RequestArgs;
using RequestArgsPtr = mojo::InlinedStructPtr<RequestArgs>;

class RawAllocatorDumpEdge;
using RawAllocatorDumpEdgePtr = mojo::InlinedStructPtr<RawAllocatorDumpEdge>;

class RawAllocatorDumpEntry;
using RawAllocatorDumpEntryPtr = mojo::StructPtr<RawAllocatorDumpEntry>;

class RawAllocatorDump;
using RawAllocatorDumpPtr = mojo::StructPtr<RawAllocatorDump>;

class RawProcessMemoryDump;
using RawProcessMemoryDumpPtr = mojo::StructPtr<RawProcessMemoryDump>;

class VmRegion;
using VmRegionPtr = mojo::StructPtr<VmRegion>;

class PlatformPrivateFootprint;
using PlatformPrivateFootprintPtr = mojo::StructPtr<PlatformPrivateFootprint>;

class RawOSMemDump;
using RawOSMemDumpPtr = mojo::StructPtr<RawOSMemDump>;

class OSMemDump;
using OSMemDumpPtr = mojo::StructPtr<OSMemDump>;

class AllocatorMemDump;
using AllocatorMemDumpPtr = mojo::StructPtr<AllocatorMemDump>;

class ProcessMemoryDump;
using ProcessMemoryDumpPtr = mojo::StructPtr<ProcessMemoryDump>;

class AggregatedMetrics;
using AggregatedMetricsPtr = mojo::InlinedStructPtr<AggregatedMetrics>;

class GlobalMemoryDump;
using GlobalMemoryDumpPtr = mojo::StructPtr<GlobalMemoryDump>;

class HeapProfileResult;
using HeapProfileResultPtr = mojo::StructPtr<HeapProfileResult>;

class RawAllocatorDumpEntryValue;

typedef mojo::InlinedStructPtr<RawAllocatorDumpEntryValue> RawAllocatorDumpEntryValuePtr;

class ClientProcess;
using ClientProcessPtr = mojo::InterfacePtr<ClientProcess>;
using ClientProcessPtrInfo = mojo::InterfacePtrInfo<ClientProcess>;
using ThreadSafeClientProcessPtr =
    mojo::ThreadSafeInterfacePtr<ClientProcess>;
using ClientProcessRequest = mojo::InterfaceRequest<ClientProcess>;
using ClientProcessAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClientProcess>;
using ThreadSafeClientProcessAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ClientProcess>;
using ClientProcessAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClientProcess>;
using ClientProcessAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ClientProcess>;

class HeapProfiler;
using HeapProfilerPtr = mojo::InterfacePtr<HeapProfiler>;
using HeapProfilerPtrInfo = mojo::InterfacePtrInfo<HeapProfiler>;
using ThreadSafeHeapProfilerPtr =
    mojo::ThreadSafeInterfacePtr<HeapProfiler>;
using HeapProfilerRequest = mojo::InterfaceRequest<HeapProfiler>;
using HeapProfilerAssociatedPtr =
    mojo::AssociatedInterfacePtr<HeapProfiler>;
using ThreadSafeHeapProfilerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HeapProfiler>;
using HeapProfilerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HeapProfiler>;
using HeapProfilerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HeapProfiler>;

class HeapProfilerHelper;
using HeapProfilerHelperPtr = mojo::InterfacePtr<HeapProfilerHelper>;
using HeapProfilerHelperPtrInfo = mojo::InterfacePtrInfo<HeapProfilerHelper>;
using ThreadSafeHeapProfilerHelperPtr =
    mojo::ThreadSafeInterfacePtr<HeapProfilerHelper>;
using HeapProfilerHelperRequest = mojo::InterfaceRequest<HeapProfilerHelper>;
using HeapProfilerHelperAssociatedPtr =
    mojo::AssociatedInterfacePtr<HeapProfilerHelper>;
using ThreadSafeHeapProfilerHelperAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HeapProfilerHelper>;
using HeapProfilerHelperAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HeapProfilerHelper>;
using HeapProfilerHelperAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HeapProfilerHelper>;

class Coordinator;
using CoordinatorPtr = mojo::InterfacePtr<Coordinator>;
using CoordinatorPtrInfo = mojo::InterfacePtrInfo<Coordinator>;
using ThreadSafeCoordinatorPtr =
    mojo::ThreadSafeInterfacePtr<Coordinator>;
using CoordinatorRequest = mojo::InterfaceRequest<Coordinator>;
using CoordinatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Coordinator>;
using ThreadSafeCoordinatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Coordinator>;
using CoordinatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Coordinator>;
using CoordinatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Coordinator>;




}  // namespace blink
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_BLINK_FORWARD_H_