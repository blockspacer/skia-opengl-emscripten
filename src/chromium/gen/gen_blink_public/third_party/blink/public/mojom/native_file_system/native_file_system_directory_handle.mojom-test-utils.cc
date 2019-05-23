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


#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void NativeFileSystemDirectoryHandleInterceptorForTesting::GetFile(const std::string& name, bool create, GetFileCallback callback) {
  GetForwardingInterface()->GetFile(std::move(name), std::move(create), std::move(callback));
}
void NativeFileSystemDirectoryHandleInterceptorForTesting::GetDirectory(const std::string& name, bool create, GetDirectoryCallback callback) {
  GetForwardingInterface()->GetDirectory(std::move(name), std::move(create), std::move(callback));
}
void NativeFileSystemDirectoryHandleInterceptorForTesting::GetEntries(GetEntriesCallback callback) {
  GetForwardingInterface()->GetEntries(std::move(callback));
}
void NativeFileSystemDirectoryHandleInterceptorForTesting::MoveFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, MoveFromCallback callback) {
  GetForwardingInterface()->MoveFrom(std::move(source), std::move(name), std::move(callback));
}
void NativeFileSystemDirectoryHandleInterceptorForTesting::CopyFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, CopyFromCallback callback) {
  GetForwardingInterface()->CopyFrom(std::move(source), std::move(name), std::move(callback));
}
void NativeFileSystemDirectoryHandleInterceptorForTesting::Remove(bool recurse, RemoveCallback callback) {
  GetForwardingInterface()->Remove(std::move(recurse), std::move(callback));
}
void NativeFileSystemDirectoryHandleInterceptorForTesting::Transfer(::blink::mojom::NativeFileSystemTransferTokenRequest token) {
  GetForwardingInterface()->Transfer(std::move(token));
}
NativeFileSystemDirectoryHandleAsyncWaiter::NativeFileSystemDirectoryHandleAsyncWaiter(
    NativeFileSystemDirectoryHandle* proxy) : proxy_(proxy) {}

NativeFileSystemDirectoryHandleAsyncWaiter::~NativeFileSystemDirectoryHandleAsyncWaiter() = default;

void NativeFileSystemDirectoryHandleAsyncWaiter::GetFile(
    const std::string& name, bool create, ::blink::mojom::NativeFileSystemErrorPtr* out_result, ::blink::mojom::NativeFileSystemFileHandlePtr* out_file) {
  base::RunLoop loop;
  proxy_->GetFile(std::move(name),std::move(create),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::NativeFileSystemErrorPtr* out_result
,
             ::blink::mojom::NativeFileSystemFileHandlePtr* out_file
,
             ::blink::mojom::NativeFileSystemErrorPtr result,
             ::blink::mojom::NativeFileSystemFileHandlePtr file) {*out_result = std::move(result);*out_file = std::move(file);
            loop->Quit();
          },
          &loop,
          out_result,
          out_file));
  loop.Run();
}
void NativeFileSystemDirectoryHandleAsyncWaiter::GetDirectory(
    const std::string& name, bool create, ::blink::mojom::NativeFileSystemErrorPtr* out_result, NativeFileSystemDirectoryHandlePtr* out_directory) {
  base::RunLoop loop;
  proxy_->GetDirectory(std::move(name),std::move(create),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::NativeFileSystemErrorPtr* out_result
,
             NativeFileSystemDirectoryHandlePtr* out_directory
,
             ::blink::mojom::NativeFileSystemErrorPtr result,
             NativeFileSystemDirectoryHandlePtr directory) {*out_result = std::move(result);*out_directory = std::move(directory);
            loop->Quit();
          },
          &loop,
          out_result,
          out_directory));
  loop.Run();
}
void NativeFileSystemDirectoryHandleAsyncWaiter::GetEntries(
    ::blink::mojom::NativeFileSystemErrorPtr* out_result, std::vector<NativeFileSystemEntryPtr>* out_entries) {
  base::RunLoop loop;
  proxy_->GetEntries(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::NativeFileSystemErrorPtr* out_result
,
             std::vector<NativeFileSystemEntryPtr>* out_entries
,
             ::blink::mojom::NativeFileSystemErrorPtr result,
             std::vector<NativeFileSystemEntryPtr> entries) {*out_result = std::move(result);*out_entries = std::move(entries);
            loop->Quit();
          },
          &loop,
          out_result,
          out_entries));
  loop.Run();
}
void NativeFileSystemDirectoryHandleAsyncWaiter::MoveFrom(
    ::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, ::blink::mojom::NativeFileSystemErrorPtr* out_result, NativeFileSystemEntryPtr* out_entry) {
  base::RunLoop loop;
  proxy_->MoveFrom(std::move(source),std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::NativeFileSystemErrorPtr* out_result
,
             NativeFileSystemEntryPtr* out_entry
,
             ::blink::mojom::NativeFileSystemErrorPtr result,
             NativeFileSystemEntryPtr entry) {*out_result = std::move(result);*out_entry = std::move(entry);
            loop->Quit();
          },
          &loop,
          out_result,
          out_entry));
  loop.Run();
}
void NativeFileSystemDirectoryHandleAsyncWaiter::CopyFrom(
    ::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, ::blink::mojom::NativeFileSystemErrorPtr* out_result, NativeFileSystemEntryPtr* out_entry) {
  base::RunLoop loop;
  proxy_->CopyFrom(std::move(source),std::move(name),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::NativeFileSystemErrorPtr* out_result
,
             NativeFileSystemEntryPtr* out_entry
,
             ::blink::mojom::NativeFileSystemErrorPtr result,
             NativeFileSystemEntryPtr entry) {*out_result = std::move(result);*out_entry = std::move(entry);
            loop->Quit();
          },
          &loop,
          out_result,
          out_entry));
  loop.Run();
}
void NativeFileSystemDirectoryHandleAsyncWaiter::Remove(
    bool recurse, ::blink::mojom::NativeFileSystemErrorPtr* out_result) {
  base::RunLoop loop;
  proxy_->Remove(std::move(recurse),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::NativeFileSystemErrorPtr* out_result
,
             ::blink::mojom::NativeFileSystemErrorPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif