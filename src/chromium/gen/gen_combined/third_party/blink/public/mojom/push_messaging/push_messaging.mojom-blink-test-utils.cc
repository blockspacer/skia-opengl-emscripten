// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void PushMessagingInterceptorForTesting::Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, PushSubscriptionOptionsPtr options, bool user_gesture, SubscribeCallback callback) {
  GetForwardingInterface()->Subscribe(std::move(render_frame_id), std::move(service_worker_registration_id), std::move(options), std::move(user_gesture), std::move(callback));
}
void PushMessagingInterceptorForTesting::Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) {
  GetForwardingInterface()->Unsubscribe(std::move(service_worker_registration_id), std::move(callback));
}
void PushMessagingInterceptorForTesting::GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) {
  GetForwardingInterface()->GetSubscription(std::move(service_worker_registration_id), std::move(callback));
}
PushMessagingAsyncWaiter::PushMessagingAsyncWaiter(
    PushMessaging* proxy) : proxy_(proxy) {}

PushMessagingAsyncWaiter::~PushMessagingAsyncWaiter() = default;

void PushMessagingAsyncWaiter::Subscribe(
    int32_t render_frame_id, int64_t service_worker_registration_id, PushSubscriptionOptionsPtr options, bool user_gesture, ::blink::mojom::blink::PushRegistrationStatus* out_status, base::Optional<::blink::KURL>* out_endpoint, PushSubscriptionOptionsPtr* out_options, base::Optional<WTF::Vector<uint8_t>>* out_p256dh, base::Optional<WTF::Vector<uint8_t>>* out_auth) {
  base::RunLoop loop;
  proxy_->Subscribe(std::move(render_frame_id),std::move(service_worker_registration_id),std::move(options),std::move(user_gesture),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::PushRegistrationStatus* out_status
,
             base::Optional<::blink::KURL>* out_endpoint
,
             PushSubscriptionOptionsPtr* out_options
,
             base::Optional<WTF::Vector<uint8_t>>* out_p256dh
,
             base::Optional<WTF::Vector<uint8_t>>* out_auth
,
             ::blink::mojom::blink::PushRegistrationStatus status,
             const base::Optional<::blink::KURL>& endpoint,
             PushSubscriptionOptionsPtr options,
             const base::Optional<WTF::Vector<uint8_t>>& p256dh,
             const base::Optional<WTF::Vector<uint8_t>>& auth) {*out_status = std::move(status);*out_endpoint = std::move(endpoint);*out_options = std::move(options);*out_p256dh = std::move(p256dh);*out_auth = std::move(auth);
            loop->Quit();
          },
          &loop,
          out_status,
          out_endpoint,
          out_options,
          out_p256dh,
          out_auth));
  loop.Run();
}
void PushMessagingAsyncWaiter::Unsubscribe(
    int64_t service_worker_registration_id, PushErrorType* out_error_type, bool* out_did_unsubscribe, WTF::String* out_error_message) {
  base::RunLoop loop;
  proxy_->Unsubscribe(std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             PushErrorType* out_error_type
,
             bool* out_did_unsubscribe
,
             WTF::String* out_error_message
,
             PushErrorType error_type,
             bool did_unsubscribe,
             const WTF::String& error_message) {*out_error_type = std::move(error_type);*out_did_unsubscribe = std::move(did_unsubscribe);*out_error_message = std::move(error_message);
            loop->Quit();
          },
          &loop,
          out_error_type,
          out_did_unsubscribe,
          out_error_message));
  loop.Run();
}
void PushMessagingAsyncWaiter::GetSubscription(
    int64_t service_worker_registration_id, ::blink::mojom::blink::PushGetRegistrationStatus* out_status, base::Optional<::blink::KURL>* out_endpoint, PushSubscriptionOptionsPtr* out_options, base::Optional<WTF::Vector<uint8_t>>* out_p256dh, base::Optional<WTF::Vector<uint8_t>>* out_auth) {
  base::RunLoop loop;
  proxy_->GetSubscription(std::move(service_worker_registration_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::PushGetRegistrationStatus* out_status
,
             base::Optional<::blink::KURL>* out_endpoint
,
             PushSubscriptionOptionsPtr* out_options
,
             base::Optional<WTF::Vector<uint8_t>>* out_p256dh
,
             base::Optional<WTF::Vector<uint8_t>>* out_auth
,
             ::blink::mojom::blink::PushGetRegistrationStatus status,
             const base::Optional<::blink::KURL>& endpoint,
             PushSubscriptionOptionsPtr options,
             const base::Optional<WTF::Vector<uint8_t>>& p256dh,
             const base::Optional<WTF::Vector<uint8_t>>& auth) {*out_status = std::move(status);*out_endpoint = std::move(endpoint);*out_options = std::move(options);*out_p256dh = std::move(p256dh);*out_auth = std::move(auth);
            loop->Quit();
          },
          &loop,
          out_status,
          out_endpoint,
          out_options,
          out_p256dh,
          out_auth));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif