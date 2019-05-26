// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

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


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class BindSourceInfoDataView;

class BindSourceInfo;
using BindSourceInfoPtr = mojo::StructPtr<BindSourceInfo>;

class Service;
using ServicePtr = mojo::InterfacePtr<Service>;
using ServicePtrInfo = mojo::InterfacePtrInfo<Service>;
using ThreadSafeServicePtr =
    mojo::ThreadSafeInterfacePtr<Service>;
using ServiceRequest = mojo::InterfaceRequest<Service>;
using ServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Service>;
using ThreadSafeServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Service>;
using ServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Service>;
using ServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Service>;




}  // namespace mojom
}  // namespace service_manager
#include "services/service_manager/public/cpp/bind_source_info.h"

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_FORWARD_H_