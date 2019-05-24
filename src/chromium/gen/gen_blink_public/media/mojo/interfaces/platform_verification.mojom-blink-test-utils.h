// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/platform_verification.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT PlatformVerificationInterceptorForTesting : public PlatformVerification {
  virtual PlatformVerification* GetForwardingInterface() = 0;
  void ChallengePlatform(const WTF::String& service_id, const WTF::String& challenge, ChallengePlatformCallback callback) override;
  void GetStorageId(uint32_t version, GetStorageIdCallback callback) override;
};
class BLINK_PLATFORM_EXPORT PlatformVerificationAsyncWaiter {
 public:
  explicit PlatformVerificationAsyncWaiter(PlatformVerification* proxy);
  ~PlatformVerificationAsyncWaiter();
  void ChallengePlatform(
      const WTF::String& service_id, const WTF::String& challenge, bool* out_success, WTF::String* out_signed_data, WTF::String* out_signed_data_signature, WTF::String* out_platform_key_certificate);
  void GetStorageId(
      uint32_t version, uint32_t* out_version, WTF::Vector<uint8_t>* out_storage_id);

 private:
  PlatformVerification* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PlatformVerificationAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_TEST_UTILS_H_