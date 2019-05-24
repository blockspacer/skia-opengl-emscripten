// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT BlobURLStoreInterceptorForTesting : public BlobURLStore {
  virtual BlobURLStore* GetForwardingInterface() = 0;
  void Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url, RegisterCallback callback) override;
  void Revoke(const ::blink::KURL& url) override;
  void Resolve(const ::blink::KURL& url, ResolveCallback callback) override;
  void ResolveAsURLLoaderFactory(const ::blink::KURL& url, ::network::mojom::blink::URLLoaderFactoryRequest factory) override;
  void ResolveForNavigation(const ::blink::KURL& url, BlobURLTokenRequest token) override;
};
class PLATFORM_EXPORT BlobURLStoreAsyncWaiter {
 public:
  explicit BlobURLStoreAsyncWaiter(BlobURLStore* proxy);
  ~BlobURLStoreAsyncWaiter();
  void Register(
      ::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url);
  void Resolve(
      const ::blink::KURL& url, ::blink::mojom::blink::BlobPtr* out_blob);

 private:
  BlobURLStore* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLStoreAsyncWaiter);
};


class PLATFORM_EXPORT BlobURLTokenInterceptorForTesting : public BlobURLToken {
  virtual BlobURLToken* GetForwardingInterface() = 0;
  void Clone(BlobURLTokenRequest token) override;
  void GetToken(GetTokenCallback callback) override;
};
class PLATFORM_EXPORT BlobURLTokenAsyncWaiter {
 public:
  explicit BlobURLTokenAsyncWaiter(BlobURLToken* proxy);
  ~BlobURLTokenAsyncWaiter();
  void GetToken(
      base::UnguessableToken* out_token);

 private:
  BlobURLToken* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobURLTokenAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_TEST_UTILS_H_