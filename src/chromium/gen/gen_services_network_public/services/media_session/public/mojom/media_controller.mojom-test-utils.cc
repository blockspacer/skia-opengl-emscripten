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


#include "services/media_session/public/mojom/media_controller.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/media_session/public/mojom/media_session.mojom.h"


#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_JUMBO_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/media_session/public/cpp/media_session_mojom_traits.h"
#endif


namespace media_session {
namespace mojom {


void MediaControllerManagerInterceptorForTesting::CreateMediaControllerForSession(MediaControllerRequest request, const base::UnguessableToken& request_id) {
  GetForwardingInterface()->CreateMediaControllerForSession(std::move(request), std::move(request_id));
}
void MediaControllerManagerInterceptorForTesting::CreateActiveMediaController(MediaControllerRequest request) {
  GetForwardingInterface()->CreateActiveMediaController(std::move(request));
}
void MediaControllerManagerInterceptorForTesting::SuspendAllSessions() {
  GetForwardingInterface()->SuspendAllSessions();
}
MediaControllerManagerAsyncWaiter::MediaControllerManagerAsyncWaiter(
    MediaControllerManager* proxy) : proxy_(proxy) {}

MediaControllerManagerAsyncWaiter::~MediaControllerManagerAsyncWaiter() = default;




void MediaControllerInterceptorForTesting::Suspend() {
  GetForwardingInterface()->Suspend();
}
void MediaControllerInterceptorForTesting::Resume() {
  GetForwardingInterface()->Resume();
}
void MediaControllerInterceptorForTesting::Stop() {
  GetForwardingInterface()->Stop();
}
void MediaControllerInterceptorForTesting::ToggleSuspendResume() {
  GetForwardingInterface()->ToggleSuspendResume();
}
void MediaControllerInterceptorForTesting::AddObserver(MediaControllerObserverPtr observer) {
  GetForwardingInterface()->AddObserver(std::move(observer));
}
void MediaControllerInterceptorForTesting::PreviousTrack() {
  GetForwardingInterface()->PreviousTrack();
}
void MediaControllerInterceptorForTesting::NextTrack() {
  GetForwardingInterface()->NextTrack();
}
void MediaControllerInterceptorForTesting::Seek(base::TimeDelta seek_time) {
  GetForwardingInterface()->Seek(std::move(seek_time));
}
void MediaControllerInterceptorForTesting::ObserveImages(::media_session::mojom::MediaSessionImageType type, int32_t minimum_size_px, int32_t desired_size_px, MediaControllerImageObserverPtr observer) {
  GetForwardingInterface()->ObserveImages(std::move(type), std::move(minimum_size_px), std::move(desired_size_px), std::move(observer));
}
MediaControllerAsyncWaiter::MediaControllerAsyncWaiter(
    MediaController* proxy) : proxy_(proxy) {}

MediaControllerAsyncWaiter::~MediaControllerAsyncWaiter() = default;




void MediaControllerObserverInterceptorForTesting::MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr info) {
  GetForwardingInterface()->MediaSessionInfoChanged(std::move(info));
}
void MediaControllerObserverInterceptorForTesting::MediaSessionMetadataChanged(const base::Optional<media_session::MediaMetadata>& metadata) {
  GetForwardingInterface()->MediaSessionMetadataChanged(std::move(metadata));
}
void MediaControllerObserverInterceptorForTesting::MediaSessionActionsChanged(const std::vector<::media_session::mojom::MediaSessionAction>& action) {
  GetForwardingInterface()->MediaSessionActionsChanged(std::move(action));
}
void MediaControllerObserverInterceptorForTesting::MediaSessionChanged(const base::Optional<base::UnguessableToken>& request_id) {
  GetForwardingInterface()->MediaSessionChanged(std::move(request_id));
}
MediaControllerObserverAsyncWaiter::MediaControllerObserverAsyncWaiter(
    MediaControllerObserver* proxy) : proxy_(proxy) {}

MediaControllerObserverAsyncWaiter::~MediaControllerObserverAsyncWaiter() = default;




void MediaControllerImageObserverInterceptorForTesting::MediaControllerImageChanged(::media_session::mojom::MediaSessionImageType type, const SkBitmap& bitmap) {
  GetForwardingInterface()->MediaControllerImageChanged(std::move(type), std::move(bitmap));
}
MediaControllerImageObserverAsyncWaiter::MediaControllerImageObserverAsyncWaiter(
    MediaControllerImageObserver* proxy) : proxy_(proxy) {}

MediaControllerImageObserverAsyncWaiter::~MediaControllerImageObserverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media_session

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif