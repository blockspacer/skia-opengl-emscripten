// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/cdm_proxy.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT CdmProxyInterceptorForTesting : public CdmProxy {
  virtual CdmProxy* GetForwardingInterface() = 0;
  void Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) override;
  void Process(CdmProxy::Function function, uint32_t crypto_session_id, const WTF::Vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) override;
  void CreateMediaCryptoSession(const WTF::Vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) override;
  void SetKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, CdmProxy::KeyType key_type, const WTF::Vector<uint8_t>& key_blob, SetKeyCallback callback) override;
  void RemoveKey(uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, RemoveKeyCallback callback) override;
};
class BLINK_PLATFORM_EXPORT CdmProxyAsyncWaiter {
 public:
  explicit CdmProxyAsyncWaiter(CdmProxy* proxy);
  ~CdmProxyAsyncWaiter();
  void Initialize(
      CdmProxyClientAssociatedPtrInfo client, CdmProxy::Status* out_status, CdmProxy::Protocol* out_protocol, uint32_t* out_crypto_session_id, int32_t* out_cdm_id);
  void Process(
      CdmProxy::Function function, uint32_t crypto_session_id, const WTF::Vector<uint8_t>& input_data, uint32_t output_data_size, CdmProxy::Status* out_status, WTF::Vector<uint8_t>* out_output_data);
  void CreateMediaCryptoSession(
      const WTF::Vector<uint8_t>& input_data, CdmProxy::Status* out_status, uint32_t* out_crypto_session_id, uint64_t* out_output_data);
  void SetKey(
      uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, CdmProxy::KeyType key_type, const WTF::Vector<uint8_t>& key_blob, CdmProxy::Status* out_status);
  void RemoveKey(
      uint32_t crypto_session_id, const WTF::Vector<uint8_t>& key_id, CdmProxy::Status* out_status);

 private:
  CdmProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxyAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT CdmProxyClientInterceptorForTesting : public CdmProxyClient {
  virtual CdmProxyClient* GetForwardingInterface() = 0;
  void NotifyHardwareReset() override;
};
class BLINK_PLATFORM_EXPORT CdmProxyClientAsyncWaiter {
 public:
  explicit CdmProxyClientAsyncWaiter(CdmProxyClient* proxy);
  ~CdmProxyClientAsyncWaiter();

 private:
  CdmProxyClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmProxyClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_BLINK_TEST_UTILS_H_