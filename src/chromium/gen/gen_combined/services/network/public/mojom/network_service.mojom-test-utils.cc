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


#include "services/network/public/mojom/network_service.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "services/network/public/mojom/cookie_manager.mojom.h"
#include "services/network/public/mojom/host_resolver.mojom.h"
#include "services/network/public/mojom/net_log.mojom.h"
#include "services/network/public/mojom/network_change_manager.mojom.h"
#include "services/network/public/mojom/network_context.mojom.h"
#include "services/network/public/mojom/network_interface.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/network_quality_estimator_manager.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/signed_tree_head.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_JUMBO_H_
#include "components/content_settings/core/common/content_settings_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/memory_pressure_level_mojom_traits.h"
#include "mojo/public/cpp/base/read_only_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/network/public/cpp/cookie_manager_mojom_traits.h"
#include "services/network/public/cpp/digitally_signed_mojom_traits.h"
#include "services/network/public/cpp/http_request_headers_mojom_traits.h"
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_interface_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_with_annotation_mojom_traits.h"
#include "services/network/public/cpp/signed_tree_head_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void SSLPrivateKeyInterceptorForTesting::Sign(uint16_t algorithm, const std::vector<uint8_t>& input, SignCallback callback) {
  GetForwardingInterface()->Sign(std::move(algorithm), std::move(input), std::move(callback));
}
SSLPrivateKeyAsyncWaiter::SSLPrivateKeyAsyncWaiter(
    SSLPrivateKey* proxy) : proxy_(proxy) {}

SSLPrivateKeyAsyncWaiter::~SSLPrivateKeyAsyncWaiter() = default;

void SSLPrivateKeyAsyncWaiter::Sign(
    uint16_t algorithm, const std::vector<uint8_t>& input, int32_t* out_net_error, std::vector<uint8_t>* out_signature) {
  base::RunLoop loop;
  proxy_->Sign(std::move(algorithm),std::move(input),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             std::vector<uint8_t>* out_signature
,
             int32_t net_error,
             const std::vector<uint8_t>& signature) {*out_net_error = std::move(net_error);*out_signature = std::move(signature);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_signature));
  loop.Run();
}



void AuthChallengeResponderInterceptorForTesting::OnAuthCredentials(const base::Optional<net::AuthCredentials>& credentials) {
  GetForwardingInterface()->OnAuthCredentials(std::move(credentials));
}
AuthChallengeResponderAsyncWaiter::AuthChallengeResponderAsyncWaiter(
    AuthChallengeResponder* proxy) : proxy_(proxy) {}

AuthChallengeResponderAsyncWaiter::~AuthChallengeResponderAsyncWaiter() = default;




void NetworkServiceClientInterceptorForTesting::OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const GURL& url, bool first_auth_attempt, const net::AuthChallengeInfo& auth_info, const base::Optional<network::ResourceResponseHead>& head, AuthChallengeResponderPtr auth_challenge_responder) {
  GetForwardingInterface()->OnAuthRequired(std::move(process_id), std::move(routing_id), std::move(request_id), std::move(url), std::move(first_auth_attempt), std::move(auth_info), std::move(head), std::move(auth_challenge_responder));
}
void NetworkServiceClientInterceptorForTesting::OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, OnCertificateRequestedCallback callback) {
  GetForwardingInterface()->OnCertificateRequested(std::move(window_id), std::move(process_id), std::move(routing_id), std::move(request_id), std::move(cert_info), std::move(callback));
}
void NetworkServiceClientInterceptorForTesting::OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const GURL& url, int32_t net_error, const net::SSLInfo& ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) {
  GetForwardingInterface()->OnSSLCertificateError(std::move(process_id), std::move(routing_id), std::move(url), std::move(net_error), std::move(ssl_info), std::move(fatal), std::move(callback));
}
void NetworkServiceClientInterceptorForTesting::OnFileUploadRequested(uint32_t process_id, bool async, const std::vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) {
  GetForwardingInterface()->OnFileUploadRequested(std::move(process_id), std::move(async), std::move(file_paths), std::move(callback));
}
void NetworkServiceClientInterceptorForTesting::OnCookieChange(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const net::CanonicalCookie& cookie, bool blocked_by_policy) {
  GetForwardingInterface()->OnCookieChange(std::move(process_id), std::move(routing_id), std::move(url), std::move(frame_url), std::move(cookie), std::move(blocked_by_policy));
}
void NetworkServiceClientInterceptorForTesting::OnCookiesRead(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const std::vector<net::CanonicalCookie>& cookie_list, bool blocked_by_policy) {
  GetForwardingInterface()->OnCookiesRead(std::move(process_id), std::move(routing_id), std::move(url), std::move(frame_url), std::move(cookie_list), std::move(blocked_by_policy));
}
void NetworkServiceClientInterceptorForTesting::OnLoadingStateUpdate(std::vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) {
  GetForwardingInterface()->OnLoadingStateUpdate(std::move(infos), std::move(callback));
}
void NetworkServiceClientInterceptorForTesting::OnClearSiteData(int32_t process_id, int32_t routing_id, const GURL& url, const std::string& header_value, int32_t load_flags, OnClearSiteDataCallback callback) {
  GetForwardingInterface()->OnClearSiteData(std::move(process_id), std::move(routing_id), std::move(url), std::move(header_value), std::move(load_flags), std::move(callback));
}
void NetworkServiceClientInterceptorForTesting::OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) {
  GetForwardingInterface()->OnDataUseUpdate(std::move(network_traffic_annotation_id_hash), std::move(recv_bytes), std::move(sent_bytes));
}
NetworkServiceClientAsyncWaiter::NetworkServiceClientAsyncWaiter(
    NetworkServiceClient* proxy) : proxy_(proxy) {}

