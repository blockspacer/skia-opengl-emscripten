// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-params-data.h"
#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-shared-message-ids.h"

#include "services/resource_coordinator/public/mojom/memory_instrumentation/memory_instrumentation.mojom-import-headers.h"


#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_JUMBO_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "mojo/public/cpp/base/process_id_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/resource_coordinator/public/cpp/memory_instrumentation/memory_instrumentation_mojom_traits.h"
#endif
namespace memory_instrumentation {
namespace mojom {
constexpr uint32_t VmRegion::kProtectionFlagsRead;
constexpr uint32_t VmRegion::kProtectionFlagsWrite;
constexpr uint32_t VmRegion::kProtectionFlagsExec;
constexpr uint32_t VmRegion::kProtectionFlagsMayshare;
RequestArgs::RequestArgs()
    : dump_guid(),
      dump_type(),
      level_of_detail() {}

RequestArgs::RequestArgs(
    uint64_t dump_guid_in,
    base::trace_event::MemoryDumpType dump_type_in,
    base::trace_event::MemoryDumpLevelOfDetail level_of_detail_in)
    : dump_guid(std::move(dump_guid_in)),
      dump_type(std::move(dump_type_in)),
      level_of_detail(std::move(level_of_detail_in)) {}

RequestArgs::~RequestArgs() = default;

bool RequestArgs::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RawAllocatorDumpEdge::RawAllocatorDumpEdge()
    : source_id(),
      target_id(),
      importance(),
      overridable() {}

RawAllocatorDumpEdge::RawAllocatorDumpEdge(
    uint64_t source_id_in,
    uint64_t target_id_in,
    int32_t importance_in,
    bool overridable_in)
    : source_id(std::move(source_id_in)),
      target_id(std::move(target_id_in)),
      importance(std::move(importance_in)),
      overridable(std::move(overridable_in)) {}

RawAllocatorDumpEdge::~RawAllocatorDumpEdge() = default;

bool RawAllocatorDumpEdge::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RawAllocatorDumpEntry::RawAllocatorDumpEntry()
    : name(),
      units(),
      value() {}

RawAllocatorDumpEntry::RawAllocatorDumpEntry(
    const std::string& name_in,
    const std::string& units_in,
    RawAllocatorDumpEntryValuePtr value_in)
    : name(std::move(name_in)),
      units(std::move(units_in)),
      value(std::move(value_in)) {}

RawAllocatorDumpEntry::~RawAllocatorDumpEntry() = default;

bool RawAllocatorDumpEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RawAllocatorDump::RawAllocatorDump()
    : id(),
      absolute_name(),
      weak(),
      level_of_detail(),
      entries() {}

RawAllocatorDump::RawAllocatorDump(
    uint64_t id_in,
    const std::string& absolute_name_in,
    bool weak_in,
    base::trace_event::MemoryDumpLevelOfDetail level_of_detail_in,
    std::vector<base::trace_event::MemoryAllocatorDump::Entry> entries_in)
    : id(std::move(id_in)),
      absolute_name(std::move(absolute_name_in)),
      weak(std::move(weak_in)),
      level_of_detail(std::move(level_of_detail_in)),
      entries(std::move(entries_in)) {}

RawAllocatorDump::~RawAllocatorDump() = default;

bool RawAllocatorDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RawProcessMemoryDump::RawProcessMemoryDump()
    : level_of_detail(),
      allocator_dump_edges(),
      allocator_dumps() {}

RawProcessMemoryDump::RawProcessMemoryDump(
    base::trace_event::MemoryDumpLevelOfDetail level_of_detail_in,
    const std::vector<base::trace_event::ProcessMemoryDump::MemoryAllocatorDumpEdge>& allocator_dump_edges_in,
    std::vector<std::unique_ptr<base::trace_event::MemoryAllocatorDump>> allocator_dumps_in)
    : level_of_detail(std::move(level_of_detail_in)),
      allocator_dump_edges(std::move(allocator_dump_edges_in)),
      allocator_dumps(std::move(allocator_dumps_in)) {}

RawProcessMemoryDump::~RawProcessMemoryDump() = default;

bool RawProcessMemoryDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VmRegion::VmRegion()
    : start_address(),
      size_in_bytes(),
      module_timestamp(),
      module_debugid(),
      module_debug_path(),
      protection_flags(),
      mapped_file(),
      byte_stats_private_dirty_resident(),
      byte_stats_private_clean_resident(),
      byte_stats_shared_dirty_resident(),
      byte_stats_shared_clean_resident(),
      byte_stats_swapped(),
      byte_stats_proportional_resident() {}

VmRegion::VmRegion(
    uint64_t start_address_in,
    uint64_t size_in_bytes_in,
    uint64_t module_timestamp_in,
    const std::string& module_debugid_in,
    const std::string& module_debug_path_in,
    uint32_t protection_flags_in,
    const std::string& mapped_file_in,
    uint64_t byte_stats_private_dirty_resident_in,
    uint64_t byte_stats_private_clean_resident_in,
    uint64_t byte_stats_shared_dirty_resident_in,
    uint64_t byte_stats_shared_clean_resident_in,
    uint64_t byte_stats_swapped_in,
    uint64_t byte_stats_proportional_resident_in)
    : start_address(std::move(start_address_in)),
      size_in_bytes(std::move(size_in_bytes_in)),
      module_timestamp(std::move(module_timestamp_in)),
      module_debugid(std::move(module_debugid_in)),
      module_debug_path(std::move(module_debug_path_in)),
      protection_flags(std::move(protection_flags_in)),
      mapped_file(std::move(mapped_file_in)),
      byte_stats_private_dirty_resident(std::move(byte_stats_private_dirty_resident_in)),
      byte_stats_private_clean_resident(std::move(byte_stats_private_clean_resident_in)),
      byte_stats_shared_dirty_resident(std::move(byte_stats_shared_dirty_resident_in)),
      byte_stats_shared_clean_resident(std::move(byte_stats_shared_clean_resident_in)),
      byte_stats_swapped(std::move(byte_stats_swapped_in)),
      byte_stats_proportional_resident(std::move(byte_stats_proportional_resident_in)) {}

VmRegion::~VmRegion() = default;
size_t VmRegion::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->start_address);
  seed = mojo::internal::Hash(seed, this->size_in_bytes);
  seed = mojo::internal::Hash(seed, this->module_timestamp);
  seed = mojo::internal::Hash(seed, this->module_debugid);
  seed = mojo::internal::Hash(seed, this->module_debug_path);
  seed = mojo::internal::Hash(seed, this->protection_flags);
  seed = mojo::internal::Hash(seed, this->mapped_file);
  seed = mojo::internal::Hash(seed, this->byte_stats_private_dirty_resident);
  seed = mojo::internal::Hash(seed, this->byte_stats_private_clean_resident);
  seed = mojo::internal::Hash(seed, this->byte_stats_shared_dirty_resident);
  seed = mojo::internal::Hash(seed, this->byte_stats_shared_clean_resident);
  seed = mojo::internal::Hash(seed, this->byte_stats_swapped);
  seed = mojo::internal::Hash(seed, this->byte_stats_proportional_resident);
  return seed;
}

