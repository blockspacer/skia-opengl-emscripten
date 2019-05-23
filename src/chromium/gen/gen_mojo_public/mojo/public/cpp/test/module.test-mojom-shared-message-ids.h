// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace test_module {

namespace internal {


// The 984490 value is based on sha256(salt + "Interface1").
constexpr uint32_t kInterface_DoSomething_Name = 984490;
// The 1698684052 value is based on sha256(salt + "Interface2").
constexpr uint32_t kInterface_DoSomethingElse_Name = 1698684052;

}  // namespace internal
}  // namespace test_module

#endif  // MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_SHARED_MESSAGE_IDS_H_