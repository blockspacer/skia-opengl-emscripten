// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/output_protection.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT OutputProtectionInterceptorForTesting : public OutputProtection {
  virtual OutputProtection* GetForwardingInterface() = 0;
  void QueryStatus(QueryStatusCallback callback) override;
  void EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) override;
};
class BLINK_PLATFORM_EXPORT OutputProtectionAsyncWaiter {
 public:
  explicit OutputProtectionAsyncWaiter(OutputProtection* proxy);
  ~OutputProtectionAsyncWaiter();
  void QueryStatus(
      bool* out_success, uint32_t* out_link_mask, uint32_t* out_protection_mask);
  void EnableProtection(
      uint32_t desired_protection_mask, bool* out_success);

 private:
  OutputProtection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OutputProtectionAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_TEST_UTILS_H_