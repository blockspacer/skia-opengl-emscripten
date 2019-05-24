// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_TEST_UTILS_H_

#include "services/device/public/mojom/nfc.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace device {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT NFCInterceptorForTesting : public NFC {
  virtual NFC* GetForwardingInterface() = 0;
  void SetClient(NFCClientPtr client) override;
  void Push(NDEFMessagePtr message, NFCPushOptionsPtr options, PushCallback callback) override;
  void CancelPush(NFCPushTarget target, CancelPushCallback callback) override;
  void Watch(NFCWatchOptionsPtr options, WatchCallback callback) override;
  void CancelWatch(uint32_t id, CancelWatchCallback callback) override;
  void CancelAllWatches(CancelAllWatchesCallback callback) override;
  void SuspendNFCOperations() override;
  void ResumeNFCOperations() override;
};
class BLINK_PLATFORM_EXPORT NFCAsyncWaiter {
 public:
  explicit NFCAsyncWaiter(NFC* proxy);
  ~NFCAsyncWaiter();
  void Push(
      NDEFMessagePtr message, NFCPushOptionsPtr options, NFCErrorPtr* out_error);
  void CancelPush(
      NFCPushTarget target, NFCErrorPtr* out_error);
  void Watch(
      NFCWatchOptionsPtr options, uint32_t* out_id, NFCErrorPtr* out_error);
  void CancelWatch(
      uint32_t id, NFCErrorPtr* out_error);
  void CancelAllWatches(
      NFCErrorPtr* out_error);

 private:
  NFC* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NFCAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT NFCClientInterceptorForTesting : public NFCClient {
  virtual NFCClient* GetForwardingInterface() = 0;
  void OnWatch(const WTF::Vector<uint32_t>& watch_ids, NDEFMessagePtr message) override;
};
class BLINK_PLATFORM_EXPORT NFCClientAsyncWaiter {
 public:
  explicit NFCClientAsyncWaiter(NFCClient* proxy);
  ~NFCClientAsyncWaiter();

 private:
  NFCClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NFCClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_BLINK_TEST_UTILS_H_