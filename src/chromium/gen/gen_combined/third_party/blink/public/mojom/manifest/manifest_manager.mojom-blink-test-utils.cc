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


#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/public/common/manifest/web_display_mode_mojom_traits.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


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
    ::blink::KURL* out_url, ::blink::mojom::blink::ManifestPtr* out_manifest) {
  base::RunLoop loop;
  proxy_->RequestManifest(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::KURL* out_url
,
             ::blink::mojom::blink::ManifestPtr* out_manifest
,
             const ::blink::KURL& url,
             ::blink::mojom::blink::ManifestPtr manifest) {*out_url = std::move(url);*out_manifest = std::move(manifest);
            loop->Quit();
          },
          &loop,
          out_url,
          out_manifest));
  loop.Run();
}
void ManifestManagerAsyncWaiter::RequestManifestDebugInfo(
    ::blink::KURL* out_url, ::blink::mojom::blink::ManifestDebugInfoPtr* out_debug_info) {
  base::RunLoop loop;
  proxy_->RequestManifestDebugInfo(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::KURL* out_url
,
             ::blink::mojom::blink::ManifestDebugInfoPtr* out_debug_info
,
             const ::blink::KURL& url,
             ::blink::mojom::blink::ManifestDebugInfoPtr debug_info) {*out_url = std::move(url);*out_debug_info = std::move(debug_info);
            loop->Quit();
          },
          &loop,
          out_url,
          out_debug_info));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif