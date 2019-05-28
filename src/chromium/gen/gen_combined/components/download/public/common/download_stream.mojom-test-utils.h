// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_TEST_UTILS_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_TEST_UTILS_H_

#include "components/download/public/common/download_stream.mojom.h"
#include "components/download/public/common/download_export.h"


namespace download {
namespace mojom {


class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamClientInterceptorForTesting : public DownloadStreamClient {
  virtual DownloadStreamClient* GetForwardingInterface() = 0;
  void OnStreamCompleted(NetworkRequestStatus status) override;
};
class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamClientAsyncWaiter {
 public:
  explicit DownloadStreamClientAsyncWaiter(DownloadStreamClient* proxy);
  ~DownloadStreamClientAsyncWaiter();

 private:
  DownloadStreamClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DownloadStreamClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace download

#endif  // COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_TEST_UTILS_H_