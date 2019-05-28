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


#include "components/download/public/common/download_stream.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_JUMBO_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_JUMBO_H_
#endif


namespace download {
namespace mojom {


void DownloadStreamClientInterceptorForTesting::OnStreamCompleted(NetworkRequestStatus status) {
  GetForwardingInterface()->OnStreamCompleted(std::move(status));
}
DownloadStreamClientAsyncWaiter::DownloadStreamClientAsyncWaiter(
    DownloadStreamClient* proxy) : proxy_(proxy) {}

DownloadStreamClientAsyncWaiter::~DownloadStreamClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace download

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif