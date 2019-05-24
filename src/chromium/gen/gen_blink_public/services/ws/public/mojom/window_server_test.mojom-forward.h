// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_FORWARD_H_



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
class WindowServerTest;
using WindowServerTestPtr = mojo::InterfacePtr<WindowServerTest>;
using WindowServerTestPtrInfo = mojo::InterfacePtrInfo<WindowServerTest>;
using ThreadSafeWindowServerTestPtr =
    mojo::ThreadSafeInterfacePtr<WindowServerTest>;
using WindowServerTestRequest = mojo::InterfaceRequest<WindowServerTest>;
using WindowServerTestAssociatedPtr =
    mojo::AssociatedInterfacePtr<WindowServerTest>;
using ThreadSafeWindowServerTestAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WindowServerTest>;
using WindowServerTestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WindowServerTest>;
using WindowServerTestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WindowServerTest>;




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_FORWARD_H_