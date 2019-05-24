// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_TEST_UTILS_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_TEST_UTILS_H_

#include "services/ws/public/mojom/gpu.mojom.h"


namespace ws {
namespace mojom {


class  GpuMemoryBufferFactoryInterceptorForTesting : public GpuMemoryBufferFactory {
  virtual GpuMemoryBufferFactory* GetForwardingInterface() = 0;
  void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) override;
  void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) override;
};
class  GpuMemoryBufferFactoryAsyncWaiter {
 public:
  explicit GpuMemoryBufferFactoryAsyncWaiter(GpuMemoryBufferFactory* proxy);
  ~GpuMemoryBufferFactoryAsyncWaiter();
  void CreateGpuMemoryBuffer(
      gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, gfx::GpuMemoryBufferHandle* out_buffer_handle);

 private:
  GpuMemoryBufferFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GpuMemoryBufferFactoryAsyncWaiter);
};


class  GpuInterceptorForTesting : public Gpu {
  virtual Gpu* GetForwardingInterface() = 0;
  void CreateGpuMemoryBufferFactory(GpuMemoryBufferFactoryRequest request) override;
  void EstablishGpuChannel(EstablishGpuChannelCallback callback) override;
  void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) override;
};
class  GpuAsyncWaiter {
 public:
  explicit GpuAsyncWaiter(Gpu* proxy);
  ~GpuAsyncWaiter();
  void EstablishGpuChannel(
      int32_t* out_client_id, mojo::ScopedMessagePipeHandle* out_channel_handle, gpu::GPUInfo* out_gpu_info, gpu::GpuFeatureInfo* out_gpu_feature_info);

 private:
  Gpu* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(GpuAsyncWaiter);
};




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_TEST_UTILS_H_