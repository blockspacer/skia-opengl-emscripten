// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT PushMessagingInterceptorForTesting : public PushMessaging {
  virtual PushMessaging* GetForwardingInterface() = 0;
  void Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, PushSubscriptionOptionsPtr options, bool user_gesture, SubscribeCallback callback) override;
  void Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) override;
  void GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) override;
};
class PLATFORM_EXPORT PushMessagingAsyncWaiter {
 public:
  explicit PushMessagingAsyncWaiter(PushMessaging* proxy);
  ~PushMessagingAsyncWaiter();
  void Subscribe(
      int32_t render_frame_id, int64_t service_worker_registration_id, PushSubscriptionOptionsPtr options, bool user_gesture, ::blink::mojom::blink::PushRegistrationStatus* out_status, base::Optional<::blink::KURL>* out_endpoint, PushSubscriptionOptionsPtr* out_options, base::Optional<WTF::Vector<uint8_t>>* out_p256dh, base::Optional<WTF::Vector<uint8_t>>* out_auth);
  void Unsubscribe(
      int64_t service_worker_registration_id, PushErrorType* out_error_type, bool* out_did_unsubscribe, WTF::String* out_error_message);
  void GetSubscription(
      int64_t service_worker_registration_id, ::blink::mojom::blink::PushGetRegistrationStatus* out_status, base::Optional<::blink::KURL>* out_endpoint, PushSubscriptionOptionsPtr* out_options, base::Optional<WTF::Vector<uint8_t>>* out_p256dh, base::Optional<WTF::Vector<uint8_t>>* out_auth);

 private:
  PushMessaging* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PushMessagingAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_BLINK_TEST_UTILS_H_