bool VmRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PlatformPrivateFootprint::PlatformPrivateFootprint()
    : phys_footprint_bytes(0ULL),
      internal_bytes(0ULL),
      compressed_bytes(0ULL),
      rss_anon_bytes(0ULL),
      vm_swap_bytes(0ULL),
      private_bytes(0ULL) {}

PlatformPrivateFootprint::PlatformPrivateFootprint(
    uint64_t phys_footprint_bytes_in,
    uint64_t internal_bytes_in,
    uint64_t compressed_bytes_in,
    uint64_t rss_anon_bytes_in,
    uint64_t vm_swap_bytes_in,
    uint64_t private_bytes_in)
    : phys_footprint_bytes(std::move(phys_footprint_bytes_in)),
      internal_bytes(std::move(internal_bytes_in)),
      compressed_bytes(std::move(compressed_bytes_in)),
      rss_anon_bytes(std::move(rss_anon_bytes_in)),
      vm_swap_bytes(std::move(vm_swap_bytes_in)),
      private_bytes(std::move(private_bytes_in)) {}

PlatformPrivateFootprint::~PlatformPrivateFootprint() = default;
size_t PlatformPrivateFootprint::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->phys_footprint_bytes);
  seed = mojo::internal::Hash(seed, this->internal_bytes);
  seed = mojo::internal::Hash(seed, this->compressed_bytes);
  seed = mojo::internal::Hash(seed, this->rss_anon_bytes);
  seed = mojo::internal::Hash(seed, this->vm_swap_bytes);
  seed = mojo::internal::Hash(seed, this->private_bytes);
  return seed;
}

bool PlatformPrivateFootprint::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RawOSMemDump::RawOSMemDump()
    : resident_set_kb(0U),
      peak_resident_set_kb(0U),
      is_peak_rss_resettable(false),
      platform_private_footprint(),
      memory_maps(),
      native_library_pages_bitmap() {}

RawOSMemDump::RawOSMemDump(
    uint32_t resident_set_kb_in,
    uint32_t peak_resident_set_kb_in,
    bool is_peak_rss_resettable_in,
    PlatformPrivateFootprintPtr platform_private_footprint_in,
    std::vector<VmRegionPtr> memory_maps_in,
    const std::vector<uint8_t>& native_library_pages_bitmap_in)
    : resident_set_kb(std::move(resident_set_kb_in)),
      peak_resident_set_kb(std::move(peak_resident_set_kb_in)),
      is_peak_rss_resettable(std::move(is_peak_rss_resettable_in)),
      platform_private_footprint(std::move(platform_private_footprint_in)),
      memory_maps(std::move(memory_maps_in)),
      native_library_pages_bitmap(std::move(native_library_pages_bitmap_in)) {}

RawOSMemDump::~RawOSMemDump() = default;

bool RawOSMemDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
OSMemDump::OSMemDump()
    : resident_set_kb(0U),
      peak_resident_set_kb(0U),
      is_peak_rss_resettable(false),
      private_footprint_kb(0U),
      shared_footprint_kb(0U),
      private_footprint_swap_kb(0U) {}

OSMemDump::OSMemDump(
    uint32_t resident_set_kb_in,
    uint32_t peak_resident_set_kb_in,
    bool is_peak_rss_resettable_in,
    uint32_t private_footprint_kb_in,
    uint32_t shared_footprint_kb_in,
    uint32_t private_footprint_swap_kb_in)
    : resident_set_kb(std::move(resident_set_kb_in)),
      peak_resident_set_kb(std::move(peak_resident_set_kb_in)),
      is_peak_rss_resettable(std::move(is_peak_rss_resettable_in)),
      private_footprint_kb(std::move(private_footprint_kb_in)),
      shared_footprint_kb(std::move(shared_footprint_kb_in)),
      private_footprint_swap_kb(std::move(private_footprint_swap_kb_in)) {}

OSMemDump::~OSMemDump() = default;
size_t OSMemDump::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->resident_set_kb);
  seed = mojo::internal::Hash(seed, this->peak_resident_set_kb);
  seed = mojo::internal::Hash(seed, this->is_peak_rss_resettable);
  seed = mojo::internal::Hash(seed, this->private_footprint_kb);
  seed = mojo::internal::Hash(seed, this->shared_footprint_kb);
  seed = mojo::internal::Hash(seed, this->private_footprint_swap_kb);
  return seed;
}

bool OSMemDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AllocatorMemDump::AllocatorMemDump()
    : numeric_entries() {}

AllocatorMemDump::AllocatorMemDump(
    const base::flat_map<std::string, uint64_t>& numeric_entries_in)
    : numeric_entries(std::move(numeric_entries_in)) {}

AllocatorMemDump::~AllocatorMemDump() = default;

bool AllocatorMemDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProcessMemoryDump::ProcessMemoryDump()
    : process_type(),
      os_dump(),
      chrome_allocator_dumps(),
      pid(),
      service_names() {}

ProcessMemoryDump::ProcessMemoryDump(
    ProcessType process_type_in,
    OSMemDumpPtr os_dump_in,
    base::flat_map<std::string, AllocatorMemDumpPtr> chrome_allocator_dumps_in,
    base::ProcessId pid_in,
    const std::vector<std::string>& service_names_in)
    : process_type(std::move(process_type_in)),
      os_dump(std::move(os_dump_in)),
      chrome_allocator_dumps(std::move(chrome_allocator_dumps_in)),
      pid(std::move(pid_in)),
      service_names(std::move(service_names_in)) {}

ProcessMemoryDump::~ProcessMemoryDump() = default;

bool ProcessMemoryDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
AggregatedMetrics::AggregatedMetrics()
    : native_library_resident_kb(0U) {}

AggregatedMetrics::AggregatedMetrics(
    uint32_t native_library_resident_kb_in)
    : native_library_resident_kb(std::move(native_library_resident_kb_in)) {}

AggregatedMetrics::~AggregatedMetrics() = default;
size_t AggregatedMetrics::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->native_library_resident_kb);
  return seed;
}

bool AggregatedMetrics::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GlobalMemoryDump::GlobalMemoryDump()
    : start_time(),
      process_dumps(),
      aggregated_metrics() {}

GlobalMemoryDump::GlobalMemoryDump(
    base::TimeTicks start_time_in,
    std::vector<ProcessMemoryDumpPtr> process_dumps_in,
    AggregatedMetricsPtr aggregated_metrics_in)
    : start_time(std::move(start_time_in)),
      process_dumps(std::move(process_dumps_in)),
      aggregated_metrics(std::move(aggregated_metrics_in)) {}

GlobalMemoryDump::~GlobalMemoryDump() = default;

bool GlobalMemoryDump::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
HeapProfileResult::HeapProfileResult()
    : pid(),
      json() {}

HeapProfileResult::HeapProfileResult(
    base::ProcessId pid_in,
    const std::string& json_in)
    : pid(std::move(pid_in)),
      json(std::move(json_in)) {}

HeapProfileResult::~HeapProfileResult() = default;

bool HeapProfileResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RawAllocatorDumpEntryValue::RawAllocatorDumpEntryValue() : tag_(Tag::VALUE_UINT64) {
  data_.value_uint64 = uint64_t();
}

RawAllocatorDumpEntryValue::~RawAllocatorDumpEntryValue() {
  DestroyActive();
}


void RawAllocatorDumpEntryValue::set_value_uint64(
    uint64_t value_uint64) {
  if (tag_ != Tag::VALUE_UINT64) {
    DestroyActive();
    tag_ = Tag::VALUE_UINT64;
  }
  data_.value_uint64 = value_uint64;
}
void RawAllocatorDumpEntryValue::set_value_string(
    const std::string& value_string) {
  if (tag_ == Tag::VALUE_STRING) {
    *(data_.value_string) = std::move(value_string);
  } else {
    DestroyActive();
    tag_ = Tag::VALUE_STRING;
    data_.value_string = new std::string(
        std::move(value_string));
  }
}

void RawAllocatorDumpEntryValue::DestroyActive() {
  switch (tag_) {

    case Tag::VALUE_UINT64:

      break;
    case Tag::VALUE_STRING:

      delete data_.value_string;
      break;
  }
}
size_t RawAllocatorDumpEntryValue::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::VALUE_UINT64:
      return mojo::internal::Hash(seed, data_.value_uint64);
    case Tag::VALUE_STRING:
      return mojo::internal::Hash(seed, data_.value_string);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RawAllocatorDumpEntryValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char ClientProcess::Name_[] = "memory_instrumentation.mojom.ClientProcess";

class ClientProcess_RequestChromeMemoryDump_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClientProcess_RequestChromeMemoryDump_ForwardToCallback(
      ClientProcess::RequestChromeMemoryDumpCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClientProcess::RequestChromeMemoryDumpCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClientProcess_RequestChromeMemoryDump_ForwardToCallback);
};

class ClientProcess_RequestOSMemoryDump_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClientProcess_RequestOSMemoryDump_ForwardToCallback(
      ClientProcess::RequestOSMemoryDumpCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClientProcess::RequestOSMemoryDumpCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClientProcess_RequestOSMemoryDump_ForwardToCallback);
};

ClientProcessProxy::ClientProcessProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ClientProcessProxy::RequestChromeMemoryDump(
    const base::trace_event::MemoryDumpRequestArgs& in_args, RequestChromeMemoryDumpCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClientProcess::RequestChromeMemoryDump");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClientProcess_RequestChromeMemoryDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::ClientProcess_RequestChromeMemoryDump_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->args)::BaseType::BufferWriter
      args_writer;
  mojo::internal::Serialize<::memory_instrumentation::mojom::RequestArgsDataView>(
      in_args, buffer, &args_writer, &serialization_context);
  params->args.Set(
      args_writer.is_null() ? nullptr : args_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->args.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null args in ClientProcess.RequestChromeMemoryDump request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClientProcess::Name_);
  message.set_method_name("RequestChromeMemoryDump");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClientProcess_RequestChromeMemoryDump_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ClientProcessProxy::RequestOSMemoryDump(
    MemoryMapOption in_option, const std::vector<base::ProcessId>& in_pids, RequestOSMemoryDumpCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClientProcess::RequestOSMemoryDump");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClientProcess_RequestOSMemoryDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::ClientProcess_RequestOSMemoryDump_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::memory_instrumentation::mojom::MemoryMapOption>(
      in_option, &params->option);
  typename decltype(params->pids)::BaseType::BufferWriter
      pids_writer;
  const mojo::internal::ContainerValidateParams pids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
      in_pids, buffer, &pids_writer, &pids_validate_params,
      &serialization_context);
  params->pids.Set(
      pids_writer.is_null() ? nullptr : pids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pids in ClientProcess.RequestOSMemoryDump request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClientProcess::Name_);
  message.set_method_name("RequestOSMemoryDump");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClientProcess_RequestOSMemoryDump_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ClientProcess_RequestChromeMemoryDump_ProxyToResponder {
 public:
  static ClientProcess::RequestChromeMemoryDumpCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClientProcess_RequestChromeMemoryDump_ProxyToResponder> proxy(
        new ClientProcess_RequestChromeMemoryDump_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClientProcess_RequestChromeMemoryDump_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClientProcess_RequestChromeMemoryDump_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ClientProcess_RequestChromeMemoryDump_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ClientProcess::RequestChromeMemoryDumpCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, uint64_t in_dump_id, std::unique_ptr<base::trace_event::ProcessMemoryDump> in_raw_process_memory_dump);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClientProcess_RequestChromeMemoryDump_ProxyToResponder);
};

bool ClientProcess_RequestChromeMemoryDump_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClientProcess::RequestChromeMemoryDumpCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  uint64_t p_dump_id{};
  std::unique_ptr<base::trace_event::ProcessMemoryDump> p_raw_process_memory_dump{};
  ClientProcess_RequestChromeMemoryDump_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_dump_id = input_data_view.dump_id();
  if (!input_data_view.ReadRawProcessMemoryDump(&p_raw_process_memory_dump))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClientProcess::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_dump_id), 
std::move(p_raw_process_memory_dump));
  return true;
}

void ClientProcess_RequestChromeMemoryDump_ProxyToResponder::Run(
    bool in_success, uint64_t in_dump_id, std::unique_ptr<base::trace_event::ProcessMemoryDump> in_raw_process_memory_dump) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClientProcess_RequestChromeMemoryDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->dump_id = in_dump_id;
  typename decltype(params->raw_process_memory_dump)::BaseType::BufferWriter
      raw_process_memory_dump_writer;
  mojo::internal::Serialize<::memory_instrumentation::mojom::RawProcessMemoryDumpDataView>(
      in_raw_process_memory_dump, buffer, &raw_process_memory_dump_writer, &serialization_context);
  params->raw_process_memory_dump.Set(
      raw_process_memory_dump_writer.is_null() ? nullptr : raw_process_memory_dump_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClientProcess::RequestChromeMemoryDumpCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClientProcess::Name_);
  message.set_method_name("RequestChromeMemoryDump");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ClientProcess_RequestOSMemoryDump_ProxyToResponder {
 public:
  static ClientProcess::RequestOSMemoryDumpCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClientProcess_RequestOSMemoryDump_ProxyToResponder> proxy(
        new ClientProcess_RequestOSMemoryDump_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClientProcess_RequestOSMemoryDump_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClientProcess_RequestOSMemoryDump_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  ClientProcess_RequestOSMemoryDump_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ClientProcess::RequestOSMemoryDumpCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, base::flat_map<base::ProcessId, RawOSMemDumpPtr> in_dumps);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClientProcess_RequestOSMemoryDump_ProxyToResponder);
};

bool ClientProcess_RequestOSMemoryDump_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClientProcess::RequestOSMemoryDumpCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  base::flat_map<base::ProcessId, RawOSMemDumpPtr> p_dumps{};
  ClientProcess_RequestOSMemoryDump_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadDumps(&p_dumps))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClientProcess::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_dumps));
  return true;
}

void ClientProcess_RequestOSMemoryDump_ProxyToResponder::Run(
    bool in_success, base::flat_map<base::ProcessId, RawOSMemDumpPtr> in_dumps) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClientProcess_RequestOSMemoryDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->dumps)::BaseType::BufferWriter
      dumps_writer;
  const mojo::internal::ContainerValidateParams dumps_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, ::memory_instrumentation::mojom::RawOSMemDumpDataView>>(
      in_dumps, buffer, &dumps_writer, &dumps_validate_params,
      &serialization_context);
  params->dumps.Set(
      dumps_writer.is_null() ? nullptr : dumps_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->dumps.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null dumps in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClientProcess::RequestOSMemoryDumpCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClientProcess::Name_);
  message.set_method_name("RequestOSMemoryDump");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ClientProcessStubDispatch::Accept(
    ClientProcess* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kClientProcess_RequestChromeMemoryDump_Name: {
      break;
    }
    case internal::kClientProcess_RequestOSMemoryDump_Name: {
      break;
    }
  }
  return false;
}

// static
bool ClientProcessStubDispatch::AcceptWithResponder(
    ClientProcess* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kClientProcess_RequestChromeMemoryDump_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClientProcess::RequestChromeMemoryDump",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClientProcess_RequestChromeMemoryDump_Params_Data* params =
          reinterpret_cast<
              internal::ClientProcess_RequestChromeMemoryDump_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::trace_event::MemoryDumpRequestArgs p_args{};
      ClientProcess_RequestChromeMemoryDump_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadArgs(&p_args))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClientProcess::Name_, 0, false);
        return false;
      }
      ClientProcess::RequestChromeMemoryDumpCallback callback =
          ClientProcess_RequestChromeMemoryDump_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestChromeMemoryDump(
std::move(p_args), std::move(callback));
      return true;
    }
    case internal::kClientProcess_RequestOSMemoryDump_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClientProcess::RequestOSMemoryDump",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClientProcess_RequestOSMemoryDump_Params_Data* params =
          reinterpret_cast<
              internal::ClientProcess_RequestOSMemoryDump_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      MemoryMapOption p_option{};
      std::vector<base::ProcessId> p_pids{};
      ClientProcess_RequestOSMemoryDump_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOption(&p_option))
        success = false;
      if (!input_data_view.ReadPids(&p_pids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClientProcess::Name_, 1, false);
        return false;
      }
      ClientProcess::RequestOSMemoryDumpCallback callback =
          ClientProcess_RequestOSMemoryDump_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestOSMemoryDump(
std::move(p_option), 
std::move(p_pids), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ClientProcessRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ClientProcess RequestValidator");

  switch (message->header()->name) {
    case internal::kClientProcess_RequestChromeMemoryDump_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientProcess_RequestChromeMemoryDump_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClientProcess_RequestOSMemoryDump_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientProcess_RequestOSMemoryDump_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool ClientProcessResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ClientProcess ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kClientProcess_RequestChromeMemoryDump_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientProcess_RequestChromeMemoryDump_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClientProcess_RequestOSMemoryDump_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClientProcess_RequestOSMemoryDump_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char HeapProfiler::Name_[] = "memory_instrumentation.mojom.HeapProfiler";

class HeapProfiler_DumpProcessesForTracing_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HeapProfiler_DumpProcessesForTracing_ForwardToCallback(
      HeapProfiler::DumpProcessesForTracingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HeapProfiler::DumpProcessesForTracingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HeapProfiler_DumpProcessesForTracing_ForwardToCallback);
};

HeapProfilerProxy::HeapProfilerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HeapProfilerProxy::DumpProcessesForTracing(
    bool in_strip_path_from_mapped_files, DumpProcessesForTracingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HeapProfiler::DumpProcessesForTracing");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHeapProfiler_DumpProcessesForTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::HeapProfiler_DumpProcessesForTracing_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->strip_path_from_mapped_files = in_strip_path_from_mapped_files;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HeapProfiler::Name_);
  message.set_method_name("DumpProcessesForTracing");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HeapProfiler_DumpProcessesForTracing_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class HeapProfiler_DumpProcessesForTracing_ProxyToResponder {
 public:
  static HeapProfiler::DumpProcessesForTracingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HeapProfiler_DumpProcessesForTracing_ProxyToResponder> proxy(
        new HeapProfiler_DumpProcessesForTracing_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HeapProfiler_DumpProcessesForTracing_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HeapProfiler_DumpProcessesForTracing_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  HeapProfiler_DumpProcessesForTracing_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "HeapProfiler::DumpProcessesForTracingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<HeapProfileResultPtr> in_results);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfiler_DumpProcessesForTracing_ProxyToResponder);
};

bool HeapProfiler_DumpProcessesForTracing_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HeapProfiler::DumpProcessesForTracingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<HeapProfileResultPtr> p_results{};
  HeapProfiler_DumpProcessesForTracing_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResults(&p_results))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HeapProfiler::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_results));
  return true;
}

void HeapProfiler_DumpProcessesForTracing_ProxyToResponder::Run(
    std::vector<HeapProfileResultPtr> in_results) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHeapProfiler_DumpProcessesForTracing_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->results)::BaseType::BufferWriter
      results_writer;
  const mojo::internal::ContainerValidateParams results_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::memory_instrumentation::mojom::HeapProfileResultDataView>>(
      in_results, buffer, &results_writer, &results_validate_params,
      &serialization_context);
  params->results.Set(
      results_writer.is_null() ? nullptr : results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HeapProfiler::DumpProcessesForTracingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HeapProfiler::Name_);
  message.set_method_name("DumpProcessesForTracing");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool HeapProfilerStubDispatch::Accept(
    HeapProfiler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHeapProfiler_DumpProcessesForTracing_Name: {
      break;
    }
  }
  return false;
}

// static
bool HeapProfilerStubDispatch::AcceptWithResponder(
    HeapProfiler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHeapProfiler_DumpProcessesForTracing_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HeapProfiler::DumpProcessesForTracing",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HeapProfiler_DumpProcessesForTracing_Params_Data* params =
          reinterpret_cast<
              internal::HeapProfiler_DumpProcessesForTracing_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_strip_path_from_mapped_files{};
      HeapProfiler_DumpProcessesForTracing_ParamsDataView input_data_view(params, &serialization_context);
      
      p_strip_path_from_mapped_files = input_data_view.strip_path_from_mapped_files();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HeapProfiler::Name_, 0, false);
        return false;
      }
      HeapProfiler::DumpProcessesForTracingCallback callback =
          HeapProfiler_DumpProcessesForTracing_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DumpProcessesForTracing(
std::move(p_strip_path_from_mapped_files), std::move(callback));
      return true;
    }
  }
  return false;
}

