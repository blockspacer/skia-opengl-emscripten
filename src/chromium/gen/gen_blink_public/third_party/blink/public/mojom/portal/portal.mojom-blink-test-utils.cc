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


#include "third_party/blink/public/mojom/portal/portal.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_cloneable_message_struct_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_transferable_message_struct_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void PortalInterceptorForTesting::Navigate(const ::blink::KURL& url) {
  GetForwardingInterface()->Navigate(std::move(url));
}
void PortalInterceptorForTesting::Activate(::blink::BlinkTransferableMessage data, ActivateCallback callback) {
  GetForwardingInterface()->Activate(std::move(data), std::move(callback));
}
void PortalInterceptorForTesting::PostMessageToGuest(::blink::BlinkTransferableMessage message, const scoped_refptr<const ::blink::SecurityOrigin>& target_origin) {
  GetForwardingInterface()->PostMessageToGuest(std::move(message), std::move(target_origin));
}
PortalAsyncWaiter::PortalAsyncWaiter(
    Portal* proxy) : proxy_(proxy) {}

PortalAsyncWaiter::~PortalAsyncWaiter() = default;

void PortalAsyncWaiter::Activate(
    ::blink::BlinkTransferableMessage data, bool* out_was_adopted) {
  base::RunLoop loop;
  proxy_->Activate(std::move(data),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_was_adopted
,
             bool was_adopted) {*out_was_adopted = std::move(was_adopted);
            loop->Quit();
          },
          &loop,
          out_was_adopted));
  loop.Run();
}



void PortalClientInterceptorForTesting::ForwardMessageFromGuest(::blink::BlinkTransferableMessage message, const scoped_refptr<const ::blink::SecurityOrigin>& source_origin, const scoped_refptr<const ::blink::SecurityOrigin>& target_origin) {
  GetForwardingInterface()->ForwardMessageFromGuest(std::move(message), std::move(source_origin), std::move(target_origin));
}
void PortalClientInterceptorForTesting::DispatchLoadEvent() {
  GetForwardingInterface()->DispatchLoadEvent();
}
PortalClientAsyncWaiter::PortalClientAsyncWaiter(
    PortalClient* proxy) : proxy_(proxy) {}

PortalClientAsyncWaiter::~PortalClientAsyncWaiter() = default;




void PortalHostInterceptorForTesting::PostMessageToHost(::blink::BlinkTransferableMessage message, const scoped_refptr<const ::blink::SecurityOrigin>& target_origin) {
  GetForwardingInterface()->PostMessageToHost(std::move(message), std::move(target_origin));
}
PortalHostAsyncWaiter::PortalHostAsyncWaiter(
    PortalHost* proxy) : proxy_(proxy) {}

PortalHostAsyncWaiter::~PortalHostAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif