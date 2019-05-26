// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/network_service.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT SSLPrivateKeyInterceptorForTesting : public SSLPrivateKey {
  virtual SSLPrivateKey* GetForwardingInterface() = 0;
  void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) override;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyAsyncWaiter {
 public:
  explicit SSLPrivateKeyAsyncWaiter(SSLPrivateKey* proxy);
  ~SSLPrivateKeyAsyncWaiter();
  void Sign(
      uint16_t algorithm, const WTF::Vector<uint8_t>& input, int32_t* out_net_error, WTF::Vector<uint8_t>* out_signature);

 private:
  SSLPrivateKey* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(SSLPrivateKeyAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT AuthChallengeResponderInterceptorForTesting : public AuthChallengeResponder {
  virtual AuthChallengeResponder* GetForwardingInterface() = 0;
  void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) override;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderAsyncWaiter {
 public:
  explicit AuthChallengeResponderAsyncWaiter(AuthChallengeResponder* proxy);
  ~AuthChallengeResponderAsyncWaiter();

 private:
  AuthChallengeResponder* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(AuthChallengeResponderAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT NetworkServiceClientInterceptorForTesting : public NetworkServiceClient {
  virtual NetworkServiceClient* GetForwardingInterface() = 0;
  void OnAuthRequired(uint32_t process_id, uint32_t routing_id, uint32_t request_id, const ::blink::KURL& url, bool first_auth_attempt, ::network::mojom::blink::AuthChallengeInfoPtr auth_info, ::network::mojom::blink::URLResponseHeadPtr head, AuthChallengeResponderPtr auth_challenge_responder) override;
  void OnCertificateRequested(const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, OnCertificateRequestedCallback callback) override;
  void OnSSLCertificateError(uint32_t process_id, uint32_t routing_id, const ::blink::KURL& url, int32_t net_error, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) override;
  void OnFileUploadRequested(uint32_t process_id, bool async, const WTF::Vector<base::FilePath>& file_paths, OnFileUploadRequestedCallback callback) override;
  void OnCookieChange(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const ::blink::KURL& frame_url, const ::blink::WebCanonicalCookie& cookie, bool blocked_by_policy) override;
  void OnCookiesRead(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const ::blink::KURL& frame_url, const WTF::Vector<::blink::WebCanonicalCookie>& cookie_list, bool blocked_by_policy) override;
  void OnLoadingStateUpdate(WTF::Vector<LoadInfoPtr> infos, OnLoadingStateUpdateCallback callback) override;
  void OnClearSiteData(int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const WTF::String& header_value, int32_t load_flags, OnClearSiteDataCallback callback) override;
  void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceClientAsyncWaiter {
 public:
  explicit NetworkServiceClientAsyncWaiter(NetworkServiceClient* proxy);
  ~NetworkServiceClientAsyncWaiter();
  void OnCertificateRequested(
      const base::Optional<base::UnguessableToken>& window_id, uint32_t process_id, uint32_t routing_id, uint32_t request_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, ::network::mojom::blink::X509CertificatePtr* out_x509_certificate, WTF::String* out_provider_name, WTF::Vector<uint16_t>* out_algorithm_preferences, SSLPrivateKeyPtr* out_ssl_private_key, bool* out_cancel_certificate_selection);
  void OnSSLCertificateError(
      uint32_t process_id, uint32_t routing_id, const ::blink::KURL& url, int32_t net_error, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, int32_t* out_net_error);
  void OnFileUploadRequested(
      uint32_t process_id, bool async, const WTF::Vector<base::FilePath>& file_paths, int32_t* out_net_error, WTF::Vector<base::File>* out_files);
  void OnLoadingStateUpdate(
      WTF::Vector<LoadInfoPtr> infos);
  void OnClearSiteData(
      int32_t process_id, int32_t routing_id, const ::blink::KURL& url, const WTF::String& header_value, int32_t load_flags);

 private:
  NetworkServiceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT NetworkServiceInterceptorForTesting : public NetworkService {
  virtual NetworkService* GetForwardingInterface() = 0;
  void SetClient(NetworkServiceClientPtr client, NetworkServiceParamsPtr params) override;
  void StartNetLog(base::File file, ::network::mojom::blink::NetLogCaptureMode capture_mode, ::mojo_base::mojom::blink::DictionaryValuePtr constants) override;
  void SetSSLKeyLogFile(const base::FilePath& file) override;
  void CreateNetworkContext(::network::mojom::blink::NetworkContextRequest context, ::network::mojom::blink::NetworkContextParamsPtr params) override;
  void ConfigureStubHostResolver(bool stub_resolver_enabled, base::Optional<WTF::Vector<::network::mojom::blink::DnsOverHttpsServerPtr>> dns_over_https_servers) override;
  void DisableQuic() override;
  void SetUpHttpAuth(HttpAuthStaticParamsPtr http_auth_static_params) override;
  void ConfigureHttpAuthPrefs(HttpAuthDynamicParamsPtr http_auth_dynamic_params) override;
  void SetRawHeadersAccess(uint32_t process_id, const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& origins) override;
  void GetNetworkChangeManager(::network::mojom::blink::NetworkChangeManagerRequest network_change_manager) override;
  void GetNetworkQualityEstimatorManager(::network::mojom::blink::NetworkQualityEstimatorManagerRequest network_quality_estimator_manager) override;
  void GetDnsConfigChangeManager(::network::mojom::blink::DnsConfigChangeManagerRequest dns_config_change_manager) override;
  void GetTotalNetworkUsages(GetTotalNetworkUsagesCallback callback) override;
  void GetNetworkList(uint32_t policy, GetNetworkListCallback callback) override;
  void UpdateSignedTreeHead(::network::mojom::blink::SignedTreeHeadPtr signed_tree_head) override;
  void UpdateCRLSet(::mojo_base::mojom::blink::ReadOnlyBufferPtr crl_set) override;
  void OnCertDBChanged() override;
  void SetCryptConfig(CryptConfigPtr crypt_config) override;
  void AddCorbExceptionForPlugin(uint32_t process_id) override;
  void RemoveCorbExceptionForPlugin(uint32_t process_id) override;
  void OnMemoryPressure(::mojo_base::mojom::blink::MemoryPressureLevel memory_pressure_level) override;
  void SetEnvironment(WTF::Vector<EnvironmentVariablePtr> environment) override;
};
class BLINK_PLATFORM_EXPORT NetworkServiceAsyncWaiter {
 public:
  explicit NetworkServiceAsyncWaiter(NetworkService* proxy);
  ~NetworkServiceAsyncWaiter();
  void GetTotalNetworkUsages(
      WTF::Vector<::network::mojom::blink::NetworkUsagePtr>* out_total_network_usages);
  void GetNetworkList(
      uint32_t policy, base::Optional<WTF::Vector<::network::mojom::blink::NetworkInterfacePtr>>* out_networks);

 private:
  NetworkService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_BLINK_TEST_UTILS_H_