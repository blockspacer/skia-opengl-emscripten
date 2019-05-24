// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_TEST_UTILS_H_

#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-blink.h"


namespace viz {
namespace mojom {
namespace blink {


class  CopyOutputResultSenderInterceptorForTesting : public CopyOutputResultSender {
  virtual CopyOutputResultSender* GetForwardingInterface() = 0;
  void SendResult(::viz::mojom::blink::CopyOutputResultPtr result) override;
};
class  CopyOutputResultSenderAsyncWaiter {
 public:
  explicit CopyOutputResultSenderAsyncWaiter(CopyOutputResultSender* proxy);
  ~CopyOutputResultSenderAsyncWaiter();

 private:
  CopyOutputResultSender* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CopyOutputResultSenderAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_BLINK_TEST_UTILS_H_