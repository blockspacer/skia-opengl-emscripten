// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/network_context.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT CustomProxyConfigClientInterceptorForTesting : public CustomProxyConfigClient {
  virtual CustomProxyConfigClient* GetForwardingInterface() = 0;
  void OnCustomProxyConfigUpdated(CustomProxyConfigPtr proxy_config) override;
  void MarkProxiesAsBad(base::TimeDelta bypass_duration, ::network::mojom::blink::ProxyListPtr bad_proxies, MarkProxiesAsBadCallback callback) override;
  void ClearBadProxiesCache() override;
};
class BLINK_PLATFORM_EXPORT CustomProxyConfigClientAsyncWaiter {
 public:
  explicit CustomProxyConfigClientAsyncWaiter(CustomProxyConfigClient* proxy);
  ~CustomProxyConfigClientAsyncWaiter();
  void MarkProxiesAsBad(
      base::TimeDelta bypass_duration, ::network::mojom::blink::ProxyListPtr bad_proxies);

 private:
  CustomProxyConfigClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CustomProxyConfigClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT TrustedHeaderClientInterceptorForTesting : public TrustedHeaderClient {
  virtual TrustedHeaderClient* GetForwardingInterface() = 0;
  void OnBeforeSendHeaders(const ::blink::HTTPHeaderMap& headers, OnBeforeSendHeadersCallback callback) override;
  void OnHeadersReceived(const WTF::String& headers, OnHeadersReceivedCallback callback) override;
};
class BLINK_PLATFORM_EXPORT TrustedHeaderClientAsyncWaiter {
 public:
  explicit TrustedHeaderClientAsyncWaiter(TrustedHeaderClient* proxy);
  ~TrustedHeaderClientAsyncWaiter();
  void OnBeforeSendHeaders(
      const ::blink::HTTPHeaderMap& headers, int32_t* out_result, base::Optional<::blink::HTTPHeaderMap>* out_headers);
  void OnHeadersReceived(
      const WTF::String& headers, int32_t* out_result, WTF::String* out_headers, ::blink::KURL* out_allowed_unsafe_redirect_url);

 private:
  TrustedHeaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrustedHeaderClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT TrustedURLLoaderHeaderClientInterceptorForTesting : public TrustedURLLoaderHeaderClient {
  virtual TrustedURLLoaderHeaderClient* GetForwardingInterface() = 0;
  void OnLoaderCreated(int32_t request_id, TrustedHeaderClientRequest header_client) override;
};
class BLINK_PLATFORM_EXPORT TrustedURLLoaderHeaderClientAsyncWaiter {
 public:
  explicit TrustedURLLoaderHeaderClientAsyncWaiter(TrustedURLLoaderHeaderClient* proxy);
  ~TrustedURLLoaderHeaderClientAsyncWaiter();

 private:
  TrustedURLLoaderHeaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TrustedURLLoaderHeaderClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT NetworkContextClientInterceptorForTesting : public NetworkContextClient {
  virtual NetworkContextClient* GetForwardingInterface() = 0;
  void OnCanSendReportingReports(const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& origins, OnCanSendReportingReportsCallback callback) override;
  void OnCanSendDomainReliabilityUpload(const ::blink::KURL& origin, OnCanSendDomainReliabilityUploadCallback callback) override;
};
class BLINK_PLATFORM_EXPORT NetworkContextClientAsyncWaiter {
 public:
  explicit NetworkContextClientAsyncWaiter(NetworkContextClient* proxy);
  ~NetworkContextClientAsyncWaiter();
  void OnCanSendReportingReports(
      const WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>& origins, WTF::Vector<scoped_refptr<const ::blink::SecurityOrigin>>* out_origins);
  void OnCanSendDomainReliabilityUpload(
      const ::blink::KURL& origin, bool* out_allowed);

