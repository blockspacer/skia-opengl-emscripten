// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/public/platform/web_common.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class SurfaceEmbedder;
using SurfaceEmbedderPtr = mojo::InterfacePtr<SurfaceEmbedder>;
using SurfaceEmbedderPtrInfo = mojo::InterfacePtrInfo<SurfaceEmbedder>;
using ThreadSafeSurfaceEmbedderPtr =
    mojo::ThreadSafeInterfacePtr<SurfaceEmbedder>;
using SurfaceEmbedderRequest = mojo::InterfaceRequest<SurfaceEmbedder>;
using SurfaceEmbedderAssociatedPtr =
    mojo::AssociatedInterfacePtr<SurfaceEmbedder>;
using ThreadSafeSurfaceEmbedderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SurfaceEmbedder>;
using SurfaceEmbedderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SurfaceEmbedder>;
using SurfaceEmbedderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SurfaceEmbedder>;

class EmbeddedFrameSinkClient;
using EmbeddedFrameSinkClientPtr = mojo::InterfacePtr<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientPtrInfo = mojo::InterfacePtrInfo<EmbeddedFrameSinkClient>;
using ThreadSafeEmbeddedFrameSinkClientPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientRequest = mojo::InterfaceRequest<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedFrameSinkClient>;
using ThreadSafeEmbeddedFrameSinkClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedFrameSinkClient>;
using EmbeddedFrameSinkClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedFrameSinkClient>;

class EmbeddedFrameSinkProvider;
using EmbeddedFrameSinkProviderPtr = mojo::InterfacePtr<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderPtrInfo = mojo::InterfacePtrInfo<EmbeddedFrameSinkProvider>;
using ThreadSafeEmbeddedFrameSinkProviderPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderRequest = mojo::InterfaceRequest<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedFrameSinkProvider>;
using ThreadSafeEmbeddedFrameSinkProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedFrameSinkProvider>;
using EmbeddedFrameSinkProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedFrameSinkProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_BLINK_FORWARD_H_