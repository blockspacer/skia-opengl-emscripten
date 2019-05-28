// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace heap_profiling {
namespace mojom {

namespace internal {


// The 752862723 value is based on sha256(salt + "ProfilingClient1").
constexpr uint32_t kProfilingClient_StartProfiling_Name = 752862723;
// The 1722751988 value is based on sha256(salt + "ProfilingClient2").
constexpr uint32_t kProfilingClient_RetrieveHeapProfile_Name = 1722751988;

}  // namespace internal
}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_SHARED_MESSAGE_IDS_H_