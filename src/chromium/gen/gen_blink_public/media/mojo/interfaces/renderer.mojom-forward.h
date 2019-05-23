// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {
class Renderer;
using RendererPtr = mojo::InterfacePtr<Renderer>;
using RendererPtrInfo = mojo::InterfacePtrInfo<Renderer>;
using ThreadSafeRendererPtr =
    mojo::ThreadSafeInterfacePtr<Renderer>;
using RendererRequest = mojo::InterfaceRequest<Renderer>;
using RendererAssociatedPtr =
    mojo::AssociatedInterfacePtr<Renderer>;
using ThreadSafeRendererAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Renderer>;
using RendererAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Renderer>;
using RendererAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Renderer>;

class RendererClient;
using RendererClientPtr = mojo::InterfacePtr<RendererClient>;
using RendererClientPtrInfo = mojo::InterfacePtrInfo<RendererClient>;
using ThreadSafeRendererClientPtr =
    mojo::ThreadSafeInterfacePtr<RendererClient>;
using RendererClientRequest = mojo::InterfaceRequest<RendererClient>;
using RendererClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererClient>;
using ThreadSafeRendererClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RendererClient>;
using RendererClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererClient>;
using RendererClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererClient>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_FORWARD_H_