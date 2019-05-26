// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/network_context.mojom.h"


namespace network {
namespace mojom {


class  CustomProxyConfigClientInterceptorForTesting : public CustomProxyConfigClient {
  virtual CustomProxyConfigClient* GetForwardingInterface() = 0;
  void OnCustomProxyConfigUpdated(CustomProxyConfigPtr proxy_config) override;
  void MarkProxiesAsBad(base::TimeDelta bypass_duration, const net::ProxyList& bad_proxies, MarkProxiesAsBadCallback callback) override;
  void ClearBadProxiesCache() override;
};
class  CustomProxyConfigClientAsyncWaiter {
 public:
  explicit CustomProxyConfigClientAsyncWaiter(CustomProxyConfigClient* proxy);
  ~CustomProxyConfigClientAsyncWaiter();
  void MarkProxiesAsBad(
      base::TimeDelta bypass_duration, const net::ProxyList& bad_proxies);

 private:
  CustomProxyConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CustomProxyConfigClientAsyncWaiter);
};


class  TrustedHeaderClientInterceptorForTesting : public TrustedHeaderClient {
  virtual TrustedHeaderClient* GetForwardingInterface() = 0;
  void OnBeforeSendHeaders(const net::HttpRequestHeaders& headers, OnBeforeSendHeadersCallback callback) override;
  void OnHeadersReceived(const std::string& headers, OnHeadersReceivedCallback callback) override;
};
class  TrustedHeaderClientAsyncWaiter {
 public:
  explicit TrustedHeaderClientAsyncWaiter(TrustedHeaderClient* proxy);
  ~TrustedHeaderClientAsyncWaiter();
  void OnBeforeSendHeaders(
      const net::HttpRequestHeaders& headers, int32_t* out_result, base::Optional<net::HttpRequestHeaders>* out_headers);
  void OnHeadersReceived(
      const std::string& headers, int32_t* out_result, base::Optional<std::string>* out_headers, GURL* out_allowed_unsafe_redirect_url);

 private:
  TrustedHeaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrustedHeaderClientAsyncWaiter);
};


class  TrustedURLLoaderHeaderClientInterceptorForTesting : public TrustedURLLoaderHeaderClient {
  virtual TrustedURLLoaderHeaderClient* GetForwardingInterface() = 0;
  void OnLoaderCreated(int32_t request_id, TrustedHeaderClientRequest header_client) override;
};
class  TrustedURLLoaderHeaderClientAsyncWaiter {
 public:
  explicit TrustedURLLoaderHeaderClientAsyncWaiter(TrustedURLLoaderHeaderClient* proxy);
  ~TrustedURLLoaderHeaderClientAsyncWaiter();

 private:
  TrustedURLLoaderHeaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrustedURLLoaderHeaderClientAsyncWaiter);
};


class  NetworkContextClientInterceptorForTesting : public NetworkContextClient {
  virtual NetworkContextClient* GetForwardingInterface() = 0;
  void OnCanSendReportingReports(const std::vector<url::Origin>& origins, OnCanSendReportingReportsCallback callback) override;
  void OnCanSendDomainReliabilityUpload(const GURL& origin, OnCanSendDomainReliabilityUploadCallback callback) override;
};
class  NetworkContextClientAsyncWaiter {
 public:
  explicit NetworkContextClientAsyncWaiter(NetworkContextClient* proxy);
  ~NetworkContextClientAsyncWaiter();
  void OnCanSendReportingReports(
      const std::vector<url::Origin>& origins, std::vector<url::Origin>* out_origins);
  void OnCanSendDomainReliabilityUpload(
      const GURL& origin, bool* out_allowed);

 private:
  NetworkContextClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextClientAsyncWaiter);
};


