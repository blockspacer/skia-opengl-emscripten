// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_FORWARD_H_

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
class ControllerServiceWorkerInfo;
using ControllerServiceWorkerInfoPtr = mojo::StructPtr<ControllerServiceWorkerInfo>;

class ControllerServiceWorker;
using ControllerServiceWorkerPtr = mojo::InterfacePtr<ControllerServiceWorker>;
using ControllerServiceWorkerPtrInfo = mojo::InterfacePtrInfo<ControllerServiceWorker>;
using ThreadSafeControllerServiceWorkerPtr =
    mojo::ThreadSafeInterfacePtr<ControllerServiceWorker>;
using ControllerServiceWorkerRequest = mojo::InterfaceRequest<ControllerServiceWorker>;
using ControllerServiceWorkerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ControllerServiceWorker>;
using ThreadSafeControllerServiceWorkerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ControllerServiceWorker>;
using ControllerServiceWorkerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ControllerServiceWorker>;
using ControllerServiceWorkerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ControllerServiceWorker>;

class ControllerServiceWorkerConnector;
using ControllerServiceWorkerConnectorPtr = mojo::InterfacePtr<ControllerServiceWorkerConnector>;
using ControllerServiceWorkerConnectorPtrInfo = mojo::InterfacePtrInfo<ControllerServiceWorkerConnector>;
using ThreadSafeControllerServiceWorkerConnectorPtr =
    mojo::ThreadSafeInterfacePtr<ControllerServiceWorkerConnector>;
using ControllerServiceWorkerConnectorRequest = mojo::InterfaceRequest<ControllerServiceWorkerConnector>;
using ControllerServiceWorkerConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<ControllerServiceWorkerConnector>;
using ThreadSafeControllerServiceWorkerConnectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ControllerServiceWorkerConnector>;
using ControllerServiceWorkerConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ControllerServiceWorkerConnector>;
using ControllerServiceWorkerConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ControllerServiceWorkerConnector>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_FORWARD_H_