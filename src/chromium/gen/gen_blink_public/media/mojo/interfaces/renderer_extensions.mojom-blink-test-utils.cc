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


#include "media/mojo/interfaces/renderer_extensions.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void MediaPlayerRendererClientExtensionInterceptorForTesting::OnVideoSizeChange(const ::blink::WebSize& size) {
  GetForwardingInterface()->OnVideoSizeChange(std::move(size));
}
void MediaPlayerRendererClientExtensionInterceptorForTesting::OnDurationChange(base::TimeDelta duration) {
  GetForwardingInterface()->OnDurationChange(std::move(duration));
}
MediaPlayerRendererClientExtensionAsyncWaiter::MediaPlayerRendererClientExtensionAsyncWaiter(
    MediaPlayerRendererClientExtension* proxy) : proxy_(proxy) {}

MediaPlayerRendererClientExtensionAsyncWaiter::~MediaPlayerRendererClientExtensionAsyncWaiter() = default;




void MediaPlayerRendererExtensionInterceptorForTesting::InitiateScopedSurfaceRequest(InitiateScopedSurfaceRequestCallback callback) {
  GetForwardingInterface()->InitiateScopedSurfaceRequest(std::move(callback));
}
MediaPlayerRendererExtensionAsyncWaiter::MediaPlayerRendererExtensionAsyncWaiter(
    MediaPlayerRendererExtension* proxy) : proxy_(proxy) {}

MediaPlayerRendererExtensionAsyncWaiter::~MediaPlayerRendererExtensionAsyncWaiter() = default;

void MediaPlayerRendererExtensionAsyncWaiter::InitiateScopedSurfaceRequest(
    base::UnguessableToken* out_request_token) {
  base::RunLoop loop;
  proxy_->InitiateScopedSurfaceRequest(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_request_token
,
             const base::UnguessableToken& request_token) {*out_request_token = std::move(request_token);
            loop->Quit();
          },
          &loop,
          out_request_token));
  loop.Run();
}



void FlingingRendererClientExtensionInterceptorForTesting::OnRemotePlayStateChange(::media::mojom::blink::MediaStatusState state) {
  GetForwardingInterface()->OnRemotePlayStateChange(std::move(state));
}
FlingingRendererClientExtensionAsyncWaiter::FlingingRendererClientExtensionAsyncWaiter(
    FlingingRendererClientExtension* proxy) : proxy_(proxy) {}

FlingingRendererClientExtensionAsyncWaiter::~FlingingRendererClientExtensionAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif