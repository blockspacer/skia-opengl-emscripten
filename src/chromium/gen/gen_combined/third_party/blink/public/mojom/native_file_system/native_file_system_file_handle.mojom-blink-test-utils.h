// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT NativeFileSystemFileHandleInterceptorForTesting : public NativeFileSystemFileHandle {
  virtual NativeFileSystemFileHandle* GetForwardingInterface() = 0;
  void AsBlob(AsBlobCallback callback) override;
  void Remove(RemoveCallback callback) override;
  void Write(uint64_t offset, ::blink::mojom::blink::BlobPtr data, WriteCallback callback) override;
  void WriteStream(uint64_t offset, mojo::ScopedDataPipeConsumerHandle stream, WriteStreamCallback callback) override;
  void Truncate(uint64_t length, TruncateCallback callback) override;
  void Transfer(::blink::mojom::blink::NativeFileSystemTransferTokenRequest token) override;
};
class PLATFORM_EXPORT NativeFileSystemFileHandleAsyncWaiter {
 public:
  explicit NativeFileSystemFileHandleAsyncWaiter(NativeFileSystemFileHandle* proxy);
  ~NativeFileSystemFileHandleAsyncWaiter();
  void AsBlob(
      ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, scoped_refptr<::blink::BlobDataHandle>* out_blob);
  void Remove(
      ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result);
  void Write(
      uint64_t offset, ::blink::mojom::blink::BlobPtr data, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, uint64_t* out_bytes_written);
  void WriteStream(
      uint64_t offset, mojo::ScopedDataPipeConsumerHandle stream, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, uint64_t* out_bytes_written);
  void Truncate(
      uint64_t length, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result);

 private:
  NativeFileSystemFileHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemFileHandleAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_TEST_UTILS_H_