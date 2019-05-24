// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/content_decryption_module.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ContentDecryptionModuleInterceptorForTesting : public ContentDecryptionModule {
  virtual ContentDecryptionModule* GetForwardingInterface() = 0;
  void SetClient(ContentDecryptionModuleClientAssociatedPtrInfo client) override;
  void Initialize(const WTF::String& key_system, const scoped_refptr<const ::blink::SecurityOrigin>& security_origin, CdmConfigPtr cdm_config, InitializeCallback callback) override;
  void SetServerCertificate(const WTF::Vector<uint8_t>& certificate_data, SetServerCertificateCallback callback) override;
  void GetStatusForPolicy(HdcpVersion min_hdcp_version, GetStatusForPolicyCallback callback) override;
  void CreateSessionAndGenerateRequest(CdmSessionType session_type, EmeInitDataType init_data_type, const WTF::Vector<uint8_t>& init_data, CreateSessionAndGenerateRequestCallback callback) override;
  void LoadSession(CdmSessionType session_type, const WTF::String& session_id, LoadSessionCallback callback) override;
  void UpdateSession(const WTF::String& session_id, const WTF::Vector<uint8_t>& response, UpdateSessionCallback callback) override;
  void CloseSession(const WTF::String& session_id, CloseSessionCallback callback) override;
  void RemoveSession(const WTF::String& session_id, RemoveSessionCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ContentDecryptionModuleAsyncWaiter {
 public:
  explicit ContentDecryptionModuleAsyncWaiter(ContentDecryptionModule* proxy);
  ~ContentDecryptionModuleAsyncWaiter();
  void Initialize(
      const WTF::String& key_system, const scoped_refptr<const ::blink::SecurityOrigin>& security_origin, CdmConfigPtr cdm_config, CdmPromiseResultPtr* out_result, int32_t* out_cdm_id, ::media::mojom::blink::DecryptorPtr* out_decryptor);
  void SetServerCertificate(
      const WTF::Vector<uint8_t>& certificate_data, CdmPromiseResultPtr* out_result);
  void GetStatusForPolicy(
      HdcpVersion min_hdcp_version, CdmPromiseResultPtr* out_result, CdmKeyStatus* out_key_status);
  void CreateSessionAndGenerateRequest(
      CdmSessionType session_type, EmeInitDataType init_data_type, const WTF::Vector<uint8_t>& init_data, CdmPromiseResultPtr* out_result, WTF::String* out_session_id);
  void LoadSession(
      CdmSessionType session_type, const WTF::String& session_id, CdmPromiseResultPtr* out_result, WTF::String* out_session_id);
  void UpdateSession(
      const WTF::String& session_id, const WTF::Vector<uint8_t>& response, CdmPromiseResultPtr* out_result);
  void CloseSession(
      const WTF::String& session_id, CdmPromiseResultPtr* out_result);
  void RemoveSession(
      const WTF::String& session_id, CdmPromiseResultPtr* out_result);

 private:
  ContentDecryptionModule* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModuleAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ContentDecryptionModuleClientInterceptorForTesting : public ContentDecryptionModuleClient {
  virtual ContentDecryptionModuleClient* GetForwardingInterface() = 0;
  void OnSessionMessage(const WTF::String& session_id, CdmMessageType message_type, const WTF::Vector<uint8_t>& message) override;
  void OnSessionClosed(const WTF::String& session_id) override;
  void OnSessionKeysChange(const WTF::String& session_id, bool has_additional_usable_key, WTF::Vector<CdmKeyInformationPtr> keys_info) override;
  void OnSessionExpirationUpdate(const WTF::String& session_id, double new_expiry_time_sec) override;
};
class BLINK_PLATFORM_EXPORT ContentDecryptionModuleClientAsyncWaiter {
 public:
  explicit ContentDecryptionModuleClientAsyncWaiter(ContentDecryptionModuleClient* proxy);
  ~ContentDecryptionModuleClientAsyncWaiter();

 private:
  ContentDecryptionModuleClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModuleClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT CdmFactoryInterceptorForTesting : public CdmFactory {
  virtual CdmFactory* GetForwardingInterface() = 0;
  void CreateCdm(const WTF::String& key_system, ContentDecryptionModuleRequest cdm) override;
};
class BLINK_PLATFORM_EXPORT CdmFactoryAsyncWaiter {
 public:
  explicit CdmFactoryAsyncWaiter(CdmFactory* proxy);
  ~CdmFactoryAsyncWaiter();

 private:
  CdmFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_TEST_UTILS_H_