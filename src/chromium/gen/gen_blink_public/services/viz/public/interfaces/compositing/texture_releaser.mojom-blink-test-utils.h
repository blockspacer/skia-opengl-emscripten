// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-blink.h"


namespace viz {
namespace mojom {
namespace blink {


class  TextureReleaserInterceptorForTesting : public TextureReleaser {
  virtual TextureReleaser* GetForwardingInterface() = 0;
  void Release(const ::gpu::SyncToken& sync_token, bool is_lost) override;
};
class  TextureReleaserAsyncWaiter {
 public:
  explicit TextureReleaserAsyncWaiter(TextureReleaser* proxy);
  ~TextureReleaserAsyncWaiter();

 private:
  TextureReleaser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextureReleaserAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_BLINK_TEST_UTILS_H_