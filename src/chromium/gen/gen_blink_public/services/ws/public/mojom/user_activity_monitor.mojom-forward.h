// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_FORWARD_H_



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

enum class UserIdleObserver_IdleState : int32_t;
class UserActivityObserver;
using UserActivityObserverPtr = mojo::InterfacePtr<UserActivityObserver>;
using UserActivityObserverPtrInfo = mojo::InterfacePtrInfo<UserActivityObserver>;
using ThreadSafeUserActivityObserverPtr =
    mojo::ThreadSafeInterfacePtr<UserActivityObserver>;
using UserActivityObserverRequest = mojo::InterfaceRequest<UserActivityObserver>;
using UserActivityObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserActivityObserver>;
using ThreadSafeUserActivityObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UserActivityObserver>;
using UserActivityObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserActivityObserver>;
using UserActivityObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserActivityObserver>;

class UserIdleObserver;
using UserIdleObserverPtr = mojo::InterfacePtr<UserIdleObserver>;
using UserIdleObserverPtrInfo = mojo::InterfacePtrInfo<UserIdleObserver>;
using ThreadSafeUserIdleObserverPtr =
    mojo::ThreadSafeInterfacePtr<UserIdleObserver>;
using UserIdleObserverRequest = mojo::InterfaceRequest<UserIdleObserver>;
using UserIdleObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserIdleObserver>;
using ThreadSafeUserIdleObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UserIdleObserver>;
using UserIdleObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserIdleObserver>;
using UserIdleObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserIdleObserver>;

class UserActivityMonitor;
using UserActivityMonitorPtr = mojo::InterfacePtr<UserActivityMonitor>;
using UserActivityMonitorPtrInfo = mojo::InterfacePtrInfo<UserActivityMonitor>;
using ThreadSafeUserActivityMonitorPtr =
    mojo::ThreadSafeInterfacePtr<UserActivityMonitor>;
using UserActivityMonitorRequest = mojo::InterfaceRequest<UserActivityMonitor>;
using UserActivityMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<UserActivityMonitor>;
using ThreadSafeUserActivityMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UserActivityMonitor>;
using UserActivityMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UserActivityMonitor>;
using UserActivityMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UserActivityMonitor>;




}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_USER_ACTIVITY_MONITOR_MOJOM_FORWARD_H_