// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/badging/badging.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT BadgeServiceInterceptorForTesting : public BadgeService {
  virtual BadgeService* GetForwardingInterface() = 0;
  void SetInteger(uint64_t content) override;
  void SetFlag() override;
  void ClearBadge() override;
};
class BLINK_COMMON_EXPORT BadgeServiceAsyncWaiter {
 public:
  explicit BadgeServiceAsyncWaiter(BadgeService* proxy);
  ~BadgeServiceAsyncWaiter();

 private:
  BadgeService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BadgeServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_TEST_UTILS_H_