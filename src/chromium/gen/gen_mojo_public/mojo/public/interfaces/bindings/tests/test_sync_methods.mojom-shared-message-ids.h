// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_SHARED_MESSAGE_IDS_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace mojo {
namespace test {

namespace internal {


constexpr uint32_t kTestSyncCodeGeneration_NoInput_Name = 0;
constexpr uint32_t kTestSyncCodeGeneration_NoOutput_Name = 1;
constexpr uint32_t kTestSyncCodeGeneration_NoInOut_Name = 2;
constexpr uint32_t kTestSyncCodeGeneration_HaveInOut_Name = 3;
constexpr uint32_t kTestSync_Ping_Name = 0;
constexpr uint32_t kTestSync_Echo_Name = 1;
constexpr uint32_t kTestSync_AsyncEcho_Name = 2;
constexpr uint32_t kTestSyncMaster_Ping_Name = 0;
constexpr uint32_t kTestSyncMaster_Echo_Name = 1;
constexpr uint32_t kTestSyncMaster_AsyncEcho_Name = 2;
constexpr uint32_t kTestSyncMaster_SendRemote_Name = 3;
constexpr uint32_t kTestSyncMaster_SendReceiver_Name = 4;

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_SHARED_MESSAGE_IDS_H_