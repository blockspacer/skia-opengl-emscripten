// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_FORWARD_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_FORWARD_H_

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

enum class LandmarkType : int32_t;
}  // namespace shape_detection
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct shape_detection_mojom_internal_LandmarkType_DataHashFn;

template <>
struct DefaultHash<::shape_detection::mojom::LandmarkType> {
  using Hash = shape_detection_mojom_internal_LandmarkType_DataHashFn;
};
}  // namespace WTF


namespace shape_detection {
namespace mojom {
namespace blink {
using LandmarkType = LandmarkType;  // Alias for definition in the parent namespace.
class Landmark;
using LandmarkPtr = mojo::StructPtr<Landmark>;

class FaceDetectionResult;
using FaceDetectionResultPtr = mojo::StructPtr<FaceDetectionResult>;

class FaceDetectorOptions;
using FaceDetectorOptionsPtr = mojo::InlinedStructPtr<FaceDetectorOptions>;

class FaceDetection;
using FaceDetectionPtr = mojo::InterfacePtr<FaceDetection>;
using FaceDetectionPtrInfo = mojo::InterfacePtrInfo<FaceDetection>;
using ThreadSafeFaceDetectionPtr =
    mojo::ThreadSafeInterfacePtr<FaceDetection>;
using FaceDetectionRequest = mojo::InterfaceRequest<FaceDetection>;
using FaceDetectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<FaceDetection>;
using ThreadSafeFaceDetectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FaceDetection>;
using FaceDetectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FaceDetection>;
using FaceDetectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FaceDetection>;




}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_FORWARD_H_