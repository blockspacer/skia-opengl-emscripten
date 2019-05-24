// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_FORWARD_H_

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

enum class InstanceState : int32_t;
}  // namespace service_manager
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct service_manager_mojom_internal_InstanceState_DataHashFn;

template <>
struct DefaultHash<::service_manager::mojom::InstanceState> {
  using Hash = service_manager_mojom_internal_InstanceState_DataHashFn;
};
}  // namespace WTF


namespace service_manager {
namespace mojom {
namespace blink {
using InstanceState = InstanceState;  // Alias for definition in the parent namespace.
class RunningServiceInfo;
using RunningServiceInfoPtr = mojo::StructPtr<RunningServiceInfo>;

class ServiceManagerListener;
using ServiceManagerListenerPtr = mojo::InterfacePtr<ServiceManagerListener>;
using ServiceManagerListenerPtrInfo = mojo::InterfacePtrInfo<ServiceManagerListener>;
using ThreadSafeServiceManagerListenerPtr =
    mojo::ThreadSafeInterfacePtr<ServiceManagerListener>;
using ServiceManagerListenerRequest = mojo::InterfaceRequest<ServiceManagerListener>;
using ServiceManagerListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceManagerListener>;
using ThreadSafeServiceManagerListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceManagerListener>;
using ServiceManagerListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceManagerListener>;
using ServiceManagerListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceManagerListener>;

class ServiceManager;
using ServiceManagerPtr = mojo::InterfacePtr<ServiceManager>;
using ServiceManagerPtrInfo = mojo::InterfacePtrInfo<ServiceManager>;
using ThreadSafeServiceManagerPtr =
    mojo::ThreadSafeInterfacePtr<ServiceManager>;
using ServiceManagerRequest = mojo::InterfaceRequest<ServiceManager>;
using ServiceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceManager>;
using ThreadSafeServiceManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceManager>;
using ServiceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceManager>;
using ServiceManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_BLINK_FORWARD_H_