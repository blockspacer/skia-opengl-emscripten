// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SharedWorkerConnectorInterceptorForTesting : public SharedWorkerConnector {
  virtual SharedWorkerConnector* GetForwardingInterface() = 0;
  void Connect(::blink::mojom::blink::SharedWorkerInfoPtr info, ::blink::mojom::blink::SharedWorkerClientPtr client, ::blink::mojom::blink::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port, ::blink::mojom::blink::BlobURLTokenPtr blob_url_token) override;
};
class PLATFORM_EXPORT SharedWorkerConnectorAsyncWaiter {
 public:
  explicit SharedWorkerConnectorAsyncWaiter(SharedWorkerConnector* proxy);
  ~SharedWorkerConnectorAsyncWaiter();

 private:
  SharedWorkerConnector* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SharedWorkerConnectorAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_BLINK_TEST_UTILS_H_