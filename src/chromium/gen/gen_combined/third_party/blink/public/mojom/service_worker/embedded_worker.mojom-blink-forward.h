// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_FORWARD_H_

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
class EmbeddedWorkerStartParams;
using EmbeddedWorkerStartParamsPtr = mojo::StructPtr<EmbeddedWorkerStartParams>;

class EmbeddedWorkerStartTiming;
using EmbeddedWorkerStartTimingPtr = mojo::StructPtr<EmbeddedWorkerStartTiming>;

class EmbeddedWorkerInstanceClient;
using EmbeddedWorkerInstanceClientPtr = mojo::InterfacePtr<EmbeddedWorkerInstanceClient>;
using EmbeddedWorkerInstanceClientPtrInfo = mojo::InterfacePtrInfo<EmbeddedWorkerInstanceClient>;
using ThreadSafeEmbeddedWorkerInstanceClientPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedWorkerInstanceClient>;
using EmbeddedWorkerInstanceClientRequest = mojo::InterfaceRequest<EmbeddedWorkerInstanceClient>;
using EmbeddedWorkerInstanceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedWorkerInstanceClient>;
using ThreadSafeEmbeddedWorkerInstanceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedWorkerInstanceClient>;
using EmbeddedWorkerInstanceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedWorkerInstanceClient>;
using EmbeddedWorkerInstanceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedWorkerInstanceClient>;

class EmbeddedWorkerInstanceHost;
using EmbeddedWorkerInstanceHostPtr = mojo::InterfacePtr<EmbeddedWorkerInstanceHost>;
using EmbeddedWorkerInstanceHostPtrInfo = mojo::InterfacePtrInfo<EmbeddedWorkerInstanceHost>;
using ThreadSafeEmbeddedWorkerInstanceHostPtr =
    mojo::ThreadSafeInterfacePtr<EmbeddedWorkerInstanceHost>;
using EmbeddedWorkerInstanceHostRequest = mojo::InterfaceRequest<EmbeddedWorkerInstanceHost>;
using EmbeddedWorkerInstanceHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<EmbeddedWorkerInstanceHost>;
using ThreadSafeEmbeddedWorkerInstanceHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<EmbeddedWorkerInstanceHost>;
using EmbeddedWorkerInstanceHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<EmbeddedWorkerInstanceHost>;
using EmbeddedWorkerInstanceHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<EmbeddedWorkerInstanceHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_FORWARD_H_