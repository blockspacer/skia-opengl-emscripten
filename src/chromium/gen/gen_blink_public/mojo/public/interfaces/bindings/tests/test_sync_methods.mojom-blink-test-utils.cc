// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_JUMBO_H_
#endif


namespace mojo {
namespace test {
namespace blink {


void TestSyncCodeGenerationInterceptorForTesting::NoInput(NoInputCallback callback) {
  GetForwardingInterface()->NoInput(std::move(callback));
}
void TestSyncCodeGenerationInterceptorForTesting::NoOutput(int32_t value, NoOutputCallback callback) {
  GetForwardingInterface()->NoOutput(std::move(value), std::move(callback));
}
void TestSyncCodeGenerationInterceptorForTesting::NoInOut(NoInOutCallback callback) {
  GetForwardingInterface()->NoInOut(std::move(callback));
}
void TestSyncCodeGenerationInterceptorForTesting::HaveInOut(int32_t value1, int32_t value2, HaveInOutCallback callback) {
  GetForwardingInterface()->HaveInOut(std::move(value1), std::move(value2), std::move(callback));
}
TestSyncCodeGenerationAsyncWaiter::TestSyncCodeGenerationAsyncWaiter(
    TestSyncCodeGeneration* proxy) : proxy_(proxy) {}

TestSyncCodeGenerationAsyncWaiter::~TestSyncCodeGenerationAsyncWaiter() = default;

void TestSyncCodeGenerationAsyncWaiter::NoInput(
    int32_t* out_result) {
  base::RunLoop loop;
  proxy_->NoInput(
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void TestSyncCodeGenerationAsyncWaiter::NoOutput(
    int32_t value) {
  base::RunLoop loop;
  proxy_->NoOutput(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void TestSyncCodeGenerationAsyncWaiter::NoInOut(
    ) {
  base::RunLoop loop;
  proxy_->NoInOut(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void TestSyncCodeGenerationAsyncWaiter::HaveInOut(
    int32_t value1, int32_t value2, int32_t* out_result1, int32_t* out_result2) {
  base::RunLoop loop;
  proxy_->HaveInOut(std::move(value1),std::move(value2),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result1
,
             int32_t* out_result2
,
             int32_t result1,
             int32_t result2) {*out_result1 = std::move(result1);*out_result2 = std::move(result2);
            loop->Quit();
          },
          &loop,
          out_result1,
          out_result2));
  loop.Run();
}



void TestSyncInterceptorForTesting::Ping(PingCallback callback) {
  GetForwardingInterface()->Ping(std::move(callback));
}
void TestSyncInterceptorForTesting::Echo(int32_t value, EchoCallback callback) {
  GetForwardingInterface()->Echo(std::move(value), std::move(callback));
}
void TestSyncInterceptorForTesting::AsyncEcho(int32_t value, AsyncEchoCallback callback) {
  GetForwardingInterface()->AsyncEcho(std::move(value), std::move(callback));
}
TestSyncAsyncWaiter::TestSyncAsyncWaiter(
    TestSync* proxy) : proxy_(proxy) {}

TestSyncAsyncWaiter::~TestSyncAsyncWaiter() = default;

void TestSyncAsyncWaiter::Ping(
    ) {
  base::RunLoop loop;
  proxy_->Ping(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void TestSyncAsyncWaiter::Echo(
    int32_t value, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->Echo(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void TestSyncAsyncWaiter::AsyncEcho(
    int32_t value, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->AsyncEcho(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void TestSyncMasterInterceptorForTesting::Ping(PingCallback callback) {
  GetForwardingInterface()->Ping(std::move(callback));
}
void TestSyncMasterInterceptorForTesting::Echo(int32_t value, EchoCallback callback) {
  GetForwardingInterface()->Echo(std::move(value), std::move(callback));
}
void TestSyncMasterInterceptorForTesting::AsyncEcho(int32_t value, AsyncEchoCallback callback) {
  GetForwardingInterface()->AsyncEcho(std::move(value), std::move(callback));
}
void TestSyncMasterInterceptorForTesting::SendRemote(mojo::PendingAssociatedRemote<TestSync> remote) {
  GetForwardingInterface()->SendRemote(std::move(remote));
}
void TestSyncMasterInterceptorForTesting::SendReceiver(mojo::PendingAssociatedReceiver<TestSync> receiver) {
  GetForwardingInterface()->SendReceiver(std::move(receiver));
}
TestSyncMasterAsyncWaiter::TestSyncMasterAsyncWaiter(
    TestSyncMaster* proxy) : proxy_(proxy) {}

TestSyncMasterAsyncWaiter::~TestSyncMasterAsyncWaiter() = default;

void TestSyncMasterAsyncWaiter::Ping(
    ) {
  base::RunLoop loop;
  proxy_->Ping(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void TestSyncMasterAsyncWaiter::Echo(
    int32_t value, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->Echo(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void TestSyncMasterAsyncWaiter::AsyncEcho(
    int32_t value, int32_t* out_result) {
  base::RunLoop loop;
  proxy_->AsyncEcho(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             int32_t result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace blink
}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif