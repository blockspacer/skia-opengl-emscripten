// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojo {
namespace test {

namespace internal {


constexpr uint32_t kSmallCache_SetIntValue_Name = 0;
constexpr uint32_t kSmallCache_GetIntValue_Name = 1;
constexpr uint32_t kUnionInterface_Echo_Name = 0;

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_SHARED_MESSAGE_IDS_H_