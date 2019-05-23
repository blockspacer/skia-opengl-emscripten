// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_FORWARD_H_

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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerInstalledScriptsInfoDataView;

class ServiceWorkerScriptInfoDataView;

class ServiceWorkerInstalledScriptsInfo;
using ServiceWorkerInstalledScriptsInfoPtr = mojo::StructPtr<ServiceWorkerInstalledScriptsInfo>;

class ServiceWorkerScriptInfo;
using ServiceWorkerScriptInfoPtr = mojo::StructPtr<ServiceWorkerScriptInfo>;

class ServiceWorkerInstalledScriptsManagerHost;
using ServiceWorkerInstalledScriptsManagerHostPtr = mojo::InterfacePtr<ServiceWorkerInstalledScriptsManagerHost>;
using ServiceWorkerInstalledScriptsManagerHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerInstalledScriptsManagerHost>;
using ThreadSafeServiceWorkerInstalledScriptsManagerHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerInstalledScriptsManagerHost>;
using ServiceWorkerInstalledScriptsManagerHostRequest = mojo::InterfaceRequest<ServiceWorkerInstalledScriptsManagerHost>;
using ServiceWorkerInstalledScriptsManagerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerInstalledScriptsManagerHost>;
using ThreadSafeServiceWorkerInstalledScriptsManagerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerInstalledScriptsManagerHost>;
using ServiceWorkerInstalledScriptsManagerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerInstalledScriptsManagerHost>;
using ServiceWorkerInstalledScriptsManagerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerInstalledScriptsManagerHost>;

class ServiceWorkerInstalledScriptsManager;
using ServiceWorkerInstalledScriptsManagerPtr = mojo::InterfacePtr<ServiceWorkerInstalledScriptsManager>;
using ServiceWorkerInstalledScriptsManagerPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerInstalledScriptsManager>;
using ThreadSafeServiceWorkerInstalledScriptsManagerPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerInstalledScriptsManager>;
using ServiceWorkerInstalledScriptsManagerRequest = mojo::InterfaceRequest<ServiceWorkerInstalledScriptsManager>;
using ServiceWorkerInstalledScriptsManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerInstalledScriptsManager>;
using ThreadSafeServiceWorkerInstalledScriptsManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerInstalledScriptsManager>;
using ServiceWorkerInstalledScriptsManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerInstalledScriptsManager>;
using ServiceWorkerInstalledScriptsManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerInstalledScriptsManager>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_FORWARD_H_