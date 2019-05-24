// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_FORWARD_H_



#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"






namespace ws {
namespace mojom {
class GpuMemoryBufferFactory;
using GpuMemoryBufferFactoryPtr = mojo::InterfacePtr<GpuMemoryBufferFactory>;
using GpuMemoryBufferFactoryPtrInfo = mojo::InterfacePtrInfo<GpuMemoryBufferFactory>;
using ThreadSafeGpuMemoryBufferFactoryPtr =
    mojo::ThreadSafeInterfacePtr<GpuMemoryBufferFactory>;
using GpuMemoryBufferFactoryRequest = mojo::InterfaceRequest<GpuMemoryBufferFactory>;
using GpuMemoryBufferFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<GpuMemoryBufferFactory>;
using ThreadSafeGpuMemoryBufferFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<GpuMemoryBufferFactory>;
using GpuMemoryBufferFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GpuMemoryBufferFactory>;
using GpuMemoryBufferFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GpuMemoryBufferFactory>;

class Gpu;
using GpuPtr = mojo::InterfacePtr<Gpu>;
using GpuPtrInfo = mojo::InterfacePtrInfo<Gpu>;
using ThreadSafeGpuPtr =
    mojo::ThreadSafeInterfacePtr<Gpu>;
using GpuRequest = mojo::InterfaceRequest<Gpu>;
using GpuAssociatedPtr =
    mojo::AssociatedInterfacePtr<Gpu>;
using ThreadSafeGpuAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Gpu>;
using GpuAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Gpu>;
using GpuAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Gpu>;




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_FORWARD_H_