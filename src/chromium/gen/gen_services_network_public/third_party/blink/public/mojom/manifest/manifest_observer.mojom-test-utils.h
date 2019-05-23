// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/manifest/manifest_observer.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ManifestUrlChangeObserverInterceptorForTesting : public ManifestUrlChangeObserver {
  virtual ManifestUrlChangeObserver* GetForwardingInterface() = 0;
  void ManifestUrlChanged(const base::Optional<GURL>& manifest_url) override;
};
class BLINK_COMMON_EXPORT ManifestUrlChangeObserverAsyncWaiter {
 public:
  explicit ManifestUrlChangeObserverAsyncWaiter(ManifestUrlChangeObserver* proxy);
  ~ManifestUrlChangeObserverAsyncWaiter();

 private:
  ManifestUrlChangeObserver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ManifestUrlChangeObserverAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_TEST_UTILS_H_