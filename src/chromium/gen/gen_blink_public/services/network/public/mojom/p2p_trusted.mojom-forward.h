// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_FORWARD_H_



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






namespace network {
namespace mojom {
class P2PTrustedSocketManagerClient;
using P2PTrustedSocketManagerClientPtr = mojo::InterfacePtr<P2PTrustedSocketManagerClient>;
using P2PTrustedSocketManagerClientPtrInfo = mojo::InterfacePtrInfo<P2PTrustedSocketManagerClient>;
using ThreadSafeP2PTrustedSocketManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<P2PTrustedSocketManagerClient>;
using P2PTrustedSocketManagerClientRequest = mojo::InterfaceRequest<P2PTrustedSocketManagerClient>;
using P2PTrustedSocketManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<P2PTrustedSocketManagerClient>;
using ThreadSafeP2PTrustedSocketManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<P2PTrustedSocketManagerClient>;
using P2PTrustedSocketManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<P2PTrustedSocketManagerClient>;
using P2PTrustedSocketManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<P2PTrustedSocketManagerClient>;

class P2PTrustedSocketManager;
using P2PTrustedSocketManagerPtr = mojo::InterfacePtr<P2PTrustedSocketManager>;
using P2PTrustedSocketManagerPtrInfo = mojo::InterfacePtrInfo<P2PTrustedSocketManager>;
using ThreadSafeP2PTrustedSocketManagerPtr =
    mojo::ThreadSafeInterfacePtr<P2PTrustedSocketManager>;
using P2PTrustedSocketManagerRequest = mojo::InterfaceRequest<P2PTrustedSocketManager>;
using P2PTrustedSocketManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<P2PTrustedSocketManager>;
using ThreadSafeP2PTrustedSocketManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<P2PTrustedSocketManager>;
using P2PTrustedSocketManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<P2PTrustedSocketManager>;
using P2PTrustedSocketManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<P2PTrustedSocketManager>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_FORWARD_H_