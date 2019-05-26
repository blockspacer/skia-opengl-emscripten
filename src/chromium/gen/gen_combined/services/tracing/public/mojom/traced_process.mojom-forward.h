// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_FORWARD_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_FORWARD_H_

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
#include "base/component_export.h"




namespace tracing {
namespace mojom {
class ConnectToTracingRequestDataView;

class ConnectToTracingRequest;
using ConnectToTracingRequestPtr = mojo::StructPtr<ConnectToTracingRequest>;

class TracedProcess;
using TracedProcessPtr = mojo::InterfacePtr<TracedProcess>;
using TracedProcessPtrInfo = mojo::InterfacePtrInfo<TracedProcess>;
using ThreadSafeTracedProcessPtr =
    mojo::ThreadSafeInterfacePtr<TracedProcess>;
using TracedProcessRequest = mojo::InterfaceRequest<TracedProcess>;
using TracedProcessAssociatedPtr =
    mojo::AssociatedInterfacePtr<TracedProcess>;
using ThreadSafeTracedProcessAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TracedProcess>;
using TracedProcessAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TracedProcess>;
using TracedProcessAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TracedProcess>;




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_FORWARD_H_