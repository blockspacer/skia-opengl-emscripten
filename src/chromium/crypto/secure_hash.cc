// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "crypto/secure_hash.h"

#include <stddef.h>

#include "base/logging.h"
#include "base/memory/ptr_util.h"
#include "base/pickle.h"
#include "crypto/openssl_util.h"
#if defined(ENABLE_BORINGSSL)
#include "third_party/boringssl/src/include/openssl/mem.h"
#include "third_party/boringssl/src/include/openssl/sha.h"
#endif

namespace crypto {

namespace {

class SecureHashSHA256 : public SecureHash {
 public:
  SecureHashSHA256() {
#if defined(ENABLE_BORINGSSL)
    SHA256_Init(&ctx_);
#endif
  }

#if defined(ENABLE_BORINGSSL)
  SecureHashSHA256(const SecureHashSHA256& other) {
    memcpy(&ctx_, &other.ctx_, sizeof(ctx_));
  }

  ~SecureHashSHA256() override {
    OPENSSL_cleanse(&ctx_, sizeof(ctx_));
  }

  void Update(const void* input, size_t len) override {
    SHA256_Update(&ctx_, static_cast<const unsigned char*>(input), len);
  }
#endif

#if defined(ENABLE_BORINGSSL)
  void Finish(void* output, size_t len) override {
    ScopedOpenSSLSafeSizeBuffer<SHA256_DIGEST_LENGTH> result(
        static_cast<unsigned char*>(output), len);
    SHA256_Final(result.safe_buffer(), &ctx_);
  }
#endif

  std::unique_ptr<SecureHash> Clone() const override {
#if defined(ENABLE_BORINGSSL)
    return std::make_unique<SecureHashSHA256>(*this);
#else
  return nullptr;
#endif
  }

#if defined(ENABLE_BORINGSSL)
  size_t GetHashLength() const override { return SHA256_DIGEST_LENGTH; }
#endif

 private:
#if defined(ENABLE_BORINGSSL)
  SHA256_CTX ctx_;
#endif
};

}  // namespace

std::unique_ptr<SecureHash> SecureHash::Create(Algorithm algorithm) {
  switch (algorithm) {
    case SHA256:
      return std::make_unique<SecureHashSHA256>();
    default:
      NOTIMPLEMENTED();
      return nullptr;
  }
}

}  // namespace crypto
