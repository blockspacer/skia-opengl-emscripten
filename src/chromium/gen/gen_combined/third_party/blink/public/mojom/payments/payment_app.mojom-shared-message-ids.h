// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace payments {
namespace mojom {

namespace internal {


// The 1384673531 value is based on sha256(salt + "PaymentManager1").
constexpr uint32_t kPaymentManager_Init_Name = 1384673531;
// The 258169040 value is based on sha256(salt + "PaymentManager2").
constexpr uint32_t kPaymentManager_DeletePaymentInstrument_Name = 258169040;
// The 1236684771 value is based on sha256(salt + "PaymentManager3").
constexpr uint32_t kPaymentManager_GetPaymentInstrument_Name = 1236684771;
// The 382727970 value is based on sha256(salt + "PaymentManager4").
constexpr uint32_t kPaymentManager_KeysOfPaymentInstruments_Name = 382727970;
// The 1388325430 value is based on sha256(salt + "PaymentManager5").
constexpr uint32_t kPaymentManager_HasPaymentInstrument_Name = 1388325430;
// The 971756414 value is based on sha256(salt + "PaymentManager6").
constexpr uint32_t kPaymentManager_SetPaymentInstrument_Name = 971756414;
// The 1129169402 value is based on sha256(salt + "PaymentManager7").
constexpr uint32_t kPaymentManager_ClearPaymentInstruments_Name = 1129169402;
// The 112724730 value is based on sha256(salt + "PaymentManager8").
constexpr uint32_t kPaymentManager_SetUserHint_Name = 112724730;
// The 1194026013 value is based on sha256(salt + "PaymentHandlerResponseCallback1").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name = 1194026013;
// The 1260960551 value is based on sha256(salt + "PaymentHandlerResponseCallback2").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name = 1260960551;
// The 1173645139 value is based on sha256(salt + "PaymentHandlerResponseCallback3").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name = 1173645139;

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_