// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/insecure_input/insecure_input_service.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT InsecureInputServiceInterceptorForTesting : public InsecureInputService {
  virtual InsecureInputService* GetForwardingInterface() = 0;
  void DidEditFieldInInsecureContext() override;
};
class PLATFORM_EXPORT InsecureInputServiceAsyncWaiter {
 public:
  explicit InsecureInputServiceAsyncWaiter(InsecureInputService* proxy);
  ~InsecureInputServiceAsyncWaiter();

 private:
  InsecureInputService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InsecureInputServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSECURE_INPUT_INSECURE_INPUT_SERVICE_MOJOM_BLINK_TEST_UTILS_H_