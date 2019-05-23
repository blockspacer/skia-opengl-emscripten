// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/sms/sms_manager.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SmsManagerInterceptorForTesting : public SmsManager {
  virtual SmsManager* GetForwardingInterface() = 0;
  void GetNextMessage(base::TimeDelta timeout, GetNextMessageCallback callback) override;
};
class BLINK_COMMON_EXPORT SmsManagerAsyncWaiter {
 public:
  explicit SmsManagerAsyncWaiter(SmsManager* proxy);
  ~SmsManagerAsyncWaiter();
  void GetNextMessage(
      base::TimeDelta timeout, SmsMessagePtr* out_sms);

 private:
  SmsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SmsManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_TEST_UTILS_H_