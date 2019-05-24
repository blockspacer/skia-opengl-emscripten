// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_BLINK_FORWARD_H_



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
}  // namespace viz
}  // namespace mojom


namespace viz {
namespace mojom {
namespace blink {
class VideoDetectorObserver;
using VideoDetectorObserverPtr = mojo::InterfacePtr<VideoDetectorObserver>;
using VideoDetectorObserverPtrInfo = mojo::InterfacePtrInfo<VideoDetectorObserver>;
using ThreadSafeVideoDetectorObserverPtr =
    mojo::ThreadSafeInterfacePtr<VideoDetectorObserver>;
using VideoDetectorObserverRequest = mojo::InterfaceRequest<VideoDetectorObserver>;
using VideoDetectorObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDetectorObserver>;
using ThreadSafeVideoDetectorObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDetectorObserver>;
using VideoDetectorObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDetectorObserver>;
using VideoDetectorObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDetectorObserver>;




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_BLINK_FORWARD_H_