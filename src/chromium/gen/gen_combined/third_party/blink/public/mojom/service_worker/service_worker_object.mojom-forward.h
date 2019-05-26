// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_FORWARD_H_

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
class ServiceWorkerObjectInfoDataView;


constexpr int64_t kInvalidServiceWorkerVersionId = -1;
class ServiceWorkerObjectInfo;
using ServiceWorkerObjectInfoPtr = mojo::StructPtr<ServiceWorkerObjectInfo>;

class ServiceWorkerObjectHost;
using ServiceWorkerObjectHostPtr = mojo::InterfacePtr<ServiceWorkerObjectHost>;
using ServiceWorkerObjectHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerObjectHost>;
using ThreadSafeServiceWorkerObjectHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerObjectHost>;
using ServiceWorkerObjectHostRequest = mojo::InterfaceRequest<ServiceWorkerObjectHost>;
using ServiceWorkerObjectHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerObjectHost>;
using ThreadSafeServiceWorkerObjectHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerObjectHost>;
using ServiceWorkerObjectHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerObjectHost>;
using ServiceWorkerObjectHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerObjectHost>;

class ServiceWorkerObject;
using ServiceWorkerObjectPtr = mojo::InterfacePtr<ServiceWorkerObject>;
using ServiceWorkerObjectPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerObject>;
using ThreadSafeServiceWorkerObjectPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerObject>;
using ServiceWorkerObjectRequest = mojo::InterfaceRequest<ServiceWorkerObject>;
using ServiceWorkerObjectAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerObject>;
using ThreadSafeServiceWorkerObjectAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerObject>;
using ServiceWorkerObjectAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerObject>;
using ServiceWorkerObjectAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerObject>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_FORWARD_H_