// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webshare/webshare.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ShareServiceInterceptorForTesting : public ShareService {
  virtual ShareService* GetForwardingInterface() = 0;
  void Share(const std::string& title, const std::string& text, const GURL& url, std::vector<SharedFilePtr> files, ShareCallback callback) override;
};
class BLINK_COMMON_EXPORT ShareServiceAsyncWaiter {
 public:
  explicit ShareServiceAsyncWaiter(ShareService* proxy);
  ~ShareServiceAsyncWaiter();
  void Share(
      const std::string& title, const std::string& text, const GURL& url, std::vector<SharedFilePtr> files, ShareError* out_error);

 private:
  ShareService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ShareServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_TEST_UTILS_H_