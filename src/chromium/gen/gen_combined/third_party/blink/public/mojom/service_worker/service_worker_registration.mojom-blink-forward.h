// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_FORWARD_H_

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

enum class ServiceWorkerUpdateViaCache : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_ServiceWorkerUpdateViaCache_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ServiceWorkerUpdateViaCache> {
  using Hash = blink_mojom_internal_ServiceWorkerUpdateViaCache_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using ServiceWorkerUpdateViaCache = ServiceWorkerUpdateViaCache;  // Alias for definition in the parent namespace.

constexpr int64_t kInvalidServiceWorkerRegistrationId = -1;
class ChangedServiceWorkerObjectsMask;
using ChangedServiceWorkerObjectsMaskPtr = mojo::InlinedStructPtr<ChangedServiceWorkerObjectsMask>;

class ServiceWorkerRegistrationOptions;
using ServiceWorkerRegistrationOptionsPtr = mojo::StructPtr<ServiceWorkerRegistrationOptions>;

class ServiceWorkerRegistrationObjectInfo;
using ServiceWorkerRegistrationObjectInfoPtr = mojo::StructPtr<ServiceWorkerRegistrationObjectInfo>;

class ServiceWorkerRegistrationObjectHost;
using ServiceWorkerRegistrationObjectHostPtr = mojo::InterfacePtr<ServiceWorkerRegistrationObjectHost>;
using ServiceWorkerRegistrationObjectHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerRegistrationObjectHost>;
using ThreadSafeServiceWorkerRegistrationObjectHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerRegistrationObjectHost>;
using ServiceWorkerRegistrationObjectHostRequest = mojo::InterfaceRequest<ServiceWorkerRegistrationObjectHost>;
using ServiceWorkerRegistrationObjectHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerRegistrationObjectHost>;
using ThreadSafeServiceWorkerRegistrationObjectHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerRegistrationObjectHost>;
using ServiceWorkerRegistrationObjectHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerRegistrationObjectHost>;
using ServiceWorkerRegistrationObjectHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerRegistrationObjectHost>;

class ServiceWorkerRegistrationObject;
using ServiceWorkerRegistrationObjectPtr = mojo::InterfacePtr<ServiceWorkerRegistrationObject>;
using ServiceWorkerRegistrationObjectPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerRegistrationObject>;
using ThreadSafeServiceWorkerRegistrationObjectPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerRegistrationObject>;
using ServiceWorkerRegistrationObjectRequest = mojo::InterfaceRequest<ServiceWorkerRegistrationObject>;
using ServiceWorkerRegistrationObjectAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerRegistrationObject>;
using ThreadSafeServiceWorkerRegistrationObjectAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerRegistrationObject>;
using ServiceWorkerRegistrationObjectAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerRegistrationObject>;
using ServiceWorkerRegistrationObjectAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerRegistrationObject>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_FORWARD_H_