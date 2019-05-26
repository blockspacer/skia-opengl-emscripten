// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_FORWARD_H_



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
class WakeLockContext;
using WakeLockContextPtr = mojo::InterfacePtr<WakeLockContext>;
using WakeLockContextPtrInfo = mojo::InterfacePtrInfo<WakeLockContext>;
using ThreadSafeWakeLockContextPtr =
    mojo::ThreadSafeInterfacePtr<WakeLockContext>;
using WakeLockContextRequest = mojo::InterfaceRequest<WakeLockContext>;
using WakeLockContextAssociatedPtr =
    mojo::AssociatedInterfacePtr<WakeLockContext>;
using ThreadSafeWakeLockContextAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WakeLockContext>;
using WakeLockContextAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WakeLockContext>;
using WakeLockContextAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WakeLockContext>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_BLINK_FORWARD_H_