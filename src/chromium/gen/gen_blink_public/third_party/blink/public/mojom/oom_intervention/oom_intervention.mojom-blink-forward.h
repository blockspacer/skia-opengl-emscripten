// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class DetectionArgs;
using DetectionArgsPtr = mojo::InlinedStructPtr<DetectionArgs>;

class OomInterventionHost;
using OomInterventionHostPtr = mojo::InterfacePtr<OomInterventionHost>;
using OomInterventionHostPtrInfo = mojo::InterfacePtrInfo<OomInterventionHost>;
using ThreadSafeOomInterventionHostPtr =
    mojo::ThreadSafeInterfacePtr<OomInterventionHost>;
using OomInterventionHostRequest = mojo::InterfaceRequest<OomInterventionHost>;
using OomInterventionHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<OomInterventionHost>;
using ThreadSafeOomInterventionHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OomInterventionHost>;
using OomInterventionHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OomInterventionHost>;
using OomInterventionHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OomInterventionHost>;

class OomIntervention;
using OomInterventionPtr = mojo::InterfacePtr<OomIntervention>;
using OomInterventionPtrInfo = mojo::InterfacePtrInfo<OomIntervention>;
using ThreadSafeOomInterventionPtr =
    mojo::ThreadSafeInterfacePtr<OomIntervention>;
using OomInterventionRequest = mojo::InterfaceRequest<OomIntervention>;
using OomInterventionAssociatedPtr =
    mojo::AssociatedInterfacePtr<OomIntervention>;
using ThreadSafeOomInterventionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OomIntervention>;
using OomInterventionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OomIntervention>;
using OomInterventionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OomIntervention>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_BLINK_FORWARD_H_