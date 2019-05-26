// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT NativeFileSystemTransferTokenInterceptorForTesting : public NativeFileSystemTransferToken {
  virtual NativeFileSystemTransferToken* GetForwardingInterface() = 0;
  void GetInternalID(GetInternalIDCallback callback) override;
};
class BLINK_COMMON_EXPORT NativeFileSystemTransferTokenAsyncWaiter {
 public:
  explicit NativeFileSystemTransferTokenAsyncWaiter(NativeFileSystemTransferToken* proxy);
  ~NativeFileSystemTransferTokenAsyncWaiter();
  void GetInternalID(
      base::UnguessableToken* out_id);

 private:
  NativeFileSystemTransferToken* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemTransferTokenAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_TEST_UTILS_H_