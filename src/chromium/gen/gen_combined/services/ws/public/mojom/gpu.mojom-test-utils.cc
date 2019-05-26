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


#include "services/ws/public/mojom/gpu.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "gpu/ipc/common/gpu_feature_info.mojom.h"
#include "gpu/ipc/common/gpu_info.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/buffer_types.mojom.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_JUMBO_H_
#include "gpu/ipc/common/gpu_feature_info_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_struct_traits.h"
#endif


namespace ws {
namespace mojom {


void GpuMemoryBufferFactoryInterceptorForTesting::CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) {
  GetForwardingInterface()->CreateGpuMemoryBuffer(std::move(id), std::move(size), std::move(format), std::move(usage), std::move(callback));
}
void GpuMemoryBufferFactoryInterceptorForTesting::DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) {
  GetForwardingInterface()->DestroyGpuMemoryBuffer(std::move(id), std::move(sync_token));
}
GpuMemoryBufferFactoryAsyncWaiter::GpuMemoryBufferFactoryAsyncWaiter(
    GpuMemoryBufferFactory* proxy) : proxy_(proxy) {}

GpuMemoryBufferFactoryAsyncWaiter::~GpuMemoryBufferFactoryAsyncWaiter() = default;

void GpuMemoryBufferFactoryAsyncWaiter::CreateGpuMemoryBuffer(
    gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, gfx::GpuMemoryBufferHandle* out_buffer_handle) {
  base::RunLoop loop;
  proxy_->CreateGpuMemoryBuffer(std::move(id),std::move(size),std::move(format),std::move(usage),
      base::BindOnce(
          [](base::RunLoop* loop,
             gfx::GpuMemoryBufferHandle* out_buffer_handle
,
             gfx::GpuMemoryBufferHandle buffer_handle) {*out_buffer_handle = std::move(buffer_handle);
            loop->Quit();
          },
          &loop,
          out_buffer_handle));
  loop.Run();
}



void GpuInterceptorForTesting::CreateGpuMemoryBufferFactory(GpuMemoryBufferFactoryRequest request) {
  GetForwardingInterface()->CreateGpuMemoryBufferFactory(std::move(request));
}
void GpuInterceptorForTesting::EstablishGpuChannel(EstablishGpuChannelCallback callback) {
  GetForwardingInterface()->EstablishGpuChannel(std::move(callback));
}
void GpuInterceptorForTesting::CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) {
  GetForwardingInterface()->CreateVideoEncodeAcceleratorProvider(std::move(vea_provider));
}
GpuAsyncWaiter::GpuAsyncWaiter(
    Gpu* proxy) : proxy_(proxy) {}

GpuAsyncWaiter::~GpuAsyncWaiter() = default;

void GpuAsyncWaiter::EstablishGpuChannel(
    int32_t* out_client_id, mojo::ScopedMessagePipeHandle* out_channel_handle, gpu::GPUInfo* out_gpu_info, gpu::GpuFeatureInfo* out_gpu_feature_info) {
  base::RunLoop loop;
  proxy_->EstablishGpuChannel(
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_client_id
,
             mojo::ScopedMessagePipeHandle* out_channel_handle
,
             gpu::GPUInfo* out_gpu_info
,
             gpu::GpuFeatureInfo* out_gpu_feature_info
,
             int32_t client_id,
             mojo::ScopedMessagePipeHandle channel_handle,
             const gpu::GPUInfo& gpu_info,
             const gpu::GpuFeatureInfo& gpu_feature_info) {*out_client_id = std::move(client_id);*out_channel_handle = std::move(channel_handle);*out_gpu_info = std::move(gpu_info);*out_gpu_feature_info = std::move(gpu_feature_info);
            loop->Quit();
          },
          &loop,
          out_client_id,
          out_channel_handle,
          out_gpu_info,
          out_gpu_feature_info));
  loop.Run();
}





}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif