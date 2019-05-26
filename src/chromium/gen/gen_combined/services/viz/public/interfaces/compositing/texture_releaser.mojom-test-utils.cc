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


#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "gpu/ipc/common/sync_token.mojom.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_JUMBO_H_
#include "gpu/ipc/common/sync_token_struct_traits.h"
#endif


namespace viz {
namespace mojom {


void TextureReleaserInterceptorForTesting::Release(const ::gpu::SyncToken& sync_token, bool is_lost) {
  GetForwardingInterface()->Release(std::move(sync_token), std::move(is_lost));
}
TextureReleaserAsyncWaiter::TextureReleaserAsyncWaiter(
    TextureReleaser* proxy) : proxy_(proxy) {}

TextureReleaserAsyncWaiter::~TextureReleaserAsyncWaiter() = default;






}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif