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


#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom.h"
#include "third_party/blink/public/mojom/worker/shared_worker_client.mojom.h"
#include "third_party/blink/public/mojom/worker/shared_worker_creation_context_type.mojom.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void SharedWorkerConnectorInterceptorForTesting::Connect(::blink::mojom::SharedWorkerInfoPtr info, ::blink::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port, ::blink::mojom::BlobURLTokenPtr blob_url_token) {
  GetForwardingInterface()->Connect(std::move(info), std::move(client), std::move(creation_context_type), std::move(message_port), std::move(blob_url_token));
}
SharedWorkerConnectorAsyncWaiter::SharedWorkerConnectorAsyncWaiter(
    SharedWorkerConnector* proxy) : proxy_(proxy) {}

SharedWorkerConnectorAsyncWaiter::~SharedWorkerConnectorAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif