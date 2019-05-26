// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_FORWARD_H_



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






namespace ws {
namespace mojom {
class WindowTree;
using WindowTreePtr = mojo::InterfacePtr<WindowTree>;
using WindowTreePtrInfo = mojo::InterfacePtrInfo<WindowTree>;
using ThreadSafeWindowTreePtr =
    mojo::ThreadSafeInterfacePtr<WindowTree>;
using WindowTreeRequest = mojo::InterfaceRequest<WindowTree>;
using WindowTreeAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTree>;
using ThreadSafeWindowTreeAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTree>;
using WindowTreeAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTree>;
using WindowTreeAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTree>;

class WindowTreeClient;
using WindowTreeClientPtr = mojo::InterfacePtr<WindowTreeClient>;
using WindowTreeClientPtrInfo = mojo::InterfacePtrInfo<WindowTreeClient>;
using ThreadSafeWindowTreeClientPtr =
    mojo::ThreadSafeInterfacePtr<WindowTreeClient>;
using WindowTreeClientRequest = mojo::InterfaceRequest<WindowTreeClient>;
using WindowTreeClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeClient>;
using ThreadSafeWindowTreeClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTreeClient>;
using WindowTreeClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeClient>;
using WindowTreeClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeClient>;

class WindowTreeFactory;
using WindowTreeFactoryPtr = mojo::InterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryPtrInfo = mojo::InterfacePtrInfo<WindowTreeFactory>;
using ThreadSafeWindowTreeFactoryPtr =
    mojo::ThreadSafeInterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryRequest = mojo::InterfaceRequest<WindowTreeFactory>;
using WindowTreeFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowTreeFactory>;
using ThreadSafeWindowTreeFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowTreeFactory>;
using WindowTreeFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowTreeFactory>;
using WindowTreeFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowTreeFactory>;




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_FORWARD_H_