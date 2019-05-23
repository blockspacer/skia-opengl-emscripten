// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {
namespace document_metadata {


class BLINK_COMMON_EXPORT CopylessPasteInterceptorForTesting : public CopylessPaste {
  virtual CopylessPaste* GetForwardingInterface() = 0;
  void GetEntities(GetEntitiesCallback callback) override;
};
class BLINK_COMMON_EXPORT CopylessPasteAsyncWaiter {
 public:
  explicit CopylessPasteAsyncWaiter(CopylessPaste* proxy);
  ~CopylessPasteAsyncWaiter();
  void GetEntities(
      WebPagePtr* out_page);

 private:
  CopylessPaste* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CopylessPasteAsyncWaiter);
};




}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_TEST_UTILS_H_