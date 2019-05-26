// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_FORWARD_H_

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

enum class FetchHandlerExistence : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_FetchHandlerExistence_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::FetchHandlerExistence> {
  using Hash = blink_mojom_internal_FetchHandlerExistence_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using FetchHandlerExistence = FetchHandlerExistence;  // Alias for definition in the parent namespace.

constexpr int32_t kPushEventTimeoutSeconds = 90;
class ExtendableMessageEvent;
using ExtendableMessageEventPtr = mojo::StructPtr<ExtendableMessageEvent>;

class ServiceWorkerHost;
using ServiceWorkerHostPtr = mojo::InterfacePtr<ServiceWorkerHost>;
using ServiceWorkerHostPtrInfo = mojo::InterfacePtrInfo<ServiceWorkerHost>;
using ThreadSafeServiceWorkerHostPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorkerHost>;
using ServiceWorkerHostRequest = mojo::InterfaceRequest<ServiceWorkerHost>;
using ServiceWorkerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorkerHost>;
using ThreadSafeServiceWorkerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorkerHost>;
using ServiceWorkerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorkerHost>;
using ServiceWorkerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorkerHost>;

class ServiceWorker;
using ServiceWorkerPtr = mojo::InterfacePtr<ServiceWorker>;
using ServiceWorkerPtrInfo = mojo::InterfacePtrInfo<ServiceWorker>;
using ThreadSafeServiceWorkerPtr =
    mojo::ThreadSafeInterfacePtr<ServiceWorker>;
using ServiceWorkerRequest = mojo::InterfaceRequest<ServiceWorker>;
using ServiceWorkerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceWorker>;
using ThreadSafeServiceWorkerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ServiceWorker>;
using ServiceWorkerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceWorker>;
using ServiceWorkerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceWorker>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_BLINK_FORWARD_H_