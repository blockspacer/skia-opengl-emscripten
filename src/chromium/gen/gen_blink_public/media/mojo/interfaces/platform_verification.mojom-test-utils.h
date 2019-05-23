// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/platform_verification.mojom.h"


namespace media {
namespace mojom {


class  PlatformVerificationInterceptorForTesting : public PlatformVerification {
  virtual PlatformVerification* GetForwardingInterface() = 0;
  void ChallengePlatform(const std::string& service_id, const std::string& challenge, ChallengePlatformCallback callback) override;
  void GetStorageId(uint32_t version, GetStorageIdCallback callback) override;
};
class  PlatformVerificationAsyncWaiter {
 public:
  explicit PlatformVerificationAsyncWaiter(PlatformVerification* proxy);
  ~PlatformVerificationAsyncWaiter();
  void ChallengePlatform(
      const std::string& service_id, const std::string& challenge, bool* out_success, std::string* out_signed_data, std::string* out_signed_data_signature, std::string* out_platform_key_certificate);
  void GetStorageId(
      uint32_t version, uint32_t* out_version, std::vector<uint8_t>* out_storage_id);

 private:
  PlatformVerification* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PlatformVerificationAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_TEST_UTILS_H_