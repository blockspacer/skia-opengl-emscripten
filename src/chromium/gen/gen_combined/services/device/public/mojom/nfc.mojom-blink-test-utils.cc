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


#include "services/device/public/mojom/nfc.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_JUMBO_H_
#endif


namespace device {
namespace mojom {
namespace blink {


void NFCInterceptorForTesting::SetClient(NFCClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void NFCInterceptorForTesting::Push(NDEFMessagePtr message, NFCPushOptionsPtr options, PushCallback callback) {
  GetForwardingInterface()->Push(std::move(message), std::move(options), std::move(callback));
}
void NFCInterceptorForTesting::CancelPush(NFCPushTarget target, CancelPushCallback callback) {
  GetForwardingInterface()->CancelPush(std::move(target), std::move(callback));
}
void NFCInterceptorForTesting::Watch(NFCWatchOptionsPtr options, WatchCallback callback) {
  GetForwardingInterface()->Watch(std::move(options), std::move(callback));
}
void NFCInterceptorForTesting::CancelWatch(uint32_t id, CancelWatchCallback callback) {
  GetForwardingInterface()->CancelWatch(std::move(id), std::move(callback));
}
void NFCInterceptorForTesting::CancelAllWatches(CancelAllWatchesCallback callback) {
  GetForwardingInterface()->CancelAllWatches(std::move(callback));
}
void NFCInterceptorForTesting::SuspendNFCOperations() {
  GetForwardingInterface()->SuspendNFCOperations();
}
void NFCInterceptorForTesting::ResumeNFCOperations() {
  GetForwardingInterface()->ResumeNFCOperations();
}
NFCAsyncWaiter::NFCAsyncWaiter(
    NFC* proxy) : proxy_(proxy) {}

NFCAsyncWaiter::~NFCAsyncWaiter() = default;

void NFCAsyncWaiter::Push(
    NDEFMessagePtr message, NFCPushOptionsPtr options, NFCErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->Push(std::move(message),std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             NFCErrorPtr* out_error
,
             NFCErrorPtr error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void NFCAsyncWaiter::CancelPush(
    NFCPushTarget target, NFCErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->CancelPush(std::move(target),
      base::BindOnce(
          [](base::RunLoop* loop,
             NFCErrorPtr* out_error
,
             NFCErrorPtr error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void NFCAsyncWaiter::Watch(
    NFCWatchOptionsPtr options, uint32_t* out_id, NFCErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->Watch(std::move(options),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint32_t* out_id
,
             NFCErrorPtr* out_error
,
             uint32_t id,
             NFCErrorPtr error) {*out_id = std::move(id);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_id,
          out_error));
  loop.Run();
}
void NFCAsyncWaiter::CancelWatch(
    uint32_t id, NFCErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->CancelWatch(std::move(id),
      base::BindOnce(
          [](base::RunLoop* loop,
             NFCErrorPtr* out_error
,
             NFCErrorPtr error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void NFCAsyncWaiter::CancelAllWatches(
    NFCErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->CancelAllWatches(
      base::BindOnce(
          [](base::RunLoop* loop,
             NFCErrorPtr* out_error
,
             NFCErrorPtr error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}



void NFCClientInterceptorForTesting::OnWatch(const WTF::Vector<uint32_t>& watch_ids, NDEFMessagePtr message) {
  GetForwardingInterface()->OnWatch(std::move(watch_ids), std::move(message));
}
NFCClientAsyncWaiter::NFCClientAsyncWaiter(
    NFCClient* proxy) : proxy_(proxy) {}

NFCClientAsyncWaiter::~NFCClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif