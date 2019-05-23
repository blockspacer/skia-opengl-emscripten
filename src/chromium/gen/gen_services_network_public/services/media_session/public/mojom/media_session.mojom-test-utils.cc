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


#include "services/media_session/public/mojom/media_session.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_JUMBO_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/media_session/public/cpp/media_session_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace media_session {
namespace mojom {


void MediaSessionObserverInterceptorForTesting::MediaSessionInfoChanged(MediaSessionInfoPtr info) {
  GetForwardingInterface()->MediaSessionInfoChanged(std::move(info));
}
void MediaSessionObserverInterceptorForTesting::MediaSessionMetadataChanged(const base::Optional<media_session::MediaMetadata>& metadata) {
  GetForwardingInterface()->MediaSessionMetadataChanged(std::move(metadata));
}
void MediaSessionObserverInterceptorForTesting::MediaSessionActionsChanged(const std::vector<MediaSessionAction>& action) {
  GetForwardingInterface()->MediaSessionActionsChanged(std::move(action));
}
void MediaSessionObserverInterceptorForTesting::MediaSessionImagesChanged(const base::flat_map<MediaSessionImageType, std::vector<media_session::MediaImage>>& images) {
  GetForwardingInterface()->MediaSessionImagesChanged(std::move(images));
}
MediaSessionObserverAsyncWaiter::MediaSessionObserverAsyncWaiter(
    MediaSessionObserver* proxy) : proxy_(proxy) {}

MediaSessionObserverAsyncWaiter::~MediaSessionObserverAsyncWaiter() = default;




void MediaSessionInterceptorForTesting::GetMediaSessionInfo(GetMediaSessionInfoCallback callback) {
  GetForwardingInterface()->GetMediaSessionInfo(std::move(callback));
}
void MediaSessionInterceptorForTesting::GetDebugInfo(GetDebugInfoCallback callback) {
  GetForwardingInterface()->GetDebugInfo(std::move(callback));
}
void MediaSessionInterceptorForTesting::StartDucking() {
  GetForwardingInterface()->StartDucking();
}
void MediaSessionInterceptorForTesting::StopDucking() {
  GetForwardingInterface()->StopDucking();
}
void MediaSessionInterceptorForTesting::Suspend(MediaSession::SuspendType suspend_type) {
  GetForwardingInterface()->Suspend(std::move(suspend_type));
}
void MediaSessionInterceptorForTesting::Resume(MediaSession::SuspendType suspend_type) {
  GetForwardingInterface()->Resume(std::move(suspend_type));
}
void MediaSessionInterceptorForTesting::AddObserver(MediaSessionObserverPtr observer) {
  GetForwardingInterface()->AddObserver(std::move(observer));
}
void MediaSessionInterceptorForTesting::PreviousTrack() {
  GetForwardingInterface()->PreviousTrack();
}
void MediaSessionInterceptorForTesting::NextTrack() {
  GetForwardingInterface()->NextTrack();
}
void MediaSessionInterceptorForTesting::Seek(base::TimeDelta seek_time) {
  GetForwardingInterface()->Seek(std::move(seek_time));
}
void MediaSessionInterceptorForTesting::Stop(MediaSession::SuspendType suspend_type) {
  GetForwardingInterface()->Stop(std::move(suspend_type));
}
void MediaSessionInterceptorForTesting::SkipAd() {
  GetForwardingInterface()->SkipAd();
}
void MediaSessionInterceptorForTesting::GetMediaImageBitmap(const media_session::MediaImage& image, int32_t minimum_size_px, int32_t desired_size_px, GetMediaImageBitmapCallback callback) {
  GetForwardingInterface()->GetMediaImageBitmap(std::move(image), std::move(minimum_size_px), std::move(desired_size_px), std::move(callback));
}
MediaSessionAsyncWaiter::MediaSessionAsyncWaiter(
    MediaSession* proxy) : proxy_(proxy) {}

MediaSessionAsyncWaiter::~MediaSessionAsyncWaiter() = default;

void MediaSessionAsyncWaiter::GetMediaSessionInfo(
    MediaSessionInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetMediaSessionInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             MediaSessionInfoPtr* out_info
,
             MediaSessionInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void MediaSessionAsyncWaiter::GetDebugInfo(
    MediaSessionDebugInfoPtr* out_info) {
  base::RunLoop loop;
  proxy_->GetDebugInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             MediaSessionDebugInfoPtr* out_info
,
             MediaSessionDebugInfoPtr info) {*out_info = std::move(info);
            loop->Quit();
          },
          &loop,
          out_info));
  loop.Run();
}
void MediaSessionAsyncWaiter::GetMediaImageBitmap(
    const media_session::MediaImage& image, int32_t minimum_size_px, int32_t desired_size_px, SkBitmap* out_image) {
  base::RunLoop loop;
  proxy_->GetMediaImageBitmap(std::move(image),std::move(minimum_size_px),std::move(desired_size_px),
      base::BindOnce(
          [](base::RunLoop* loop,
             SkBitmap* out_image
,
             const SkBitmap& image) {*out_image = std::move(image);
            loop->Quit();
          },
          &loop,
          out_image));
  loop.Run();
}





}  // namespace mojom
}  // namespace media_session

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif