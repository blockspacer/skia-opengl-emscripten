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


#include "services/shape_detection/public/mojom/textdetection.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "skia/public/interfaces/bitmap.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace shape_detection {
namespace mojom {
namespace blink {


void TextDetectionInterceptorForTesting::Detect(const SkBitmap& bitmap_data, DetectCallback callback) {
  GetForwardingInterface()->Detect(std::move(bitmap_data), std::move(callback));
}
TextDetectionAsyncWaiter::TextDetectionAsyncWaiter(
    TextDetection* proxy) : proxy_(proxy) {}

TextDetectionAsyncWaiter::~TextDetectionAsyncWaiter() = default;

void TextDetectionAsyncWaiter::Detect(
    const SkBitmap& bitmap_data, WTF::Vector<TextDetectionResultPtr>* out_results) {
  base::RunLoop loop;
  proxy_->Detect(std::move(bitmap_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<TextDetectionResultPtr>* out_results
,
             WTF::Vector<TextDetectionResultPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
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