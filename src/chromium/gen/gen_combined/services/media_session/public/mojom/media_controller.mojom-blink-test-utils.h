// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/media_session/public/mojom/media_controller.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media_session {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaControllerManagerInterceptorForTesting : public MediaControllerManager {
  virtual MediaControllerManager* GetForwardingInterface() = 0;
  void CreateMediaControllerForSession(MediaControllerRequest request, const base::UnguessableToken& request_id) override;
  void CreateActiveMediaController(MediaControllerRequest request) override;
  void SuspendAllSessions() override;
};
class BLINK_PLATFORM_EXPORT MediaControllerManagerAsyncWaiter {
 public:
  explicit MediaControllerManagerAsyncWaiter(MediaControllerManager* proxy);
  ~MediaControllerManagerAsyncWaiter();

 private:
  MediaControllerManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaControllerManagerAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT MediaControllerInterceptorForTesting : public MediaController {
  virtual MediaController* GetForwardingInterface() = 0;
  void Suspend() override;
  void Resume() override;
  void Stop() override;
  void ToggleSuspendResume() override;
  void AddObserver(MediaControllerObserverPtr observer) override;
  void PreviousTrack() override;
  void NextTrack() override;
  void Seek(base::TimeDelta seek_time) override;
  void ObserveImages(::media_session::mojom::blink::MediaSessionImageType type, int32_t minimum_size_px, int32_t desired_size_px, MediaControllerImageObserverPtr observer) override;
};
class BLINK_PLATFORM_EXPORT MediaControllerAsyncWaiter {
 public:
  explicit MediaControllerAsyncWaiter(MediaController* proxy);
  ~MediaControllerAsyncWaiter();

 private:
  MediaController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaControllerAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT MediaControllerObserverInterceptorForTesting : public MediaControllerObserver {
  virtual MediaControllerObserver* GetForwardingInterface() = 0;
  void MediaSessionInfoChanged(::media_session::mojom::blink::MediaSessionInfoPtr info) override;
  void MediaSessionMetadataChanged(::media_session::mojom::blink::MediaMetadataPtr metadata) override;
  void MediaSessionActionsChanged(const WTF::Vector<::media_session::mojom::blink::MediaSessionAction>& action) override;
  void MediaSessionChanged(const base::Optional<base::UnguessableToken>& request_id) override;
};
class BLINK_PLATFORM_EXPORT MediaControllerObserverAsyncWaiter {
 public:
  explicit MediaControllerObserverAsyncWaiter(MediaControllerObserver* proxy);
  ~MediaControllerObserverAsyncWaiter();

 private:
  MediaControllerObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaControllerObserverAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT MediaControllerImageObserverInterceptorForTesting : public MediaControllerImageObserver {
  virtual MediaControllerImageObserver* GetForwardingInterface() = 0;
  void MediaControllerImageChanged(::media_session::mojom::blink::MediaSessionImageType type, ::media_session::mojom::blink::MediaImageBitmapPtr bitmap) override;
};
class BLINK_PLATFORM_EXPORT MediaControllerImageObserverAsyncWaiter {
 public:
  explicit MediaControllerImageObserverAsyncWaiter(MediaControllerImageObserver* proxy);
  ~MediaControllerImageObserverAsyncWaiter();

 private:
  MediaControllerImageObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaControllerImageObserverAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_