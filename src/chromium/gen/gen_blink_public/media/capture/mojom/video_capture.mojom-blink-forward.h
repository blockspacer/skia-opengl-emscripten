// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_FORWARD_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_FORWARD_H_



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

enum class VideoCaptureState : int32_t;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_VideoCaptureState_DataHashFn;

template <>
struct DefaultHash<::media::mojom::VideoCaptureState> {
  using Hash = media_mojom_internal_VideoCaptureState_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using VideoCaptureState = VideoCaptureState;  // Alias for definition in the parent namespace.
class VideoCaptureObserver;
using VideoCaptureObserverPtr = mojo::InterfacePtr<VideoCaptureObserver>;
using VideoCaptureObserverPtrInfo = mojo::InterfacePtrInfo<VideoCaptureObserver>;
using ThreadSafeVideoCaptureObserverPtr =
    mojo::ThreadSafeInterfacePtr<VideoCaptureObserver>;
using VideoCaptureObserverRequest = mojo::InterfaceRequest<VideoCaptureObserver>;
using VideoCaptureObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoCaptureObserver>;
using ThreadSafeVideoCaptureObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoCaptureObserver>;
using VideoCaptureObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoCaptureObserver>;
using VideoCaptureObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoCaptureObserver>;

class VideoCaptureHost;
using VideoCaptureHostPtr = mojo::InterfacePtr<VideoCaptureHost>;
using VideoCaptureHostPtrInfo = mojo::InterfacePtrInfo<VideoCaptureHost>;
using ThreadSafeVideoCaptureHostPtr =
    mojo::ThreadSafeInterfacePtr<VideoCaptureHost>;
using VideoCaptureHostRequest = mojo::InterfaceRequest<VideoCaptureHost>;
using VideoCaptureHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoCaptureHost>;
using ThreadSafeVideoCaptureHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoCaptureHost>;
using VideoCaptureHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoCaptureHost>;
using VideoCaptureHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoCaptureHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_BLINK_FORWARD_H_