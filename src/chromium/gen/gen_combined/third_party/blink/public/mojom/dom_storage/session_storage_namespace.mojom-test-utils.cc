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


#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void SessionStorageNamespaceInterceptorForTesting::OpenArea(const url::Origin& origin, ::blink::mojom::StorageAreaAssociatedRequest area) {
  GetForwardingInterface()->OpenArea(std::move(origin), std::move(area));
}
void SessionStorageNamespaceInterceptorForTesting::Clone(const std::string& clone_to_namespace) {
  GetForwardingInterface()->Clone(std::move(clone_to_namespace));
}
SessionStorageNamespaceAsyncWaiter::SessionStorageNamespaceAsyncWaiter(
    SessionStorageNamespace* proxy) : proxy_(proxy) {}

SessionStorageNamespaceAsyncWaiter::~SessionStorageNamespaceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif