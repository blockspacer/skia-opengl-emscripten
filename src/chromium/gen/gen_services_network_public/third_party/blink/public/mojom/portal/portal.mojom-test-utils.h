// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/portal/portal.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT PortalInterceptorForTesting : public Portal {
  virtual Portal* GetForwardingInterface() = 0;
  void Navigate(const GURL& url) override;
  void Activate(::blink::TransferableMessage data, ActivateCallback callback) override;
  void PostMessageToGuest(::blink::TransferableMessage message, const base::Optional<url::Origin>& target_origin) override;
};
class BLINK_COMMON_EXPORT PortalAsyncWaiter {
 public:
  explicit PortalAsyncWaiter(Portal* proxy);
  ~PortalAsyncWaiter();
  void Activate(
      ::blink::TransferableMessage data, bool* out_was_adopted);

 private:
  Portal* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PortalAsyncWaiter);
};


class BLINK_COMMON_EXPORT PortalClientInterceptorForTesting : public PortalClient {
  virtual PortalClient* GetForwardingInterface() = 0;
  void ForwardMessageFromGuest(::blink::TransferableMessage message, const url::Origin& source_origin, const base::Optional<url::Origin>& target_origin) override;
  void DispatchLoadEvent() override;
};
class BLINK_COMMON_EXPORT PortalClientAsyncWaiter {
 public:
  explicit PortalClientAsyncWaiter(PortalClient* proxy);
  ~PortalClientAsyncWaiter();

 private:
  PortalClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PortalClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT PortalHostInterceptorForTesting : public PortalHost {
  virtual PortalHost* GetForwardingInterface() = 0;
  void PostMessageToHost(::blink::TransferableMessage message, const base::Optional<url::Origin>& target_origin) override;
};
class BLINK_COMMON_EXPORT PortalHostAsyncWaiter {
 public:
  explicit PortalHostAsyncWaiter(PortalHost* proxy);
  ~PortalHostAsyncWaiter();

 private:
  PortalHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PortalHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PORTAL_PORTAL_MOJOM_TEST_UTILS_H_