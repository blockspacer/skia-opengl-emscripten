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


#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void StoragePartitionServiceInterceptorForTesting::OpenLocalStorage(const url::Origin& origin, ::blink::mojom::StorageAreaRequest area) {
  GetForwardingInterface()->OpenLocalStorage(std::move(origin), std::move(area));
}
void StoragePartitionServiceInterceptorForTesting::OpenSessionStorage(const std::string& namespace_id, ::blink::mojom::SessionStorageNamespaceRequest session_namespace) {
  GetForwardingInterface()->OpenSessionStorage(std::move(namespace_id), std::move(session_namespace));
}
StoragePartitionServiceAsyncWaiter::StoragePartitionServiceAsyncWaiter(
    StoragePartitionService* proxy) : proxy_(proxy) {}

StoragePartitionServiceAsyncWaiter::~StoragePartitionServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif