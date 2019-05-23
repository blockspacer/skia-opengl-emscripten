// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT NavigationInitiatorInterceptorForTesting : public NavigationInitiator {
  virtual NavigationInitiator* GetForwardingInterface() = 0;
  void SendViolationReport(CSPViolationParamsPtr violation_params) override;
};
class BLINK_COMMON_EXPORT NavigationInitiatorAsyncWaiter {
 public:
  explicit NavigationInitiatorAsyncWaiter(NavigationInitiator* proxy);
  ~NavigationInitiatorAsyncWaiter();

 private:
  NavigationInitiator* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NavigationInitiatorAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_TEST_UTILS_H_