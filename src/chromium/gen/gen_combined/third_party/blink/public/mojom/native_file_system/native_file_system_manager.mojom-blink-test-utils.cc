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


#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void NativeFileSystemManagerInterceptorForTesting::GetSandboxedFileSystem(GetSandboxedFileSystemCallback callback) {
  GetForwardingInterface()->GetSandboxedFileSystem(std::move(callback));
}
void NativeFileSystemManagerInterceptorForTesting::ChooseEntries(ChooseFileSystemEntryType type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> accepts, bool include_accepts_all, ChooseEntriesCallback callback) {
  GetForwardingInterface()->ChooseEntries(std::move(type), std::move(accepts), std::move(include_accepts_all), std::move(callback));
}
NativeFileSystemManagerAsyncWaiter::NativeFileSystemManagerAsyncWaiter(
    NativeFileSystemManager* proxy) : proxy_(proxy) {}

NativeFileSystemManagerAsyncWaiter::~NativeFileSystemManagerAsyncWaiter() = default;

void NativeFileSystemManagerAsyncWaiter::GetSandboxedFileSystem(
    ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr* out_directory) {
  base::RunLoop loop;
  proxy_->GetSandboxedFileSystem(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result
,
             ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr* out_directory
,
             ::blink::mojom::blink::NativeFileSystemErrorPtr result,
             ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr directory) {*out_result = std::move(result);*out_directory = std::move(directory);
            loop->Quit();
          },
          &loop,
          out_result,
          out_directory));
  loop.Run();
}
void NativeFileSystemManagerAsyncWaiter::ChooseEntries(
    ChooseFileSystemEntryType type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> accepts, bool include_accepts_all, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr>* out_entries) {
  base::RunLoop loop;
  proxy_->ChooseEntries(std::move(type),std::move(accepts),std::move(include_accepts_all),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result
,
             WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr>* out_entries
,
             ::blink::mojom::blink::NativeFileSystemErrorPtr result,
             WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr> entries) {*out_result = std::move(result);*out_entries = std::move(entries);
            loop->Quit();
          },
          &loop,
          out_result,
          out_entries));
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