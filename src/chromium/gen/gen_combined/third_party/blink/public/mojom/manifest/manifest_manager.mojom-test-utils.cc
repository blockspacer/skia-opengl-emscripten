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


#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "third_party/blink/public/common/manifest/manifest_mojom_traits.h"
#include "third_party/blink/public/common/manifest/web_display_mode_mojom_traits.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ManifestManagerInterceptorForTesting::RequestManifest(RequestManifestCallback callback) {
  GetForwardingInterface()->RequestManifest(std::move(callback));
}
void ManifestManagerInterceptorForTesting::RequestManifestDebugInfo(RequestManifestDebugInfoCallback callback) {
  GetForwardingInterface()->RequestManifestDebugInfo(std::move(callback));
}
ManifestManagerAsyncWaiter::ManifestManagerAsyncWaiter(
    ManifestManager* proxy) : proxy_(proxy) {}

ManifestManagerAsyncWaiter::~ManifestManagerAsyncWaiter() = default;

void ManifestManagerAsyncWaiter::RequestManifest(
    GURL* out_url, ::blink::Manifest* out_manifest) {
  base::RunLoop loop;
  proxy_->RequestManifest(
      base::BindOnce(
          [](base::RunLoop* loop,
             GURL* out_url
,
             ::blink::Manifest* out_manifest
,
             const GURL& url,
             const ::blink::Manifest& manifest) {*out_url = std::move(url);*out_manifest = std::move(manifest);
            loop->Quit();
          },
          &loop,
          out_url,
          out_manifest));
  loop.Run();
}
void ManifestManagerAsyncWaiter::RequestManifestDebugInfo(
    GURL* out_url, ::blink::mojom::ManifestDebugInfoPtr* out_debug_info) {
  base::RunLoop loop;
  proxy_->RequestManifestDebugInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             GURL* out_url
,
             ::blink::mojom::ManifestDebugInfoPtr* out_debug_info
,
             const GURL& url,
             ::blink::mojom::ManifestDebugInfoPtr debug_info) {*out_url = std::move(url);*out_debug_info = std::move(debug_info);
            loop->Quit();
          },
          &loop,
          out_url,
          out_debug_info));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif