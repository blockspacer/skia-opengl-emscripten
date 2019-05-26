// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SessionStorageNamespaceInterceptorForTesting : public SessionStorageNamespace {
  virtual SessionStorageNamespace* GetForwardingInterface() = 0;
  void OpenArea(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::StorageAreaAssociatedRequest area) override;
  void Clone(const WTF::String& clone_to_namespace) override;
};
class PLATFORM_EXPORT SessionStorageNamespaceAsyncWaiter {
 public:
  explicit SessionStorageNamespaceAsyncWaiter(SessionStorageNamespace* proxy);
  ~SessionStorageNamespaceAsyncWaiter();

 private:
  SessionStorageNamespace* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SessionStorageNamespaceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_BLINK_TEST_UTILS_H_