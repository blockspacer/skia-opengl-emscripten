// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MEMORY_STATS_MOJOM_FORWARD_H_
#define GPU_IPC_COMMON_MEMORY_STATS_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class VideoMemoryProcessStatsDataView;

class VideoMemoryUsageStatsDataView;

class VideoMemoryProcessStats;
using VideoMemoryProcessStatsPtr = mojo::InlinedStructPtr<VideoMemoryProcessStats>;

class VideoMemoryUsageStats;
using VideoMemoryUsageStatsPtr = mojo::StructPtr<VideoMemoryUsageStats>;




}  // namespace mojom
}  // namespace gpu
#include "gpu/ipc/common/memory_stats.h"

#endif  // GPU_IPC_COMMON_MEMORY_STATS_MOJOM_FORWARD_H_