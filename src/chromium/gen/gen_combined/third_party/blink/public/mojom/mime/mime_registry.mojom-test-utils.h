// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mime/mime_registry.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT MimeRegistryInterceptorForTesting : public MimeRegistry {
  virtual MimeRegistry* GetForwardingInterface() = 0;
  void GetMimeTypeFromExtension(const std::string& extension, GetMimeTypeFromExtensionCallback callback) override;
};
class BLINK_COMMON_EXPORT MimeRegistryAsyncWaiter {
 public:
  explicit MimeRegistryAsyncWaiter(MimeRegistry* proxy);
  ~MimeRegistryAsyncWaiter();
  void GetMimeTypeFromExtension(
      const std::string& extension, std::string* out_mime_type);

 private:
  MimeRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MimeRegistryAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_TEST_UTILS_H_