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


#include "third_party/blink/public/mojom/mediasession/media_session.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "services/media_session/public/mojom/media_session.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "services/media_session/public/cpp/media_session_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void MediaSessionClientInterceptorForTesting::DidReceiveAction(::media_session::mojom::MediaSessionAction action) {
  GetForwardingInterface()->DidReceiveAction(std::move(action));
}
MediaSessionClientAsyncWaiter::MediaSessionClientAsyncWaiter(
    MediaSessionClient* proxy) : proxy_(proxy) {}

MediaSessionClientAsyncWaiter::~MediaSessionClientAsyncWaiter() = default;




void MediaSessionServiceInterceptorForTesting::SetClient(MediaSessionClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void MediaSessionServiceInterceptorForTesting::SetPlaybackState(MediaSessionPlaybackState state) {
  GetForwardingInterface()->SetPlaybackState(std::move(state));
}
void MediaSessionServiceInterceptorForTesting::SetMetadata(SpecMediaMetadataPtr metadata) {
  GetForwardingInterface()->SetMetadata(std::move(metadata));
}
void MediaSessionServiceInterceptorForTesting::EnableAction(::media_session::mojom::MediaSessionAction action) {
  GetForwardingInterface()->EnableAction(std::move(action));
}
void MediaSessionServiceInterceptorForTesting::DisableAction(::media_session::mojom::MediaSessionAction action) {
  GetForwardingInterface()->DisableAction(std::move(action));
}
MediaSessionServiceAsyncWaiter::MediaSessionServiceAsyncWaiter(
    MediaSessionService* proxy) : proxy_(proxy) {}

MediaSessionServiceAsyncWaiter::~MediaSessionServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif