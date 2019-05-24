// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/capture/mojom/image_capture.mojom-blink.h"


namespace media {
namespace mojom {
namespace blink {


class  ImageCaptureInterceptorForTesting : public ImageCapture {
  virtual ImageCapture* GetForwardingInterface() = 0;
  void GetPhotoState(const WTF::String& source_id, GetPhotoStateCallback callback) override;
  void SetOptions(const WTF::String& source_id, PhotoSettingsPtr settings, SetOptionsCallback callback) override;
  void TakePhoto(const WTF::String& source_id, TakePhotoCallback callback) override;
};
class  ImageCaptureAsyncWaiter {
 public:
  explicit ImageCaptureAsyncWaiter(ImageCapture* proxy);
  ~ImageCaptureAsyncWaiter();
  void GetPhotoState(
      const WTF::String& source_id, PhotoStatePtr* out_state);
  void SetOptions(
      const WTF::String& source_id, PhotoSettingsPtr settings, bool* out_success);
  void TakePhoto(
      const WTF::String& source_id, BlobPtr* out_blob);

 private:
  ImageCapture* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ImageCaptureAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_TEST_UTILS_H_