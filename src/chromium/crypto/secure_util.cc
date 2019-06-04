// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "crypto/secure_util.h"

#if defined(ENABLE_BORINGSSL)
#include "third_party/boringssl/src/include/openssl/mem.h"
#else
#include <cstring>
#endif

namespace crypto {

bool SecureMemEqual(const void* s1, const void* s2, size_t n) {
#if defined(ENABLE_BORINGSSL)
  return CRYPTO_memcmp(s1, s2, n) == 0;
#else
  return memcmp(s1, s2, n) == 0;
#endif
}

}  // namespace crypto

