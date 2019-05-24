// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLATION_INSTALLATION_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLATION_INSTALLATION_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/installation/installation.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT InstallationServiceInterceptorForTesting : public InstallationService {
  virtual InstallationService* GetForwardingInterface() = 0;
  void OnInstall() override;
};
class PLATFORM_EXPORT InstallationServiceAsyncWaiter {
 public:
  explicit InstallationServiceAsyncWaiter(InstallationService* proxy);
  ~InstallationServiceAsyncWaiter();

 private:
  InstallationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(InstallationServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLATION_INSTALLATION_MOJOM_BLINK_TEST_UTILS_H_