NetworkServiceClientAsyncWaiter::~NetworkServiceClientAsyncWaiter() = default;

void NetworkServiceClientAsyncWaiter::OnCertificateRequested(
    const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, scoped_refptr<net::X509Certificate>* out_x509_certificate, std::string* out_provider_name, std::vector<uint16_t>* out_algorithm_preferences, SSLPrivateKeyPtr* out_ssl_private_key, bool* out_cancel_certificate_selection) {
  base::RunLoop loop;
  proxy_->OnCertificateRequested(std::move(window_id),std::move(process_id),std::move(routing_id),std::move(request_id),std::move(cert_info),
      base::BindOnce(
          [](base::RunLoop* loop,
             scoped_refptr<net::X509Certificate>* out_x509_certificate
,
             std::string* out_provider_name
,
             std::vector<uint16_t>* out_algorithm_preferences
,
             SSLPrivateKeyPtr* out_ssl_private_key
,
             bool* out_cancel_certificate_selection
,
             const scoped_refptr<net::X509Certificate>& x509_certificate,
             const std::string& provider_name,
             const std::vector<uint16_t>& algorithm_preferences,
             SSLPrivateKeyPtr ssl_private_key,
             bool cancel_certificate_selection) {*out_x509_certificate = std::move(x509_certificate);*out_provider_name = std::move(provider_name);*out_algorithm_preferences = std::move(algorithm_preferences);*out_ssl_private_key = std::move(ssl_private_key);*out_cancel_certificate_selection = std::move(cancel_certificate_selection);
            loop->Quit();
          },
          &loop,
          out_x509_certificate,
          out_provider_name,
          out_algorithm_preferences,
          out_ssl_private_key,
          out_cancel_certificate_selection));
  loop.Run();
}
void NetworkServiceClientAsyncWaiter::OnSSLCertificateError(
    uint32_t process_id, uint32_t routing_id, const GURL& url, int32_t net_error, const net::SSLInfo& ssl_info, bool fatal, int32_t* out_net_error) {
  base::RunLoop loop;
  proxy_->OnSSLCertificateError(std::move(process_id),std::move(routing_id),std::move(url),std::move(net_error),std::move(ssl_info),std::move(fatal),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             int32_t net_error) {*out_net_error = std::move(net_error);
            loop->Quit();
          },
          &loop,
          out_net_error));
  loop.Run();
}
void NetworkServiceClientAsyncWaiter::OnFileUploadRequested(
    uint32_t process_id, bool async, const std::vector<base::FilePath>& file_paths, int32_t* out_net_error, std::vector<base::File>* out_files) {
  base::RunLoop loop;
  proxy_->OnFileUploadRequested(std::move(process_id),std::move(async),std::move(file_paths),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_net_error
,
             std::vector<base::File>* out_files
,
             int32_t net_error,
             std::vector<base::File> files) {*out_net_error = std::move(net_error);*out_files = std::move(files);
            loop->Quit();
          },
          &loop,
          out_net_error,
          out_files));
  loop.Run();
}
void NetworkServiceClientAsyncWaiter::OnLoadingStateUpdate(
    std::vector<LoadInfoPtr> infos) {
  base::RunLoop loop;
  proxy_->OnLoadingStateUpdate(std::move(infos),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkServiceClientAsyncWaiter::OnClearSiteData(
    int32_t process_id, int32_t routing_id, const GURL& url, const std::string& header_value, int32_t load_flags) {
  base::RunLoop loop;
  proxy_->OnClearSiteData(std::move(process_id),std::move(routing_id),std::move(url),std::move(header_value),std::move(load_flags),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void NetworkServiceInterceptorForTesting::SetClient(NetworkServiceClientPtr client, NetworkServiceParamsPtr params) {
  GetForwardingInterface()->SetClient(std::move(client), std::move(params));
}
void NetworkServiceInterceptorForTesting::StartNetLog(base::File file, ::network::mojom::NetLogCaptureMode capture_mode, base::Value constants) {
  GetForwardingInterface()->StartNetLog(std::move(file), std::move(capture_mode), std::move(constants));
}
void NetworkServiceInterceptorForTesting::SetSSLKeyLogFile(const base::FilePath& file) {
  GetForwardingInterface()->SetSSLKeyLogFile(std::move(file));
}
void NetworkServiceInterceptorForTesting::CreateNetworkContext(::network::mojom::NetworkContextRequest context, ::network::mojom::NetworkContextParamsPtr params) {
  GetForwardingInterface()->CreateNetworkContext(std::move(context), std::move(params));
}
void NetworkServiceInterceptorForTesting::ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<std::vector<::network::mojom::DnsOverHttpsServerPtr>> dns_over_https_servers) {
  GetForwardingInterface()->ConfigureStubHostResolver(std::move(stub_resolver_enabled), std::move(dns_over_https_servers));
}
void NetworkServiceInterceptorForTesting::DisableQuic() {
  GetForwardingInterface()->DisableQuic();
}
void NetworkServiceInterceptorForTesting::SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) {
  GetForwardingInterface()->SetUpHttpAuth(std::move(http_auth_static_params));
}
void NetworkServiceInterceptorForTesting::ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) {
  GetForwardingInterface()->ConfigureHttpAuthPrefs(std::move(http_auth_dynamic_params));
}
void NetworkServiceInterceptorForTesting::SetRawHeadersAccess(uint32_t process_id, const std::vector<url::Origin>& origins) {
  GetForwardingInterface()->SetRawHeadersAccess(std::move(process_id), std::move(origins));
}
void NetworkServiceInterceptorForTesting::GetNetworkChangeManager(::network::mojom::NetworkChangeManagerRequest network_change_manager) {
  GetForwardingInterface()->GetNetworkChangeManager(std::move(network_change_manager));
}
void NetworkServiceInterceptorForTesting::GetNetworkQualityEstimatorManager(::network::mojom::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) {
  GetForwardingInterface()->GetNetworkQualityEstimatorManager(std::move(network_quality_estimator_manager));
}
void NetworkServiceInterceptorForTesting::GetDnsConfigChangeManager(::network::mojom::DnsConfigChangeManagerRequest dns_config_change_manager) {
  GetForwardingInterface()->GetDnsConfigChangeManager(std::move(dns_config_change_manager));
}
void NetworkServiceInterceptorForTesting::GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) {
  GetForwardingInterface()->GetTotalNetworkUsages(std::move(callback));
}
void NetworkServiceInterceptorForTesting::GetNetworkList(uint32_t policy, GetNetworkListCallback callback) {
  GetForwardingInterface()->GetNetworkList(std::move(policy), std::move(callback));
}
void NetworkServiceInterceptorForTesting::UpdateSignedTreeHead(const net::ct::SignedTreeHead& signed_tree_head) {
  GetForwardingInterface()->UpdateSignedTreeHead(std::move(signed_tree_head));
}
void NetworkServiceInterceptorForTesting::UpdateCRLSet(base::span<const uint8_t> crl_set) {
  GetForwardingInterface()->UpdateCRLSet(std::move(crl_set));
}
void NetworkServiceInterceptorForTesting::OnCertDBChanged() {
  GetForwardingInterface()->OnCertDBChanged();
}
void NetworkServiceInterceptorForTesting::SetCryptConfig(CryptConfigPtr crypt_config) {
  GetForwardingInterface()->SetCryptConfig(std::move(crypt_config));
}
void NetworkServiceInterceptorForTesting::AddCorbExceptionForPlugin(uint32_t process_id) {
  GetForwardingInterface()->AddCorbExceptionForPlugin(std::move(process_id));
}
void NetworkServiceInterceptorForTesting::RemoveCorbExceptionForPlugin(uint32_t process_id) {
  GetForwardingInterface()->RemoveCorbExceptionForPlugin(std::move(process_id));
}
void NetworkServiceInterceptorForTesting::OnMemoryPressure(base::MemoryPressureListener::MemoryPressureLevel memory_pressure_level) {
  GetForwardingInterface()->OnMemoryPressure(std::move(memory_pressure_level));
}
void NetworkServiceInterceptorForTesting::SetEnvironment(std::vector<EnvironmentVariablePtr> environment) {
  GetForwardingInterface()->SetEnvironment(std::move(environment));
}
NetworkServiceAsyncWaiter::NetworkServiceAsyncWaiter(
    NetworkService* proxy) : proxy_(proxy) {}

NetworkServiceAsyncWaiter::~NetworkServiceAsyncWaiter() = default;

void NetworkServiceAsyncWaiter::GetTotalNetworkUsages(
    std::vector<::network::mojom::NetworkUsagePtr>* out_total_network_usages) {
  base::RunLoop loop;
  proxy_->GetTotalNetworkUsages(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::network::mojom::NetworkUsagePtr>* out_total_network_usages
,
             std::vector<::network::mojom::NetworkUsagePtr> total_network_usages) {*out_total_network_usages = std::move(total_network_usages);
            loop->Quit();
          },
          &loop,
          out_total_network_usages));
  loop.Run();
}
void NetworkServiceAsyncWaiter::GetNetworkList(
    uint32_t policy, base::Optional<std::vector<net::NetworkInterface>>* out_networks) {
  base::RunLoop loop;
  proxy_->GetNetworkList(std::move(policy),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<std::vector<net::NetworkInterface>>* out_networks
,
             const base::Optional<std::vector<net::NetworkInterface>>& networks) {*out_networks = std::move(networks);
            loop->Quit();
          },
          &loop,
          out_networks));
  loop.Run();
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif