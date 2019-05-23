// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void BlobURLStoreInterceptorForTesting::Register(::blink::mojom::BlobPtr blob, const GURL& url, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(blob), std::move(url), std::move(callback));
}
void BlobURLStoreInterceptorForTesting::Revoke(const GURL& url) {
  GetForwardingInterface()->Revoke(std::move(url));
}
void BlobURLStoreInterceptorForTesting::Resolve(const GURL& url, ResolveCallback callback) {
  GetForwardingInterface()->Resolve(std::move(url), std::move(callback));
}
void BlobURLStoreInterceptorForTesting::ResolveAsURLLoaderFactory(const GURL& url, ::network::mojom::URLLoaderFactoryRequest factory) {
  GetForwardingInterface()->ResolveAsURLLoaderFactory(std::move(url), std::move(factory));
}
void BlobURLStoreInterceptorForTesting::ResolveForNavigation(const GURL& url, BlobURLTokenRequest token) {
  GetForwardingInterface()->ResolveForNavigation(std::move(url), std::move(token));
}
BlobURLStoreAsyncWaiter::BlobURLStoreAsyncWaiter(
    BlobURLStore* proxy) : proxy_(proxy) {}

BlobURLStoreAsyncWaiter::~BlobURLStoreAsyncWaiter() = default;

void BlobURLStoreAsyncWaiter::Register(
    ::blink::mojom::BlobPtr blob, const GURL& url) {
  base::RunLoop loop;
  proxy_->Register(std::move(blob),std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void BlobURLStoreAsyncWaiter::Resolve(
    const GURL& url, ::blink::mojom::BlobPtr* out_blob) {
  base::RunLoop loop;
  proxy_->Resolve(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::BlobPtr* out_blob
,
             ::blink::mojom::BlobPtr blob) {*out_blob = std::move(blob);
            loop->Quit();
          },
          &loop,
          out_blob));
  loop.Run();
}



void BlobURLTokenInterceptorForTesting::Clone(BlobURLTokenRequest token) {
  GetForwardingInterface()->Clone(std::move(token));
}
void BlobURLTokenInterceptorForTesting::GetToken(GetTokenCallback callback) {
  GetForwardingInterface()->GetToken(std::move(callback));
}
BlobURLTokenAsyncWaiter::BlobURLTokenAsyncWaiter(
    BlobURLToken* proxy) : proxy_(proxy) {}

BlobURLTokenAsyncWaiter::~BlobURLTokenAsyncWaiter() = default;

void BlobURLTokenAsyncWaiter::GetToken(
    base::UnguessableToken* out_token) {
  base::RunLoop loop;
  proxy_->GetToken(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_token
,
             const base::UnguessableToken& token) {*out_token = std::move(token);
            loop->Quit();
          },
          &loop,
          out_token));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif