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


#include "third_party/blink/public/mojom/blob/blob_registry.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom.h"
#include "third_party/blink/public/mojom/blob/data_element.mojom.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void ProgressClientInterceptorForTesting::OnProgress(uint64_t delta) {
  GetForwardingInterface()->OnProgress(std::move(delta));
}
ProgressClientAsyncWaiter::ProgressClientAsyncWaiter(
    ProgressClient* proxy) : proxy_(proxy) {}

ProgressClientAsyncWaiter::~ProgressClientAsyncWaiter() = default;




void BlobRegistryInterceptorForTesting::Register(::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements, RegisterCallback callback) {
  GetForwardingInterface()->Register(std::move(blob), std::move(uuid), std::move(content_type), std::move(content_disposition), std::move(elements), std::move(callback));
}
void BlobRegistryInterceptorForTesting::RegisterFromStream(const std::string& content_type, const std::string& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, RegisterFromStreamCallback callback) {
  GetForwardingInterface()->RegisterFromStream(std::move(content_type), std::move(content_disposition), std::move(length_hint), std::move(data), std::move(progress_client), std::move(callback));
}
void BlobRegistryInterceptorForTesting::GetBlobFromUUID(::blink::mojom::BlobRequest blob, const std::string& uuid, GetBlobFromUUIDCallback callback) {
  GetForwardingInterface()->GetBlobFromUUID(std::move(blob), std::move(uuid), std::move(callback));
}
void BlobRegistryInterceptorForTesting::URLStoreForOrigin(const url::Origin& origin, ::blink::mojom::BlobURLStoreAssociatedRequest url_store) {
  GetForwardingInterface()->URLStoreForOrigin(std::move(origin), std::move(url_store));
}
BlobRegistryAsyncWaiter::BlobRegistryAsyncWaiter(
    BlobRegistry* proxy) : proxy_(proxy) {}

BlobRegistryAsyncWaiter::~BlobRegistryAsyncWaiter() = default;

void BlobRegistryAsyncWaiter::Register(
    ::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements) {
  base::RunLoop loop;
  proxy_->Register(std::move(blob),std::move(uuid),std::move(content_type),std::move(content_disposition),std::move(elements),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void BlobRegistryAsyncWaiter::RegisterFromStream(
    const std::string& content_type, const std::string& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, ::blink::mojom::SerializedBlobPtr* out_blob) {
  base::RunLoop loop;
  proxy_->RegisterFromStream(std::move(content_type),std::move(content_disposition),std::move(length_hint),std::move(data),std::move(progress_client),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::SerializedBlobPtr* out_blob
,
             ::blink::mojom::SerializedBlobPtr blob) {*out_blob = std::move(blob);
            loop->Quit();
          },
          &loop,
          out_blob));
  loop.Run();
}
void BlobRegistryAsyncWaiter::GetBlobFromUUID(
    ::blink::mojom::BlobRequest blob, const std::string& uuid) {
  base::RunLoop loop;
  proxy_->GetBlobFromUUID(std::move(blob),std::move(uuid),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif