// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_FORWARD_H_

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


namespace shape_detection {
namespace mojom {
}  // namespace shape_detection
}  // namespace mojom


namespace shape_detection {
namespace mojom {
namespace blink {
class BarcodeDetectorOptions;
using BarcodeDetectorOptionsPtr = mojo::StructPtr<BarcodeDetectorOptions>;

class BarcodeDetectionProvider;
using BarcodeDetectionProviderPtr = mojo::InterfacePtr<BarcodeDetectionProvider>;
using BarcodeDetectionProviderPtrInfo = mojo::InterfacePtrInfo<BarcodeDetectionProvider>;
using ThreadSafeBarcodeDetectionProviderPtr =
    mojo::ThreadSafeInterfacePtr<BarcodeDetectionProvider>;
using BarcodeDetectionProviderRequest = mojo::InterfaceRequest<BarcodeDetectionProvider>;
using BarcodeDetectionProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<BarcodeDetectionProvider>;
using ThreadSafeBarcodeDetectionProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BarcodeDetectionProvider>;
using BarcodeDetectionProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BarcodeDetectionProvider>;
using BarcodeDetectionProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BarcodeDetectionProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_FORWARD_H_