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


#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void NativeFileSystemTransferTokenInterceptorForTesting::GetInternalID(GetInternalIDCallback callback) {
  GetForwardingInterface()->GetInternalID(std::move(callback));
}
NativeFileSystemTransferTokenAsyncWaiter::NativeFileSystemTransferTokenAsyncWaiter(
    NativeFileSystemTransferToken* proxy) : proxy_(proxy) {}

NativeFileSystemTransferTokenAsyncWaiter::~NativeFileSystemTransferTokenAsyncWaiter() = default;

void NativeFileSystemTransferTokenAsyncWaiter::GetInternalID(
    base::UnguessableToken* out_id) {
  base::RunLoop loop;
  proxy_->GetInternalID(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_id
,
             const base::UnguessableToken& id) {*out_id = std::move(id);
            loop->Quit();
          },
          &loop,
          out_id));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif