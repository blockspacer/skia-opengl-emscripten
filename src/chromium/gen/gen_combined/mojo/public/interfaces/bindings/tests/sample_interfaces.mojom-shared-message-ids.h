// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace sample {

namespace internal {


constexpr uint32_t kPingTest_Ping_Name = 0;
constexpr uint32_t kProvider_EchoString_Name = 0;
constexpr uint32_t kProvider_EchoStrings_Name = 1;
constexpr uint32_t kProvider_EchoMessagePipeHandle_Name = 2;
constexpr uint32_t kProvider_EchoEnum_Name = 3;
constexpr uint32_t kProvider_EchoInt_Name = 4;
constexpr uint32_t kIntegerAccessor_GetInteger_Name = 0;
constexpr uint32_t kIntegerAccessor_SetInteger_Name = 1;

}  // namespace internal
}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_SHARED_MESSAGE_IDS_H_