 private:
  NetworkContextClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT NetworkContextInterceptorForTesting : public NetworkContext {
  virtual NetworkContext* GetForwardingInterface() = 0;
  void SetClient(NetworkContextClientPtr client) override;
  void CreateURLLoaderFactory(::network::mojom::blink::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) override;
  void ResetURLLoaderFactories() override;
  void GetCookieManager(::network::mojom::blink::CookieManagerRequest cookie_manager) override;
  void GetRestrictedCookieManager(::network::mojom::blink::RestrictedCookieManagerRequest restricted_cookie_manager, const scoped_refptr<const ::blink::SecurityOrigin>& origin) override;
  void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) override;
  void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) override;
  void ComputeHttpCacheSize(base::Time start_time, base::Time end_time, ComputeHttpCacheSizeCallback callback) override;
  void NotifyExternalCacheHit(const ::blink::KURL& url, const WTF::String& http_method, const scoped_refptr<const ::blink::SecurityOrigin>& top_frame_origin) override;
  void WriteCacheMetadata(const ::blink::KURL& url, ::network::mojom::blink::RequestPriority priority, base::Time expected_response_time, mojo_base::BigBuffer data) override;
  void ClearHostCache(ClearDataFilterPtr filter, ClearHostCacheCallback callback) override;
  void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) override;
  void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) override;
  void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) override;
  void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) override;
  void ClearDomainReliability(ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode, ClearDomainReliabilityCallback callback) override;
  void GetDomainReliabilityJSON(GetDomainReliabilityJSONCallback callback) override;
  void QueueReport(const WTF::String& type, const WTF::String& group, const ::blink::KURL& url, const WTF::String& user_agent, ::mojo_base::mojom::blink::DictionaryValuePtr body) override;
  void QueueSignedExchangeReport(SignedExchangeReportPtr report) override;
  void CloseAllConnections(CloseAllConnectionsCallback callback) override;
  void CloseIdleConnections(CloseIdleConnectionsCallback callback) override;
  void SetNetworkConditions(const base::UnguessableToken& throttling_profile_id, NetworkConditionsPtr conditions) override;
  void SetAcceptLanguage(const WTF::String& new_accept_language) override;
  void SetEnableReferrers(bool enable_referrers) override;
  void SetCTPolicy(const WTF::Vector<WTF::String>& required_hosts, const WTF::Vector<WTF::String>& excluded_hosts, const WTF::Vector<WTF::String>& excluded_spkis, const WTF::Vector<WTF::String>& excluded_legacy_spkis) override;
  void AddExpectCT(const WTF::String& host, base::Time expiry, bool enforce, const ::blink::KURL& report_uri, AddExpectCTCallback callback) override;
  void SetExpectCTTestReport(const ::blink::KURL& report_uri, SetExpectCTTestReportCallback callback) override;
  void GetExpectCTState(const WTF::String& domain, GetExpectCTStateCallback callback) override;
  void CreateUDPSocket(::network::mojom::blink::UDPSocketRequest request, ::network::mojom::blink::UDPSocketReceiverPtr receiver) override;
  void CreateTCPServerSocket(::network::mojom::blink::IPEndPointPtr local_addr, uint32_t backlog, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) override;
  void CreateTCPConnectedSocket(::network::mojom::blink::IPEndPointPtr local_addr, ::network::mojom::blink::AddressListPtr remote_addr_list, ::network::mojom::blink::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TCPConnectedSocketRequest socket, ::network::mojom::blink::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) override;
  void CreateTCPBoundSocket(::network::mojom::blink::IPEndPointPtr local_addr, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TCPBoundSocketRequest socket, CreateTCPBoundSocketCallback callback) override;
  void CreateProxyResolvingSocketFactory(::network::mojom::blink::ProxyResolvingSocketFactoryRequest factory) override;
  void LookUpProxyForURL(const ::blink::KURL& url, ::network::mojom::blink::ProxyLookupClientPtr proxy_lookup_client) override;
  void ForceReloadProxyConfig(ForceReloadProxyConfigCallback callback) override;
  void ClearBadProxiesCache(ClearBadProxiesCacheCallback callback) override;
  void CreateWebSocket(::network::mojom::blink::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const scoped_refptr<const ::blink::SecurityOrigin>& origin, uint32_t options, ::network::mojom::blink::AuthenticationHandlerPtr auth_handler, TrustedHeaderClientPtr header_client) override;
  void CreateNetLogExporter(::network::mojom::blink::NetLogExporterRequest exporter) override;
  void PreconnectSockets(uint32_t num_streams, const ::blink::KURL& url, int32_t load_flags, bool privacy_mode_enabled) override;
  void CreateP2PSocketManager(::network::mojom::blink::P2PTrustedSocketManagerClientPtr client, ::network::mojom::blink::P2PTrustedSocketManagerRequest trusted_socket_manager, ::network::mojom::blink::P2PSocketManagerRequest socket_manager) override;
  void CreateMdnsResponder(::network::mojom::blink::MdnsResponderRequest responder_request) override;
  void ResolveHost(::network::mojom::blink::HostPortPairPtr host, ::network::mojom::blink::ResolveHostParametersPtr optional_parameters, ::network::mojom::blink::ResolveHostClientPtr response_client) override;
  void CreateHostResolver(::network::mojom::blink::DnsConfigOverridesPtr config_overrides, ::network::mojom::blink::HostResolverRequest host_resolver) override;
  void VerifyCertForSignedExchange(::network::mojom::blink::X509CertificatePtr certificate, const ::blink::KURL& url, const WTF::String& ocsp_response, const WTF::String& sct_list, VerifyCertForSignedExchangeCallback callback) override;
  void AddHSTS(const WTF::String& host, base::Time expiry, bool include_subdomains, AddHSTSCallback callback) override;
  void IsHSTSActiveForHost(const WTF::String& host, IsHSTSActiveForHostCallback callback) override;
  void GetHSTSState(const WTF::String& domain, GetHSTSStateCallback callback) override;
  void SetCorsOriginAccessListsForOrigin(const scoped_refptr<const ::blink::SecurityOrigin>& source_origin, WTF::Vector<::network::mojom::blink::CorsOriginPatternPtr> allow_patterns, WTF::Vector<::network::mojom::blink::CorsOriginPatternPtr> block_patterns, SetCorsOriginAccessListsForOriginCallback callback) override;
  void DeleteDynamicDataForHost(const WTF::String& host, DeleteDynamicDataForHostCallback callback) override;
  void SaveHttpAuthCache(SaveHttpAuthCacheCallback callback) override;
  void LoadHttpAuthCache(const base::UnguessableToken& cache_key, LoadHttpAuthCacheCallback callback) override;
  void LookupBasicAuthCredentials(const ::blink::KURL& url, LookupBasicAuthCredentialsCallback callback) override;
  void EnableStaticKeyPinningForTesting(EnableStaticKeyPinningForTestingCallback callback) override;
  void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) override;
  void VerifyCertificateForTesting(::network::mojom::blink::X509CertificatePtr certificate, const WTF::String& hostname, const WTF::String& ocsp_response, VerifyCertificateForTestingCallback callback) override;
  void AddDomainReliabilityContextForTesting(const ::blink::KURL& origin, const ::blink::KURL& upload_url, AddDomainReliabilityContextForTestingCallback callback) override;
  void ForceDomainReliabilityUploadsForTesting(ForceDomainReliabilityUploadsForTestingCallback callback) override;
  void GetOriginPolicyManager(::network::mojom::blink::OriginPolicyManagerRequest origin_policy_manager) override;
};
class BLINK_PLATFORM_EXPORT NetworkContextAsyncWaiter {
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
      ::mojo_base::mojom::blink::ValuePtr* out_data);
  void CloseAllConnections(
      );
  void CloseIdleConnections(
      );
  void AddExpectCT(
      const WTF::String& host, base::Time expiry, bool enforce, const ::blink::KURL& report_uri, bool* out_success);
  void SetExpectCTTestReport(
      const ::blink::KURL& report_uri, bool* out_success);
  void GetExpectCTState(
      const WTF::String& domain, ::mojo_base::mojom::blink::DictionaryValuePtr* out_state);
  void CreateTCPServerSocket(
      ::network::mojom::blink::IPEndPointPtr local_addr, uint32_t backlog, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TCPServerSocketRequest socket, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr_out);
  void CreateTCPConnectedSocket(
      ::network::mojom::blink::IPEndPointPtr local_addr, ::network::mojom::blink::AddressListPtr remote_addr_list, ::network::mojom::blink::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TCPConnectedSocketRequest socket, ::network::mojom::blink::SocketObserverPtr observer, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr, ::network::mojom::blink::IPEndPointPtr* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream);
  void CreateTCPBoundSocket(
      ::network::mojom::blink::IPEndPointPtr local_addr, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TCPBoundSocketRequest socket, int32_t* out_result, ::network::mojom::blink::IPEndPointPtr* out_local_addr);
  void ForceReloadProxyConfig(
      );
  void ClearBadProxiesCache(
      );
  void VerifyCertForSignedExchange(
      ::network::mojom::blink::X509CertificatePtr certificate, const ::blink::KURL& url, const WTF::String& ocsp_response, const WTF::String& sct_list, int32_t* out_error_code, ::network::mojom::blink::CertVerifyResultPtr* out_cv_result, ::network::mojom::blink::CTVerifyResultPtr* out_ct_result);
  void AddHSTS(
      const WTF::String& host, base::Time expiry, bool include_subdomains);
  void IsHSTSActiveForHost(
      const WTF::String& host, bool* out_result);
  void GetHSTSState(
      const WTF::String& domain, ::mojo_base::mojom::blink::DictionaryValuePtr* out_state);
  void SetCorsOriginAccessListsForOrigin(
      const scoped_refptr<const ::blink::SecurityOrigin>& source_origin, WTF::Vector<::network::mojom::blink::CorsOriginPatternPtr> allow_patterns, WTF::Vector<::network::mojom::blink::CorsOriginPatternPtr> block_patterns);
  void DeleteDynamicDataForHost(
      const WTF::String& host, bool* out_result);
  void SaveHttpAuthCache(
      base::UnguessableToken* out_cache_key);
  void LoadHttpAuthCache(
      const base::UnguessableToken& cache_key);
  void LookupBasicAuthCredentials(
      const ::blink::KURL& url, ::network::mojom::blink::AuthCredentialsPtr* out_credentials);
  void EnableStaticKeyPinningForTesting(
      );
  void SetFailingHttpTransactionForTesting(
      int32_t rv);
  void VerifyCertificateForTesting(
      ::network::mojom::blink::X509CertificatePtr certificate, const WTF::String& hostname, const WTF::String& ocsp_response, int32_t* out_error_code);
  void AddDomainReliabilityContextForTesting(
      const ::blink::KURL& origin, const ::blink::KURL& upload_url);
  void ForceDomainReliabilityUploadsForTesting(
      );

 private:
  NetworkContext* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_BLINK_TEST_UTILS_H_