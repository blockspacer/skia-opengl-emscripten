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


#include "media/mojo/interfaces/content_decryption_module.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/decryptor.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#include "media/mojo/interfaces/cdm_key_information_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void ContentDecryptionModuleInterceptorForTesting::SetClient(ContentDecryptionModuleClientAssociatedPtrInfo client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void ContentDecryptionModuleInterceptorForTesting::Initialize(const std::string& key_system, const url::Origin& security_origin, const media::CdmConfig& cdm_config, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(key_system), std::move(security_origin), std::move(cdm_config), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::SetServerCertificate(const std::vector<uint8_t>& certificate_data, SetServerCertificateCallback callback) {
  GetForwardingInterface()->SetServerCertificate(std::move(certificate_data), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::GetStatusForPolicy(media::HdcpVersion min_hdcp_version, GetStatusForPolicyCallback callback) {
  GetForwardingInterface()->GetStatusForPolicy(std::move(min_hdcp_version), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::CreateSessionAndGenerateRequest(media::CdmSessionType session_type, media::EmeInitDataType init_data_type, const std::vector<uint8_t>& init_data, CreateSessionAndGenerateRequestCallback callback) {
  GetForwardingInterface()->CreateSessionAndGenerateRequest(std::move(session_type), std::move(init_data_type), std::move(init_data), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::LoadSession(media::CdmSessionType session_type, const std::string& session_id, LoadSessionCallback callback) {
  GetForwardingInterface()->LoadSession(std::move(session_type), std::move(session_id), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::UpdateSession(const std::string& session_id, const std::vector<uint8_t>& response, UpdateSessionCallback callback) {
  GetForwardingInterface()->UpdateSession(std::move(session_id), std::move(response), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::CloseSession(const std::string& session_id, CloseSessionCallback callback) {
  GetForwardingInterface()->CloseSession(std::move(session_id), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::RemoveSession(const std::string& session_id, RemoveSessionCallback callback) {
  GetForwardingInterface()->RemoveSession(std::move(session_id), std::move(callback));
}
ContentDecryptionModuleAsyncWaiter::ContentDecryptionModuleAsyncWaiter(
    ContentDecryptionModule* proxy) : proxy_(proxy) {}

ContentDecryptionModuleAsyncWaiter::~ContentDecryptionModuleAsyncWaiter() = default;

void ContentDecryptionModuleAsyncWaiter::Initialize(
    const std::string& key_system, const url::Origin& security_origin, const media::CdmConfig& cdm_config, CdmPromiseResultPtr* out_result, int32_t* out_cdm_id, ::media::mojom::DecryptorPtr* out_decryptor) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(key_system),std::move(security_origin),std::move(cdm_config),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             int32_t* out_cdm_id
,
             ::media::mojom::DecryptorPtr* out_decryptor
,
             CdmPromiseResultPtr result,
             int32_t cdm_id,
             ::media::mojom::DecryptorPtr decryptor) {*out_result = std::move(result);*out_cdm_id = std::move(cdm_id);*out_decryptor = std::move(decryptor);
            loop->Quit();
          },
          &loop,
          out_result,
          out_cdm_id,
          out_decryptor));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::SetServerCertificate(
    const std::vector<uint8_t>& certificate_data, CdmPromiseResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->SetServerCertificate(std::move(certificate_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             CdmPromiseResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::GetStatusForPolicy(
    media::HdcpVersion min_hdcp_version, CdmPromiseResultPtr* out_result, media::CdmKeyInformation::KeyStatus* out_key_status) {
  base::RunLoop loop;
  proxy_->GetStatusForPolicy(std::move(min_hdcp_version),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             media::CdmKeyInformation::KeyStatus* out_key_status
,
             CdmPromiseResultPtr result,
             media::CdmKeyInformation::KeyStatus key_status) {*out_result = std::move(result);*out_key_status = std::move(key_status);
            loop->Quit();
          },
          &loop,
          out_result,
          out_key_status));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::CreateSessionAndGenerateRequest(
    media::CdmSessionType session_type, media::EmeInitDataType init_data_type, const std::vector<uint8_t>& init_data, CdmPromiseResultPtr* out_result, std::string* out_session_id) {
  base::RunLoop loop;
  proxy_->CreateSessionAndGenerateRequest(std::move(session_type),std::move(init_data_type),std::move(init_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             std::string* out_session_id
,
             CdmPromiseResultPtr result,
             const std::string& session_id) {*out_result = std::move(result);*out_session_id = std::move(session_id);
            loop->Quit();
          },
          &loop,
          out_result,
          out_session_id));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::LoadSession(
    media::CdmSessionType session_type, const std::string& session_id, CdmPromiseResultPtr* out_result, std::string* out_session_id) {
  base::RunLoop loop;
  proxy_->LoadSession(std::move(session_type),std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             std::string* out_session_id
,
             CdmPromiseResultPtr result,
             const std::string& session_id) {*out_result = std::move(result);*out_session_id = std::move(session_id);
            loop->Quit();
          },
          &loop,
          out_result,
          out_session_id));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::UpdateSession(
    const std::string& session_id, const std::vector<uint8_t>& response, CdmPromiseResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->UpdateSession(std::move(session_id),std::move(response),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             CdmPromiseResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::CloseSession(
    const std::string& session_id, CdmPromiseResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->CloseSession(std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             CdmPromiseResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::RemoveSession(
    const std::string& session_id, CdmPromiseResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->RemoveSession(std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             CdmPromiseResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}



void ContentDecryptionModuleClientInterceptorForTesting::OnSessionMessage(const std::string& session_id, media::CdmMessageType message_type, const std::vector<uint8_t>& message) {
  GetForwardingInterface()->OnSessionMessage(std::move(session_id), std::move(message_type), std::move(message));
}
void ContentDecryptionModuleClientInterceptorForTesting::OnSessionClosed(const std::string& session_id) {
  GetForwardingInterface()->OnSessionClosed(std::move(session_id));
}
void ContentDecryptionModuleClientInterceptorForTesting::OnSessionKeysChange(const std::string& session_id, bool has_additional_usable_key, std::vector<std::unique_ptr<media::CdmKeyInformation>> keys_info) {
  GetForwardingInterface()->OnSessionKeysChange(std::move(session_id), std::move(has_additional_usable_key), std::move(keys_info));
}
void ContentDecryptionModuleClientInterceptorForTesting::OnSessionExpirationUpdate(const std::string& session_id, double new_expiry_time_sec) {
  GetForwardingInterface()->OnSessionExpirationUpdate(std::move(session_id), std::move(new_expiry_time_sec));
}
ContentDecryptionModuleClientAsyncWaiter::ContentDecryptionModuleClientAsyncWaiter(
    ContentDecryptionModuleClient* proxy) : proxy_(proxy) {}

ContentDecryptionModuleClientAsyncWaiter::~ContentDecryptionModuleClientAsyncWaiter() = default;




void CdmFactoryInterceptorForTesting::CreateCdm(const std::string& key_system, ContentDecryptionModuleRequest cdm) {
  GetForwardingInterface()->CreateCdm(std::move(key_system), std::move(cdm));
}
CdmFactoryAsyncWaiter::CdmFactoryAsyncWaiter(
    CdmFactory* proxy) : proxy_(proxy) {}

CdmFactoryAsyncWaiter::~CdmFactoryAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif