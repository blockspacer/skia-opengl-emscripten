// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT DevToolsFrontendInterceptorForTesting : public DevToolsFrontend {
  virtual DevToolsFrontend* GetForwardingInterface() = 0;
  void SetupDevToolsFrontend(const WTF::String& api_script, DevToolsFrontendHostAssociatedPtrInfo host) override;
  void SetupDevToolsExtensionAPI(const WTF::String& extension_api) override;
};
class PLATFORM_EXPORT DevToolsFrontendAsyncWaiter {
 public:
  explicit DevToolsFrontendAsyncWaiter(DevToolsFrontend* proxy);
  ~DevToolsFrontendAsyncWaiter();

 private:
  DevToolsFrontend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsFrontendAsyncWaiter);
};


class PLATFORM_EXPORT DevToolsFrontendHostInterceptorForTesting : public DevToolsFrontendHost {
  virtual DevToolsFrontendHost* GetForwardingInterface() = 0;
  void DispatchEmbedderMessage(const WTF::String& message) override;
};
class PLATFORM_EXPORT DevToolsFrontendHostAsyncWaiter {
 public:
  explicit DevToolsFrontendHostAsyncWaiter(DevToolsFrontendHost* proxy);
  ~DevToolsFrontendHostAsyncWaiter();

 private:
  DevToolsFrontendHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DevToolsFrontendHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_BLINK_TEST_UTILS_H_