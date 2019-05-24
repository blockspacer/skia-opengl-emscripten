// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {

CORE_EXPORT extern const char kNavigation_DedicatedWorkerSpec[];
class DedicatedWorkerHostFactoryClient;
using DedicatedWorkerHostFactoryClientPtr = mojo::InterfacePtr<DedicatedWorkerHostFactoryClient>;
using DedicatedWorkerHostFactoryClientPtrInfo = mojo::InterfacePtrInfo<DedicatedWorkerHostFactoryClient>;
using ThreadSafeDedicatedWorkerHostFactoryClientPtr =
    mojo::ThreadSafeInterfacePtr<DedicatedWorkerHostFactoryClient>;
using DedicatedWorkerHostFactoryClientRequest = mojo::InterfaceRequest<DedicatedWorkerHostFactoryClient>;
using DedicatedWorkerHostFactoryClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DedicatedWorkerHostFactoryClient>;
using ThreadSafeDedicatedWorkerHostFactoryClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DedicatedWorkerHostFactoryClient>;
using DedicatedWorkerHostFactoryClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DedicatedWorkerHostFactoryClient>;
using DedicatedWorkerHostFactoryClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DedicatedWorkerHostFactoryClient>;

class DedicatedWorkerHostFactory;
using DedicatedWorkerHostFactoryPtr = mojo::InterfacePtr<DedicatedWorkerHostFactory>;
using DedicatedWorkerHostFactoryPtrInfo = mojo::InterfacePtrInfo<DedicatedWorkerHostFactory>;
using ThreadSafeDedicatedWorkerHostFactoryPtr =
    mojo::ThreadSafeInterfacePtr<DedicatedWorkerHostFactory>;
using DedicatedWorkerHostFactoryRequest = mojo::InterfaceRequest<DedicatedWorkerHostFactory>;
using DedicatedWorkerHostFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<DedicatedWorkerHostFactory>;
using ThreadSafeDedicatedWorkerHostFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DedicatedWorkerHostFactory>;
using DedicatedWorkerHostFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DedicatedWorkerHostFactory>;
using DedicatedWorkerHostFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DedicatedWorkerHostFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_BLINK_FORWARD_H_