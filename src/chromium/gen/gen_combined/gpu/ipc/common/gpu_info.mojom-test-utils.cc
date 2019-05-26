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


#include "gpu/ipc/common/gpu_info.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "gpu/ipc/common/dx_diag_node.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_JUMBO_H_
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace gpu {
namespace mojom {




}  // namespace mojom
}  // namespace gpu

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif