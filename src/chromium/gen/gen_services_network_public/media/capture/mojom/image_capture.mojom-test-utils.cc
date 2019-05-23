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


#include "media/capture/mojom/image_capture.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_JUMBO_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_JUMBO_H_
#endif


namespace media {
namespace mojom {


void ImageCaptureInterceptorForTesting::GetPhotoState(const std::string& source_id, GetPhotoStateCallback callback) {
  GetForwardingInterface()->GetPhotoState(std::move(source_id), std::move(callback));
}
void ImageCaptureInterceptorForTesting::SetOptions(const std::string& source_id, PhotoSettingsPtr settings, SetOptionsCallback callback) {
  GetForwardingInterface()->SetOptions(std::move(source_id), std::move(settings), std::move(callback));
}
void ImageCaptureInterceptorForTesting::TakePhoto(const std::string& source_id, TakePhotoCallback callback) {
  GetForwardingInterface()->TakePhoto(std::move(source_id), std::move(callback));
}
ImageCaptureAsyncWaiter::ImageCaptureAsyncWaiter(
    ImageCapture* proxy) : proxy_(proxy) {}

ImageCaptureAsyncWaiter::~ImageCaptureAsyncWaiter() = default;

void ImageCaptureAsyncWaiter::GetPhotoState(
    const std::string& source_id, PhotoStatePtr* out_state) {
  base::RunLoop loop;
  proxy_->GetPhotoState(std::move(source_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             PhotoStatePtr* out_state
,
             PhotoStatePtr state) {*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_state));
  loop.Run();
}
void ImageCaptureAsyncWaiter::SetOptions(
    const std::string& source_id, PhotoSettingsPtr settings, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetOptions(std::move(source_id),std::move(settings),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void ImageCaptureAsyncWaiter::TakePhoto(
    const std::string& source_id, BlobPtr* out_blob) {
  base::RunLoop loop;
  proxy_->TakePhoto(std::move(source_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             BlobPtr* out_blob
,
             BlobPtr blob) {*out_blob = std::move(blob);
            loop->Quit();
          },
          &loop,
          out_blob));
  loop.Run();
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif