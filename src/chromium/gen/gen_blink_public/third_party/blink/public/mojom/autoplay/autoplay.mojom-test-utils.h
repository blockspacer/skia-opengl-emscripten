// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/autoplay/autoplay.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT AutoplayConfigurationClientInterceptorForTesting : public AutoplayConfigurationClient {
  virtual AutoplayConfigurationClient* GetForwardingInterface() = 0;
  void AddAutoplayFlags(const url::Origin& origin, int32_t flags) override;
};
class BLINK_COMMON_EXPORT AutoplayConfigurationClientAsyncWaiter {
 public:
  explicit AutoplayConfigurationClientAsyncWaiter(AutoplayConfigurationClient* proxy);
  ~AutoplayConfigurationClientAsyncWaiter();

 private:
  AutoplayConfigurationClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AutoplayConfigurationClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_TEST_UTILS_H_