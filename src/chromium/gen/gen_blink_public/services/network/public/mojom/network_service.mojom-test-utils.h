// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/network_service.mojom.h"


namespace network {
namespace mojom {


class  SSLPrivateKeyInterceptorForTesting : public SSLPrivateKey {
  virtual SSLPrivateKey* GetForwardingInterface() = 0;
  void Sign(uint16_t algorithm, const std::vector<uint8_t>& input, SignCallback callback) override;
};
class  SSLPrivateKeyAsyncWaiter {
 public:
  explicit SSLPrivateKeyAsyncWaiter(SSLPrivateKey* proxy);
  ~SSLPrivateKeyAsyncWaiter();
  void Sign(
      uint16_t algorithm, const std::vector<uint8_t>& input, int32_t* out_net_error, std::vector<uint8_t>* out_signature);

 private:
  SSLPrivateKey* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKeyAsyncWaiter);
};


class  AuthChallengeResponderInterceptorForTesting : public AuthChallengeResponder {
  virtual AuthChallengeResponder* GetForwardingInterface() = 0;
  void OnAuthCredentials(const base::Optional<net::AuthCredentials>& credentials) override;
};
class  AuthChallengeResponderAsyncWaiter {
 public:
  explicit AuthChallengeResponderAsyncWaiter(AuthChallengeResponder* proxy);
  ~AuthChallengeResponderAsyncWaiter();

 private:
  AuthChallengeResponder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthChallengeResponderAsyncWaiter);
};


class  NetworkServiceClientInterceptorForTesting : public NetworkServiceClient {
  virtual NetworkServiceClient* GetForwardingInterface() = 0;
  void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const GURL& url, bool first_auth_attempt, const net::AuthChallengeInfo& auth_info, const base::Optional<network::ResourceResponseHead>& head, AuthChallengeResponderPtr auth_challenge_responder) override;
  void OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, OnCertificateRequestedCallback callback) override;
  void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const GURL& url, int32_t net_error, const net::SSLInfo& ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) override;
  void OnFileUploadRequested(uint32_t process_id, bool async, const std::vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) override;
  void OnCookieChange(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const net::CanonicalCookie& cookie, bool blocked_by_policy) override;
  void OnCookiesRead(int32_t process_id, int32_t routing_id, const GURL& url, const GURL& frame_url, const std::vector<net::CanonicalCookie>& cookie_list, bool blocked_by_policy) override;
  void OnLoadingStateUpdate(std::vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) override;
  void OnClearSiteData(int32_t process_id, int32_t routing_id, const GURL& url, const std::string& header_value, int32_t load_flags, OnClearSiteDataCallback callback) override;
  void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) override;
};
class  NetworkServiceClientAsyncWaiter {
 public:
  explicit NetworkServiceClientAsyncWaiter(NetworkServiceClient* proxy);
  ~NetworkServiceClientAsyncWaiter();
  void OnCertificateRequested(
      const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, const scoped_refptr<net::SSLCertRequestInfo>& cert_info, scoped_refptr<net::X509Certificate>* out_x509_certificate, std::string* out_provider_name, std::vector<uint16_t>* out_algorithm_preferences, SSLPrivateKeyPtr* out_ssl_private_key, bool* out_cancel_certificate_selection);
  void OnSSLCertificateError(
      uint32_t process_id, uint32_t routing_id, const GURL& url, int32_t net_error, const net::SSLInfo& ssl_info, bool fatal, int32_t* out_net_error);
  void OnFileUploadRequested(
      uint32_t process_id, bool async, const std::vector<base::FilePath>& file_paths, int32_t* out_net_error, std::vector<base::File>* out_files);
  void OnLoadingStateUpdate(
      std::vector<LoadInfoPtr> infos);
  void OnClearSiteData(
      int32_t process_id, int32_t routing_id, const GURL& url, const std::string& header_value, int32_t load_flags);

 private:
  NetworkServiceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClientAsyncWaiter);
};


class  NetworkServiceInterceptorForTesting : public NetworkService {
  virtual NetworkService* GetForwardingInterface() = 0;
  void SetClient(NetworkServiceClientPtr client, NetworkServiceParamsPtr params) override;
  void StartNetLog(base::File file, ::network::mojom::NetLogCaptureMode capture_mode, base::Value constants) override;
  void SetSSLKeyLogFile(const base::FilePath& file) override;
  void CreateNetworkContext(::network::mojom::NetworkContextRequest context, ::network::mojom::NetworkContextParamsPtr params) override;
  void ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<std::vector<::network::mojom::DnsOverHttpsServerPtr>> dns_over_https_servers) override;
  void DisableQuic() override;
  void SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) override;
  void ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) override;
  void SetRawHeadersAccess(uint32_t process_id, const std::vector<url::Origin>& origins) override;
  void GetNetworkChangeManager(::network::mojom::NetworkChangeManagerRequest network_change_manager) override;
  void GetNetworkQualityEstimatorManager(::network::mojom::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) override;
  void GetDnsConfigChangeManager(::network::mojom::DnsConfigChangeManagerRequest dns_config_change_manager) override;
  void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) override;
  void GetNetworkList(uint32_t policy, GetNetworkListCallback callback) override;
  void UpdateSignedTreeHead(const net::ct::SignedTreeHead& signed_tree_head) override;
  void UpdateCRLSet(base::span<const uint8_t> crl_set) override;
  void OnCertDBChanged() override;
  void SetCryptConfig(CryptConfigPtr crypt_config) override;
  void AddCorbExceptionForPlugin(uint32_t process_id) override;
  void RemoveCorbExceptionForPlugin(uint32_t process_id) override;
  void OnMemoryPressure(base::MemoryPressureListener::MemoryPressureLevel memory_pressure_level) override;
  void SetEnvironment(std::vector<EnvironmentVariablePtr> environment) override;
};
class  NetworkServiceAsyncWaiter {
 public:
  explicit NetworkServiceAsyncWaiter(NetworkService* proxy);
  ~NetworkServiceAsyncWaiter();
  void GetTotalNetworkUsages(
      std::vector<::network::mojom::NetworkUsagePtr>* out_total_network_usages);
  void GetNetworkList(
      uint32_t policy, base::Optional<std::vector<net::NetworkInterface>>* out_networks);

 private:
  NetworkService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_TEST_UTILS_H_