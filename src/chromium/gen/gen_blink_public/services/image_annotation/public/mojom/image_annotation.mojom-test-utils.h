// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_TEST_UTILS_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_TEST_UTILS_H_

#include "services/image_annotation/public/mojom/image_annotation.mojom.h"


namespace image_annotation {
namespace mojom {


class  ImageProcessorInterceptorForTesting : public ImageProcessor {
  virtual ImageProcessor* GetForwardingInterface() = 0;
  void GetJpgImageData(GetJpgImageDataCallback callback) override;
};
class  ImageProcessorAsyncWaiter {
 public:
  explicit ImageProcessorAsyncWaiter(ImageProcessor* proxy);
  ~ImageProcessorAsyncWaiter();
  void GetJpgImageData(
      std::vector<uint8_t>* out_bytes, int32_t* out_width, int32_t* out_height);

 private:
  ImageProcessor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImageProcessorAsyncWaiter);
};


class  AnnotatorInterceptorForTesting : public Annotator {
  virtual Annotator* GetForwardingInterface() = 0;
  void AnnotateImage(const std::string& source_id, const std::string& description_language_tag, ImageProcessorPtr image_processor, AnnotateImageCallback callback) override;
};
class  AnnotatorAsyncWaiter {
 public:
  explicit AnnotatorAsyncWaiter(Annotator* proxy);
  ~AnnotatorAsyncWaiter();
  void AnnotateImage(
      const std::string& source_id, const std::string& description_language_tag, ImageProcessorPtr image_processor, AnnotateImageResultPtr* out_result);

 private:
  Annotator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AnnotatorAsyncWaiter);
};




}  // namespace mojom
}  // namespace image_annotation

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_TEST_UTILS_H_