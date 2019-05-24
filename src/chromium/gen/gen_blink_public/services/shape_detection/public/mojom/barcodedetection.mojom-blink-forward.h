// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_FORWARD_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_FORWARD_H_

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

enum class BarcodeFormat : int32_t;
}  // namespace shape_detection
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct shape_detection_mojom_internal_BarcodeFormat_DataHashFn;

template <>
struct DefaultHash<::shape_detection::mojom::BarcodeFormat> {
  using Hash = shape_detection_mojom_internal_BarcodeFormat_DataHashFn;
};
}  // namespace WTF


namespace shape_detection {
namespace mojom {
namespace blink {
using BarcodeFormat = BarcodeFormat;  // Alias for definition in the parent namespace.
class BarcodeDetectionResult;
using BarcodeDetectionResultPtr = mojo::StructPtr<BarcodeDetectionResult>;

class BarcodeDetection;
using BarcodeDetectionPtr = mojo::InterfacePtr<BarcodeDetection>;
using BarcodeDetectionPtrInfo = mojo::InterfacePtrInfo<BarcodeDetection>;
using ThreadSafeBarcodeDetectionPtr =
    mojo::ThreadSafeInterfacePtr<BarcodeDetection>;
using BarcodeDetectionRequest = mojo::InterfaceRequest<BarcodeDetection>;
using BarcodeDetectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<BarcodeDetection>;
using ThreadSafeBarcodeDetectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BarcodeDetection>;
using BarcodeDetectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BarcodeDetection>;
using BarcodeDetectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BarcodeDetection>;




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_FORWARD_H_