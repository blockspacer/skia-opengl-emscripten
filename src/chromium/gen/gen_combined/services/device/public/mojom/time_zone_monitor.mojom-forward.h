// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_FORWARD_H_



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






namespace device {
namespace mojom {
class TimeZoneMonitor;
using TimeZoneMonitorPtr = mojo::InterfacePtr<TimeZoneMonitor>;
using TimeZoneMonitorPtrInfo = mojo::InterfacePtrInfo<TimeZoneMonitor>;
using ThreadSafeTimeZoneMonitorPtr =
    mojo::ThreadSafeInterfacePtr<TimeZoneMonitor>;
using TimeZoneMonitorRequest = mojo::InterfaceRequest<TimeZoneMonitor>;
using TimeZoneMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<TimeZoneMonitor>;
using ThreadSafeTimeZoneMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TimeZoneMonitor>;
using TimeZoneMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TimeZoneMonitor>;
using TimeZoneMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TimeZoneMonitor>;

class TimeZoneMonitorClient;
using TimeZoneMonitorClientPtr = mojo::InterfacePtr<TimeZoneMonitorClient>;
using TimeZoneMonitorClientPtrInfo = mojo::InterfacePtrInfo<TimeZoneMonitorClient>;
using ThreadSafeTimeZoneMonitorClientPtr =
    mojo::ThreadSafeInterfacePtr<TimeZoneMonitorClient>;
using TimeZoneMonitorClientRequest = mojo::InterfaceRequest<TimeZoneMonitorClient>;
using TimeZoneMonitorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TimeZoneMonitorClient>;
using ThreadSafeTimeZoneMonitorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TimeZoneMonitorClient>;
using TimeZoneMonitorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TimeZoneMonitorClient>;
using TimeZoneMonitorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TimeZoneMonitorClient>;




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_FORWARD_H_