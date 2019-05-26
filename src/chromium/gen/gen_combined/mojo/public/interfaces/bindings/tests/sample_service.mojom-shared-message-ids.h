// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace sample {

namespace internal {


constexpr uint32_t kService_Frobinate_Name = 0;
constexpr uint32_t kService_GetPort_Name = 1;
constexpr uint32_t kPort_PostMessageToPort_Name = 0;

}  // namespace internal
}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_