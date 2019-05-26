// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_FORWARD_H_

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
class AnchorElementMetrics;
using AnchorElementMetricsPtr = mojo::StructPtr<AnchorElementMetrics>;

class AnchorElementMetricsHost;
using AnchorElementMetricsHostPtr = mojo::InterfacePtr<AnchorElementMetricsHost>;
using AnchorElementMetricsHostPtrInfo = mojo::InterfacePtrInfo<AnchorElementMetricsHost>;
using ThreadSafeAnchorElementMetricsHostPtr =
    mojo::ThreadSafeInterfacePtr<AnchorElementMetricsHost>;
using AnchorElementMetricsHostRequest = mojo::InterfaceRequest<AnchorElementMetricsHost>;
using AnchorElementMetricsHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<AnchorElementMetricsHost>;
using ThreadSafeAnchorElementMetricsHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AnchorElementMetricsHost>;
using AnchorElementMetricsHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AnchorElementMetricsHost>;
using AnchorElementMetricsHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AnchorElementMetricsHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_FORWARD_H_