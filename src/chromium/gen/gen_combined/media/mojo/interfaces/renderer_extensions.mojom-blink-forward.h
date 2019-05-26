// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_FORWARD_H_



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


namespace media {
namespace mojom {
}  // namespace media
}  // namespace mojom


namespace media {
namespace mojom {
namespace blink {
class MediaPlayerRendererClientExtension;
using MediaPlayerRendererClientExtensionPtr = mojo::InterfacePtr<MediaPlayerRendererClientExtension>;
using MediaPlayerRendererClientExtensionPtrInfo = mojo::InterfacePtrInfo<MediaPlayerRendererClientExtension>;
using ThreadSafeMediaPlayerRendererClientExtensionPtr =
    mojo::ThreadSafeInterfacePtr<MediaPlayerRendererClientExtension>;
using MediaPlayerRendererClientExtensionRequest = mojo::InterfaceRequest<MediaPlayerRendererClientExtension>;
using MediaPlayerRendererClientExtensionAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaPlayerRendererClientExtension>;
using ThreadSafeMediaPlayerRendererClientExtensionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaPlayerRendererClientExtension>;
using MediaPlayerRendererClientExtensionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaPlayerRendererClientExtension>;
using MediaPlayerRendererClientExtensionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaPlayerRendererClientExtension>;

class MediaPlayerRendererExtension;
using MediaPlayerRendererExtensionPtr = mojo::InterfacePtr<MediaPlayerRendererExtension>;
using MediaPlayerRendererExtensionPtrInfo = mojo::InterfacePtrInfo<MediaPlayerRendererExtension>;
using ThreadSafeMediaPlayerRendererExtensionPtr =
    mojo::ThreadSafeInterfacePtr<MediaPlayerRendererExtension>;
using MediaPlayerRendererExtensionRequest = mojo::InterfaceRequest<MediaPlayerRendererExtension>;
using MediaPlayerRendererExtensionAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaPlayerRendererExtension>;
using ThreadSafeMediaPlayerRendererExtensionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaPlayerRendererExtension>;
using MediaPlayerRendererExtensionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaPlayerRendererExtension>;
using MediaPlayerRendererExtensionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaPlayerRendererExtension>;

class FlingingRendererClientExtension;
using FlingingRendererClientExtensionPtr = mojo::InterfacePtr<FlingingRendererClientExtension>;
using FlingingRendererClientExtensionPtrInfo = mojo::InterfacePtrInfo<FlingingRendererClientExtension>;
using ThreadSafeFlingingRendererClientExtensionPtr =
    mojo::ThreadSafeInterfacePtr<FlingingRendererClientExtension>;
using FlingingRendererClientExtensionRequest = mojo::InterfaceRequest<FlingingRendererClientExtension>;
using FlingingRendererClientExtensionAssociatedPtr =
    mojo::AssociatedInterfacePtr<FlingingRendererClientExtension>;
using ThreadSafeFlingingRendererClientExtensionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FlingingRendererClientExtension>;
using FlingingRendererClientExtensionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FlingingRendererClientExtension>;
using FlingingRendererClientExtensionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FlingingRendererClientExtension>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_FORWARD_H_