// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/blob/blob_url_store.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT BlobURLStoreInterceptorForTesting : public BlobURLStore {
  virtual BlobURLStore* GetForwardingInterface() = 0;
  void Register(::blink::mojom::BlobPtr blob, const GURL& url, RegisterCallback callback) override;
  void Revoke(const GURL& url) override;
  void Resolve(const GURL& url, ResolveCallback callback) override;
  void ResolveAsURLLoaderFactory(const GURL& url, ::network::mojom::URLLoaderFactoryRequest factory) override;
  void ResolveForNavigation(const GURL& url, BlobURLTokenRequest token) override;
};
class BLINK_COMMON_EXPORT BlobURLStoreAsyncWaiter {
 public:
  explicit BlobURLStoreAsyncWaiter(BlobURLStore* proxy);
  ~BlobURLStoreAsyncWaiter();
  void Register(
      ::blink::mojom::BlobPtr blob, const GURL& url);
  void Resolve(
      const GURL& url, ::blink::mojom::BlobPtr* out_blob);

 private:
  BlobURLStore* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLStoreAsyncWaiter);
};


class BLINK_COMMON_EXPORT BlobURLTokenInterceptorForTesting : public BlobURLToken {
  virtual BlobURLToken* GetForwardingInterface() = 0;
  void Clone(BlobURLTokenRequest token) override;
  void GetToken(GetTokenCallback callback) override;
};
class BLINK_COMMON_EXPORT BlobURLTokenAsyncWaiter {
 public:
  explicit BlobURLTokenAsyncWaiter(BlobURLToken* proxy);
  ~BlobURLTokenAsyncWaiter();
  void GetToken(
      base::UnguessableToken* out_token);

 private:
  BlobURLToken* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLTokenAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_TEST_UTILS_H_