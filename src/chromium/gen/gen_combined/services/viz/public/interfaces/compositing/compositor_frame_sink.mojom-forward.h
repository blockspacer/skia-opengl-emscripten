// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_FORWARD_H_



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






namespace viz {
namespace mojom {
class CompositorFrameSink;
using CompositorFrameSinkPtr = mojo::InterfacePtr<CompositorFrameSink>;
using CompositorFrameSinkPtrInfo = mojo::InterfacePtrInfo<CompositorFrameSink>;
using ThreadSafeCompositorFrameSinkPtr =
    mojo::ThreadSafeInterfacePtr<CompositorFrameSink>;
using CompositorFrameSinkRequest = mojo::InterfaceRequest<CompositorFrameSink>;
using CompositorFrameSinkAssociatedPtr =
    mojo::AssociatedInterfacePtr<CompositorFrameSink>;
using ThreadSafeCompositorFrameSinkAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CompositorFrameSink>;
using CompositorFrameSinkAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CompositorFrameSink>;
using CompositorFrameSinkAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CompositorFrameSink>;

class CompositorFrameSinkClient;
using CompositorFrameSinkClientPtr = mojo::InterfacePtr<CompositorFrameSinkClient>;
using CompositorFrameSinkClientPtrInfo = mojo::InterfacePtrInfo<CompositorFrameSinkClient>;
using ThreadSafeCompositorFrameSinkClientPtr =
    mojo::ThreadSafeInterfacePtr<CompositorFrameSinkClient>;
using CompositorFrameSinkClientRequest = mojo::InterfaceRequest<CompositorFrameSinkClient>;
using CompositorFrameSinkClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<CompositorFrameSinkClient>;
using ThreadSafeCompositorFrameSinkClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CompositorFrameSinkClient>;
using CompositorFrameSinkClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CompositorFrameSinkClient>;
using CompositorFrameSinkClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CompositorFrameSinkClient>;




}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_FORWARD_H_