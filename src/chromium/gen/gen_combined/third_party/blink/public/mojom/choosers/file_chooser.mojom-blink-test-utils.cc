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


#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void FileChooserInterceptorForTesting::OpenFileChooser(FileChooserParamsPtr params, OpenFileChooserCallback callback) {
  GetForwardingInterface()->OpenFileChooser(std::move(params), std::move(callback));
}
void FileChooserInterceptorForTesting::EnumerateChosenDirectory(const base::FilePath& directory_path, EnumerateChosenDirectoryCallback callback) {
  GetForwardingInterface()->EnumerateChosenDirectory(std::move(directory_path), std::move(callback));
}
FileChooserAsyncWaiter::FileChooserAsyncWaiter(
    FileChooser* proxy) : proxy_(proxy) {}

FileChooserAsyncWaiter::~FileChooserAsyncWaiter() = default;

void FileChooserAsyncWaiter::OpenFileChooser(
    FileChooserParamsPtr params, FileChooserResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->OpenFileChooser(std::move(params),
      base::BindOnce(
          [](base::RunLoop* loop,
             FileChooserResultPtr* out_result
,
             FileChooserResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void FileChooserAsyncWaiter::EnumerateChosenDirectory(
    const base::FilePath& directory_path, FileChooserResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->EnumerateChosenDirectory(std::move(directory_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             FileChooserResultPtr* out_result
,
             FileChooserResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
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