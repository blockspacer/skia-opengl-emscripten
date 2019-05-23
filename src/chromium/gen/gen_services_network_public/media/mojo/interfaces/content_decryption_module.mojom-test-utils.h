// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/content_decryption_module.mojom.h"


namespace media {
namespace mojom {


class  ContentDecryptionModuleInterceptorForTesting : public ContentDecryptionModule {
  virtual ContentDecryptionModule* GetForwardingInterface() = 0;
  void SetClient(ContentDecryptionModuleClientAssociatedPtrInfo client) override;
  void Initialize(const std::string& key_system, const url::Origin& security_origin, const media::CdmConfig& cdm_config, InitializeCallback callback) override;
  void SetServerCertificate(const std::vector<uint8_t>& certificate_data, SetServerCertificateCallback callback) override;
  void GetStatusForPolicy(media::HdcpVersion min_hdcp_version, GetStatusForPolicyCallback callback) override;
  void CreateSessionAndGenerateRequest(media::CdmSessionType session_type, media::EmeInitDataType init_data_type, const std::vector<uint8_t>& init_data, CreateSessionAndGenerateRequestCallback callback) override;
  void LoadSession(media::CdmSessionType session_type, const std::string& session_id, LoadSessionCallback callback) override;
  void UpdateSession(const std::string& session_id, const std::vector<uint8_t>& response, UpdateSessionCallback callback) override;
  void CloseSession(const std::string& session_id, CloseSessionCallback callback) override;
  void RemoveSession(const std::string& session_id, RemoveSessionCallback callback) override;
};
class  ContentDecryptionModuleAsyncWaiter {
 public:
  explicit ContentDecryptionModuleAsyncWaiter(ContentDecryptionModule* proxy);
  ~ContentDecryptionModuleAsyncWaiter();
  void Initialize(
      const std::string& key_system, const url::Origin& security_origin, const media::CdmConfig& cdm_config, CdmPromiseResultPtr* out_result, int32_t* out_cdm_id, ::media::mojom::DecryptorPtr* out_decryptor);
  void SetServerCertificate(
      const std::vector<uint8_t>& certificate_data, CdmPromiseResultPtr* out_result);
  void GetStatusForPolicy(
      media::HdcpVersion min_hdcp_version, CdmPromiseResultPtr* out_result, media::CdmKeyInformation::KeyStatus* out_key_status);
  void CreateSessionAndGenerateRequest(
      media::CdmSessionType session_type, media::EmeInitDataType init_data_type, const std::vector<uint8_t>& init_data, CdmPromiseResultPtr* out_result, std::string* out_session_id);
  void LoadSession(
      media::CdmSessionType session_type, const std::string& session_id, CdmPromiseResultPtr* out_result, std::string* out_session_id);
  void UpdateSession(
      const std::string& session_id, const std::vector<uint8_t>& response, CdmPromiseResultPtr* out_result);
  void CloseSession(
      const std::string& session_id, CdmPromiseResultPtr* out_result);
  void RemoveSession(
      const std::string& session_id, CdmPromiseResultPtr* out_result);

 private:
  ContentDecryptionModule* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModuleAsyncWaiter);
};


class  ContentDecryptionModuleClientInterceptorForTesting : public ContentDecryptionModuleClient {
  virtual ContentDecryptionModuleClient* GetForwardingInterface() = 0;
  void OnSessionMessage(const std::string& session_id, media::CdmMessageType message_type, const std::vector<uint8_t>& message) override;
  void OnSessionClosed(const std::string& session_id) override;
  void OnSessionKeysChange(const std::string& session_id, bool has_additional_usable_key, std::vector<std::unique_ptr<media::CdmKeyInformation>> keys_info) override;
  void OnSessionExpirationUpdate(const std::string& session_id, double new_expiry_time_sec) override;
};
class  ContentDecryptionModuleClientAsyncWaiter {
 public:
  explicit ContentDecryptionModuleClientAsyncWaiter(ContentDecryptionModuleClient* proxy);
  ~ContentDecryptionModuleClientAsyncWaiter();

 private:
  ContentDecryptionModuleClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ContentDecryptionModuleClientAsyncWaiter);
};


class  CdmFactoryInterceptorForTesting : public CdmFactory {
  virtual CdmFactory* GetForwardingInterface() = 0;
  void CreateCdm(const std::string& key_system, ContentDecryptionModuleRequest cdm) override;
};
class  CdmFactoryAsyncWaiter {
 public:
  explicit CdmFactoryAsyncWaiter(CdmFactory* proxy);
  ~CdmFactoryAsyncWaiter();

 private:
  CdmFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmFactoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_TEST_UTILS_H_