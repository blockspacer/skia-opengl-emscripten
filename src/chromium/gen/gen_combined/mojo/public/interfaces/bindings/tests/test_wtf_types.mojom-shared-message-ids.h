// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojo {
namespace test {

namespace internal {


// The 1497424759 value is based on sha256(salt + "TestWTF1").
constexpr uint32_t kTestWTF_EchoString_Name = 1497424759;
// The 1316256944 value is based on sha256(salt + "TestWTF2").
constexpr uint32_t kTestWTF_EchoStringArray_Name = 1316256944;
// The 1391018875 value is based on sha256(salt + "TestWTF3").
constexpr uint32_t kTestWTF_EchoStringMap_Name = 1391018875;

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_SHARED_MESSAGE_IDS_H_