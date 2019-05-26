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


#include "third_party/blink/public/mojom/manifest/manifest_observer.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_OBSERVER_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ManifestUrlChangeObserverInterceptorForTesting::ManifestUrlChanged(const base::Optional<GURL>& manifest_url) {
  GetForwardingInterface()->ManifestUrlChanged(std::move(manifest_url));
}
ManifestUrlChangeObserverAsyncWaiter::ManifestUrlChangeObserverAsyncWaiter(
    ManifestUrlChangeObserver* proxy) : proxy_(proxy) {}

ManifestUrlChangeObserverAsyncWaiter::~ManifestUrlChangeObserverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif