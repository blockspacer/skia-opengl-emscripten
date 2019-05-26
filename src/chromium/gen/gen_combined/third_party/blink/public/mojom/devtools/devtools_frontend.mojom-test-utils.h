// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT DevToolsFrontendInterceptorForTesting : public DevToolsFrontend {
  virtual DevToolsFrontend* GetForwardingInterface() = 0;
  void SetupDevToolsFrontend(const std::string& api_script, DevToolsFrontendHostAssociatedPtrInfo host) override;
  void SetupDevToolsExtensionAPI(const std::string& extension_api) override;
};
class BLINK_COMMON_EXPORT DevToolsFrontendAsyncWaiter {
 public:
  explicit DevToolsFrontendAsyncWaiter(DevToolsFrontend* proxy);
  ~DevToolsFrontendAsyncWaiter();

 private:
  DevToolsFrontend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsFrontendAsyncWaiter);
};


class BLINK_COMMON_EXPORT DevToolsFrontendHostInterceptorForTesting : public DevToolsFrontendHost {
  virtual DevToolsFrontendHost* GetForwardingInterface() = 0;
  void DispatchEmbedderMessage(const std::string& message) override;
};
class BLINK_COMMON_EXPORT DevToolsFrontendHostAsyncWaiter {
 public:
  explicit DevToolsFrontendHostAsyncWaiter(DevToolsFrontendHost* proxy);
  ~DevToolsFrontendHostAsyncWaiter();

 private:
  DevToolsFrontendHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsFrontendHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_TEST_UTILS_H_