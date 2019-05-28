// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_FORWARD_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_FORWARD_H_



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






namespace heap_profiling {
namespace mojom {

enum class ProcessType : int32_t;
class ProfilingService;
using ProfilingServicePtr = mojo::InterfacePtr<ProfilingService>;
using ProfilingServicePtrInfo = mojo::InterfacePtrInfo<ProfilingService>;
using ThreadSafeProfilingServicePtr =
    mojo::ThreadSafeInterfacePtr<ProfilingService>;
using ProfilingServiceRequest = mojo::InterfaceRequest<ProfilingService>;
using ProfilingServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProfilingService>;
using ThreadSafeProfilingServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProfilingService>;
using ProfilingServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProfilingService>;
using ProfilingServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProfilingService>;




}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_FORWARD_H_