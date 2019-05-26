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


#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void BlobURLStoreInterceptorForTesting::Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(blob), std::move(url), std::move(callback));
}
void BlobURLStoreInterceptorForTesting::Revoke(const ::blink::KURL& url) {
  GetForwardingInterface()->Revoke(std::move(url));
}
void BlobURLStoreInterceptorForTesting::Resolve(const ::blink::KURL& url, ResolveCallback callback) {
  GetForwardingInterface()->Resolve(std::move(url), std::move(callback));
}
void BlobURLStoreInterceptorForTesting::ResolveAsURLLoaderFactory(const ::blink::KURL& url, ::network::mojom::blink::URLLoaderFactoryRequest factory) {
  GetForwardingInterface()->ResolveAsURLLoaderFactory(std::move(url), std::move(factory));
}
void BlobURLStoreInterceptorForTesting::ResolveForNavigation(const ::blink::KURL& url, BlobURLTokenRequest token) {
  GetForwardingInterface()->ResolveForNavigation(std::move(url), std::move(token));
}
BlobURLStoreAsyncWaiter::BlobURLStoreAsyncWaiter(
    BlobURLStore* proxy) : proxy_(proxy) {}

BlobURLStoreAsyncWaiter::~BlobURLStoreAsyncWaiter() = default;

void BlobURLStoreAsyncWaiter::Register(
    ::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url) {
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
    const ::blink::KURL& url, ::blink::mojom::blink::BlobPtr* out_blob) {
  base::RunLoop loop;
  proxy_->Resolve(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::BlobPtr* out_blob
,
             ::blink::mojom::blink::BlobPtr blob) {*out_blob = std::move(blob);
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





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif