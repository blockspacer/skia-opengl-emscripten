// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_UKM_UKM_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_UKM_UKM_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/ukm/ukm.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT UkmSourceIdFrameHostInterceptorForTesting : public UkmSourceIdFrameHost {
  virtual UkmSourceIdFrameHost* GetForwardingInterface() = 0;
  void SetDocumentSourceId(int64_t source_id) override;
};
class PLATFORM_EXPORT UkmSourceIdFrameHostAsyncWaiter {
 public:
  explicit UkmSourceIdFrameHostAsyncWaiter(UkmSourceIdFrameHost* proxy);
  ~UkmSourceIdFrameHostAsyncWaiter();

 private:
  UkmSourceIdFrameHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(UkmSourceIdFrameHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_UKM_UKM_MOJOM_BLINK_TEST_UTILS_H_