// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT PictureInPictureDelegateInterceptorForTesting : public PictureInPictureDelegate {
  virtual PictureInPictureDelegate* GetForwardingInterface() = 0;
  void PictureInPictureWindowSizeChanged(const gfx::Size& size) override;
};
class BLINK_COMMON_EXPORT PictureInPictureDelegateAsyncWaiter {
 public:
  explicit PictureInPictureDelegateAsyncWaiter(PictureInPictureDelegate* proxy);
  ~PictureInPictureDelegateAsyncWaiter();

 private:
  PictureInPictureDelegate* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PictureInPictureDelegateAsyncWaiter);
};


class BLINK_COMMON_EXPORT PictureInPictureServiceInterceptorForTesting : public PictureInPictureService {
  virtual PictureInPictureService* GetForwardingInterface() = 0;
  void StartSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const gfx::Size& natural_size, bool show_play_pause_button, bool show_mute_button, StartSessionCallback callback) override;
  void EndSession(EndSessionCallback callback) override;
  void UpdateSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const gfx::Size& natural_size, bool show_play_pause_button, bool show_mute_button) override;
  void SetDelegate(PictureInPictureDelegatePtr delegate) override;
};
class BLINK_COMMON_EXPORT PictureInPictureServiceAsyncWaiter {
 public:
  explicit PictureInPictureServiceAsyncWaiter(PictureInPictureService* proxy);
  ~PictureInPictureServiceAsyncWaiter();
  void StartSession(
      uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const gfx::Size& natural_size, bool show_play_pause_button, bool show_mute_button, gfx::Size* out_size);
  void EndSession(
      );

 private:
  PictureInPictureService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PictureInPictureServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_TEST_UTILS_H_