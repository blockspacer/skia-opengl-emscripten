// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_FORWARD_H_



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


namespace media_session {
namespace mojom {
}  // namespace media_session
}  // namespace mojom


namespace media_session {
namespace mojom {
namespace blink {
class MediaControllerManager;
using MediaControllerManagerPtr = mojo::InterfacePtr<MediaControllerManager>;
using MediaControllerManagerPtrInfo = mojo::InterfacePtrInfo<MediaControllerManager>;
using ThreadSafeMediaControllerManagerPtr =
    mojo::ThreadSafeInterfacePtr<MediaControllerManager>;
using MediaControllerManagerRequest = mojo::InterfaceRequest<MediaControllerManager>;
using MediaControllerManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaControllerManager>;
using ThreadSafeMediaControllerManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaControllerManager>;
using MediaControllerManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaControllerManager>;
using MediaControllerManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaControllerManager>;

class MediaController;
using MediaControllerPtr = mojo::InterfacePtr<MediaController>;
using MediaControllerPtrInfo = mojo::InterfacePtrInfo<MediaController>;
using ThreadSafeMediaControllerPtr =
    mojo::ThreadSafeInterfacePtr<MediaController>;
using MediaControllerRequest = mojo::InterfaceRequest<MediaController>;
using MediaControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaController>;
using ThreadSafeMediaControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaController>;
using MediaControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaController>;
using MediaControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaController>;

class MediaControllerObserver;
using MediaControllerObserverPtr = mojo::InterfacePtr<MediaControllerObserver>;
using MediaControllerObserverPtrInfo = mojo::InterfacePtrInfo<MediaControllerObserver>;
using ThreadSafeMediaControllerObserverPtr =
    mojo::ThreadSafeInterfacePtr<MediaControllerObserver>;
using MediaControllerObserverRequest = mojo::InterfaceRequest<MediaControllerObserver>;
using MediaControllerObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaControllerObserver>;
using ThreadSafeMediaControllerObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaControllerObserver>;
using MediaControllerObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaControllerObserver>;
using MediaControllerObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaControllerObserver>;

class MediaControllerImageObserver;
using MediaControllerImageObserverPtr = mojo::InterfacePtr<MediaControllerImageObserver>;
using MediaControllerImageObserverPtrInfo = mojo::InterfacePtrInfo<MediaControllerImageObserver>;
using ThreadSafeMediaControllerImageObserverPtr =
    mojo::ThreadSafeInterfacePtr<MediaControllerImageObserver>;
using MediaControllerImageObserverRequest = mojo::InterfaceRequest<MediaControllerImageObserver>;
using MediaControllerImageObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaControllerImageObserver>;
using ThreadSafeMediaControllerImageObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaControllerImageObserver>;
using MediaControllerImageObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaControllerImageObserver>;
using MediaControllerImageObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaControllerImageObserver>;




}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_FORWARD_H_