class  NetworkContextInterceptorForTesting : public NetworkContext {
  virtual NetworkContext* GetForwardingInterface() = 0;
  void SetClient(NetworkContextClientPtr client) override;
  void CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) override;
  void ResetURLLoaderFactories() override;
  void GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) override;
  void GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, const url::Origin& origin) override;
  void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) override;
  void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) override;
  void ComputeHttpCacheSize(base::Time start_time, base::Time end_time, ComputeHttpCacheSizeCallback callback) override;
  void NotifyExternalCacheHit(const GURL& url, const std::string& http_method, const base::Optional<url::Origin>& top_frame_origin) override;
  void WriteCacheMetadata(const GURL& url, net::RequestPriority priority, base::Time expected_response_time, mojo_base::BigBuffer data) override;
  void ClearHostCache(ClearDataFilterPtr filter, ClearHostCacheCallback callback) override;
  void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) override;
  void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) override;
  void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) override;
  void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) override;
  void ClearDomainReliability(ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode, ClearDomainReliabilityCallback callback) override;
  void GetDomainReliabilityJSON(GetDomainReliabilityJSONCallback callback) override;
  void QueueReport(const std::string& type, const std::string& group, const GURL& url, const base::Optional<std::string>& user_agent, base::Value body) override;
  void QueueSignedExchangeReport(SignedExchangeReportPtr report) override;
  void CloseAllConnections(CloseAllConnectionsCallback callback) override;
  void CloseIdleConnections(CloseIdleConnectionsCallback callback) override;
  void SetNetworkConditions(const base::UnguessableToken& throttling_profile_id, NetworkConditionsPtr conditions) override;
  void SetAcceptLanguage(const std::string& new_accept_language) override;
  void SetEnableReferrers(bool enable_referrers) override;
  void SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) override;
  void AddExpectCT(const std::string& host, base::Time expiry, bool enforce, const GURL& report_uri, AddExpectCTCallback callback) override;
  void SetExpectCTTestReport(const GURL& report_uri, SetExpectCTTestReportCallback callback) override;
  void GetExpectCTState(const std::string& domain, GetExpectCTStateCallback callback) override;
  void CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) override;
  void CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) override;
  void CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) override;
  void CreateTCPBoundSocket(const net::IPEndPoint& local_addr, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPBoundSocketRequest socket, CreateTCPBoundSocketCallback callback) override;
  void CreateProxyResolvingSocketFactory(::network::mojom::ProxyResolvingSocketFactoryRequest factory) override;
  void LookUpProxyForURL(const GURL& url, ::network::mojom::ProxyLookupClientPtr proxy_lookup_client) override;
  void ForceReloadProxyConfig(ForceReloadProxyConfigCallback callback) override;
  void ClearBadProxiesCache(ClearBadProxiesCacheCallback callback) override;
  void CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin, uint32_t options, ::network::mojom::AuthenticationHandlerPtr auth_handler, TrustedHeaderClientPtr header_client) override;
  void CreateNetLogExporter(::network::mojom::NetLogExporterRequest exporter) override;
  void PreconnectSockets(uint32_t num_streams, const GURL& url, int32_t load_flags, bool privacy_mode_enabled) override;
  void CreateP2PSocketManager(::network::mojom::P2PTrustedSocketManagerClientPtr client, ::network::mojom::P2PTrustedSocketManagerRequest trusted_socket_manager, ::network::mojom::P2PSocketManagerRequest socket_manager) override;
  void CreateMdnsResponder(::network::mojom::MdnsResponderRequest responder_request) override;
  void ResolveHost(const net::HostPortPair& host, ::network::mojom::ResolveHostParametersPtr optional_parameters, ::network::mojom::ResolveHostClientPtr response_client) override;
  void CreateHostResolver(const base::Optional<net::DnsConfigOverrides>& config_overrides, ::network::mojom::HostResolverRequest host_resolver) override;
  void VerifyCertForSignedExchange(const scoped_refptr<net::X509Certificate>& certificate, const GURL& url, const std::string& ocsp_response, const std::string& sct_list, VerifyCertForSignedExchangeCallback callback) override;
  void AddHSTS(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSCallback callback) override;
  void IsHSTSActiveForHost(const std::string& host, IsHSTSActiveForHostCallback callback) override;
  void GetHSTSState(const std::string& domain, GetHSTSStateCallback callback) override;
  void SetCorsOriginAccessListsForOrigin(const url::Origin& source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> block_patterns, SetCorsOriginAccessListsForOriginCallback callback) override;
  void DeleteDynamicDataForHost(const std::string& host, DeleteDynamicDataForHostCallback callback) override;
  void SaveHttpAuthCache(SaveHttpAuthCacheCallback callback) override;
  void LoadHttpAuthCache(const base::UnguessableToken& cache_key, LoadHttpAuthCacheCallback callback) override;
  void LookupBasicAuthCredentials(const GURL& url, LookupBasicAuthCredentialsCallback callback) override;
  void EnableStaticKeyPinningForTesting(EnableStaticKeyPinningForTestingCallback callback) override;
  void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) override;
  void VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, VerifyCertificateForTestingCallback callback) override;
  void AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url, AddDomainReliabilityContextForTestingCallback callback) override;
  void ForceDomainReliabilityUploadsForTesting(ForceDomainReliabilityUploadsForTestingCallback callback) override;
  void GetOriginPolicyManager(::network::mojom::OriginPolicyManagerRequest origin_policy_manager) override;
};
class  NetworkContextAsyncWaiter {
 public:
  explicit NetworkContextAsyncWaiter(NetworkContext* proxy);
  ~NetworkContextAsyncWaiter();
  void ClearNetworkingHistorySince(
      base::Time start_time);
  void ClearHttpCache(
      base::Time start_time, base::Time end_time, ClearDataFilterPtr filter);
  void ComputeHttpCacheSize(
      base::Time start_time, base::Time end_time, bool* out_is_upper_bound, int64_t* out_size_or_error);
  void ClearHostCache(
      ClearDataFilterPtr filter);
  void ClearHttpAuthCache(
      base::Time start_time);
  void ClearReportingCacheReports(
      ClearDataFilterPtr filter);
  void ClearReportingCacheClients(
      ClearDataFilterPtr filter);
  void ClearNetworkErrorLogging(
      ClearDataFilterPtr filter);
  void ClearDomainReliability(
      ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode);
  void GetDomainReliabilityJSON(
      base::Value* out_data);
  void CloseAllConnections(
      );
  void CloseIdleConnections(
      );
  void AddExpectCT(
      const std::string& host, base::Time expiry, bool enforce, const GURL& report_uri, bool* out_success);
  void SetExpectCTTestReport(
      const GURL& report_uri, bool* out_success);
  void GetExpectCTState(
      const std::string& domain, base::Value* out_state);
  void CreateTCPServerSocket(
      const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out);
  void CreateTCPConnectedSocket(
      const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr, base::Optional<net::IPEndPoint>* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);
  void CreateTCPBoundSocket(
      const net::IPEndPoint& local_addr, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPBoundSocketRequest socket, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr);
  void ForceReloadProxyConfig(
      );
  void ClearBadProxiesCache(
      );
  void VerifyCertForSignedExchange(
      const scoped_refptr<net::X509Certificate>& certificate, const GURL& url, const std::string& ocsp_response, const std::string& sct_list, int32_t* out_error_code, net::CertVerifyResult* out_cv_result, net::ct::CTVerifyResult* out_ct_result);
  void AddHSTS(
      const std::string& host, base::Time expiry, bool include_subdomains);
  void IsHSTSActiveForHost(
      const std::string& host, bool* out_result);
  void GetHSTSState(
      const std::string& domain, base::Value* out_state);
  void SetCorsOriginAccessListsForOrigin(
      const url::Origin& source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> block_patterns);
  void DeleteDynamicDataForHost(
      const std::string& host, bool* out_result);
  void SaveHttpAuthCache(
      base::UnguessableToken* out_cache_key);
  void LoadHttpAuthCache(
      const base::UnguessableToken& cache_key);
  void LookupBasicAuthCredentials(
      const GURL& url, base::Optional<net::AuthCredentials>* out_credentials);
  void EnableStaticKeyPinningForTesting(
      );
  void SetFailingHttpTransactionForTesting(
      int32_t rv);
  void VerifyCertificateForTesting(
      const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, int32_t* out_error_code);
  void AddDomainReliabilityContextForTesting(
      const GURL& origin, const GURL& upload_url);
  void ForceDomainReliabilityUploadsForTesting(
      );

 private:
  NetworkContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_TEST_UTILS_H_