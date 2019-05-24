// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_TEST_UTILS_H_

#include "services/metrics/public/mojom/ukm_interface.mojom-blink.h"


namespace ukm {
namespace mojom {
namespace blink {


class  UkmRecorderInterfaceInterceptorForTesting : public UkmRecorderInterface {
  virtual UkmRecorderInterface* GetForwardingInterface() = 0;
  void AddEntry(UkmEntryPtr entry) override;
  void UpdateSourceURL(int64_t source_id, const WTF::String& url) override;
};
class  UkmRecorderInterfaceAsyncWaiter {
 public:
  explicit UkmRecorderInterfaceAsyncWaiter(UkmRecorderInterface* proxy);
  ~UkmRecorderInterfaceAsyncWaiter();

 private:
  UkmRecorderInterface* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UkmRecorderInterfaceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_TEST_UTILS_H_