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


#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace blink {
namespace mojom {


void PictureInPictureDelegateInterceptorForTesting::PictureInPictureWindowSizeChanged(const gfx::Size& size) {
  GetForwardingInterface()->PictureInPictureWindowSizeChanged(std::move(size));
}
PictureInPictureDelegateAsyncWaiter::PictureInPictureDelegateAsyncWaiter(
    PictureInPictureDelegate* proxy) : proxy_(proxy) {}

PictureInPictureDelegateAsyncWaiter::~PictureInPictureDelegateAsyncWaiter() = default;




void PictureInPictureServiceInterceptorForTesting::StartSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const gfx::Size& natural_size, bool show_play_pause_button, bool show_mute_button, StartSessionCallback callback) {
  GetForwardingInterface()->StartSession(std::move(player_id), std::move(surface_id), std::move(natural_size), std::move(show_play_pause_button), std::move(show_mute_button), std::move(callback));
}
void PictureInPictureServiceInterceptorForTesting::EndSession(EndSessionCallback callback) {
  GetForwardingInterface()->EndSession(std::move(callback));
}
void PictureInPictureServiceInterceptorForTesting::UpdateSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const gfx::Size& natural_size, bool show_play_pause_button, bool show_mute_button) {
  GetForwardingInterface()->UpdateSession(std::move(player_id), std::move(surface_id), std::move(natural_size), std::move(show_play_pause_button), std::move(show_mute_button));
}
void PictureInPictureServiceInterceptorForTesting::SetDelegate(PictureInPictureDelegatePtr delegate) {
  GetForwardingInterface()->SetDelegate(std::move(delegate));
}
PictureInPictureServiceAsyncWaiter::PictureInPictureServiceAsyncWaiter(
    PictureInPictureService* proxy) : proxy_(proxy) {}

PictureInPictureServiceAsyncWaiter::~PictureInPictureServiceAsyncWaiter() = default;

void PictureInPictureServiceAsyncWaiter::StartSession(
    uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const gfx::Size& natural_size, bool show_play_pause_button, bool show_mute_button, gfx::Size* out_size) {
  base::RunLoop loop;
  proxy_->StartSession(std::move(player_id),std::move(surface_id),std::move(natural_size),std::move(show_play_pause_button),std::move(show_mute_button),
      base::BindOnce(
          [](base::RunLoop* loop,
             gfx::Size* out_size
,
             const gfx::Size& size) {*out_size = std::move(size);
            loop->Quit();
          },
          &loop,
          out_size));
  loop.Run();
}
void PictureInPictureServiceAsyncWaiter::EndSession(
    ) {
  base::RunLoop loop;
  proxy_->EndSession(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif