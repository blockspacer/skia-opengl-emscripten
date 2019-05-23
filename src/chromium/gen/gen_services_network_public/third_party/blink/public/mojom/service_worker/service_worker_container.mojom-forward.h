// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_FORWARD_H_



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


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

enum class ControllerServiceWorkerPurpose : int32_t;
class ServiceWorkerContainerHost;
using ServiceWorkerContainerHostPtr = mojo::InterfacePtr<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerContainerHost>;
using ThreadSafeServiceWorkerContainerHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostRequest = mojo::InterfaceRequest<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerContainerHost>;
using ThreadSafeServiceWorkerContainerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerContainerHost>;
using ServiceWorkerContainerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerContainerHost>;

class ServiceWorkerContainer;
using ServiceWorkerContainerPtr = mojo::InterfacePtr<ServiceWorkerContainer>;
using ServiceWorkerContainerPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerContainer>;
using ThreadSafeServiceWorkerContainerPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerContainer>;
using ServiceWorkerContainerRequest = mojo::InterfaceRequest<ServiceWorkerContainer>;
using ServiceWorkerContainerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerContainer>;
using ThreadSafeServiceWorkerContainerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerContainer>;
using ServiceWorkerContainerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerContainer>;
using ServiceWorkerContainerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerContainer>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_FORWARD_H_