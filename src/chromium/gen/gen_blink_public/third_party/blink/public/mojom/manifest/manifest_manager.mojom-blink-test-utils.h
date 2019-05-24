// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ManifestManagerInterceptorForTesting : public ManifestManager {
  virtual ManifestManager* GetForwardingInterface() = 0;
  void RequestManifest(RequestManifestCallback callback) override;
  void RequestManifestDebugInfo(RequestManifestDebugInfoCallback callback) override;
};
class PLATFORM_EXPORT ManifestManagerAsyncWaiter {
 public:
  explicit ManifestManagerAsyncWaiter(ManifestManager* proxy);
  ~ManifestManagerAsyncWaiter();
  void RequestManifest(
      ::blink::KURL* out_url, ::blink::mojom::blink::ManifestPtr* out_manifest);
  void RequestManifestDebugInfo(
      ::blink::KURL* out_url, ::blink::mojom::blink::ManifestDebugInfoPtr* out_debug_info);

 private:
  ManifestManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ManifestManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_BLINK_TEST_UTILS_H_