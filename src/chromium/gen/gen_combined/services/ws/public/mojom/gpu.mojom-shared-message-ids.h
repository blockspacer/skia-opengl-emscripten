// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace ws {
namespace mojom {

namespace internal {


// The 1202659976 value is based on sha256(salt + "GpuMemoryBufferFactory1").
constexpr uint32_t kGpuMemoryBufferFactory_CreateGpuMemoryBuffer_Name = 1202659976;
// The 314114616 value is based on sha256(salt + "GpuMemoryBufferFactory2").
constexpr uint32_t kGpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Name = 314114616;
// The 379765574 value is based on sha256(salt + "Gpu1").
constexpr uint32_t kGpu_CreateGpuMemoryBufferFactory_Name = 379765574;
// The 781235952 value is based on sha256(salt + "Gpu2").
constexpr uint32_t kGpu_EstablishGpuChannel_Name = 781235952;
// The 1356319312 value is based on sha256(salt + "Gpu3").
constexpr uint32_t kGpu_CreateVideoEncodeAcceleratorProvider_Name = 1356319312;

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_SHARED_MESSAGE_IDS_H_