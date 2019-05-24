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


#include "media/mojo/interfaces/content_decryption_module.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/decryptor.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#endif


namespace media {
namespace mojom {
namespace blink {


void ContentDecryptionModuleInterceptorForTesting::SetClient(ContentDecryptionModuleClientAssociatedPtrInfo client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void ContentDecryptionModuleInterceptorForTesting::Initialize(const WTF::String& key_system, const scoped_refptr<const ::blink::SecurityOrigin>& security_origin, CdmConfigPtr cdm_config, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(key_system), std::move(security_origin), std::move(cdm_config), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::SetServerCertificate(const WTF::Vector<uint8_t>& certificate_data, SetServerCertificateCallback callback) {
  GetForwardingInterface()->SetServerCertificate(std::move(certificate_data), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::GetStatusForPolicy(HdcpVersion min_hdcp_version, GetStatusForPolicyCallback callback) {
  GetForwardingInterface()->GetStatusForPolicy(std::move(min_hdcp_version), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::CreateSessionAndGenerateRequest(CdmSessionType session_type, EmeInitDataType init_data_type, const WTF::Vector<uint8_t>& init_data, CreateSessionAndGenerateRequestCallback callback) {
  GetForwardingInterface()->CreateSessionAndGenerateRequest(std::move(session_type), std::move(init_data_type), std::move(init_data), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::LoadSession(CdmSessionType session_type, const WTF::String& session_id, LoadSessionCallback callback) {
  GetForwardingInterface()->LoadSession(std::move(session_type), std::move(session_id), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::UpdateSession(const WTF::String& session_id, const WTF::Vector<uint8_t>& response, UpdateSessionCallback callback) {
  GetForwardingInterface()->UpdateSession(std::move(session_id), std::move(response), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::CloseSession(const WTF::String& session_id, CloseSessionCallback callback) {
  GetForwardingInterface()->CloseSession(std::move(session_id), std::move(callback));
}
void ContentDecryptionModuleInterceptorForTesting::RemoveSession(const WTF::String& session_id, RemoveSessionCallback callback) {
  GetForwardingInterface()->RemoveSession(std::move(session_id), std::move(callback));
}
ContentDecryptionModuleAsyncWaiter::ContentDecryptionModuleAsyncWaiter(
    ContentDecryptionModule* proxy) : proxy_(proxy) {}

ContentDecryptionModuleAsyncWaiter::~ContentDecryptionModuleAsyncWaiter() = default;

void ContentDecryptionModuleAsyncWaiter::Initialize(
    const WTF::String& key_system, const scoped_refptr<const ::blink::SecurityOrigin>& security_origin, CdmConfigPtr cdm_config, CdmPromiseResultPtr* out_result, int32_t* out_cdm_id, ::media::mojom::blink::DecryptorPtr* out_decryptor) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(key_system),std::move(security_origin),std::move(cdm_config),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             int32_t* out_cdm_id
,
             ::media::mojom::blink::DecryptorPtr* out_decryptor
,
             CdmPromiseResultPtr result,
             int32_t cdm_id,
             ::media::mojom::blink::DecryptorPtr decryptor) {*out_result = std::move(result);*out_cdm_id = std::move(cdm_id);*out_decryptor = std::move(decryptor);
            loop->Quit();
          },
          &loop,
          out_result,
          out_cdm_id,
          out_decryptor));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::SetServerCertificate(
    const WTF::Vector<uint8_t>& certificate_data, CdmPromiseResultPtr* out_result) {
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
    HdcpVersion min_hdcp_version, CdmPromiseResultPtr* out_result, CdmKeyStatus* out_key_status) {
  base::RunLoop loop;
  proxy_->GetStatusForPolicy(std::move(min_hdcp_version),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             CdmKeyStatus* out_key_status
,
             CdmPromiseResultPtr result,
             CdmKeyStatus key_status) {*out_result = std::move(result);*out_key_status = std::move(key_status);
            loop->Quit();
          },
          &loop,
          out_result,
          out_key_status));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::CreateSessionAndGenerateRequest(
    CdmSessionType session_type, EmeInitDataType init_data_type, const WTF::Vector<uint8_t>& init_data, CdmPromiseResultPtr* out_result, WTF::String* out_session_id) {
  base::RunLoop loop;
  proxy_->CreateSessionAndGenerateRequest(std::move(session_type),std::move(init_data_type),std::move(init_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             WTF::String* out_session_id
,
             CdmPromiseResultPtr result,
             const WTF::String& session_id) {*out_result = std::move(result);*out_session_id = std::move(session_id);
            loop->Quit();
          },
          &loop,
          out_result,
          out_session_id));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::LoadSession(
    CdmSessionType session_type, const WTF::String& session_id, CdmPromiseResultPtr* out_result, WTF::String* out_session_id) {
  base::RunLoop loop;
  proxy_->LoadSession(std::move(session_type),std::move(session_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmPromiseResultPtr* out_result
,
             WTF::String* out_session_id
,
             CdmPromiseResultPtr result,
             const WTF::String& session_id) {*out_result = std::move(result);*out_session_id = std::move(session_id);
            loop->Quit();
          },
          &loop,
          out_result,
          out_session_id));
  loop.Run();
}
void ContentDecryptionModuleAsyncWaiter::UpdateSession(
    const WTF::String& session_id, const WTF::Vector<uint8_t>& response, CdmPromiseResultPtr* out_result) {
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
    const WTF::String& session_id, CdmPromiseResultPtr* out_result) {
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
    const WTF::String& session_id, CdmPromiseResultPtr* out_result) {
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



void ContentDecryptionModuleClientInterceptorForTesting::OnSessionMessage(const WTF::String& session_id, CdmMessageType message_type, const WTF::Vector<uint8_t>& message) {
  GetForwardingInterface()->OnSessionMessage(std::move(session_id), std::move(message_type), std::move(message));
}
void ContentDecryptionModuleClientInterceptorForTesting::OnSessionClosed(const WTF::String& session_id) {
  GetForwardingInterface()->OnSessionClosed(std::move(session_id));
}
void ContentDecryptionModuleClientInterceptorForTesting::OnSessionKeysChange(const WTF::String& session_id, bool has_additional_usable_key, WTF::Vector<CdmKeyInformationPtr> keys_info) {
  GetForwardingInterface()->OnSessionKeysChange(std::move(session_id), std::move(has_additional_usable_key), std::move(keys_info));
}
void ContentDecryptionModuleClientInterceptorForTesting::OnSessionExpirationUpdate(const WTF::String& session_id, double new_expiry_time_sec) {
  GetForwardingInterface()->OnSessionExpirationUpdate(std::move(session_id), std::move(new_expiry_time_sec));
}
ContentDecryptionModuleClientAsyncWaiter::ContentDecryptionModuleClientAsyncWaiter(
    ContentDecryptionModuleClient* proxy) : proxy_(proxy) {}

ContentDecryptionModuleClientAsyncWaiter::~ContentDecryptionModuleClientAsyncWaiter() = default;




void CdmFactoryInterceptorForTesting::CreateCdm(const WTF::String& key_system, ContentDecryptionModuleRequest cdm) {
  GetForwardingInterface()->CreateCdm(std::move(key_system), std::move(cdm));
}
CdmFactoryAsyncWaiter::CdmFactoryAsyncWaiter(
    CdmFactory* proxy) : proxy_(proxy) {}

CdmFactoryAsyncWaiter::~CdmFactoryAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif