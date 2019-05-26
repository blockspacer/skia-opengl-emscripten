// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/blob/blob_registry.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ProgressClientInterceptorForTesting : public ProgressClient {
  virtual ProgressClient* GetForwardingInterface() = 0;
  void OnProgress(uint64_t delta) override;
};
class BLINK_COMMON_EXPORT ProgressClientAsyncWaiter {
 public:
  explicit ProgressClientAsyncWaiter(ProgressClient* proxy);
  ~ProgressClientAsyncWaiter();

 private:
  ProgressClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProgressClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT BlobRegistryInterceptorForTesting : public BlobRegistry {
  virtual BlobRegistry* GetForwardingInterface() = 0;
  void Register(::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements, RegisterCallback callback) override;
  void RegisterFromStream(const std::string& content_type, const std::string& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, RegisterFromStreamCallback callback) override;
  void GetBlobFromUUID(::blink::mojom::BlobRequest blob, const std::string& uuid, GetBlobFromUUIDCallback callback) override;
  void URLStoreForOrigin(const url::Origin& origin, ::blink::mojom::BlobURLStoreAssociatedRequest url_store) override;
};
class BLINK_COMMON_EXPORT BlobRegistryAsyncWaiter {
 public:
  explicit BlobRegistryAsyncWaiter(BlobRegistry* proxy);
  ~BlobRegistryAsyncWaiter();
  void Register(
      ::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements);
  void RegisterFromStream(
      const std::string& content_type, const std::string& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, ::blink::mojom::SerializedBlobPtr* out_blob);
  void GetBlobFromUUID(
      ::blink::mojom::BlobRequest blob, const std::string& uuid);

 private:
  BlobRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobRegistryAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_TEST_UTILS_H_