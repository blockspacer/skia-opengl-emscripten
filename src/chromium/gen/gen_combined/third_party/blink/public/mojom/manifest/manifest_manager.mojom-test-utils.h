// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/manifest/manifest_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ManifestManagerInterceptorForTesting : public ManifestManager {
  virtual ManifestManager* GetForwardingInterface() = 0;
  void RequestManifest(RequestManifestCallback callback) override;
  void RequestManifestDebugInfo(RequestManifestDebugInfoCallback callback) override;
};
class BLINK_COMMON_EXPORT ManifestManagerAsyncWaiter {
 public:
  explicit ManifestManagerAsyncWaiter(ManifestManager* proxy);
  ~ManifestManagerAsyncWaiter();
  void RequestManifest(
      GURL* out_url, ::blink::Manifest* out_manifest);
  void RequestManifestDebugInfo(
      GURL* out_url, ::blink::mojom::ManifestDebugInfoPtr* out_debug_info);

 private:
  ManifestManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ManifestManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_TEST_UTILS_H_