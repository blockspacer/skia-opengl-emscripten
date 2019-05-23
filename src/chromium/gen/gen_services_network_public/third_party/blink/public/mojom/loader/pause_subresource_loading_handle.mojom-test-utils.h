// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PAUSE_SUBRESOURCE_LOADING_HANDLE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PAUSE_SUBRESOURCE_LOADING_HANDLE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/loader/pause_subresource_loading_handle.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT PauseSubresourceLoadingHandleInterceptorForTesting : public PauseSubresourceLoadingHandle {
  virtual PauseSubresourceLoadingHandle* GetForwardingInterface() = 0;
};
class BLINK_COMMON_EXPORT PauseSubresourceLoadingHandleAsyncWaiter {
 public:
  explicit PauseSubresourceLoadingHandleAsyncWaiter(PauseSubresourceLoadingHandle* proxy);
  ~PauseSubresourceLoadingHandleAsyncWaiter();

 private:
  PauseSubresourceLoadingHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PauseSubresourceLoadingHandleAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PAUSE_SUBRESOURCE_LOADING_HANDLE_MOJOM_TEST_UTILS_H_