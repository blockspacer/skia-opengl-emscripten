// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 105599474 value is based on sha256(salt + "GpuMemoryBufferFactory1").
constexpr uint32_t kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name = 105599474;
// The 939784350 value is based on sha256(salt + "GpuMemoryBufferFactory2").
constexpr uint32_t kGpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Name = 939784350;
// The 63673755 value is based on sha256(salt + "Gpu1").
constexpr uint32_t kGpu_CreateGpuMemoryBufferFactory_Name = 63673755;
// The 759535231 value is based on sha256(salt + "Gpu2").
constexpr uint32_t kGpu_EstablishGpuChannel_Name = 759535231;
// The 137340375 value is based on sha256(salt + "Gpu3").
constexpr uint32_t kGpu_CreateVideoEncodeAcceleratorProvider_Name = 137340375;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_MESSAGE_IDS_H_