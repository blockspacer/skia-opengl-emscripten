// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_FORWARD_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

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


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace heap_profiling {
namespace mojom {
class ProfilingParamsDataView;

class HeapProfileSampleDataView;

class HeapProfileDataView;


enum class StackMode : int32_t;

enum class AllocatorType : int32_t;
class ProfilingParams;
using ProfilingParamsPtr = mojo::InlinedStructPtr<ProfilingParams>;

class HeapProfileSample;
using HeapProfileSamplePtr = mojo::StructPtr<HeapProfileSample>;

class HeapProfile;
using HeapProfilePtr = mojo::StructPtr<HeapProfile>;

class ProfilingClient;
using ProfilingClientPtr = mojo::InterfacePtr<ProfilingClient>;
using ProfilingClientPtrInfo = mojo::InterfacePtrInfo<ProfilingClient>;
using ThreadSafeProfilingClientPtr =
    mojo::ThreadSafeInterfacePtr<ProfilingClient>;
using ProfilingClientRequest = mojo::InterfaceRequest<ProfilingClient>;
using ProfilingClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProfilingClient>;
using ThreadSafeProfilingClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProfilingClient>;
using ProfilingClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProfilingClient>;
using ProfilingClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProfilingClient>;




}  // namespace mojom
}  // namespace heap_profiling

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_FORWARD_H_