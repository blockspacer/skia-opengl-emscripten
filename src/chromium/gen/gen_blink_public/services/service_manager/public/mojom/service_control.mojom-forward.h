// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_FORWARD_H_



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


#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class ServiceControl;
using ServiceControlPtr = mojo::InterfacePtr<ServiceControl>;
using ServiceControlPtrInfo = mojo::InterfacePtrInfo<ServiceControl>;
using ThreadSafeServiceControlPtr =
    mojo::ThreadSafeInterfacePtr<ServiceControl>;
using ServiceControlRequest = mojo::InterfaceRequest<ServiceControl>;
using ServiceControlAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceControl>;
using ThreadSafeServiceControlAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceControl>;
using ServiceControlAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceControl>;
using ServiceControlAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceControl>;




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_CONTROL_MOJOM_FORWARD_H_