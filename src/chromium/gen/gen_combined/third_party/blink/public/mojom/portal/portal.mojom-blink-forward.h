// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class Portal;
using PortalPtr = mojo::InterfacePtr<Portal>;
using PortalPtrInfo = mojo::InterfacePtrInfo<Portal>;
using ThreadSafePortalPtr =
    mojo::ThreadSafeInterfacePtr<Portal>;
using PortalRequest = mojo::InterfaceRequest<Portal>;
using PortalAssociatedPtr =
    mojo::AssociatedInterfacePtr<Portal>;
using ThreadSafePortalAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Portal>;
using PortalAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Portal>;
using PortalAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Portal>;

class PortalClient;
using PortalClientPtr = mojo::InterfacePtr<PortalClient>;
using PortalClientPtrInfo = mojo::InterfacePtrInfo<PortalClient>;
using ThreadSafePortalClientPtr =
    mojo::ThreadSafeInterfacePtr<PortalClient>;
using PortalClientRequest = mojo::InterfaceRequest<PortalClient>;
using PortalClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PortalClient>;
using ThreadSafePortalClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PortalClient>;
using PortalClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PortalClient>;
using PortalClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PortalClient>;

class PortalHost;
using PortalHostPtr = mojo::InterfacePtr<PortalHost>;
using PortalHostPtrInfo = mojo::InterfacePtrInfo<PortalHost>;
using ThreadSafePortalHostPtr =
    mojo::ThreadSafeInterfacePtr<PortalHost>;
using PortalHostRequest = mojo::InterfaceRequest<PortalHost>;
using PortalHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<PortalHost>;
using ThreadSafePortalHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PortalHost>;
using PortalHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PortalHost>;
using PortalHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PortalHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_FORWARD_H_