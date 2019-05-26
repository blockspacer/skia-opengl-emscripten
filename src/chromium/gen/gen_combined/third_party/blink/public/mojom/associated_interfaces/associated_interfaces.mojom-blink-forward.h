// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class AssociatedInterface;
using AssociatedInterfacePtr = mojo::InterfacePtr<AssociatedInterface>;
using AssociatedInterfacePtrInfo = mojo::InterfacePtrInfo<AssociatedInterface>;
using ThreadSafeAssociatedInterfacePtr =
    mojo::ThreadSafeInterfacePtr<AssociatedInterface>;
using AssociatedInterfaceRequest = mojo::InterfaceRequest<AssociatedInterface>;
using AssociatedInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<AssociatedInterface>;
using ThreadSafeAssociatedInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AssociatedInterface>;
using AssociatedInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AssociatedInterface>;
using AssociatedInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AssociatedInterface>;

class AssociatedInterfaceProvider;
using AssociatedInterfaceProviderPtr = mojo::InterfacePtr<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderPtrInfo = mojo::InterfacePtrInfo<AssociatedInterfaceProvider>;
using ThreadSafeAssociatedInterfaceProviderPtr =
    mojo::ThreadSafeInterfacePtr<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderRequest = mojo::InterfaceRequest<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AssociatedInterfaceProvider>;
using ThreadSafeAssociatedInterfaceProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AssociatedInterfaceProvider>;
using AssociatedInterfaceProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AssociatedInterfaceProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_FORWARD_H_