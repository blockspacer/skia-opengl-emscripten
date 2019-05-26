// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/sms/sms_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SmsManagerInterceptorForTesting : public SmsManager {
  virtual SmsManager* GetForwardingInterface() = 0;
  void GetNextMessage(base::TimeDelta timeout, GetNextMessageCallback callback) override;
};
class PLATFORM_EXPORT SmsManagerAsyncWaiter {
 public:
  explicit SmsManagerAsyncWaiter(SmsManager* proxy);
  ~SmsManagerAsyncWaiter();
  void GetNextMessage(
      base::TimeDelta timeout, SmsMessagePtr* out_sms);

 private:
  SmsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SmsManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_