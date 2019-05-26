// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SessionStorageNamespaceInterceptorForTesting : public SessionStorageNamespace {
  virtual SessionStorageNamespace* GetForwardingInterface() = 0;
  void OpenArea(const url::Origin& origin, ::blink::mojom::StorageAreaAssociatedRequest area) override;
  void Clone(const std::string& clone_to_namespace) override;
};
class BLINK_COMMON_EXPORT SessionStorageNamespaceAsyncWaiter {
 public:
  explicit SessionStorageNamespaceAsyncWaiter(SessionStorageNamespace* proxy);
  ~SessionStorageNamespaceAsyncWaiter();

 private:
  SessionStorageNamespace* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SessionStorageNamespaceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_TEST_UTILS_H_