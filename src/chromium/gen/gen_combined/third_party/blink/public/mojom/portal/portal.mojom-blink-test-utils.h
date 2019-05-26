// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/portal/portal.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT PortalInterceptorForTesting : public Portal {
  virtual Portal* GetForwardingInterface() = 0;
  void Navigate(const ::blink::KURL& url) override;
  void Activate(::blink::BlinkTransferableMessage data, ActivateCallback callback) override;
  void PostMessageToGuest(::blink::BlinkTransferableMessage message, const scoped_refptr<const ::blink::SecurityOrigin>& target_origin) override;
};
class CORE_EXPORT PortalAsyncWaiter {
 public:
  explicit PortalAsyncWaiter(Portal* proxy);
  ~PortalAsyncWaiter();
  void Activate(
      ::blink::BlinkTransferableMessage data, bool* out_was_adopted);

 private:
  Portal* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PortalAsyncWaiter);
};


class CORE_EXPORT PortalClientInterceptorForTesting : public PortalClient {
  virtual PortalClient* GetForwardingInterface() = 0;
  void ForwardMessageFromGuest(::blink::BlinkTransferableMessage message, const scoped_refptr<const ::blink::SecurityOrigin>& source_origin, const scoped_refptr<const ::blink::SecurityOrigin>& target_origin) override;
  void DispatchLoadEvent() override;
};
class CORE_EXPORT PortalClientAsyncWaiter {
 public:
  explicit PortalClientAsyncWaiter(PortalClient* proxy);
  ~PortalClientAsyncWaiter();

 private:
  PortalClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PortalClientAsyncWaiter);
};


class CORE_EXPORT PortalHostInterceptorForTesting : public PortalHost {
  virtual PortalHost* GetForwardingInterface() = 0;
  void PostMessageToHost(::blink::BlinkTransferableMessage message, const scoped_refptr<const ::blink::SecurityOrigin>& target_origin) override;
};
class CORE_EXPORT PortalHostAsyncWaiter {
 public:
  explicit PortalHostAsyncWaiter(PortalHost* proxy);
  ~PortalHostAsyncWaiter();

 private:
  PortalHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PortalHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_BLINK_TEST_UTILS_H_