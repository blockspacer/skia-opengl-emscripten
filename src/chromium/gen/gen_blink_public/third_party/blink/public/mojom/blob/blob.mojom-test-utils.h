// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT BlobReaderClientInterceptorForTesting : public BlobReaderClient {
  virtual BlobReaderClient* GetForwardingInterface() = 0;
  void OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) override;
  void OnComplete(int32_t status, uint64_t data_length) override;
};
class BLINK_COMMON_EXPORT BlobReaderClientAsyncWaiter {
 public:
  explicit BlobReaderClientAsyncWaiter(BlobReaderClient* proxy);
  ~BlobReaderClientAsyncWaiter();

 private:
  BlobReaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobReaderClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT BlobInterceptorForTesting : public Blob {
  virtual Blob* GetForwardingInterface() = 0;
  void Clone(BlobRequest blob) override;
  void AsDataPipeGetter(::network::mojom::DataPipeGetterRequest data_pipe_getter) override;
  void ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) override;
  void ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) override;
  void ReadSideData(ReadSideDataCallback callback) override;
  void GetInternalUUID(GetInternalUUIDCallback callback) override;
};
class BLINK_COMMON_EXPORT BlobAsyncWaiter {
 public:
  explicit BlobAsyncWaiter(Blob* proxy);
  ~BlobAsyncWaiter();
  void ReadSideData(
      base::Optional<mojo_base::BigBuffer>* out_data);
  void GetInternalUUID(
      std::string* out_uuid);

 private:
  Blob* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(BlobAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_TEST_UTILS_H_