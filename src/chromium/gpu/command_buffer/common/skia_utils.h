// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_COMMAND_BUFFER_COMMON_SKIA_UTILS_H_
#define GPU_COMMAND_BUFFER_COMMON_SKIA_UTILS_H_

#include <memory>

#include "base/optional.h"
#include "gpu/raster_export.h"

//#if SK_SUPPORT_GPU
class GrContext;
//#endif // SK_SUPPORT_GPU

namespace base {
namespace trace_event {
class ProcessMemoryDump;
}
}  // namespace base

namespace gpu {
namespace raster {

RASTER_EXPORT void DetermineGrCacheLimitsFromAvailableMemory(
    size_t* max_resource_cache_bytes,
    size_t* max_glyph_cache_texture_bytes);

RASTER_EXPORT void DefaultGrCacheLimitsForTests(
    size_t* max_resource_cache_bytes,
    size_t* max_glyph_cache_texture_bytes);

//#if SK_SUPPORT_GPU
// Dumps memory usage from the |context| to |pmd|. A |tracing_guid| can be used
// if these resources are referenced across processes for sharing across dumps.
RASTER_EXPORT void DumpGrMemoryStatistics(
    const GrContext* context,
    base::trace_event::ProcessMemoryDump* pmd,
    base::Optional<uint64_t> tracing_guid);
//#endif // SK_SUPPORT_GPU

}  // namespace raster
}  // namespace gpu

#endif  // GPU_COMMAND_BUFFER_COMMON_SKIA_UTILS_H_
