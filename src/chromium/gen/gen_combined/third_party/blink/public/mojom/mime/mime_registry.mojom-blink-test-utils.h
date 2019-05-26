// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/mime/mime_registry.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT MimeRegistryInterceptorForTesting : public MimeRegistry {
  virtual MimeRegistry* GetForwardingInterface() = 0;
  void GetMimeTypeFromExtension(const WTF::String& extension, GetMimeTypeFromExtensionCallback callback) override;
};
class PLATFORM_EXPORT MimeRegistryAsyncWaiter {
 public:
  explicit MimeRegistryAsyncWaiter(MimeRegistry* proxy);
  ~MimeRegistryAsyncWaiter();
  void GetMimeTypeFromExtension(
      const WTF::String& extension, WTF::String* out_mime_type);

 private:
  MimeRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MimeRegistryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_