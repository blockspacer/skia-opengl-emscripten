// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "services/shape_detection/public/mojom/facedetection_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/shape_detection/public/mojom/facedetection.mojom-blink.h"


#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace shape_detection {
namespace mojom {
namespace blink {


void FaceDetectionProviderInterceptorForTesting::CreateFaceDetection(::shape_detection::mojom::blink::FaceDetectionRequest request, ::shape_detection::mojom::blink::FaceDetectorOptionsPtr options) {
  GetForwardingInterface()->CreateFaceDetection(std::move(request), std::move(options));
}
FaceDetectionProviderAsyncWaiter::FaceDetectionProviderAsyncWaiter(
    FaceDetectionProvider* proxy) : proxy_(proxy) {}

FaceDetectionProviderAsyncWaiter::~FaceDetectionProviderAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif