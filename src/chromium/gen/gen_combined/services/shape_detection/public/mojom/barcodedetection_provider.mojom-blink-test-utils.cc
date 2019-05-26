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


#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "services/shape_detection/public/mojom/barcodedetection.mojom-blink.h"


#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_JUMBO_H_
#endif


namespace shape_detection {
namespace mojom {
namespace blink {


void BarcodeDetectionProviderInterceptorForTesting::CreateBarcodeDetection(::shape_detection::mojom::blink::BarcodeDetectionRequest request, BarcodeDetectorOptionsPtr options) {
  GetForwardingInterface()->CreateBarcodeDetection(std::move(request), std::move(options));
}
void BarcodeDetectionProviderInterceptorForTesting::EnumerateSupportedFormats(EnumerateSupportedFormatsCallback callback) {
  GetForwardingInterface()->EnumerateSupportedFormats(std::move(callback));
}
BarcodeDetectionProviderAsyncWaiter::BarcodeDetectionProviderAsyncWaiter(
    BarcodeDetectionProvider* proxy) : proxy_(proxy) {}

BarcodeDetectionProviderAsyncWaiter::~BarcodeDetectionProviderAsyncWaiter() = default;

void BarcodeDetectionProviderAsyncWaiter::EnumerateSupportedFormats(
    WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>* out_supported_formats) {
  base::RunLoop loop;
  proxy_->EnumerateSupportedFormats(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>* out_supported_formats
,
             const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>& supported_formats) {*out_supported_formats = std::move(supported_formats);
            loop->Quit();
          },
          &loop,
          out_supported_formats));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif