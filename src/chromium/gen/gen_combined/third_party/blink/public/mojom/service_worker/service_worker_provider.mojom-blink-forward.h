// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {

CORE_EXPORT extern const char kNavigation_ServiceWorkerSpec[];
class ServiceWorkerProviderInfoForWorker;
using ServiceWorkerProviderInfoForWorkerPtr = mojo::StructPtr<ServiceWorkerProviderInfoForWorker>;

class ServiceWorkerProviderInfoForStartWorker;
using ServiceWorkerProviderInfoForStartWorkerPtr = mojo::StructPtr<ServiceWorkerProviderInfoForStartWorker>;

class ServiceWorkerProviderInfoForWindow;
using ServiceWorkerProviderInfoForWindowPtr = mojo::StructPtr<ServiceWorkerProviderInfoForWindow>;

class ServiceWorkerWorkerClient;
using ServiceWorkerWorkerClientPtr = mojo::InterfacePtr<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerWorkerClient>;
using ThreadSafeServiceWorkerWorkerClientPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientRequest = mojo::InterfaceRequest<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerWorkerClient>;
using ThreadSafeServiceWorkerWorkerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerWorkerClient>;
using ServiceWorkerWorkerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerWorkerClient>;

class ServiceWorkerWorkerClientRegistry;
using ServiceWorkerWorkerClientRegistryPtr = mojo::InterfacePtr<ServiceWorkerWorkerClientRegistry>;
using ServiceWorkerWorkerClientRegistryPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerWorkerClientRegistry>;
using ThreadSafeServiceWorkerWorkerClientRegistryPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerWorkerClientRegistry>;
using ServiceWorkerWorkerClientRegistryRequest = mojo::InterfaceRequest<ServiceWorkerWorkerClientRegistry>;
using ServiceWorkerWorkerClientRegistryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerWorkerClientRegistry>;
using ThreadSafeServiceWorkerWorkerClientRegistryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerWorkerClientRegistry>;
using ServiceWorkerWorkerClientRegistryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerWorkerClientRegistry>;
using ServiceWorkerWorkerClientRegistryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerWorkerClientRegistry>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_BLINK_FORWARD_H_