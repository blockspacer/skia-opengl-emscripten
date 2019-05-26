// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/key_system_support.mojom.h"


namespace media {
namespace mojom {


class  KeySystemSupportInterceptorForTesting : public KeySystemSupport {
  virtual KeySystemSupport* GetForwardingInterface() = 0;
  void IsKeySystemSupported(const std::string& key_system, IsKeySystemSupportedCallback callback) override;
};
class  KeySystemSupportAsyncWaiter {
 public:
  explicit KeySystemSupportAsyncWaiter(KeySystemSupport* proxy);
  ~KeySystemSupportAsyncWaiter();
  void IsKeySystemSupported(
      const std::string& key_system, bool* out_is_supported, KeySystemCapabilityPtr* out_key_system_capability);

 private:
  KeySystemSupport* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(KeySystemSupportAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_TEST_UTILS_H_