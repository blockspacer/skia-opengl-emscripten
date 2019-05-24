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


#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void SessionStorageNamespaceInterceptorForTesting::OpenArea(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::StorageAreaAssociatedRequest area) {
  GetForwardingInterface()->OpenArea(std::move(origin), std::move(area));
}
void SessionStorageNamespaceInterceptorForTesting::Clone(const WTF::String& clone_to_namespace) {
  GetForwardingInterface()->Clone(std::move(clone_to_namespace));
}
SessionStorageNamespaceAsyncWaiter::SessionStorageNamespaceAsyncWaiter(
    SessionStorageNamespace* proxy) : proxy_(proxy) {}

SessionStorageNamespaceAsyncWaiter::~SessionStorageNamespaceAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif