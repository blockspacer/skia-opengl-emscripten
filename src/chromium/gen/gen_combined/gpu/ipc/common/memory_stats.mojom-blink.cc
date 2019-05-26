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

#include "gpu/ipc/common/memory_stats.mojom-blink.h"

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

#include "gpu/ipc/common/memory_stats.mojom-params-data.h"
#include "gpu/ipc/common/memory_stats.mojom-shared-message-ids.h"

#include "gpu/ipc/common/memory_stats.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef GPU_IPC_COMMON_MEMORY_STATS_MOJOM_BLINK_JUMBO_H_
#define GPU_IPC_COMMON_MEMORY_STATS_MOJOM_BLINK_JUMBO_H_
#endif
namespace gpu {
namespace mojom {
namespace blink {
VideoMemoryProcessStats::VideoMemoryProcessStats()
    : video_memory_bytes(),
      has_duplicates() {}

VideoMemoryProcessStats::VideoMemoryProcessStats(
    uint64_t video_memory_bytes_in,
    bool has_duplicates_in)
    : video_memory_bytes(std::move(video_memory_bytes_in)),
      has_duplicates(std::move(has_duplicates_in)) {}

VideoMemoryProcessStats::~VideoMemoryProcessStats() = default;
size_t VideoMemoryProcessStats::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->video_memory_bytes);
  seed = mojo::internal::WTFHash(seed, this->has_duplicates);
  return seed;
}

bool VideoMemoryProcessStats::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoMemoryUsageStats::VideoMemoryUsageStats()
    : process_map(),
      bytes_allocated() {}

VideoMemoryUsageStats::VideoMemoryUsageStats(
    WTF::HashMap<int32_t, VideoMemoryProcessStatsPtr> process_map_in,
    uint64_t bytes_allocated_in)
    : process_map(std::move(process_map_in)),
      bytes_allocated(std::move(bytes_allocated_in)) {}

VideoMemoryUsageStats::~VideoMemoryUsageStats() = default;

bool VideoMemoryUsageStats::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


// static
bool StructTraits<::gpu::mojom::blink::VideoMemoryProcessStats::DataView, ::gpu::mojom::blink::VideoMemoryProcessStatsPtr>::Read(
    ::gpu::mojom::blink::VideoMemoryProcessStats::DataView input,
    ::gpu::mojom::blink::VideoMemoryProcessStatsPtr* output) {
  bool success = true;
  ::gpu::mojom::blink::VideoMemoryProcessStatsPtr result(::gpu::mojom::blink::VideoMemoryProcessStats::New());
  
      result->video_memory_bytes = input.video_memory_bytes();
      result->has_duplicates = input.has_duplicates();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::gpu::mojom::blink::VideoMemoryUsageStats::DataView, ::gpu::mojom::blink::VideoMemoryUsageStatsPtr>::Read(
    ::gpu::mojom::blink::VideoMemoryUsageStats::DataView input,
    ::gpu::mojom::blink::VideoMemoryUsageStatsPtr* output) {
  bool success = true;
  ::gpu::mojom::blink::VideoMemoryUsageStatsPtr result(::gpu::mojom::blink::VideoMemoryUsageStats::New());
  
      if (!input.ReadProcessMap(&result->process_map))
        success = false;
      result->bytes_allocated = input.bytes_allocated();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif