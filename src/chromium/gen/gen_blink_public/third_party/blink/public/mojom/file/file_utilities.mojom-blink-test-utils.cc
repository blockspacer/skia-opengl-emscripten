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


#include "third_party/blink/public/mojom/file/file_utilities.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/file_info.mojom-blink.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_info_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void FileUtilitiesHostInterceptorForTesting::GetFileInfo(const base::FilePath& path, GetFileInfoCallback callback) {
  GetForwardingInterface()->GetFileInfo(std::move(path), std::move(callback));
}
FileUtilitiesHostAsyncWaiter::FileUtilitiesHostAsyncWaiter(
    FileUtilitiesHost* proxy) : proxy_(proxy) {}

FileUtilitiesHostAsyncWaiter::~FileUtilitiesHostAsyncWaiter() = default;

void FileUtilitiesHostAsyncWaiter::GetFileInfo(
    const base::FilePath& path, base::Optional<base::File::Info>* out_result) {
  base::RunLoop loop;
  proxy_->GetFileInfo(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<base::File::Info>* out_result
,
             const base::Optional<base::File::Info>& result) {*out_result = std::move(result);
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