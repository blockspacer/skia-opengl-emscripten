// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_FORWARD_H_



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


namespace device {
namespace mojom {
}  // namespace device
}  // namespace mojom


namespace device {
namespace mojom {
namespace blink {
class ScreenOrientation;
using ScreenOrientationPtr = mojo::InterfacePtr<ScreenOrientation>;
using ScreenOrientationPtrInfo = mojo::InterfacePtrInfo<ScreenOrientation>;
using ThreadSafeScreenOrientationPtr =
    mojo::ThreadSafeInterfacePtr<ScreenOrientation>;
using ScreenOrientationRequest = mojo::InterfaceRequest<ScreenOrientation>;
using ScreenOrientationAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScreenOrientation>;
using ThreadSafeScreenOrientationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScreenOrientation>;
using ScreenOrientationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScreenOrientation>;
using ScreenOrientationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScreenOrientation>;

class ScreenOrientationListener;
using ScreenOrientationListenerPtr = mojo::InterfacePtr<ScreenOrientationListener>;
using ScreenOrientationListenerPtrInfo = mojo::InterfacePtrInfo<ScreenOrientationListener>;
using ThreadSafeScreenOrientationListenerPtr =
    mojo::ThreadSafeInterfacePtr<ScreenOrientationListener>;
using ScreenOrientationListenerRequest = mojo::InterfaceRequest<ScreenOrientationListener>;
using ScreenOrientationListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ScreenOrientationListener>;
using ThreadSafeScreenOrientationListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ScreenOrientationListener>;
using ScreenOrientationListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ScreenOrientationListener>;
using ScreenOrientationListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ScreenOrientationListener>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_FORWARD_H_