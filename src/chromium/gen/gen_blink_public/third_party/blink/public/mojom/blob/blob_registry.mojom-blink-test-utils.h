// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/blob/blob_registry.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ProgressClientInterceptorForTesting : public ProgressClient {
  virtual ProgressClient* GetForwardingInterface() = 0;
  void OnProgress(uint64_t delta) override;
};
class PLATFORM_EXPORT ProgressClientAsyncWaiter {
 public:
  explicit ProgressClientAsyncWaiter(ProgressClient* proxy);
  ~ProgressClientAsyncWaiter();

 private:
  ProgressClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProgressClientAsyncWaiter);
};


class PLATFORM_EXPORT BlobRegistryInterceptorForTesting : public BlobRegistry {
  virtual BlobRegistry* GetForwardingInterface() = 0;
  void Register(::blink::mojom::blink::BlobRequest blob, const WTF::String& uuid, const WTF::String& content_type, const WTF::String& content_disposition, WTF::Vector<::blink::mojom::blink::DataElementPtr> elements, RegisterCallback callback) override;
  void RegisterFromStream(const WTF::String& content_type, const WTF::String& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, RegisterFromStreamCallback callback) override;
  void GetBlobFromUUID(::blink::mojom::blink::BlobRequest blob, const WTF::String& uuid, GetBlobFromUUIDCallback callback) override;
  void URLStoreForOrigin(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::BlobURLStoreAssociatedRequest url_store) override;
};
class PLATFORM_EXPORT BlobRegistryAsyncWaiter {
 public:
  explicit BlobRegistryAsyncWaiter(BlobRegistry* proxy);
  ~BlobRegistryAsyncWaiter();
  void Register(
      ::blink::mojom::blink::BlobRequest blob, const WTF::String& uuid, const WTF::String& content_type, const WTF::String& content_disposition, WTF::Vector<::blink::mojom::blink::DataElementPtr> elements);
  void RegisterFromStream(
      const WTF::String& content_type, const WTF::String& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, scoped_refptr<::blink::BlobDataHandle>* out_blob);
  void GetBlobFromUUID(
      ::blink::mojom::blink::BlobRequest blob, const WTF::String& uuid);

 private:
  BlobRegistry* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobRegistryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_BLINK_TEST_UTILS_H_