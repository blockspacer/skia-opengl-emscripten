// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/media_session/public/mojom/media_session.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media_session {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaSessionObserverInterceptorForTesting : public MediaSessionObserver {
  virtual MediaSessionObserver* GetForwardingInterface() = 0;
  void MediaSessionInfoChanged(MediaSessionInfoPtr info) override;
  void MediaSessionMetadataChanged(MediaMetadataPtr metadata) override;
  void MediaSessionActionsChanged(const WTF::Vector<MediaSessionAction>& action) override;
  void MediaSessionImagesChanged(WTF::HashMap<MediaSessionImageType, WTF::Vector<MediaImagePtr>> images) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionObserverAsyncWaiter {
 public:
  explicit MediaSessionObserverAsyncWaiter(MediaSessionObserver* proxy);
  ~MediaSessionObserverAsyncWaiter();

 private:
  MediaSessionObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionObserverAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT MediaSessionInterceptorForTesting : public MediaSession {
  virtual MediaSession* GetForwardingInterface() = 0;
  void GetMediaSessionInfo(GetMediaSessionInfoCallback callback) override;
  void GetDebugInfo(GetDebugInfoCallback callback) override;
  void StartDucking() override;
  void StopDucking() override;
  void Suspend(MediaSession::SuspendType suspend_type) override;
  void Resume(MediaSession::SuspendType suspend_type) override;
  void AddObserver(MediaSessionObserverPtr observer) override;
  void PreviousTrack() override;
  void NextTrack() override;
  void Seek(base::TimeDelta seek_time) override;
  void Stop(MediaSession::SuspendType suspend_type) override;
  void SkipAd() override;
  void GetMediaImageBitmap(MediaImagePtr image, int32_t minimum_size_px, int32_t desired_size_px, GetMediaImageBitmapCallback callback) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionAsyncWaiter {
 public:
  explicit MediaSessionAsyncWaiter(MediaSession* proxy);
  ~MediaSessionAsyncWaiter();
  void GetMediaSessionInfo(
      MediaSessionInfoPtr* out_info);
  void GetDebugInfo(
      MediaSessionDebugInfoPtr* out_info);
  void GetMediaImageBitmap(
      MediaImagePtr image, int32_t minimum_size_px, int32_t desired_size_px, MediaImageBitmapPtr* out_image);

 private:
  MediaSession* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaSessionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_