bool HeapProfilerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HeapProfiler RequestValidator");

  switch (message->header()->name) {
    case internal::kHeapProfiler_DumpProcessesForTracing_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HeapProfiler_DumpProcessesForTracing_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool HeapProfilerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HeapProfiler ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHeapProfiler_DumpProcessesForTracing_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HeapProfiler_DumpProcessesForTracing_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char HeapProfilerHelper::Name_[] = "memory_instrumentation.mojom.HeapProfilerHelper";

class HeapProfilerHelper_GetVmRegionsForHeapProfiler_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ForwardToCallback(
      HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ForwardToCallback);
};

HeapProfilerHelperProxy::HeapProfilerHelperProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HeapProfilerHelperProxy::GetVmRegionsForHeapProfiler(
    const std::vector<base::ProcessId>& in_pids, GetVmRegionsForHeapProfilerCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HeapProfilerHelper::GetVmRegionsForHeapProfiler");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pids)::BaseType::BufferWriter
      pids_writer;
  const mojo::internal::ContainerValidateParams pids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
      in_pids, buffer, &pids_writer, &pids_validate_params,
      &serialization_context);
  params->pids.Set(
      pids_writer.is_null() ? nullptr : pids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pids in HeapProfilerHelper.GetVmRegionsForHeapProfiler request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HeapProfilerHelper::Name_);
  message.set_method_name("GetVmRegionsForHeapProfiler");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder {
 public:
  static HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder> proxy(
        new HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::flat_map<base::ProcessId, std::vector<VmRegionPtr>> in_vm_regions);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder);
};

bool HeapProfilerHelper_GetVmRegionsForHeapProfiler_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::flat_map<base::ProcessId, std::vector<VmRegionPtr>> p_vm_regions{};
  HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadVmRegions(&p_vm_regions))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HeapProfilerHelper::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_vm_regions));
  return true;
}

void HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder::Run(
    base::flat_map<base::ProcessId, std::vector<VmRegionPtr>> in_vm_regions) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->vm_regions)::BaseType::BufferWriter
      vm_regions_writer;
  const mojo::internal::ContainerValidateParams vm_regions_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<::mojo_base::mojom::ProcessIdDataView, mojo::ArrayDataView<::memory_instrumentation::mojom::VmRegionDataView>>>(
      in_vm_regions, buffer, &vm_regions_writer, &vm_regions_validate_params,
      &serialization_context);
  params->vm_regions.Set(
      vm_regions_writer.is_null() ? nullptr : vm_regions_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->vm_regions.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null vm_regions in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HeapProfilerHelper::Name_);
  message.set_method_name("GetVmRegionsForHeapProfiler");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool HeapProfilerHelperStubDispatch::Accept(
    HeapProfilerHelper* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name: {
      break;
    }
  }
  return false;
}

// static
bool HeapProfilerHelperStubDispatch::AcceptWithResponder(
    HeapProfilerHelper* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HeapProfilerHelper::GetVmRegionsForHeapProfiler",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data* params =
          reinterpret_cast<
              internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<base::ProcessId> p_pids{};
      HeapProfilerHelper_GetVmRegionsForHeapProfiler_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPids(&p_pids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HeapProfilerHelper::Name_, 0, false);
        return false;
      }
      HeapProfilerHelper::GetVmRegionsForHeapProfilerCallback callback =
          HeapProfilerHelper_GetVmRegionsForHeapProfiler_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetVmRegionsForHeapProfiler(
std::move(p_pids), std::move(callback));
      return true;
    }
  }
  return false;
}

bool HeapProfilerHelperRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HeapProfilerHelper RequestValidator");

  switch (message->header()->name) {
    case internal::kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool HeapProfilerHelperResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HeapProfilerHelper ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHeapProfilerHelper_GetVmRegionsForHeapProfiler_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HeapProfilerHelper_GetVmRegionsForHeapProfiler_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char Coordinator::Name_[] = "memory_instrumentation.mojom.Coordinator";

class Coordinator_RequestGlobalMemoryDump_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_RequestGlobalMemoryDump_ForwardToCallback(
      Coordinator::RequestGlobalMemoryDumpCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::RequestGlobalMemoryDumpCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestGlobalMemoryDump_ForwardToCallback);
};

class Coordinator_RequestGlobalMemoryDumpForPid_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_RequestGlobalMemoryDumpForPid_ForwardToCallback(
      Coordinator::RequestGlobalMemoryDumpForPidCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::RequestGlobalMemoryDumpForPidCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestGlobalMemoryDumpForPid_ForwardToCallback);
};

class Coordinator_RequestPrivateMemoryFootprint_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_RequestPrivateMemoryFootprint_ForwardToCallback(
      Coordinator::RequestPrivateMemoryFootprintCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::RequestPrivateMemoryFootprintCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestPrivateMemoryFootprint_ForwardToCallback);
};

class Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ForwardToCallback(
      Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ForwardToCallback);
};

CoordinatorProxy::CoordinatorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CoordinatorProxy::RegisterClientProcess(
    ClientProcessPtr in_client_process, ProcessType in_process_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RegisterClientProcess");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RegisterClientProcess_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RegisterClientProcess_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::memory_instrumentation::mojom::ClientProcessPtrDataView>(
      in_client_process, &params->client_process, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_process),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_process in Coordinator.RegisterClientProcess request");
  mojo::internal::Serialize<::memory_instrumentation::mojom::ProcessType>(
      in_process_type, &params->process_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RegisterClientProcess");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CoordinatorProxy::RequestGlobalMemoryDump(
    base::trace_event::MemoryDumpType in_dump_type, base::trace_event::MemoryDumpLevelOfDetail in_level_of_detail, const std::vector<std::string>& in_allocator_dump_names, RequestGlobalMemoryDumpCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDump");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestGlobalMemoryDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestGlobalMemoryDump_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::memory_instrumentation::mojom::DumpType>(
      in_dump_type, &params->dump_type);
  mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
      in_level_of_detail, &params->level_of_detail);
  typename decltype(params->allocator_dump_names)::BaseType::BufferWriter
      allocator_dump_names_writer;
  const mojo::internal::ContainerValidateParams allocator_dump_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_allocator_dump_names, buffer, &allocator_dump_names_writer, &allocator_dump_names_validate_params,
      &serialization_context);
  params->allocator_dump_names.Set(
      allocator_dump_names_writer.is_null() ? nullptr : allocator_dump_names_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->allocator_dump_names.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allocator_dump_names in Coordinator.RequestGlobalMemoryDump request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestGlobalMemoryDump");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_RequestGlobalMemoryDump_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::RequestGlobalMemoryDumpForPid(
    base::ProcessId in_pid, const std::vector<std::string>& in_allocator_dump_names, RequestGlobalMemoryDumpForPidCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpForPid");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestGlobalMemoryDumpForPid_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pid)::BaseType::BufferWriter
      pid_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
      in_pid, buffer, &pid_writer, &serialization_context);
  params->pid.Set(
      pid_writer.is_null() ? nullptr : pid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pid in Coordinator.RequestGlobalMemoryDumpForPid request");
  typename decltype(params->allocator_dump_names)::BaseType::BufferWriter
      allocator_dump_names_writer;
  const mojo::internal::ContainerValidateParams allocator_dump_names_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_allocator_dump_names, buffer, &allocator_dump_names_writer, &allocator_dump_names_validate_params,
      &serialization_context);
  params->allocator_dump_names.Set(
      allocator_dump_names_writer.is_null() ? nullptr : allocator_dump_names_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->allocator_dump_names.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allocator_dump_names in Coordinator.RequestGlobalMemoryDumpForPid request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestGlobalMemoryDumpForPid");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_RequestGlobalMemoryDumpForPid_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::RequestPrivateMemoryFootprint(
    base::ProcessId in_pid, RequestPrivateMemoryFootprintCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestPrivateMemoryFootprint");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestPrivateMemoryFootprint_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestPrivateMemoryFootprint_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pid)::BaseType::BufferWriter
      pid_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ProcessIdDataView>(
      in_pid, buffer, &pid_writer, &serialization_context);
  params->pid.Set(
      pid_writer.is_null() ? nullptr : pid_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pid.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pid in Coordinator.RequestPrivateMemoryFootprint request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestPrivateMemoryFootprint");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_RequestPrivateMemoryFootprint_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::RequestGlobalMemoryDumpAndAppendToTrace(
    base::trace_event::MemoryDumpType in_dump_type, base::trace_event::MemoryDumpLevelOfDetail in_level_of_detail, RequestGlobalMemoryDumpAndAppendToTraceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpAndAppendToTrace");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::memory_instrumentation::mojom::DumpType>(
      in_dump_type, &params->dump_type);
  mojo::internal::Serialize<::memory_instrumentation::mojom::LevelOfDetail>(
      in_level_of_detail, &params->level_of_detail);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestGlobalMemoryDumpAndAppendToTrace");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CoordinatorProxy::RegisterHeapProfiler(
    HeapProfilerPtr in_heap_profiler) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RegisterHeapProfiler");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RegisterHeapProfiler_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RegisterHeapProfiler_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::memory_instrumentation::mojom::HeapProfilerPtrDataView>(
      in_heap_profiler, &params->heap_profiler, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->heap_profiler),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid heap_profiler in Coordinator.RegisterHeapProfiler request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RegisterHeapProfiler");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class Coordinator_RequestGlobalMemoryDump_ProxyToResponder {
 public:
  static Coordinator::RequestGlobalMemoryDumpCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_RequestGlobalMemoryDump_ProxyToResponder> proxy(
        new Coordinator_RequestGlobalMemoryDump_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_RequestGlobalMemoryDump_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_RequestGlobalMemoryDump_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Coordinator_RequestGlobalMemoryDump_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Coordinator::RequestGlobalMemoryDumpCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, GlobalMemoryDumpPtr in_global_memory_dump);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestGlobalMemoryDump_ProxyToResponder);
};

bool Coordinator_RequestGlobalMemoryDump_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  GlobalMemoryDumpPtr p_global_memory_dump{};
  Coordinator_RequestGlobalMemoryDump_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadGlobalMemoryDump(&p_global_memory_dump))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_global_memory_dump));
  return true;
}

void Coordinator_RequestGlobalMemoryDump_ProxyToResponder::Run(
    bool in_success, GlobalMemoryDumpPtr in_global_memory_dump) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestGlobalMemoryDump_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->global_memory_dump)::BaseType::BufferWriter
      global_memory_dump_writer;
  mojo::internal::Serialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
      in_global_memory_dump, buffer, &global_memory_dump_writer, &serialization_context);
  params->global_memory_dump.Set(
      global_memory_dump_writer.is_null() ? nullptr : global_memory_dump_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestGlobalMemoryDump");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder {
 public:
  static Coordinator::RequestGlobalMemoryDumpForPidCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder> proxy(
        new Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Coordinator::RequestGlobalMemoryDumpForPidCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, GlobalMemoryDumpPtr in_global_memory_dump);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder);
};

bool Coordinator_RequestGlobalMemoryDumpForPid_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpForPidCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  GlobalMemoryDumpPtr p_global_memory_dump{};
  Coordinator_RequestGlobalMemoryDumpForPid_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadGlobalMemoryDump(&p_global_memory_dump))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_global_memory_dump));
  return true;
}

void Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder::Run(
    bool in_success, GlobalMemoryDumpPtr in_global_memory_dump) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestGlobalMemoryDumpForPid_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->global_memory_dump)::BaseType::BufferWriter
      global_memory_dump_writer;
  mojo::internal::Serialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
      in_global_memory_dump, buffer, &global_memory_dump_writer, &serialization_context);
  params->global_memory_dump.Set(
      global_memory_dump_writer.is_null() ? nullptr : global_memory_dump_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpForPidCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestGlobalMemoryDumpForPid");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder {
 public:
  static Coordinator::RequestPrivateMemoryFootprintCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder> proxy(
        new Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Coordinator::RequestPrivateMemoryFootprintCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, GlobalMemoryDumpPtr in_global_memory_dump);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder);
};

bool Coordinator_RequestPrivateMemoryFootprint_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestPrivateMemoryFootprintCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  GlobalMemoryDumpPtr p_global_memory_dump{};
  Coordinator_RequestPrivateMemoryFootprint_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadGlobalMemoryDump(&p_global_memory_dump))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_global_memory_dump));
  return true;
}

void Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder::Run(
    bool in_success, GlobalMemoryDumpPtr in_global_memory_dump) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestPrivateMemoryFootprint_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->global_memory_dump)::BaseType::BufferWriter
      global_memory_dump_writer;
  mojo::internal::Serialize<::memory_instrumentation::mojom::GlobalMemoryDumpDataView>(
      in_global_memory_dump, buffer, &global_memory_dump_writer, &serialization_context);
  params->global_memory_dump.Set(
      global_memory_dump_writer.is_null() ? nullptr : global_memory_dump_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestPrivateMemoryFootprintCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestPrivateMemoryFootprint");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder {
 public:
  static Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder> proxy(
        new Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, uint64_t in_dump_id);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder);
};

bool Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  uint64_t p_dump_id{};
  Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  p_dump_id = input_data_view.dump_id();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Coordinator::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_dump_id));
  return true;
}

void Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder::Run(
    bool in_success, uint64_t in_dump_id) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::memory_instrumentation::mojom::internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  params->dump_id = in_dump_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Coordinator::Name_);
  message.set_method_name("RequestGlobalMemoryDumpAndAppendToTrace");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CoordinatorStubDispatch::Accept(
    Coordinator* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCoordinator_RegisterClientProcess_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RegisterClientProcess",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Coordinator_RegisterClientProcess_Params_Data* params =
          reinterpret_cast<internal::Coordinator_RegisterClientProcess_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClientProcessPtr p_client_process{};
      ProcessType p_process_type{};
      Coordinator_RegisterClientProcess_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_process =
          input_data_view.TakeClientProcess<decltype(p_client_process)>();
      if (!input_data_view.ReadProcessType(&p_process_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterClientProcess(
std::move(p_client_process), 
std::move(p_process_type));
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDump_Name: {
      break;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpForPid_Name: {
      break;
    }
    case internal::kCoordinator_RequestPrivateMemoryFootprint_Name: {
      break;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name: {
      break;
    }
    case internal::kCoordinator_RegisterHeapProfiler_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RegisterHeapProfiler",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Coordinator_RegisterHeapProfiler_Params_Data* params =
          reinterpret_cast<internal::Coordinator_RegisterHeapProfiler_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      HeapProfilerPtr p_heap_profiler{};
      Coordinator_RegisterHeapProfiler_ParamsDataView input_data_view(params, &serialization_context);
      
      p_heap_profiler =
          input_data_view.TakeHeapProfiler<decltype(p_heap_profiler)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RegisterHeapProfiler(
std::move(p_heap_profiler));
      return true;
    }
  }
  return false;
}

// static
bool CoordinatorStubDispatch::AcceptWithResponder(
    Coordinator* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCoordinator_RegisterClientProcess_Name: {
      break;
    }
    case internal::kCoordinator_RequestGlobalMemoryDump_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDump",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_RequestGlobalMemoryDump_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_RequestGlobalMemoryDump_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::trace_event::MemoryDumpType p_dump_type{};
      base::trace_event::MemoryDumpLevelOfDetail p_level_of_detail{};
      std::vector<std::string> p_allocator_dump_names{};
      Coordinator_RequestGlobalMemoryDump_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDumpType(&p_dump_type))
        success = false;
      if (!input_data_view.ReadLevelOfDetail(&p_level_of_detail))
        success = false;
      if (!input_data_view.ReadAllocatorDumpNames(&p_allocator_dump_names))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 1, false);
        return false;
      }
      Coordinator::RequestGlobalMemoryDumpCallback callback =
          Coordinator_RequestGlobalMemoryDump_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestGlobalMemoryDump(
std::move(p_dump_type), 
std::move(p_level_of_detail), 
std::move(p_allocator_dump_names), std::move(callback));
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpForPid_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpForPid",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::ProcessId p_pid{};
      std::vector<std::string> p_allocator_dump_names{};
      Coordinator_RequestGlobalMemoryDumpForPid_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPid(&p_pid))
        success = false;
      if (!input_data_view.ReadAllocatorDumpNames(&p_allocator_dump_names))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 2, false);
        return false;
      }
      Coordinator::RequestGlobalMemoryDumpForPidCallback callback =
          Coordinator_RequestGlobalMemoryDumpForPid_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestGlobalMemoryDumpForPid(
std::move(p_pid), 
std::move(p_allocator_dump_names), std::move(callback));
      return true;
    }
    case internal::kCoordinator_RequestPrivateMemoryFootprint_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestPrivateMemoryFootprint",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_RequestPrivateMemoryFootprint_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_RequestPrivateMemoryFootprint_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::ProcessId p_pid{};
      Coordinator_RequestPrivateMemoryFootprint_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPid(&p_pid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 3, false);
        return false;
      }
      Coordinator::RequestPrivateMemoryFootprintCallback callback =
          Coordinator_RequestPrivateMemoryFootprint_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestPrivateMemoryFootprint(
std::move(p_pid), std::move(callback));
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Coordinator::RequestGlobalMemoryDumpAndAppendToTrace",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data* params =
          reinterpret_cast<
              internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::trace_event::MemoryDumpType p_dump_type{};
      base::trace_event::MemoryDumpLevelOfDetail p_level_of_detail{};
      Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDumpType(&p_dump_type))
        success = false;
      if (!input_data_view.ReadLevelOfDetail(&p_level_of_detail))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Coordinator::Name_, 4, false);
        return false;
      }
      Coordinator::RequestGlobalMemoryDumpAndAppendToTraceCallback callback =
          Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestGlobalMemoryDumpAndAppendToTrace(
std::move(p_dump_type), 
std::move(p_level_of_detail), std::move(callback));
      return true;
    }
    case internal::kCoordinator_RegisterHeapProfiler_Name: {
      break;
    }
  }
  return false;
}

bool CoordinatorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Coordinator RequestValidator");

  switch (message->header()->name) {
    case internal::kCoordinator_RegisterClientProcess_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RegisterClientProcess_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDump_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestGlobalMemoryDump_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpForPid_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestGlobalMemoryDumpForPid_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestPrivateMemoryFootprint_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestPrivateMemoryFootprint_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RegisterHeapProfiler_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RegisterHeapProfiler_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool CoordinatorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Coordinator ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCoordinator_RequestGlobalMemoryDump_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestGlobalMemoryDump_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpForPid_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestGlobalMemoryDumpForPid_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestPrivateMemoryFootprint_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestPrivateMemoryFootprint_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCoordinator_RequestGlobalMemoryDumpAndAppendToTrace_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Coordinator_RequestGlobalMemoryDumpAndAppendToTrace_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace mojom
}  // namespace memory_instrumentation

namespace mojo {


// static
bool StructTraits<::memory_instrumentation::mojom::RequestArgs::DataView, ::memory_instrumentation::mojom::RequestArgsPtr>::Read(
    ::memory_instrumentation::mojom::RequestArgs::DataView input,
    ::memory_instrumentation::mojom::RequestArgsPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::RequestArgsPtr result(::memory_instrumentation::mojom::RequestArgs::New());
  
      result->dump_guid = input.dump_guid();
      if (!input.ReadDumpType(&result->dump_type))
        success = false;
      if (!input.ReadLevelOfDetail(&result->level_of_detail))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEdge::DataView, ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr>::Read(
    ::memory_instrumentation::mojom::RawAllocatorDumpEdge::DataView input,
    ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::RawAllocatorDumpEdgePtr result(::memory_instrumentation::mojom::RawAllocatorDumpEdge::New());
  
      result->source_id = input.source_id();
      result->target_id = input.target_id();
      result->importance = input.importance();
      result->overridable = input.overridable();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntry::DataView, ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr>::Read(
    ::memory_instrumentation::mojom::RawAllocatorDumpEntry::DataView input,
    ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::RawAllocatorDumpEntryPtr result(::memory_instrumentation::mojom::RawAllocatorDumpEntry::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadUnits(&result->units))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::RawAllocatorDump::DataView, ::memory_instrumentation::mojom::RawAllocatorDumpPtr>::Read(
    ::memory_instrumentation::mojom::RawAllocatorDump::DataView input,
    ::memory_instrumentation::mojom::RawAllocatorDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::RawAllocatorDumpPtr result(::memory_instrumentation::mojom::RawAllocatorDump::New());
  
      result->id = input.id();
      if (!input.ReadAbsoluteName(&result->absolute_name))
        success = false;
      result->weak = input.weak();
      if (!input.ReadLevelOfDetail(&result->level_of_detail))
        success = false;
      if (!input.ReadEntries(&result->entries))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::RawProcessMemoryDump::DataView, ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr>::Read(
    ::memory_instrumentation::mojom::RawProcessMemoryDump::DataView input,
    ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::RawProcessMemoryDumpPtr result(::memory_instrumentation::mojom::RawProcessMemoryDump::New());
  
      if (!input.ReadLevelOfDetail(&result->level_of_detail))
        success = false;
      if (!input.ReadAllocatorDumpEdges(&result->allocator_dump_edges))
        success = false;
      if (!input.ReadAllocatorDumps(&result->allocator_dumps))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::VmRegion::DataView, ::memory_instrumentation::mojom::VmRegionPtr>::Read(
    ::memory_instrumentation::mojom::VmRegion::DataView input,
    ::memory_instrumentation::mojom::VmRegionPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::VmRegionPtr result(::memory_instrumentation::mojom::VmRegion::New());
  
      result->start_address = input.start_address();
      result->size_in_bytes = input.size_in_bytes();
      result->module_timestamp = input.module_timestamp();
      if (!input.ReadModuleDebugid(&result->module_debugid))
        success = false;
      if (!input.ReadModuleDebugPath(&result->module_debug_path))
        success = false;
      result->protection_flags = input.protection_flags();
      if (!input.ReadMappedFile(&result->mapped_file))
        success = false;
      result->byte_stats_private_dirty_resident = input.byte_stats_private_dirty_resident();
      result->byte_stats_private_clean_resident = input.byte_stats_private_clean_resident();
      result->byte_stats_shared_dirty_resident = input.byte_stats_shared_dirty_resident();
      result->byte_stats_shared_clean_resident = input.byte_stats_shared_clean_resident();
      result->byte_stats_swapped = input.byte_stats_swapped();
      result->byte_stats_proportional_resident = input.byte_stats_proportional_resident();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::PlatformPrivateFootprint::DataView, ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr>::Read(
    ::memory_instrumentation::mojom::PlatformPrivateFootprint::DataView input,
    ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::PlatformPrivateFootprintPtr result(::memory_instrumentation::mojom::PlatformPrivateFootprint::New());
  
      result->phys_footprint_bytes = input.phys_footprint_bytes();
      result->internal_bytes = input.internal_bytes();
      result->compressed_bytes = input.compressed_bytes();
      result->rss_anon_bytes = input.rss_anon_bytes();
      result->vm_swap_bytes = input.vm_swap_bytes();
      result->private_bytes = input.private_bytes();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::RawOSMemDump::DataView, ::memory_instrumentation::mojom::RawOSMemDumpPtr>::Read(
    ::memory_instrumentation::mojom::RawOSMemDump::DataView input,
    ::memory_instrumentation::mojom::RawOSMemDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::RawOSMemDumpPtr result(::memory_instrumentation::mojom::RawOSMemDump::New());
  
      result->resident_set_kb = input.resident_set_kb();
      result->peak_resident_set_kb = input.peak_resident_set_kb();
      result->is_peak_rss_resettable = input.is_peak_rss_resettable();
      if (!input.ReadPlatformPrivateFootprint(&result->platform_private_footprint))
        success = false;
      if (!input.ReadMemoryMaps(&result->memory_maps))
        success = false;
      if (!input.ReadNativeLibraryPagesBitmap(&result->native_library_pages_bitmap))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::OSMemDump::DataView, ::memory_instrumentation::mojom::OSMemDumpPtr>::Read(
    ::memory_instrumentation::mojom::OSMemDump::DataView input,
    ::memory_instrumentation::mojom::OSMemDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::OSMemDumpPtr result(::memory_instrumentation::mojom::OSMemDump::New());
  
      result->resident_set_kb = input.resident_set_kb();
      result->peak_resident_set_kb = input.peak_resident_set_kb();
      result->is_peak_rss_resettable = input.is_peak_rss_resettable();
      result->private_footprint_kb = input.private_footprint_kb();
      result->shared_footprint_kb = input.shared_footprint_kb();
      result->private_footprint_swap_kb = input.private_footprint_swap_kb();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::AllocatorMemDump::DataView, ::memory_instrumentation::mojom::AllocatorMemDumpPtr>::Read(
    ::memory_instrumentation::mojom::AllocatorMemDump::DataView input,
    ::memory_instrumentation::mojom::AllocatorMemDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::AllocatorMemDumpPtr result(::memory_instrumentation::mojom::AllocatorMemDump::New());
  
      if (!input.ReadNumericEntries(&result->numeric_entries))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::ProcessMemoryDump::DataView, ::memory_instrumentation::mojom::ProcessMemoryDumpPtr>::Read(
    ::memory_instrumentation::mojom::ProcessMemoryDump::DataView input,
    ::memory_instrumentation::mojom::ProcessMemoryDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::ProcessMemoryDumpPtr result(::memory_instrumentation::mojom::ProcessMemoryDump::New());
  
      if (!input.ReadProcessType(&result->process_type))
        success = false;
      if (!input.ReadOsDump(&result->os_dump))
        success = false;
      if (!input.ReadChromeAllocatorDumps(&result->chrome_allocator_dumps))
        success = false;
      if (!input.ReadPid(&result->pid))
        success = false;
      if (!input.ReadServiceNames(&result->service_names))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::AggregatedMetrics::DataView, ::memory_instrumentation::mojom::AggregatedMetricsPtr>::Read(
    ::memory_instrumentation::mojom::AggregatedMetrics::DataView input,
    ::memory_instrumentation::mojom::AggregatedMetricsPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::AggregatedMetricsPtr result(::memory_instrumentation::mojom::AggregatedMetrics::New());
  
      result->native_library_resident_kb = input.native_library_resident_kb();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::GlobalMemoryDump::DataView, ::memory_instrumentation::mojom::GlobalMemoryDumpPtr>::Read(
    ::memory_instrumentation::mojom::GlobalMemoryDump::DataView input,
    ::memory_instrumentation::mojom::GlobalMemoryDumpPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::GlobalMemoryDumpPtr result(::memory_instrumentation::mojom::GlobalMemoryDump::New());
  
      if (!input.ReadStartTime(&result->start_time))
        success = false;
      if (!input.ReadProcessDumps(&result->process_dumps))
        success = false;
      if (!input.ReadAggregatedMetrics(&result->aggregated_metrics))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::memory_instrumentation::mojom::HeapProfileResult::DataView, ::memory_instrumentation::mojom::HeapProfileResultPtr>::Read(
    ::memory_instrumentation::mojom::HeapProfileResult::DataView input,
    ::memory_instrumentation::mojom::HeapProfileResultPtr* output) {
  bool success = true;
  ::memory_instrumentation::mojom::HeapProfileResultPtr result(::memory_instrumentation::mojom::HeapProfileResult::New());
  
      if (!input.ReadPid(&result->pid))
        success = false;
      if (!input.ReadJson(&result->json))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::memory_instrumentation::mojom::RawAllocatorDumpEntryValue::DataView, ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr>::Read(
    ::memory_instrumentation::mojom::RawAllocatorDumpEntryValue::DataView input,
    ::memory_instrumentation::mojom::RawAllocatorDumpEntryValuePtr* output) {
  using UnionType = ::memory_instrumentation::mojom::RawAllocatorDumpEntryValue;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::VALUE_UINT64: {
      *output = UnionType::NewValueUint64(input.value_uint64());
      break;
    }
    case Tag::VALUE_STRING: {
      std::string result_value_string;
      if (!input.ReadValueString(&result_value_string))
        return false;

      *output = UnionType::NewValueString(
          std::move(result_value_string));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif