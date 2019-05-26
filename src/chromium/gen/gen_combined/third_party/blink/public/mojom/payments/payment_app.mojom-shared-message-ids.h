// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace payments {
namespace mojom {

namespace internal {


// The 644004044 value is based on sha256(salt + "PaymentManager1").
constexpr uint32_t kPaymentManager_Init_Name = 644004044;
// The 1647322938 value is based on sha256(salt + "PaymentManager2").
constexpr uint32_t kPaymentManager_DeletePaymentInstrument_Name = 1647322938;
// The 1524712741 value is based on sha256(salt + "PaymentManager3").
constexpr uint32_t kPaymentManager_GetPaymentInstrument_Name = 1524712741;
// The 1676467421 value is based on sha256(salt + "PaymentManager4").
constexpr uint32_t kPaymentManager_KeysOfPaymentInstruments_Name = 1676467421;
// The 1039124567 value is based on sha256(salt + "PaymentManager5").
constexpr uint32_t kPaymentManager_HasPaymentInstrument_Name = 1039124567;
// The 1642506586 value is based on sha256(salt + "PaymentManager6").
constexpr uint32_t kPaymentManager_SetPaymentInstrument_Name = 1642506586;
// The 1289236172 value is based on sha256(salt + "PaymentManager7").
constexpr uint32_t kPaymentManager_ClearPaymentInstruments_Name = 1289236172;
// The 412890940 value is based on sha256(salt + "PaymentManager8").
constexpr uint32_t kPaymentManager_SetUserHint_Name = 412890940;
// The 548611641 value is based on sha256(salt + "PaymentHandlerResponseCallback1").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForAbortPayment_Name = 548611641;
// The 1190417993 value is based on sha256(salt + "PaymentHandlerResponseCallback2").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForCanMakePayment_Name = 1190417993;
// The 300443352 value is based on sha256(salt + "PaymentHandlerResponseCallback3").
constexpr uint32_t kPaymentHandlerResponseCallback_OnResponseForPaymentRequest_Name = 300443352;

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_MESSAGE_IDS_H_