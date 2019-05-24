// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_string.mojom-shared.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace memory_instrumentation {
namespace mojom {
class RequestArgsDataView;

class RawAllocatorDumpEdgeDataView;

class RawAllocatorDumpEntryDataView;

class RawAllocatorDumpDataView;

class RawProcessMemoryDumpDataView;

class VmRegionDataView;

class PlatformPrivateFootprintDataView;

class RawOSMemDumpDataView;

class OSMemDumpDataView;

class AllocatorMemDumpDataView;

class ProcessMemoryDumpDataView;

class AggregatedMetricsDataView;

class GlobalMemoryDumpDataView;

class HeapProfileResultDataView;

class RawAllocatorDumpEntryValueDataView;


}  // namespace mojom
}  // namespace memory_instrumentation

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RequestArgsDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RequestArgs_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDumpEdge_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawProcessMemoryDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::VmRegionDataView> {
  using Data = ::memory_instrumentation::mojom::internal::VmRegion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView> {
  using Data = ::memory_instrumentation::mojom::internal::PlatformPrivateFootprint_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawOSMemDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawOSMemDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::OSMemDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::OSMemDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::AllocatorMemDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::AllocatorMemDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::ProcessMemoryDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::ProcessMemoryDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::AggregatedMetricsDataView> {
  using Data = ::memory_instrumentation::mojom::internal::AggregatedMetrics_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::GlobalMemoryDumpDataView> {
  using Data = ::memory_instrumentation::mojom::internal::GlobalMemoryDump_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::HeapProfileResultDataView> {
  using Data = ::memory_instrumentation::mojom::internal::HeapProfileResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView> {
  using Data = ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace memory_instrumentation {
namespace mojom {


enum class DumpType : int32_t {
  
  PERIODIC_INTERVAL,
  
  EXPLICITLY_TRIGGERED,
  
  SUMMARY_ONLY,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, DumpType value);
inline bool IsKnownEnumValue(DumpType value) {
  return internal::DumpType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class LevelOfDetail : int32_t {
  
  BACKGROUND,
  
  LIGHT,
  
  DETAILED,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, LevelOfDetail value);
inline bool IsKnownEnumValue(LevelOfDetail value) {
  return internal::LevelOfDetail_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ProcessType : int32_t {
  
  OTHER,
  
  BROWSER,
  
  RENDERER,
  
  GPU,
  
  UTILITY,
  
  PLUGIN,
  
  ARC,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, ProcessType value);
inline bool IsKnownEnumValue(ProcessType value) {
  return internal::ProcessType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MemoryMapOption : int32_t {
  
  NONE,
  
  MODULES,
  
  FULL,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, MemoryMapOption value);
inline bool IsKnownEnumValue(MemoryMapOption value) {
  return internal::MemoryMapOption_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ClientProcessInterfaceBase {};

using ClientProcessPtrDataView =
    mojo::InterfacePtrDataView<ClientProcessInterfaceBase>;
using ClientProcessRequestDataView =
    mojo::InterfaceRequestDataView<ClientProcessInterfaceBase>;
using ClientProcessAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ClientProcessInterfaceBase>;
using ClientProcessAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ClientProcessInterfaceBase>;
class HeapProfilerInterfaceBase {};

using HeapProfilerPtrDataView =
    mojo::InterfacePtrDataView<HeapProfilerInterfaceBase>;
using HeapProfilerRequestDataView =
    mojo::InterfaceRequestDataView<HeapProfilerInterfaceBase>;
using HeapProfilerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HeapProfilerInterfaceBase>;
using HeapProfilerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HeapProfilerInterfaceBase>;
class HeapProfilerHelperInterfaceBase {};

using HeapProfilerHelperPtrDataView =
    mojo::InterfacePtrDataView<HeapProfilerHelperInterfaceBase>;
using HeapProfilerHelperRequestDataView =
    mojo::InterfaceRequestDataView<HeapProfilerHelperInterfaceBase>;
using HeapProfilerHelperAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HeapProfilerHelperInterfaceBase>;
using HeapProfilerHelperAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HeapProfilerHelperInterfaceBase>;
class CoordinatorInterfaceBase {};

using CoordinatorPtrDataView =
    mojo::InterfacePtrDataView<CoordinatorInterfaceBase>;
using CoordinatorRequestDataView =
    mojo::InterfaceRequestDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CoordinatorInterfaceBase>;
using CoordinatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CoordinatorInterfaceBase>;
class RequestArgsDataView {
 public:
  RequestArgsDataView() {}

  RequestArgsDataView(
      internal::RequestArgs_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t dump_guid() const {
    return data_->dump_guid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDumpType(UserType* output) const {
    auto data_value = data_->dump_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::DumpType>(
        data_value, output);
  }

  DumpType dump_type() const {
    return static_cast<DumpType>(data_->dump_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
 private:
  internal::RequestArgs_Data* data_ = nullptr;
};

class RawAllocatorDumpEdgeDataView {
 public:
  RawAllocatorDumpEdgeDataView() {}

  RawAllocatorDumpEdgeDataView(
      internal::RawAllocatorDumpEdge_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t source_id() const {
    return data_->source_id;
  }
  uint64_t target_id() const {
    return data_->target_id;
  }
  int32_t importance() const {
    return data_->importance;
  }
  bool overridable() const {
    return data_->overridable;
  }
 private:
  internal::RawAllocatorDumpEdge_Data* data_ = nullptr;
};

class RawAllocatorDumpEntryDataView {
 public:
  RawAllocatorDumpEntryDataView() {}

  RawAllocatorDumpEntryDataView(
      internal::RawAllocatorDumpEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUnitsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUnits(UserType* output) {
    auto* pointer = data_->units.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      RawAllocatorDumpEntryValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = !data_->value.is_null() ? &data_->value : nullptr;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::RawAllocatorDumpEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RawAllocatorDumpDataView {
 public:
  RawAllocatorDumpDataView() {}

  RawAllocatorDumpDataView(
      internal::RawAllocatorDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t id() const {
    return data_->id;
  }
  inline void GetAbsoluteNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAbsoluteName(UserType* output) {
    auto* pointer = data_->absolute_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool weak() const {
    return data_->weak;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
  inline void GetEntriesDataView(
      mojo::ArrayDataView<RawAllocatorDumpEntryDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntries(UserType* output) {
    auto* pointer = data_->entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RawAllocatorDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RawProcessMemoryDumpDataView {
 public:
  RawProcessMemoryDumpDataView() {}

  RawProcessMemoryDumpDataView(
      internal::RawProcessMemoryDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLevelOfDetail(UserType* output) const {
    auto data_value = data_->level_of_detail;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::LevelOfDetail>(
        data_value, output);
  }

  LevelOfDetail level_of_detail() const {
    return static_cast<LevelOfDetail>(data_->level_of_detail);
  }
  inline void GetAllocatorDumpEdgesDataView(
      mojo::ArrayDataView<RawAllocatorDumpEdgeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumpEdges(UserType* output) {
    auto* pointer = data_->allocator_dump_edges.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView>>(
        pointer, output, context_);
  }
  inline void GetAllocatorDumpsDataView(
      mojo::ArrayDataView<RawAllocatorDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocatorDumps(UserType* output) {
    auto* pointer = data_->allocator_dumps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RawProcessMemoryDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VmRegionDataView {
 public:
  VmRegionDataView() {}

  VmRegionDataView(
      internal::VmRegion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t start_address() const {
    return data_->start_address;
  }
  uint64_t size_in_bytes() const {
    return data_->size_in_bytes;
  }
  uint64_t module_timestamp() const {
    return data_->module_timestamp;
  }
  inline void GetModuleDebugidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModuleDebugid(UserType* output) {
    auto* pointer = data_->module_debugid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetModuleDebugPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModuleDebugPath(UserType* output) {
    auto* pointer = data_->module_debug_path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t protection_flags() const {
    return data_->protection_flags;
  }
  inline void GetMappedFileDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMappedFile(UserType* output) {
    auto* pointer = data_->mapped_file.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t byte_stats_private_dirty_resident() const {
    return data_->byte_stats_private_dirty_resident;
  }
  uint64_t byte_stats_private_clean_resident() const {
    return data_->byte_stats_private_clean_resident;
  }
  uint64_t byte_stats_shared_dirty_resident() const {
    return data_->byte_stats_shared_dirty_resident;
  }
  uint64_t byte_stats_shared_clean_resident() const {
    return data_->byte_stats_shared_clean_resident;
  }
  uint64_t byte_stats_swapped() const {
    return data_->byte_stats_swapped;
  }
  uint64_t byte_stats_proportional_resident() const {
    return data_->byte_stats_proportional_resident;
  }
 private:
  internal::VmRegion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlatformPrivateFootprintDataView {
 public:
  PlatformPrivateFootprintDataView() {}

  PlatformPrivateFootprintDataView(
      internal::PlatformPrivateFootprint_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t phys_footprint_bytes() const {
    return data_->phys_footprint_bytes;
  }
  uint64_t internal_bytes() const {
    return data_->internal_bytes;
  }
  uint64_t compressed_bytes() const {
    return data_->compressed_bytes;
  }
  uint64_t rss_anon_bytes() const {
    return data_->rss_anon_bytes;
  }
  uint64_t vm_swap_bytes() const {
    return data_->vm_swap_bytes;
  }
  uint64_t private_bytes() const {
    return data_->private_bytes;
  }
 private:
  internal::PlatformPrivateFootprint_Data* data_ = nullptr;
};

class RawOSMemDumpDataView {
 public:
  RawOSMemDumpDataView() {}

  RawOSMemDumpDataView(
      internal::RawOSMemDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t resident_set_kb() const {
    return data_->resident_set_kb;
  }
  uint32_t peak_resident_set_kb() const {
    return data_->peak_resident_set_kb;
  }
  bool is_peak_rss_resettable() const {
    return data_->is_peak_rss_resettable;
  }
  inline void GetPlatformPrivateFootprintDataView(
      PlatformPrivateFootprintDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformPrivateFootprint(UserType* output) {
    auto* pointer = data_->platform_private_footprint.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView>(
        pointer, output, context_);
  }
  inline void GetMemoryMapsDataView(
      mojo::ArrayDataView<VmRegionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryMaps(UserType* output) {
    auto* pointer = data_->memory_maps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>(
        pointer, output, context_);
  }
  inline void GetNativeLibraryPagesBitmapDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNativeLibraryPagesBitmap(UserType* output) {
    auto* pointer = data_->native_library_pages_bitmap.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::RawOSMemDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OSMemDumpDataView {
 public:
  OSMemDumpDataView() {}

  OSMemDumpDataView(
      internal::OSMemDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t resident_set_kb() const {
    return data_->resident_set_kb;
  }
  uint32_t peak_resident_set_kb() const {
    return data_->peak_resident_set_kb;
  }
  bool is_peak_rss_resettable() const {
    return data_->is_peak_rss_resettable;
  }
  uint32_t private_footprint_kb() const {
    return data_->private_footprint_kb;
  }
  uint32_t shared_footprint_kb() const {
    return data_->shared_footprint_kb;
  }
  uint32_t private_footprint_swap_kb() const {
    return data_->private_footprint_swap_kb;
  }
 private:
  internal::OSMemDump_Data* data_ = nullptr;
};

class AllocatorMemDumpDataView {
 public:
  AllocatorMemDumpDataView() {}

  AllocatorMemDumpDataView(
      internal::AllocatorMemDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNumericEntriesDataView(
      mojo::MapDataView<mojo::StringDataView, uint64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNumericEntries(UserType* output) {
    auto* pointer = data_->numeric_entries.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, uint64_t>>(
        pointer, output, context_);
  }
 private:
  internal::AllocatorMemDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProcessMemoryDumpDataView {
 public:
  ProcessMemoryDumpDataView() {}

  ProcessMemoryDumpDataView(
      internal::ProcessMemoryDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessType(UserType* output) const {
    auto data_value = data_->process_type;
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::ProcessType>(
        data_value, output);
  }

  ProcessType process_type() const {
    return static_cast<ProcessType>(data_->process_type);
  }
  inline void GetOsDumpDataView(
      OSMemDumpDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOsDump(UserType* output) {
    auto* pointer = data_->os_dump.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::OSMemDumpDataView>(
        pointer, output, context_);
  }
  inline void GetChromeAllocatorDumpsDataView(
      mojo::MapDataView<mojo::StringDataView, AllocatorMemDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChromeAllocatorDumps(UserType* output) {
    auto* pointer = data_->chrome_allocator_dumps.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::memory_instrumentation::mojom::AllocatorMemDumpDataView>>(
        pointer, output, context_);
  }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
  inline void GetServiceNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceNames(UserType* output) {
    auto* pointer = data_->service_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProcessMemoryDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AggregatedMetricsDataView {
 public:
  AggregatedMetricsDataView() {}

  AggregatedMetricsDataView(
      internal::AggregatedMetrics_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t native_library_resident_kb() const {
    return data_->native_library_resident_kb;
  }
 private:
  internal::AggregatedMetrics_Data* data_ = nullptr;
};

class GlobalMemoryDumpDataView {
 public:
  GlobalMemoryDumpDataView() {}

  GlobalMemoryDumpDataView(
      internal::GlobalMemoryDump_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartTime(UserType* output) {
    auto* pointer = data_->start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetProcessDumpsDataView(
      mojo::ArrayDataView<ProcessMemoryDumpDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessDumps(UserType* output) {
    auto* pointer = data_->process_dumps.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::memory_instrumentation::mojom::ProcessMemoryDumpDataView>>(
        pointer, output, context_);
  }
  inline void GetAggregatedMetricsDataView(
      AggregatedMetricsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAggregatedMetrics(UserType* output) {
    auto* pointer = data_->aggregated_metrics.Get();
    return mojo::internal::Deserialize<::memory_instrumentation::mojom::AggregatedMetricsDataView>(
        pointer, output, context_);
  }
 private:
  internal::GlobalMemoryDump_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HeapProfileResultDataView {
 public:
  HeapProfileResultDataView() {}

  HeapProfileResultDataView(
      internal::HeapProfileResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
  inline void GetJsonDataView(
      ::mojo_base::mojom::BigStringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadJson(UserType* output) {
    auto* pointer = data_->json.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::BigStringDataView>(
        pointer, output, context_);
  }
 private:
  internal::HeapProfileResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RawAllocatorDumpEntryValueDataView {
 public:
  using Tag = internal::RawAllocatorDumpEntryValue_Data::RawAllocatorDumpEntryValue_Tag;

  RawAllocatorDumpEntryValueDataView() {}

  RawAllocatorDumpEntryValueDataView(
      internal::RawAllocatorDumpEntryValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_value_uint64() const { return data_->tag == Tag::VALUE_UINT64; }
  uint64_t value_uint64() const {
    DCHECK(is_value_uint64());
    return data_->data.f_value_uint64;
  }
  bool is_value_string() const { return data_->tag == Tag::VALUE_STRING; }
  inline void GetValueStringDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValueString(UserType* output) {
    DCHECK(is_value_string());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_value_string.Get(), output, context_);
  }

 private:
  internal::RawAllocatorDumpEntryValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace memory_instrumentation

namespace std {

template <>
struct hash<::memory_instrumentation::mojom::DumpType>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::DumpType> {};

template <>
struct hash<::memory_instrumentation::mojom::LevelOfDetail>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::LevelOfDetail> {};

template <>
struct hash<::memory_instrumentation::mojom::ProcessType>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::ProcessType> {};

template <>
struct hash<::memory_instrumentation::mojom::MemoryMapOption>
    : public mojo::internal::EnumHashImpl<::memory_instrumentation::mojom::MemoryMapOption> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::memory_instrumentation::mojom::DumpType, ::memory_instrumentation::mojom::DumpType> {
  static ::memory_instrumentation::mojom::DumpType ToMojom(::memory_instrumentation::mojom::DumpType input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::DumpType input, ::memory_instrumentation::mojom::DumpType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::DumpType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::DumpType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::DumpType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::LevelOfDetail, ::memory_instrumentation::mojom::LevelOfDetail> {
  static ::memory_instrumentation::mojom::LevelOfDetail ToMojom(::memory_instrumentation::mojom::LevelOfDetail input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::LevelOfDetail input, ::memory_instrumentation::mojom::LevelOfDetail* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::LevelOfDetail, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::LevelOfDetail, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::LevelOfDetail>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::ProcessType, ::memory_instrumentation::mojom::ProcessType> {
  static ::memory_instrumentation::mojom::ProcessType ToMojom(::memory_instrumentation::mojom::ProcessType input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::ProcessType input, ::memory_instrumentation::mojom::ProcessType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::ProcessType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::ProcessType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::ProcessType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::memory_instrumentation::mojom::MemoryMapOption, ::memory_instrumentation::mojom::MemoryMapOption> {
  static ::memory_instrumentation::mojom::MemoryMapOption ToMojom(::memory_instrumentation::mojom::MemoryMapOption input) { return input; }
  static bool FromMojom(::memory_instrumentation::mojom::MemoryMapOption input, ::memory_instrumentation::mojom::MemoryMapOption* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::MemoryMapOption, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_instrumentation::mojom::MemoryMapOption, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_instrumentation::mojom::MemoryMapOption>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RequestArgsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RequestArgsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RequestArgs_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->dump_guid = Traits::dump_guid(input);
    mojo::internal::Serialize<::memory_instrumentation::mojom::DumpType>(
        Traits::dump_type(input), &(*output)->dump_type);
    mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
        Traits::level_of_detail(input), &(*output)->level_of_detail);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RequestArgs_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RequestArgsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDumpEdge_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->source_id = Traits::source_id(input);
    (*output)->target_id = Traits::target_id(input);
    (*output)->importance = Traits::importance(input);
    (*output)->overridable = Traits::overridable(input);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDumpEdge_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in RawAllocatorDumpEntry struct");
    decltype(Traits::units(input)) in_units = Traits::units(input);
    typename decltype((*output)->units)::BaseType::BufferWriter
        units_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_units, buffer, &units_writer, context);
    (*output)->units.Set(
        units_writer.is_null() ? nullptr : units_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->units.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null units in RawAllocatorDumpEntry struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BufferWriter value_writer;
    value_writer.AllocateInline(buffer, &(*output)->value);
    mojo::internal::Serialize<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView>(
        in_value, buffer, &value_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in RawAllocatorDumpEntry struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDumpEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    decltype(Traits::absolute_name(input)) in_absolute_name = Traits::absolute_name(input);
    typename decltype((*output)->absolute_name)::BaseType::BufferWriter
        absolute_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_absolute_name, buffer, &absolute_name_writer, context);
    (*output)->absolute_name.Set(
        absolute_name_writer.is_null() ? nullptr : absolute_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->absolute_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null absolute_name in RawAllocatorDump struct");
    (*output)->weak = Traits::weak(input);
    mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
        Traits::level_of_detail(input), &(*output)->level_of_detail);
    decltype(Traits::entries(input)) in_entries = Traits::entries(input);
    typename decltype((*output)->entries)::BaseType::BufferWriter
        entries_writer;
    const mojo::internal::ContainerValidateParams entries_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEntryDataView>>(
        in_entries, buffer, &entries_writer, &entries_validate_params,
        context);
    (*output)->entries.Set(
        entries_writer.is_null() ? nullptr : entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null entries in RawAllocatorDump struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawProcessMemoryDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
        Traits::level_of_detail(input), &(*output)->level_of_detail);
    decltype(Traits::allocator_dump_edges(input)) in_allocator_dump_edges = Traits::allocator_dump_edges(input);
    typename decltype((*output)->allocator_dump_edges)::BaseType::BufferWriter
        allocator_dump_edges_writer;
    const mojo::internal::ContainerValidateParams allocator_dump_edges_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpEdgeDataView>>(
        in_allocator_dump_edges, buffer, &allocator_dump_edges_writer, &allocator_dump_edges_validate_params,
        context);
    (*output)->allocator_dump_edges.Set(
        allocator_dump_edges_writer.is_null() ? nullptr : allocator_dump_edges_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allocator_dump_edges.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allocator_dump_edges in RawProcessMemoryDump struct");
    decltype(Traits::allocator_dumps(input)) in_allocator_dumps = Traits::allocator_dumps(input);
    typename decltype((*output)->allocator_dumps)::BaseType::BufferWriter
        allocator_dumps_writer;
    const mojo::internal::ContainerValidateParams allocator_dumps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::RawAllocatorDumpDataView>>(
        in_allocator_dumps, buffer, &allocator_dumps_writer, &allocator_dumps_validate_params,
        context);
    (*output)->allocator_dumps.Set(
        allocator_dumps_writer.is_null() ? nullptr : allocator_dumps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allocator_dumps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allocator_dumps in RawProcessMemoryDump struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawProcessMemoryDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawProcessMemoryDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::VmRegionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::VmRegionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::VmRegion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->start_address = Traits::start_address(input);
    (*output)->size_in_bytes = Traits::size_in_bytes(input);
    (*output)->module_timestamp = Traits::module_timestamp(input);
    decltype(Traits::module_debugid(input)) in_module_debugid = Traits::module_debugid(input);
    typename decltype((*output)->module_debugid)::BaseType::BufferWriter
        module_debugid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_module_debugid, buffer, &module_debugid_writer, context);
    (*output)->module_debugid.Set(
        module_debugid_writer.is_null() ? nullptr : module_debugid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->module_debugid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null module_debugid in VmRegion struct");
    decltype(Traits::module_debug_path(input)) in_module_debug_path = Traits::module_debug_path(input);
    typename decltype((*output)->module_debug_path)::BaseType::BufferWriter
        module_debug_path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_module_debug_path, buffer, &module_debug_path_writer, context);
    (*output)->module_debug_path.Set(
        module_debug_path_writer.is_null() ? nullptr : module_debug_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->module_debug_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null module_debug_path in VmRegion struct");
    (*output)->protection_flags = Traits::protection_flags(input);
    decltype(Traits::mapped_file(input)) in_mapped_file = Traits::mapped_file(input);
    typename decltype((*output)->mapped_file)::BaseType::BufferWriter
        mapped_file_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mapped_file, buffer, &mapped_file_writer, context);
    (*output)->mapped_file.Set(
        mapped_file_writer.is_null() ? nullptr : mapped_file_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mapped_file.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mapped_file in VmRegion struct");
    (*output)->byte_stats_private_dirty_resident = Traits::byte_stats_private_dirty_resident(input);
    (*output)->byte_stats_private_clean_resident = Traits::byte_stats_private_clean_resident(input);
    (*output)->byte_stats_shared_dirty_resident = Traits::byte_stats_shared_dirty_resident(input);
    (*output)->byte_stats_shared_clean_resident = Traits::byte_stats_shared_clean_resident(input);
    (*output)->byte_stats_swapped = Traits::byte_stats_swapped(input);
    (*output)->byte_stats_proportional_resident = Traits::byte_stats_proportional_resident(input);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::VmRegion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::VmRegionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::PlatformPrivateFootprint_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->phys_footprint_bytes = Traits::phys_footprint_bytes(input);
    (*output)->internal_bytes = Traits::internal_bytes(input);
    (*output)->compressed_bytes = Traits::compressed_bytes(input);
    (*output)->rss_anon_bytes = Traits::rss_anon_bytes(input);
    (*output)->vm_swap_bytes = Traits::vm_swap_bytes(input);
    (*output)->private_bytes = Traits::private_bytes(input);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::PlatformPrivateFootprint_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::PlatformPrivateFootprintDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawOSMemDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::RawOSMemDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawOSMemDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->resident_set_kb = Traits::resident_set_kb(input);
    (*output)->peak_resident_set_kb = Traits::peak_resident_set_kb(input);
    (*output)->is_peak_rss_resettable = Traits::is_peak_rss_resettable(input);
    decltype(Traits::platform_private_footprint(input)) in_platform_private_footprint = Traits::platform_private_footprint(input);
    typename decltype((*output)->platform_private_footprint)::BaseType::BufferWriter
        platform_private_footprint_writer;
    mojo::internal::Serialize<::memory_instrumentation::mojom::PlatformPrivateFootprintDataView>(
        in_platform_private_footprint, buffer, &platform_private_footprint_writer, context);
    (*output)->platform_private_footprint.Set(
        platform_private_footprint_writer.is_null() ? nullptr : platform_private_footprint_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->platform_private_footprint.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null platform_private_footprint in RawOSMemDump struct");
    decltype(Traits::memory_maps(input)) in_memory_maps = Traits::memory_maps(input);
    typename decltype((*output)->memory_maps)::BaseType::BufferWriter
        memory_maps_writer;
    const mojo::internal::ContainerValidateParams memory_maps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>(
        in_memory_maps, buffer, &memory_maps_writer, &memory_maps_validate_params,
        context);
    (*output)->memory_maps.Set(
        memory_maps_writer.is_null() ? nullptr : memory_maps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->memory_maps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null memory_maps in RawOSMemDump struct");
    decltype(Traits::native_library_pages_bitmap(input)) in_native_library_pages_bitmap = Traits::native_library_pages_bitmap(input);
    typename decltype((*output)->native_library_pages_bitmap)::BaseType::BufferWriter
        native_library_pages_bitmap_writer;
    const mojo::internal::ContainerValidateParams native_library_pages_bitmap_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_native_library_pages_bitmap, buffer, &native_library_pages_bitmap_writer, &native_library_pages_bitmap_validate_params,
        context);
    (*output)->native_library_pages_bitmap.Set(
        native_library_pages_bitmap_writer.is_null() ? nullptr : native_library_pages_bitmap_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->native_library_pages_bitmap.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null native_library_pages_bitmap in RawOSMemDump struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawOSMemDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawOSMemDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::OSMemDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::OSMemDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::OSMemDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->resident_set_kb = Traits::resident_set_kb(input);
    (*output)->peak_resident_set_kb = Traits::peak_resident_set_kb(input);
    (*output)->is_peak_rss_resettable = Traits::is_peak_rss_resettable(input);
    (*output)->private_footprint_kb = Traits::private_footprint_kb(input);
    (*output)->shared_footprint_kb = Traits::shared_footprint_kb(input);
    (*output)->private_footprint_swap_kb = Traits::private_footprint_swap_kb(input);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::OSMemDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::OSMemDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::AllocatorMemDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::AllocatorMemDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::AllocatorMemDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::numeric_entries(input)) in_numeric_entries = Traits::numeric_entries(input);
    typename decltype((*output)->numeric_entries)::BaseType::BufferWriter
        numeric_entries_writer;
    const mojo::internal::ContainerValidateParams numeric_entries_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, uint64_t>>(
        in_numeric_entries, buffer, &numeric_entries_writer, &numeric_entries_validate_params,
        context);
    (*output)->numeric_entries.Set(
        numeric_entries_writer.is_null() ? nullptr : numeric_entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->numeric_entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null numeric_entries in AllocatorMemDump struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::AllocatorMemDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::AllocatorMemDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::ProcessMemoryDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::ProcessMemoryDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::ProcessMemoryDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::memory_instrumentation::mojom::ProcessType>(
        Traits::process_type(input), &(*output)->process_type);
    decltype(Traits::os_dump(input)) in_os_dump = Traits::os_dump(input);
    typename decltype((*output)->os_dump)::BaseType::BufferWriter
        os_dump_writer;
    mojo::internal::Serialize<::memory_instrumentation::mojom::OSMemDumpDataView>(
        in_os_dump, buffer, &os_dump_writer, context);
    (*output)->os_dump.Set(
        os_dump_writer.is_null() ? nullptr : os_dump_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->os_dump.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null os_dump in ProcessMemoryDump struct");
    decltype(Traits::chrome_allocator_dumps(input)) in_chrome_allocator_dumps = Traits::chrome_allocator_dumps(input);
    typename decltype((*output)->chrome_allocator_dumps)::BaseType::BufferWriter
        chrome_allocator_dumps_writer;
    const mojo::internal::ContainerValidateParams chrome_allocator_dumps_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::memory_instrumentation::mojom::AllocatorMemDumpDataView>>(
        in_chrome_allocator_dumps, buffer, &chrome_allocator_dumps_writer, &chrome_allocator_dumps_validate_params,
        context);
    (*output)->chrome_allocator_dumps.Set(
        chrome_allocator_dumps_writer.is_null() ? nullptr : chrome_allocator_dumps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->chrome_allocator_dumps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null chrome_allocator_dumps in ProcessMemoryDump struct");
    decltype(Traits::pid(input)) in_pid = Traits::pid(input);
    typename decltype((*output)->pid)::BaseType::BufferWriter
        pid_writer;
    mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
        in_pid, buffer, &pid_writer, context);
    (*output)->pid.Set(
        pid_writer.is_null() ? nullptr : pid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pid in ProcessMemoryDump struct");
    decltype(Traits::service_names(input)) in_service_names = Traits::service_names(input);
    typename decltype((*output)->service_names)::BaseType::BufferWriter
        service_names_writer;
    const mojo::internal::ContainerValidateParams service_names_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_service_names, buffer, &service_names_writer, &service_names_validate_params,
        context);
    (*output)->service_names.Set(
        service_names_writer.is_null() ? nullptr : service_names_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->service_names.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null service_names in ProcessMemoryDump struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::ProcessMemoryDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::ProcessMemoryDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::AggregatedMetricsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::AggregatedMetricsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::AggregatedMetrics_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->native_library_resident_kb = Traits::native_library_resident_kb(input);
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::AggregatedMetrics_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::AggregatedMetricsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::GlobalMemoryDumpDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::GlobalMemoryDumpDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::GlobalMemoryDump_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::start_time(input)) in_start_time = Traits::start_time(input);
    typename decltype((*output)->start_time)::BaseType::BufferWriter
        start_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_start_time, buffer, &start_time_writer, context);
    (*output)->start_time.Set(
        start_time_writer.is_null() ? nullptr : start_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->start_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null start_time in GlobalMemoryDump struct");
    decltype(Traits::process_dumps(input)) in_process_dumps = Traits::process_dumps(input);
    typename decltype((*output)->process_dumps)::BaseType::BufferWriter
        process_dumps_writer;
    const mojo::internal::ContainerValidateParams process_dumps_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::ProcessMemoryDumpDataView>>(
        in_process_dumps, buffer, &process_dumps_writer, &process_dumps_validate_params,
        context);
    (*output)->process_dumps.Set(
        process_dumps_writer.is_null() ? nullptr : process_dumps_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->process_dumps.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null process_dumps in GlobalMemoryDump struct");
    decltype(Traits::aggregated_metrics(input)) in_aggregated_metrics = Traits::aggregated_metrics(input);
    typename decltype((*output)->aggregated_metrics)::BaseType::BufferWriter
        aggregated_metrics_writer;
    mojo::internal::Serialize<::memory_instrumentation::mojom::AggregatedMetricsDataView>(
        in_aggregated_metrics, buffer, &aggregated_metrics_writer, context);
    (*output)->aggregated_metrics.Set(
        aggregated_metrics_writer.is_null() ? nullptr : aggregated_metrics_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->aggregated_metrics.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null aggregated_metrics in GlobalMemoryDump struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::GlobalMemoryDump_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::GlobalMemoryDumpDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::HeapProfileResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::memory_instrumentation::mojom::HeapProfileResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::HeapProfileResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::pid(input)) in_pid = Traits::pid(input);
    typename decltype((*output)->pid)::BaseType::BufferWriter
        pid_writer;
    mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
        in_pid, buffer, &pid_writer, context);
    (*output)->pid.Set(
        pid_writer.is_null() ? nullptr : pid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pid in HeapProfileResult struct");
    decltype(Traits::json(input)) in_json = Traits::json(input);
    typename decltype((*output)->json)::BaseType::BufferWriter
        json_writer;
    mojo::internal::Serialize<::mojo_base::mojom::BigStringDataView>(
        in_json, buffer, &json_writer, context);
    (*output)->json.Set(
        json_writer.is_null() ? nullptr : json_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->json.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null json in HeapProfileResult struct");
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::HeapProfileResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::HeapProfileResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView::Tag::VALUE_UINT64: {
        decltype(Traits::value_uint64(input))
            in_value_uint64 = Traits::value_uint64(input);
        result->data.f_value_uint64 = in_value_uint64;
        break;
      }
      case ::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView::Tag::VALUE_STRING: {
        decltype(Traits::value_string(input))
            in_value_string = Traits::value_string(input);
        typename decltype(result->data.f_value_string)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_value_string, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null value_string in RawAllocatorDumpEntryValue union");
        result->data.f_value_string.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::memory_instrumentation::mojom::internal::RawAllocatorDumpEntryValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::memory_instrumentation::mojom::RawAllocatorDumpEntryValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace memory_instrumentation {
namespace mojom {





inline void RawAllocatorDumpEntryDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RawAllocatorDumpEntryDataView::GetUnitsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->units.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RawAllocatorDumpEntryDataView::GetValueDataView(
    RawAllocatorDumpEntryValueDataView* output) {
  auto pointer = &data_->value;
  *output = RawAllocatorDumpEntryValueDataView(pointer, context_);
}


inline void RawAllocatorDumpDataView::GetAbsoluteNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->absolute_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RawAllocatorDumpDataView::GetEntriesDataView(
    mojo::ArrayDataView<RawAllocatorDumpEntryDataView>* output) {
  auto pointer = data_->entries.Get();
  *output = mojo::ArrayDataView<RawAllocatorDumpEntryDataView>(pointer, context_);
}


inline void RawProcessMemoryDumpDataView::GetAllocatorDumpEdgesDataView(
    mojo::ArrayDataView<RawAllocatorDumpEdgeDataView>* output) {
  auto pointer = data_->allocator_dump_edges.Get();
  *output = mojo::ArrayDataView<RawAllocatorDumpEdgeDataView>(pointer, context_);
}
inline void RawProcessMemoryDumpDataView::GetAllocatorDumpsDataView(
    mojo::ArrayDataView<RawAllocatorDumpDataView>* output) {
  auto pointer = data_->allocator_dumps.Get();
  *output = mojo::ArrayDataView<RawAllocatorDumpDataView>(pointer, context_);
}


inline void VmRegionDataView::GetModuleDebugidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->module_debugid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VmRegionDataView::GetModuleDebugPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->module_debug_path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void VmRegionDataView::GetMappedFileDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mapped_file.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void RawOSMemDumpDataView::GetPlatformPrivateFootprintDataView(
    PlatformPrivateFootprintDataView* output) {
  auto pointer = data_->platform_private_footprint.Get();
  *output = PlatformPrivateFootprintDataView(pointer, context_);
}
inline void RawOSMemDumpDataView::GetMemoryMapsDataView(
    mojo::ArrayDataView<VmRegionDataView>* output) {
  auto pointer = data_->memory_maps.Get();
  *output = mojo::ArrayDataView<VmRegionDataView>(pointer, context_);
}
inline void RawOSMemDumpDataView::GetNativeLibraryPagesBitmapDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->native_library_pages_bitmap.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void AllocatorMemDumpDataView::GetNumericEntriesDataView(
    mojo::MapDataView<mojo::StringDataView, uint64_t>* output) {
  auto pointer = data_->numeric_entries.Get();
  *output = mojo::MapDataView<mojo::StringDataView, uint64_t>(pointer, context_);
}


inline void ProcessMemoryDumpDataView::GetOsDumpDataView(
    OSMemDumpDataView* output) {
  auto pointer = data_->os_dump.Get();
  *output = OSMemDumpDataView(pointer, context_);
}
inline void ProcessMemoryDumpDataView::GetChromeAllocatorDumpsDataView(
    mojo::MapDataView<mojo::StringDataView, AllocatorMemDumpDataView>* output) {
  auto pointer = data_->chrome_allocator_dumps.Get();
  *output = mojo::MapDataView<mojo::StringDataView, AllocatorMemDumpDataView>(pointer, context_);
}
inline void ProcessMemoryDumpDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void ProcessMemoryDumpDataView::GetServiceNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->service_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void GlobalMemoryDumpDataView::GetStartTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->start_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void GlobalMemoryDumpDataView::GetProcessDumpsDataView(
    mojo::ArrayDataView<ProcessMemoryDumpDataView>* output) {
  auto pointer = data_->process_dumps.Get();
  *output = mojo::ArrayDataView<ProcessMemoryDumpDataView>(pointer, context_);
}
inline void GlobalMemoryDumpDataView::GetAggregatedMetricsDataView(
    AggregatedMetricsDataView* output) {
  auto pointer = data_->aggregated_metrics.Get();
  *output = AggregatedMetricsDataView(pointer, context_);
}


inline void HeapProfileResultDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void HeapProfileResultDataView::GetJsonDataView(
    ::mojo_base::mojom::BigStringDataView* output) {
  auto pointer = data_->json.Get();
  *output = ::mojo_base::mojom::BigStringDataView(pointer, context_);
}


inline void RawAllocatorDumpEntryValueDataView::GetValueStringDataView(
    mojo::StringDataView* output) {
  DCHECK(is_value_string());
  *output = mojo::StringDataView(data_->data.f_value_string.Get(), context_);
}


}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_H_