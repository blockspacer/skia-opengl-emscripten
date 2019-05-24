// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_FORWARD_H_



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
class EventInjector;
using EventInjectorPtr = mojo::InterfacePtr<EventInjector>;
using EventInjectorPtrInfo = mojo::InterfacePtrInfo<EventInjector>;
using ThreadSafeEventInjectorPtr =
    mojo::ThreadSafeInterfacePtr<EventInjector>;
using EventInjectorRequest = mojo::InterfaceRequest<EventInjector>;
using EventInjectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<EventInjector>;
using ThreadSafeEventInjectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EventInjector>;
using EventInjectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EventInjector>;
using EventInjectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EventInjector>;




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_EVENT_INJECTOR_MOJOM_FORWARD_H_