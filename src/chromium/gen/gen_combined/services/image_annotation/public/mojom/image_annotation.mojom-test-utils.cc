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


#include "services/image_annotation/public/mojom/image_annotation.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_JUMBO_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_JUMBO_H_
#endif


namespace image_annotation {
namespace mojom {


void ImageProcessorInterceptorForTesting::GetJpgImageData(GetJpgImageDataCallback callback) {
  GetForwardingInterface()->GetJpgImageData(std::move(callback));
}
ImageProcessorAsyncWaiter::ImageProcessorAsyncWaiter(
    ImageProcessor* proxy) : proxy_(proxy) {}

ImageProcessorAsyncWaiter::~ImageProcessorAsyncWaiter() = default;

void ImageProcessorAsyncWaiter::GetJpgImageData(
    std::vector<uint8_t>* out_bytes, int32_t* out_width, int32_t* out_height) {
  base::RunLoop loop;
  proxy_->GetJpgImageData(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<uint8_t>* out_bytes
,
             int32_t* out_width
,
             int32_t* out_height
,
             const std::vector<uint8_t>& bytes,
             int32_t width,
             int32_t height) {*out_bytes = std::move(bytes);*out_width = std::move(width);*out_height = std::move(height);
            loop->Quit();
          },
          &loop,
          out_bytes,
          out_width,
          out_height));
  loop.Run();
}



void AnnotatorInterceptorForTesting::AnnotateImage(const std::string& source_id, const std::string& description_language_tag, ImageProcessorPtr image_processor, AnnotateImageCallback callback) {
  GetForwardingInterface()->AnnotateImage(std::move(source_id), std::move(description_language_tag), std::move(image_processor), std::move(callback));
}
AnnotatorAsyncWaiter::AnnotatorAsyncWaiter(
    Annotator* proxy) : proxy_(proxy) {}

AnnotatorAsyncWaiter::~AnnotatorAsyncWaiter() = default;

void AnnotatorAsyncWaiter::AnnotateImage(
    const std::string& source_id, const std::string& description_language_tag, ImageProcessorPtr image_processor, AnnotateImageResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->AnnotateImage(std::move(source_id),std::move(description_language_tag),std::move(image_processor),
      base::BindOnce(
          [](base::RunLoop* loop,
             AnnotateImageResultPtr* out_result
,
             AnnotateImageResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace image_annotation

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif