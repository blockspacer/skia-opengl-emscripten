// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NAME_GENERATOR_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NAME_GENERATOR_MOJOM_BLINK_FORWARD_H_




#include "mojo/public/cpp/bindings/lib/buffer.h"




namespace sample {

enum class SupportedCases : int32_t;
}  // namespace sample
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct sample_internal_SupportedCases_DataHashFn;

template <>
struct DefaultHash<::sample::SupportedCases> {
  using Hash = sample_internal_SupportedCases_DataHashFn;
};
}  // namespace WTF


namespace sample {
namespace blink {
using SupportedCases = SupportedCases;  // Alias for definition in the parent namespace.

constexpr uint64_t PAD_RSA_PKCS1_1_5_SIGN = 1ULL;

constexpr uint64_t kDigestSha1 = 1ULL;

constexpr uint64_t kE2eIntegration = 1ULL;

constexpr uint64_t M3Test = 1ULL;

constexpr uint64_t URLLoaderFactory = 1ULL;

constexpr uint64_t Ipv6Address = 1ULL;

constexpr uint64_t Numb3r5InTH3Middl3 = 1ULL;

constexpr uint64_t Name_WITHUnderscore = 1ULL;

constexpr uint64_t SINGLETON = 1ULL;



}  // namespace blink
}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NAME_GENERATOR_MOJOM_BLINK_FORWARD_H_