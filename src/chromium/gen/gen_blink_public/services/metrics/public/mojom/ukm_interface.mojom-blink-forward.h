// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_FORWARD_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_FORWARD_H_

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


namespace ukm {
namespace mojom {
}  // namespace ukm
}  // namespace mojom


namespace ukm {
namespace mojom {
namespace blink {
class UkmEntry;
using UkmEntryPtr = mojo::StructPtr<UkmEntry>;

class UkmRecorderInterface;
using UkmRecorderInterfacePtr = mojo::InterfacePtr<UkmRecorderInterface>;
using UkmRecorderInterfacePtrInfo = mojo::InterfacePtrInfo<UkmRecorderInterface>;
using ThreadSafeUkmRecorderInterfacePtr =
    mojo::ThreadSafeInterfacePtr<UkmRecorderInterface>;
using UkmRecorderInterfaceRequest = mojo::InterfaceRequest<UkmRecorderInterface>;
using UkmRecorderInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<UkmRecorderInterface>;
using ThreadSafeUkmRecorderInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<UkmRecorderInterface>;
using UkmRecorderInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UkmRecorderInterface>;
using UkmRecorderInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UkmRecorderInterface>;




}  // namespace blink
}  // namespace mojom
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_FORWARD_H_