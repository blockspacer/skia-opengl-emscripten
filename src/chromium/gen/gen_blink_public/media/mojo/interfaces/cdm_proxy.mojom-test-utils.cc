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


#include "media/mojo/interfaces/cdm_proxy.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_JUMBO_H_
#include "media/base/ipc/media_param_traits_macros.h"
#endif


namespace media {
namespace mojom {


void CdmProxyInterceptorForTesting::Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) {
  GetForwardingInterface()->Initialize(std::move(client), std::move(callback));
}
void CdmProxyInterceptorForTesting::Process(media::CdmProxy::Function function, uint32_t crypto_session_id, const std::vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) {
  GetForwardingInterface()->Process(std::move(function), std::move(crypto_session_id), std::move(input_data), std::move(output_data_size), std::move(callback));
}
void CdmProxyInterceptorForTesting::CreateMediaCryptoSession(const std::vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) {
  GetForwardingInterface()->CreateMediaCryptoSession(std::move(input_data), std::move(callback));
}
void CdmProxyInterceptorForTesting::SetKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, media::CdmProxy::KeyType key_type, const std::vector<uint8_t>& key_blob, SetKeyCallback callback) {
  GetForwardingInterface()->SetKey(std::move(crypto_session_id), std::move(key_id), std::move(key_type), std::move(key_blob), std::move(callback));
}
void CdmProxyInterceptorForTesting::RemoveKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, RemoveKeyCallback callback) {
  GetForwardingInterface()->RemoveKey(std::move(crypto_session_id), std::move(key_id), std::move(callback));
}
CdmProxyAsyncWaiter::CdmProxyAsyncWaiter(
    CdmProxy* proxy) : proxy_(proxy) {}

CdmProxyAsyncWaiter::~CdmProxyAsyncWaiter() = default;

void CdmProxyAsyncWaiter::Initialize(
    CdmProxyClientAssociatedPtrInfo client, media::CdmProxy::Status* out_status, media::CdmProxy::Protocol* out_protocol, uint32_t* out_crypto_session_id, int32_t* out_cdm_id) {
  base::RunLoop loop;
  proxy_->Initialize(std::move(client),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             media::CdmProxy::Protocol* out_protocol
,
             uint32_t* out_crypto_session_id
,
             int32_t* out_cdm_id
,
             media::CdmProxy::Status status,
             media::CdmProxy::Protocol protocol,
             uint32_t crypto_session_id,
             int32_t cdm_id) {*out_status = std::move(status);*out_protocol = std::move(protocol);*out_crypto_session_id = std::move(crypto_session_id);*out_cdm_id = std::move(cdm_id);
            loop->Quit();
          },
          &loop,
          out_status,
          out_protocol,
          out_crypto_session_id,
          out_cdm_id));
  loop.Run();
}
void CdmProxyAsyncWaiter::Process(
    media::CdmProxy::Function function, uint32_t crypto_session_id, const std::vector<uint8_t>& input_data, uint32_t output_data_size, media::CdmProxy::Status* out_status, std::vector<uint8_t>* out_output_data) {
  base::RunLoop loop;
  proxy_->Process(std::move(function),std::move(crypto_session_id),std::move(input_data),std::move(output_data_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             std::vector<uint8_t>* out_output_data
,
             media::CdmProxy::Status status,
             const std::vector<uint8_t>& output_data) {*out_status = std::move(status);*out_output_data = std::move(output_data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_output_data));
  loop.Run();
}
void CdmProxyAsyncWaiter::CreateMediaCryptoSession(
    const std::vector<uint8_t>& input_data, media::CdmProxy::Status* out_status, uint32_t* out_crypto_session_id, uint64_t* out_output_data) {
  base::RunLoop loop;
  proxy_->CreateMediaCryptoSession(std::move(input_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             uint32_t* out_crypto_session_id
,
             uint64_t* out_output_data
,
             media::CdmProxy::Status status,
             uint32_t crypto_session_id,
             uint64_t output_data) {*out_status = std::move(status);*out_crypto_session_id = std::move(crypto_session_id);*out_output_data = std::move(output_data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_crypto_session_id,
          out_output_data));
  loop.Run();
}
void CdmProxyAsyncWaiter::SetKey(
    uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, media::CdmProxy::KeyType key_type, const std::vector<uint8_t>& key_blob, media::CdmProxy::Status* out_status) {
  base::RunLoop loop;
  proxy_->SetKey(std::move(crypto_session_id),std::move(key_id),std::move(key_type),std::move(key_blob),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             media::CdmProxy::Status status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void CdmProxyAsyncWaiter::RemoveKey(
    uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, media::CdmProxy::Status* out_status) {
  base::RunLoop loop;
  proxy_->RemoveKey(std::move(crypto_session_id),std::move(key_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             media::CdmProxy::Status* out_status
,
             media::CdmProxy::Status status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}



void CdmProxyClientInterceptorForTesting::NotifyHardwareReset() {
  GetForwardingInterface()->NotifyHardwareReset();
}
CdmProxyClientAsyncWaiter::CdmProxyClientAsyncWaiter(
    CdmProxyClient* proxy) : proxy_(proxy) {}

CdmProxyClientAsyncWaiter::~CdmProxyClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif