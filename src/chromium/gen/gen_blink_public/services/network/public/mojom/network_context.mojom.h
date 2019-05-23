// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/network/public/mojom/network_context.mojom-shared.h"
#include "services/network/public/mojom/network_context.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include "services/network/public/mojom/address_list.mojom.h"
#include "services/network/public/mojom/cookie_manager.mojom.h"
#include "services/network/public/mojom/cors_origin_pattern.mojom.h"
#include "services/network/public/mojom/host_resolver.mojom.h"
#include "services/network/public/mojom/http_request_headers.mojom.h"
#include "services/network/public/mojom/ip_address.mojom.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/mdns_responder.mojom.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.h"
#include "services/network/public/mojom/net_log.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "services/network/public/mojom/origin_policy_manager.mojom.h"
#include "services/network/public/mojom/p2p.mojom.h"
#include "services/network/public/mojom/p2p_trusted.mojom.h"
#include "services/network/public/mojom/proxy_config.mojom.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom.h"
#include "services/network/public/mojom/proxy_resolving_socket.mojom.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom.h"
#include "services/network/public/mojom/ssl_config.mojom.h"
#include "services/network/public/mojom/tcp_socket.mojom.h"
#include "services/network/public/mojom/udp_socket.mojom.h"
#include "services/network/public/mojom/url_loader.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "services/network/public/mojom/websocket.mojom.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/ct_log_info.mojom.h"
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {

class CustomProxyConfigClientProxy;

template <typename ImplRefTraits>
class CustomProxyConfigClientStub;

class CustomProxyConfigClientRequestValidator;
class CustomProxyConfigClientResponseValidator;


class  CustomProxyConfigClient
    : public CustomProxyConfigClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CustomProxyConfigClientInterfaceBase;
  using Proxy_ = CustomProxyConfigClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = CustomProxyConfigClientStub<ImplRefTraits>;

  using RequestValidator_ = CustomProxyConfigClientRequestValidator;
  using ResponseValidator_ = CustomProxyConfigClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnCustomProxyConfigUpdatedMinVersion = 0,
    kMarkProxiesAsBadMinVersion = 0,
    kClearBadProxiesCacheMinVersion = 0,
  };
  virtual ~CustomProxyConfigClient() {}

  
  virtual void OnCustomProxyConfigUpdated(CustomProxyConfigPtr proxy_config) = 0;


  using MarkProxiesAsBadCallback = base::OnceCallback<void()>;
  
  virtual void MarkProxiesAsBad(base::TimeDelta bypass_duration, const net::ProxyList& bad_proxies, MarkProxiesAsBadCallback callback) = 0;

  
  virtual void ClearBadProxiesCache() = 0;
};

class TrustedHeaderClientProxy;

template <typename ImplRefTraits>
class TrustedHeaderClientStub;

class TrustedHeaderClientRequestValidator;
class TrustedHeaderClientResponseValidator;


class  TrustedHeaderClient
    : public TrustedHeaderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TrustedHeaderClientInterfaceBase;
  using Proxy_ = TrustedHeaderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TrustedHeaderClientStub<ImplRefTraits>;

  using RequestValidator_ = TrustedHeaderClientRequestValidator;
  using ResponseValidator_ = TrustedHeaderClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnBeforeSendHeadersMinVersion = 0,
    kOnHeadersReceivedMinVersion = 0,
  };
  virtual ~TrustedHeaderClient() {}


  using OnBeforeSendHeadersCallback = base::OnceCallback<void(int32_t, const base::Optional<net::HttpRequestHeaders>&)>;
  
  virtual void OnBeforeSendHeaders(const net::HttpRequestHeaders& headers, OnBeforeSendHeadersCallback callback) = 0;


  using OnHeadersReceivedCallback = base::OnceCallback<void(int32_t, const base::Optional<std::string>&, const GURL&)>;
  
  virtual void OnHeadersReceived(const std::string& headers, OnHeadersReceivedCallback callback) = 0;
};

class TrustedURLLoaderHeaderClientProxy;

template <typename ImplRefTraits>
class TrustedURLLoaderHeaderClientStub;

class TrustedURLLoaderHeaderClientRequestValidator;


class  TrustedURLLoaderHeaderClient
    : public TrustedURLLoaderHeaderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TrustedURLLoaderHeaderClientInterfaceBase;
  using Proxy_ = TrustedURLLoaderHeaderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TrustedURLLoaderHeaderClientStub<ImplRefTraits>;

  using RequestValidator_ = TrustedURLLoaderHeaderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnLoaderCreatedMinVersion = 0,
  };
  virtual ~TrustedURLLoaderHeaderClient() {}

  
  virtual void OnLoaderCreated(int32_t request_id, TrustedHeaderClientRequest header_client) = 0;
};

class NetworkContextClientProxy;

template <typename ImplRefTraits>
class NetworkContextClientStub;

class NetworkContextClientRequestValidator;
class NetworkContextClientResponseValidator;


class  NetworkContextClient
    : public NetworkContextClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NetworkContextClientInterfaceBase;
  using Proxy_ = NetworkContextClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkContextClientStub<ImplRefTraits>;

  using RequestValidator_ = NetworkContextClientRequestValidator;
  using ResponseValidator_ = NetworkContextClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnCanSendReportingReportsMinVersion = 0,
    kOnCanSendDomainReliabilityUploadMinVersion = 0,
  };
  virtual ~NetworkContextClient() {}


  using OnCanSendReportingReportsCallback = base::OnceCallback<void(const std::vector<url::Origin>&)>;
  
  virtual void OnCanSendReportingReports(const std::vector<url::Origin>& origins, OnCanSendReportingReportsCallback callback) = 0;


  using OnCanSendDomainReliabilityUploadCallback = base::OnceCallback<void(bool)>;
  
  virtual void OnCanSendDomainReliabilityUpload(const GURL& origin, OnCanSendDomainReliabilityUploadCallback callback) = 0;
};

class NetworkContextProxy;

template <typename ImplRefTraits>
class NetworkContextStub;

class NetworkContextRequestValidator;
class NetworkContextResponseValidator;


class  NetworkContext
    : public NetworkContextInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = NetworkContextInterfaceBase;
  using Proxy_ = NetworkContextProxy;

  template <typename ImplRefTraits>
  using Stub_ = NetworkContextStub<ImplRefTraits>;

  using RequestValidator_ = NetworkContextRequestValidator;
  using ResponseValidator_ = NetworkContextResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kCreateURLLoaderFactoryMinVersion = 0,
    kResetURLLoaderFactoriesMinVersion = 0,
    kGetCookieManagerMinVersion = 0,
    kGetRestrictedCookieManagerMinVersion = 0,
    kClearNetworkingHistorySinceMinVersion = 0,
    kClearHttpCacheMinVersion = 0,
    kComputeHttpCacheSizeMinVersion = 0,
    kNotifyExternalCacheHitMinVersion = 0,
    kWriteCacheMetadataMinVersion = 0,
    kClearHostCacheMinVersion = 0,
    kClearHttpAuthCacheMinVersion = 0,
    kClearReportingCacheReportsMinVersion = 0,
    kClearReportingCacheClientsMinVersion = 0,
    kClearNetworkErrorLoggingMinVersion = 0,
    kClearDomainReliabilityMinVersion = 0,
    kGetDomainReliabilityJSONMinVersion = 0,
    kQueueReportMinVersion = 0,
    kQueueSignedExchangeReportMinVersion = 0,
    kCloseAllConnectionsMinVersion = 0,
    kCloseIdleConnectionsMinVersion = 0,
    kSetNetworkConditionsMinVersion = 0,
    kSetAcceptLanguageMinVersion = 0,
    kSetEnableReferrersMinVersion = 0,
    kSetCTPolicyMinVersion = 0,
    kAddExpectCTMinVersion = 0,
    kSetExpectCTTestReportMinVersion = 0,
    kGetExpectCTStateMinVersion = 0,
    kCreateUDPSocketMinVersion = 0,
    kCreateTCPServerSocketMinVersion = 0,
    kCreateTCPConnectedSocketMinVersion = 0,
    kCreateTCPBoundSocketMinVersion = 0,
    kCreateProxyResolvingSocketFactoryMinVersion = 0,
    kLookUpProxyForURLMinVersion = 0,
    kForceReloadProxyConfigMinVersion = 0,
    kClearBadProxiesCacheMinVersion = 0,
    kCreateWebSocketMinVersion = 0,
    kCreateNetLogExporterMinVersion = 0,
    kPreconnectSocketsMinVersion = 0,
    kCreateP2PSocketManagerMinVersion = 0,
    kCreateMdnsResponderMinVersion = 0,
    kResolveHostMinVersion = 0,
    kCreateHostResolverMinVersion = 0,
    kVerifyCertForSignedExchangeMinVersion = 0,
    kAddHSTSMinVersion = 0,
    kIsHSTSActiveForHostMinVersion = 0,
    kGetHSTSStateMinVersion = 0,
    kSetCorsOriginAccessListsForOriginMinVersion = 0,
    kDeleteDynamicDataForHostMinVersion = 0,
    kSaveHttpAuthCacheMinVersion = 0,
    kLoadHttpAuthCacheMinVersion = 0,
    kLookupBasicAuthCredentialsMinVersion = 0,
    kEnableStaticKeyPinningForTestingMinVersion = 0,
    kSetFailingHttpTransactionForTestingMinVersion = 0,
    kVerifyCertificateForTestingMinVersion = 0,
    kAddDomainReliabilityContextForTestingMinVersion = 0,
    kForceDomainReliabilityUploadsForTestingMinVersion = 0,
    kGetOriginPolicyManagerMinVersion = 0,
  };
  
  using DomainReliabilityClearMode = NetworkContext_DomainReliabilityClearMode;
  virtual ~NetworkContext() {}

  
  virtual void SetClient(NetworkContextClientPtr client) = 0;

  
  virtual void CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) = 0;

  
  virtual void ResetURLLoaderFactories() = 0;

  
  virtual void GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) = 0;

  
  virtual void GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, const url::Origin& origin) = 0;


  using ClearNetworkingHistorySinceCallback = base::OnceCallback<void()>;
  
  virtual void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) = 0;


  using ClearHttpCacheCallback = base::OnceCallback<void()>;
  
  virtual void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) = 0;


  using ComputeHttpCacheSizeCallback = base::OnceCallback<void(bool, int64_t)>;
  
  virtual void ComputeHttpCacheSize(base::Time start_time, base::Time end_time, ComputeHttpCacheSizeCallback callback) = 0;

  
  virtual void NotifyExternalCacheHit(const GURL& url, const std::string& http_method, const base::Optional<url::Origin>& top_frame_origin) = 0;

  
  virtual void WriteCacheMetadata(const GURL& url, net::RequestPriority priority, base::Time expected_response_time, mojo_base::BigBuffer data) = 0;


  using ClearHostCacheCallback = base::OnceCallback<void()>;
  
  virtual void ClearHostCache(ClearDataFilterPtr filter, ClearHostCacheCallback callback) = 0;


  using ClearHttpAuthCacheCallback = base::OnceCallback<void()>;
  
  virtual void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) = 0;


  using ClearReportingCacheReportsCallback = base::OnceCallback<void()>;
  
  virtual void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) = 0;


  using ClearReportingCacheClientsCallback = base::OnceCallback<void()>;
  
  virtual void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) = 0;


  using ClearNetworkErrorLoggingCallback = base::OnceCallback<void()>;
  
  virtual void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) = 0;


  using ClearDomainReliabilityCallback = base::OnceCallback<void()>;
  
  virtual void ClearDomainReliability(ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode, ClearDomainReliabilityCallback callback) = 0;


  using GetDomainReliabilityJSONCallback = base::OnceCallback<void(base::Value)>;
  
  virtual void GetDomainReliabilityJSON(GetDomainReliabilityJSONCallback callback) = 0;

  
  virtual void QueueReport(const std::string& type, const std::string& group, const GURL& url, const base::Optional<std::string>& user_agent, base::Value body) = 0;

  
  virtual void QueueSignedExchangeReport(SignedExchangeReportPtr report) = 0;


  using CloseAllConnectionsCallback = base::OnceCallback<void()>;
  
  virtual void CloseAllConnections(CloseAllConnectionsCallback callback) = 0;


  using CloseIdleConnectionsCallback = base::OnceCallback<void()>;
  
  virtual void CloseIdleConnections(CloseIdleConnectionsCallback callback) = 0;

  
  virtual void SetNetworkConditions(const base::UnguessableToken& throttling_profile_id, NetworkConditionsPtr conditions) = 0;

  
  virtual void SetAcceptLanguage(const std::string& new_accept_language) = 0;

  
  virtual void SetEnableReferrers(bool enable_referrers) = 0;

  
  virtual void SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) = 0;


  using AddExpectCTCallback = base::OnceCallback<void(bool)>;
  
  virtual void AddExpectCT(const std::string& host, base::Time expiry, bool enforce, const GURL& report_uri, AddExpectCTCallback callback) = 0;


  using SetExpectCTTestReportCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetExpectCTTestReport(const GURL& report_uri, SetExpectCTTestReportCallback callback) = 0;


  using GetExpectCTStateCallback = base::OnceCallback<void(base::Value)>;
  
  virtual void GetExpectCTState(const std::string& domain, GetExpectCTStateCallback callback) = 0;

  
  virtual void CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) = 0;


  using CreateTCPServerSocketCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&)>;
  
  virtual void CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) = 0;


  using CreateTCPConnectedSocketCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&, const base::Optional<net::IPEndPoint>&, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  
  virtual void CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) = 0;


  using CreateTCPBoundSocketCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&)>;
  
  virtual void CreateTCPBoundSocket(const net::IPEndPoint& local_addr, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPBoundSocketRequest socket, CreateTCPBoundSocketCallback callback) = 0;

  
  virtual void CreateProxyResolvingSocketFactory(::network::mojom::ProxyResolvingSocketFactoryRequest factory) = 0;

  
  virtual void LookUpProxyForURL(const GURL& url, ::network::mojom::ProxyLookupClientPtr proxy_lookup_client) = 0;


  using ForceReloadProxyConfigCallback = base::OnceCallback<void()>;
  
  virtual void ForceReloadProxyConfig(ForceReloadProxyConfigCallback callback) = 0;


  using ClearBadProxiesCacheCallback = base::OnceCallback<void()>;
  
  virtual void ClearBadProxiesCache(ClearBadProxiesCacheCallback callback) = 0;

  
  virtual void CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin, uint32_t options, ::network::mojom::AuthenticationHandlerPtr auth_handler, TrustedHeaderClientPtr header_client) = 0;

  
  virtual void CreateNetLogExporter(::network::mojom::NetLogExporterRequest exporter) = 0;

  
  virtual void PreconnectSockets(uint32_t num_streams, const GURL& url, int32_t load_flags, bool privacy_mode_enabled) = 0;

  
  virtual void CreateP2PSocketManager(::network::mojom::P2PTrustedSocketManagerClientPtr client, ::network::mojom::P2PTrustedSocketManagerRequest trusted_socket_manager, ::network::mojom::P2PSocketManagerRequest socket_manager) = 0;

  
  virtual void CreateMdnsResponder(::network::mojom::MdnsResponderRequest responder_request) = 0;

  
  virtual void ResolveHost(const net::HostPortPair& host, ::network::mojom::ResolveHostParametersPtr optional_parameters, ::network::mojom::ResolveHostClientPtr response_client) = 0;

  
  virtual void CreateHostResolver(const base::Optional<net::DnsConfigOverrides>& config_overrides, ::network::mojom::HostResolverRequest host_resolver) = 0;


  using VerifyCertForSignedExchangeCallback = base::OnceCallback<void(int32_t, const net::CertVerifyResult&, const net::ct::CTVerifyResult&)>;
  
  virtual void VerifyCertForSignedExchange(const scoped_refptr<net::X509Certificate>& certificate, const GURL& url, const std::string& ocsp_response, const std::string& sct_list, VerifyCertForSignedExchangeCallback callback) = 0;


  using AddHSTSCallback = base::OnceCallback<void()>;
  
  virtual void AddHSTS(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSCallback callback) = 0;


  using IsHSTSActiveForHostCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsHSTSActiveForHost(const std::string& host, IsHSTSActiveForHostCallback callback) = 0;


  using GetHSTSStateCallback = base::OnceCallback<void(base::Value)>;
  
  virtual void GetHSTSState(const std::string& domain, GetHSTSStateCallback callback) = 0;


  using SetCorsOriginAccessListsForOriginCallback = base::OnceCallback<void()>;
  
  virtual void SetCorsOriginAccessListsForOrigin(const url::Origin& source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> block_patterns, SetCorsOriginAccessListsForOriginCallback callback) = 0;


  using DeleteDynamicDataForHostCallback = base::OnceCallback<void(bool)>;
  
  virtual void DeleteDynamicDataForHost(const std::string& host, DeleteDynamicDataForHostCallback callback) = 0;


  using SaveHttpAuthCacheCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void SaveHttpAuthCache(SaveHttpAuthCacheCallback callback) = 0;


  using LoadHttpAuthCacheCallback = base::OnceCallback<void()>;
  
  virtual void LoadHttpAuthCache(const base::UnguessableToken& cache_key, LoadHttpAuthCacheCallback callback) = 0;


  using LookupBasicAuthCredentialsCallback = base::OnceCallback<void(const base::Optional<net::AuthCredentials>&)>;
  
  virtual void LookupBasicAuthCredentials(const GURL& url, LookupBasicAuthCredentialsCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool EnableStaticKeyPinningForTesting();

  using EnableStaticKeyPinningForTestingCallback = base::OnceCallback<void()>;
  
  virtual void EnableStaticKeyPinningForTesting(EnableStaticKeyPinningForTestingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool SetFailingHttpTransactionForTesting(int32_t rv);

  using SetFailingHttpTransactionForTestingCallback = base::OnceCallback<void()>;
  
  virtual void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, int32_t* out_error_code);

  using VerifyCertificateForTestingCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, VerifyCertificateForTestingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url);

  using AddDomainReliabilityContextForTestingCallback = base::OnceCallback<void()>;
  
  virtual void AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url, AddDomainReliabilityContextForTestingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ForceDomainReliabilityUploadsForTesting();

  using ForceDomainReliabilityUploadsForTestingCallback = base::OnceCallback<void()>;
  
  virtual void ForceDomainReliabilityUploadsForTesting(ForceDomainReliabilityUploadsForTestingCallback callback) = 0;

  
  virtual void GetOriginPolicyManager(::network::mojom::OriginPolicyManagerRequest origin_policy_manager) = 0;
};

class  CustomProxyConfigClientProxy
    : public CustomProxyConfigClient {
 public:
  using InterfaceType = CustomProxyConfigClient;

  explicit CustomProxyConfigClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCustomProxyConfigUpdated(CustomProxyConfigPtr proxy_config) final;
  void MarkProxiesAsBad(base::TimeDelta bypass_duration, const net::ProxyList& bad_proxies, MarkProxiesAsBadCallback callback) final;
  void ClearBadProxiesCache() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TrustedHeaderClientProxy
    : public TrustedHeaderClient {
 public:
  using InterfaceType = TrustedHeaderClient;

  explicit TrustedHeaderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnBeforeSendHeaders(const net::HttpRequestHeaders& headers, OnBeforeSendHeadersCallback callback) final;
  void OnHeadersReceived(const std::string& headers, OnHeadersReceivedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TrustedURLLoaderHeaderClientProxy
    : public TrustedURLLoaderHeaderClient {
 public:
  using InterfaceType = TrustedURLLoaderHeaderClient;

  explicit TrustedURLLoaderHeaderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnLoaderCreated(int32_t request_id, TrustedHeaderClientRequest header_client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkContextClientProxy
    : public NetworkContextClient {
 public:
  using InterfaceType = NetworkContextClient;

  explicit NetworkContextClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCanSendReportingReports(const std::vector<url::Origin>& origins, OnCanSendReportingReportsCallback callback) final;
  void OnCanSendDomainReliabilityUpload(const GURL& origin, OnCanSendDomainReliabilityUploadCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  NetworkContextProxy
    : public NetworkContext {
 public:
  using InterfaceType = NetworkContext;

  explicit NetworkContextProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(NetworkContextClientPtr client) final;
  void CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) final;
  void ResetURLLoaderFactories() final;
  void GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) final;
  void GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, const url::Origin& origin) final;
  void ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) final;
  void ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) final;
  void ComputeHttpCacheSize(base::Time start_time, base::Time end_time, ComputeHttpCacheSizeCallback callback) final;
  void NotifyExternalCacheHit(const GURL& url, const std::string& http_method, const base::Optional<url::Origin>& top_frame_origin) final;
  void WriteCacheMetadata(const GURL& url, net::RequestPriority priority, base::Time expected_response_time, mojo_base::BigBuffer data) final;
  void ClearHostCache(ClearDataFilterPtr filter, ClearHostCacheCallback callback) final;
  void ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) final;
  void ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) final;
  void ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) final;
  void ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) final;
  void ClearDomainReliability(ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode, ClearDomainReliabilityCallback callback) final;
  void GetDomainReliabilityJSON(GetDomainReliabilityJSONCallback callback) final;
  void QueueReport(const std::string& type, const std::string& group, const GURL& url, const base::Optional<std::string>& user_agent, base::Value body) final;
  void QueueSignedExchangeReport(SignedExchangeReportPtr report) final;
  void CloseAllConnections(CloseAllConnectionsCallback callback) final;
  void CloseIdleConnections(CloseIdleConnectionsCallback callback) final;
  void SetNetworkConditions(const base::UnguessableToken& throttling_profile_id, NetworkConditionsPtr conditions) final;
  void SetAcceptLanguage(const std::string& new_accept_language) final;
  void SetEnableReferrers(bool enable_referrers) final;
  void SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) final;
  void AddExpectCT(const std::string& host, base::Time expiry, bool enforce, const GURL& report_uri, AddExpectCTCallback callback) final;
  void SetExpectCTTestReport(const GURL& report_uri, SetExpectCTTestReportCallback callback) final;
  void GetExpectCTState(const std::string& domain, GetExpectCTStateCallback callback) final;
  void CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) final;
  void CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) final;
  void CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) final;
  void CreateTCPBoundSocket(const net::IPEndPoint& local_addr, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPBoundSocketRequest socket, CreateTCPBoundSocketCallback callback) final;
  void CreateProxyResolvingSocketFactory(::network::mojom::ProxyResolvingSocketFactoryRequest factory) final;
  void LookUpProxyForURL(const GURL& url, ::network::mojom::ProxyLookupClientPtr proxy_lookup_client) final;
  void ForceReloadProxyConfig(ForceReloadProxyConfigCallback callback) final;
  void ClearBadProxiesCache(ClearBadProxiesCacheCallback callback) final;
  void CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin, uint32_t options, ::network::mojom::AuthenticationHandlerPtr auth_handler, TrustedHeaderClientPtr header_client) final;
  void CreateNetLogExporter(::network::mojom::NetLogExporterRequest exporter) final;
  void PreconnectSockets(uint32_t num_streams, const GURL& url, int32_t load_flags, bool privacy_mode_enabled) final;
  void CreateP2PSocketManager(::network::mojom::P2PTrustedSocketManagerClientPtr client, ::network::mojom::P2PTrustedSocketManagerRequest trusted_socket_manager, ::network::mojom::P2PSocketManagerRequest socket_manager) final;
  void CreateMdnsResponder(::network::mojom::MdnsResponderRequest responder_request) final;
  void ResolveHost(const net::HostPortPair& host, ::network::mojom::ResolveHostParametersPtr optional_parameters, ::network::mojom::ResolveHostClientPtr response_client) final;
  void CreateHostResolver(const base::Optional<net::DnsConfigOverrides>& config_overrides, ::network::mojom::HostResolverRequest host_resolver) final;
  void VerifyCertForSignedExchange(const scoped_refptr<net::X509Certificate>& certificate, const GURL& url, const std::string& ocsp_response, const std::string& sct_list, VerifyCertForSignedExchangeCallback callback) final;
  void AddHSTS(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSCallback callback) final;
  void IsHSTSActiveForHost(const std::string& host, IsHSTSActiveForHostCallback callback) final;
  void GetHSTSState(const std::string& domain, GetHSTSStateCallback callback) final;
  void SetCorsOriginAccessListsForOrigin(const url::Origin& source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> block_patterns, SetCorsOriginAccessListsForOriginCallback callback) final;
  void DeleteDynamicDataForHost(const std::string& host, DeleteDynamicDataForHostCallback callback) final;
  void SaveHttpAuthCache(SaveHttpAuthCacheCallback callback) final;
  void LoadHttpAuthCache(const base::UnguessableToken& cache_key, LoadHttpAuthCacheCallback callback) final;
  void LookupBasicAuthCredentials(const GURL& url, LookupBasicAuthCredentialsCallback callback) final;
  bool EnableStaticKeyPinningForTesting() final;
  void EnableStaticKeyPinningForTesting(EnableStaticKeyPinningForTestingCallback callback) final;
  bool SetFailingHttpTransactionForTesting(int32_t rv) final;
  void SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) final;
  bool VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, int32_t* out_error_code) final;
  void VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, VerifyCertificateForTestingCallback callback) final;
  bool AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url) final;
  void AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url, AddDomainReliabilityContextForTestingCallback callback) final;
  bool ForceDomainReliabilityUploadsForTesting() final;
  void ForceDomainReliabilityUploadsForTesting(ForceDomainReliabilityUploadsForTestingCallback callback) final;
  void GetOriginPolicyManager(::network::mojom::OriginPolicyManagerRequest origin_policy_manager) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CustomProxyConfigClientStubDispatch {
 public:
  static bool Accept(CustomProxyConfigClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CustomProxyConfigClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CustomProxyConfigClient>>
class CustomProxyConfigClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CustomProxyConfigClientStub() {}
  ~CustomProxyConfigClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CustomProxyConfigClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CustomProxyConfigClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TrustedHeaderClientStubDispatch {
 public:
  static bool Accept(TrustedHeaderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TrustedHeaderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TrustedHeaderClient>>
class TrustedHeaderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TrustedHeaderClientStub() {}
  ~TrustedHeaderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrustedHeaderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrustedHeaderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TrustedURLLoaderHeaderClientStubDispatch {
 public:
  static bool Accept(TrustedURLLoaderHeaderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TrustedURLLoaderHeaderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TrustedURLLoaderHeaderClient>>
class TrustedURLLoaderHeaderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TrustedURLLoaderHeaderClientStub() {}
  ~TrustedURLLoaderHeaderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrustedURLLoaderHeaderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrustedURLLoaderHeaderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkContextClientStubDispatch {
 public:
  static bool Accept(NetworkContextClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkContextClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkContextClient>>
class NetworkContextClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkContextClientStub() {}
  ~NetworkContextClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkContextClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkContextClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NetworkContextStubDispatch {
 public:
  static bool Accept(NetworkContext* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NetworkContext* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NetworkContext>>
class NetworkContextStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NetworkContextStub() {}
  ~NetworkContextStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkContextStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NetworkContextStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CustomProxyConfigClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TrustedHeaderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TrustedURLLoaderHeaderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkContextClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkContextRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CustomProxyConfigClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TrustedHeaderClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkContextClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NetworkContextResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  NetworkUsage {
 public:
  using DataView = NetworkUsageDataView;
  using Data_ = internal::NetworkUsage_Data;

  template <typename... Args>
  static NetworkUsagePtr New(Args&&... args) {
    return NetworkUsagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkUsagePtr From(const U& u) {
    return mojo::TypeConverter<NetworkUsagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkUsage>::Convert(*this);
  }


  NetworkUsage();

  NetworkUsage(
      uint32_t process_id,
      uint32_t routing_id,
      int64_t total_bytes_received,
      int64_t total_bytes_sent);

  ~NetworkUsage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkUsagePtr>
  NetworkUsagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkUsage>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkUsage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkUsage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkUsage_UnserializedMessageContext<
            UserType, NetworkUsage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkUsage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkUsage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkUsage_UnserializedMessageContext<
            UserType, NetworkUsage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkUsage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t process_id;
  
  uint32_t routing_id;
  
  int64_t total_bytes_received;
  
  int64_t total_bytes_sent;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  CustomProxyConfig {
 public:
  using DataView = CustomProxyConfigDataView;
  using Data_ = internal::CustomProxyConfig_Data;

  template <typename... Args>
  static CustomProxyConfigPtr New(Args&&... args) {
    return CustomProxyConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CustomProxyConfigPtr From(const U& u) {
    return mojo::TypeConverter<CustomProxyConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CustomProxyConfig>::Convert(*this);
  }


  CustomProxyConfig();

  CustomProxyConfig(
      const net::ProxyConfig::ProxyRules& rules,
      bool should_override_existing_config,
      bool allow_non_idempotent_methods,
      bool assume_https_proxies_support_quic,
      bool can_use_proxy_on_http_url_redirect_cycles,
      const net::HttpRequestHeaders& pre_cache_headers,
      const net::HttpRequestHeaders& post_cache_headers,
      const net::HttpRequestHeaders& connect_tunnel_headers);

  ~CustomProxyConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CustomProxyConfigPtr>
  CustomProxyConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CustomProxyConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CustomProxyConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CustomProxyConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CustomProxyConfig_UnserializedMessageContext<
            UserType, CustomProxyConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CustomProxyConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CustomProxyConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CustomProxyConfig_UnserializedMessageContext<
            UserType, CustomProxyConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CustomProxyConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::ProxyConfig::ProxyRules rules;
  
  bool should_override_existing_config;
  
  bool allow_non_idempotent_methods;
  
  bool assume_https_proxies_support_quic;
  
  bool can_use_proxy_on_http_url_redirect_cycles;
  
  net::HttpRequestHeaders pre_cache_headers;
  
  net::HttpRequestHeaders post_cache_headers;
  
  net::HttpRequestHeaders connect_tunnel_headers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  NetworkContextParams {
 public:
  using DataView = NetworkContextParamsDataView;
  using Data_ = internal::NetworkContextParams_Data;

  template <typename... Args>
  static NetworkContextParamsPtr New(Args&&... args) {
    return NetworkContextParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkContextParamsPtr From(const U& u) {
    return mojo::TypeConverter<NetworkContextParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkContextParams>::Convert(*this);
  }


  NetworkContextParams();

  NetworkContextParams(
      const base::Optional<std::string>& context_name,
      const std::string& user_agent,
      const std::string& accept_language,
      bool enable_brotli,
      const std::string& quic_user_agent_id,
      bool enable_referrers,
      bool validate_referrer_policy_on_initial_request,
      ::proxy_resolver::mojom::ProxyResolverFactoryPtrInfo proxy_resolver_factory,
      const base::Optional<base::FilePath>& cookie_path,
      bool enable_encrypted_cookies,
      bool restore_old_session_cookies,
      bool persist_session_cookies,
      bool http_cache_enabled,
      int32_t http_cache_max_size,
      const base::Optional<base::FilePath>& http_cache_path,
      const base::Optional<base::FilePath>& http_server_properties_path,
      const base::Optional<base::FilePath>& transport_security_persister_path,
      bool enable_ftp_url_support,
      bool enforce_chrome_ct_policy,
      bool http_09_on_non_default_ports_enabled,
      bool disable_idle_sockets_close_on_memory_pressure,
      ::network::mojom::SSLConfigPtr initial_ssl_config,
      ::network::mojom::SSLConfigClientRequest ssl_config_client_request,
      const base::Optional<net::ProxyConfigWithAnnotation>& initial_proxy_config,
      ::network::mojom::ProxyConfigClientRequest proxy_config_client_request,
      CustomProxyConfigPtr initial_custom_proxy_config,
      CustomProxyConfigClientRequest custom_proxy_config_client_request,
      ::network::mojom::ProxyConfigPollerClientPtrInfo proxy_config_poller_client,
      ::network::mojom::ProxyErrorClientPtrInfo proxy_error_client,
      bool pac_quick_check_enabled,
      bool enable_certificate_reporting,
      bool enable_expect_ct_reporting,
      std::vector<::network::mojom::CTLogInfoPtr> ct_logs,
      ::network::mojom::TrialComparisonCertVerifierParamsPtr trial_comparison_cert_verifier_params,
      ::network::mojom::CookieManagerParamsPtr cookie_manager_params,
      bool enable_domain_reliability,
      const std::string& domain_reliability_upload_reporter,
      bool discard_domain_reliablity_uploads,
      base::Optional<base::TimeDelta> reporting_delivery_interval,
      bool skip_reporting_send_permission_check,
      bool primary_network_context,
      std::vector<::network::mojom::CorsOriginAccessPatternsPtr> cors_origin_access_list,
      const std::vector<std::string>& cors_exempt_header_list);

  ~NetworkContextParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkContextParamsPtr>
  NetworkContextParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkContextParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkContextParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkContextParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkContextParams_UnserializedMessageContext<
            UserType, NetworkContextParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkContextParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkContextParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkContextParams_UnserializedMessageContext<
            UserType, NetworkContextParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkContextParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<std::string> context_name;
  
  std::string user_agent;
  
  std::string accept_language;
  
  bool enable_brotli;
  
  std::string quic_user_agent_id;
  
  bool enable_referrers;
  
  bool validate_referrer_policy_on_initial_request;
  
  ::proxy_resolver::mojom::ProxyResolverFactoryPtrInfo proxy_resolver_factory;
  
  base::Optional<base::FilePath> cookie_path;
  
  bool enable_encrypted_cookies;
  
  bool restore_old_session_cookies;
  
  bool persist_session_cookies;
  
  bool http_cache_enabled;
  
  int32_t http_cache_max_size;
  
  base::Optional<base::FilePath> http_cache_path;
  
  base::Optional<base::FilePath> http_server_properties_path;
  
  base::Optional<base::FilePath> transport_security_persister_path;
  
  bool enable_ftp_url_support;
  
  bool enforce_chrome_ct_policy;
  
  bool http_09_on_non_default_ports_enabled;
  
  bool disable_idle_sockets_close_on_memory_pressure;
  
  ::network::mojom::SSLConfigPtr initial_ssl_config;
  
  ::network::mojom::SSLConfigClientRequest ssl_config_client_request;
  
  base::Optional<net::ProxyConfigWithAnnotation> initial_proxy_config;
  
  ::network::mojom::ProxyConfigClientRequest proxy_config_client_request;
  
  CustomProxyConfigPtr initial_custom_proxy_config;
  
  CustomProxyConfigClientRequest custom_proxy_config_client_request;
  
  ::network::mojom::ProxyConfigPollerClientPtrInfo proxy_config_poller_client;
  
  ::network::mojom::ProxyErrorClientPtrInfo proxy_error_client;
  
  bool pac_quick_check_enabled;
  
  bool enable_certificate_reporting;
  
  bool enable_expect_ct_reporting;
  
  std::vector<::network::mojom::CTLogInfoPtr> ct_logs;
  
  ::network::mojom::TrialComparisonCertVerifierParamsPtr trial_comparison_cert_verifier_params;
  
  ::network::mojom::CookieManagerParamsPtr cookie_manager_params;
  
  bool enable_domain_reliability;
  
  std::string domain_reliability_upload_reporter;
  
  bool discard_domain_reliablity_uploads;
  
  base::Optional<base::TimeDelta> reporting_delivery_interval;
  
  bool skip_reporting_send_permission_check;
  
  bool primary_network_context;
  
  std::vector<::network::mojom::CorsOriginAccessPatternsPtr> cors_origin_access_list;
  
  std::vector<std::string> cors_exempt_header_list;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NetworkContextParams);
};





class  NetworkConditions {
 public:
  using DataView = NetworkConditionsDataView;
  using Data_ = internal::NetworkConditions_Data;

  template <typename... Args>
  static NetworkConditionsPtr New(Args&&... args) {
    return NetworkConditionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkConditionsPtr From(const U& u) {
    return mojo::TypeConverter<NetworkConditionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkConditions>::Convert(*this);
  }


  NetworkConditions();

  NetworkConditions(
      bool offline,
      base::TimeDelta latency,
      double download_throughput,
      double upload_throughput);

  ~NetworkConditions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkConditionsPtr>
  NetworkConditionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkConditions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkConditions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkConditions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkConditions_UnserializedMessageContext<
            UserType, NetworkConditions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkConditions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkConditions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkConditions_UnserializedMessageContext<
            UserType, NetworkConditions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkConditions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool offline;
  
  base::TimeDelta latency;
  
  double download_throughput;
  
  double upload_throughput;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ClearDataFilter {
 public:
  using DataView = ClearDataFilterDataView;
  using Data_ = internal::ClearDataFilter_Data;
  using Type = ClearDataFilter_Type;

  template <typename... Args>
  static ClearDataFilterPtr New(Args&&... args) {
    return ClearDataFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ClearDataFilterPtr From(const U& u) {
    return mojo::TypeConverter<ClearDataFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClearDataFilter>::Convert(*this);
  }


  ClearDataFilter();

  ClearDataFilter(
      ClearDataFilter::Type type,
      const std::vector<std::string>& domains,
      const std::vector<url::Origin>& origins);

  ~ClearDataFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClearDataFilterPtr>
  ClearDataFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ClearDataFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ClearDataFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ClearDataFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ClearDataFilter_UnserializedMessageContext<
            UserType, ClearDataFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ClearDataFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ClearDataFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ClearDataFilter_UnserializedMessageContext<
            UserType, ClearDataFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ClearDataFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ClearDataFilter::Type type;
  
  std::vector<std::string> domains;
  
  std::vector<url::Origin> origins;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  SignedExchangeReport {
 public:
  using DataView = SignedExchangeReportDataView;
  using Data_ = internal::SignedExchangeReport_Data;

  template <typename... Args>
  static SignedExchangeReportPtr New(Args&&... args) {
    return SignedExchangeReportPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SignedExchangeReportPtr From(const U& u) {
    return mojo::TypeConverter<SignedExchangeReportPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SignedExchangeReport>::Convert(*this);
  }


  SignedExchangeReport();

  SignedExchangeReport(
      bool success,
      const std::string& type,
      const GURL& outer_url,
      const GURL& inner_url,
      const GURL& cert_url,
      const std::string& referrer,
      const net::IPAddress& server_ip_address,
      const std::string& protocol,
      const std::string& method,
      int32_t status_code,
      base::TimeDelta elapsed_time);

  ~SignedExchangeReport();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SignedExchangeReportPtr>
  SignedExchangeReportPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SignedExchangeReport>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SignedExchangeReport::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SignedExchangeReport::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SignedExchangeReport_UnserializedMessageContext<
            UserType, SignedExchangeReport::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SignedExchangeReport::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SignedExchangeReport::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SignedExchangeReport_UnserializedMessageContext<
            UserType, SignedExchangeReport::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SignedExchangeReport::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool success;
  
  std::string type;
  
  GURL outer_url;
  
  GURL inner_url;
  
  GURL cert_url;
  
  std::string referrer;
  
  net::IPAddress server_ip_address;
  
  std::string protocol;
  
  std::string method;
  
  int32_t status_code;
  
  base::TimeDelta elapsed_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  URLLoaderFactoryParams {
 public:
  using DataView = URLLoaderFactoryParamsDataView;
  using Data_ = internal::URLLoaderFactoryParams_Data;

  template <typename... Args>
  static URLLoaderFactoryParamsPtr New(Args&&... args) {
    return URLLoaderFactoryParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLLoaderFactoryParamsPtr From(const U& u) {
    return mojo::TypeConverter<URLLoaderFactoryParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLLoaderFactoryParams>::Convert(*this);
  }


  URLLoaderFactoryParams();

  URLLoaderFactoryParams(
      uint32_t process_id,
      const base::Optional<url::Origin>& request_initiator_site_lock,
      bool is_corb_enabled,
      bool disable_web_security,
      TrustedURLLoaderHeaderClientPtrInfo header_client,
      std::vector<::network::mojom::CorsOriginPatternPtr> factory_bound_allow_patterns);

  ~URLLoaderFactoryParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLLoaderFactoryParamsPtr>
  URLLoaderFactoryParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLLoaderFactoryParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLLoaderFactoryParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLLoaderFactoryParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLLoaderFactoryParams_UnserializedMessageContext<
            UserType, URLLoaderFactoryParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLLoaderFactoryParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return URLLoaderFactoryParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLLoaderFactoryParams_UnserializedMessageContext<
            UserType, URLLoaderFactoryParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLLoaderFactoryParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t process_id;
  
  base::Optional<url::Origin> request_initiator_site_lock;
  
  bool is_corb_enabled;
  
  bool disable_web_security;
  
  TrustedURLLoaderHeaderClientPtrInfo header_client;
  
  std::vector<::network::mojom::CorsOriginPatternPtr> factory_bound_allow_patterns;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(URLLoaderFactoryParams);
};

template <typename StructPtrType>
CustomProxyConfigPtr CustomProxyConfig::Clone() const {
  return New(
      mojo::Clone(rules),
      mojo::Clone(should_override_existing_config),
      mojo::Clone(allow_non_idempotent_methods),
      mojo::Clone(assume_https_proxies_support_quic),
      mojo::Clone(can_use_proxy_on_http_url_redirect_cycles),
      mojo::Clone(pre_cache_headers),
      mojo::Clone(post_cache_headers),
      mojo::Clone(connect_tunnel_headers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CustomProxyConfig>::value>::type*>
bool CustomProxyConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rules, other_struct.rules))
    return false;
  if (!mojo::Equals(this->should_override_existing_config, other_struct.should_override_existing_config))
    return false;
  if (!mojo::Equals(this->allow_non_idempotent_methods, other_struct.allow_non_idempotent_methods))
    return false;
  if (!mojo::Equals(this->assume_https_proxies_support_quic, other_struct.assume_https_proxies_support_quic))
    return false;
  if (!mojo::Equals(this->can_use_proxy_on_http_url_redirect_cycles, other_struct.can_use_proxy_on_http_url_redirect_cycles))
    return false;
  if (!mojo::Equals(this->pre_cache_headers, other_struct.pre_cache_headers))
    return false;
  if (!mojo::Equals(this->post_cache_headers, other_struct.post_cache_headers))
    return false;
  if (!mojo::Equals(this->connect_tunnel_headers, other_struct.connect_tunnel_headers))
    return false;
  return true;
}
template <typename StructPtrType>
NetworkContextParamsPtr NetworkContextParams::Clone() const {
  return New(
      mojo::Clone(context_name),
      mojo::Clone(user_agent),
      mojo::Clone(accept_language),
      mojo::Clone(enable_brotli),
      mojo::Clone(quic_user_agent_id),
      mojo::Clone(enable_referrers),
      mojo::Clone(validate_referrer_policy_on_initial_request),
      mojo::Clone(proxy_resolver_factory),
      mojo::Clone(cookie_path),
      mojo::Clone(enable_encrypted_cookies),
      mojo::Clone(restore_old_session_cookies),
      mojo::Clone(persist_session_cookies),
      mojo::Clone(http_cache_enabled),
      mojo::Clone(http_cache_max_size),
      mojo::Clone(http_cache_path),
      mojo::Clone(http_server_properties_path),
      mojo::Clone(transport_security_persister_path),
      mojo::Clone(enable_ftp_url_support),
      mojo::Clone(enforce_chrome_ct_policy),
      mojo::Clone(http_09_on_non_default_ports_enabled),
      mojo::Clone(disable_idle_sockets_close_on_memory_pressure),
      mojo::Clone(initial_ssl_config),
      mojo::Clone(ssl_config_client_request),
      mojo::Clone(initial_proxy_config),
      mojo::Clone(proxy_config_client_request),
      mojo::Clone(initial_custom_proxy_config),
      mojo::Clone(custom_proxy_config_client_request),
      mojo::Clone(proxy_config_poller_client),
      mojo::Clone(proxy_error_client),
      mojo::Clone(pac_quick_check_enabled),
      mojo::Clone(enable_certificate_reporting),
      mojo::Clone(enable_expect_ct_reporting),
      mojo::Clone(ct_logs),
      mojo::Clone(trial_comparison_cert_verifier_params),
      mojo::Clone(cookie_manager_params),
      mojo::Clone(enable_domain_reliability),
      mojo::Clone(domain_reliability_upload_reporter),
      mojo::Clone(discard_domain_reliablity_uploads),
      mojo::Clone(reporting_delivery_interval),
      mojo::Clone(skip_reporting_send_permission_check),
      mojo::Clone(primary_network_context),
      mojo::Clone(cors_origin_access_list),
      mojo::Clone(cors_exempt_header_list)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkContextParams>::value>::type*>
bool NetworkContextParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->context_name, other_struct.context_name))
    return false;
  if (!mojo::Equals(this->user_agent, other_struct.user_agent))
    return false;
  if (!mojo::Equals(this->accept_language, other_struct.accept_language))
    return false;
  if (!mojo::Equals(this->enable_brotli, other_struct.enable_brotli))
    return false;
  if (!mojo::Equals(this->quic_user_agent_id, other_struct.quic_user_agent_id))
    return false;
  if (!mojo::Equals(this->enable_referrers, other_struct.enable_referrers))
    return false;
  if (!mojo::Equals(this->validate_referrer_policy_on_initial_request, other_struct.validate_referrer_policy_on_initial_request))
    return false;
  if (!mojo::Equals(this->proxy_resolver_factory, other_struct.proxy_resolver_factory))
    return false;
  if (!mojo::Equals(this->cookie_path, other_struct.cookie_path))
    return false;
  if (!mojo::Equals(this->enable_encrypted_cookies, other_struct.enable_encrypted_cookies))
    return false;
  if (!mojo::Equals(this->restore_old_session_cookies, other_struct.restore_old_session_cookies))
    return false;
  if (!mojo::Equals(this->persist_session_cookies, other_struct.persist_session_cookies))
    return false;
  if (!mojo::Equals(this->http_cache_enabled, other_struct.http_cache_enabled))
    return false;
  if (!mojo::Equals(this->http_cache_max_size, other_struct.http_cache_max_size))
    return false;
  if (!mojo::Equals(this->http_cache_path, other_struct.http_cache_path))
    return false;
  if (!mojo::Equals(this->http_server_properties_path, other_struct.http_server_properties_path))
    return false;
  if (!mojo::Equals(this->transport_security_persister_path, other_struct.transport_security_persister_path))
    return false;
  if (!mojo::Equals(this->enable_ftp_url_support, other_struct.enable_ftp_url_support))
    return false;
  if (!mojo::Equals(this->enforce_chrome_ct_policy, other_struct.enforce_chrome_ct_policy))
    return false;
  if (!mojo::Equals(this->http_09_on_non_default_ports_enabled, other_struct.http_09_on_non_default_ports_enabled))
    return false;
  if (!mojo::Equals(this->disable_idle_sockets_close_on_memory_pressure, other_struct.disable_idle_sockets_close_on_memory_pressure))
    return false;
  if (!mojo::Equals(this->initial_ssl_config, other_struct.initial_ssl_config))
    return false;
  if (!mojo::Equals(this->ssl_config_client_request, other_struct.ssl_config_client_request))
    return false;
  if (!mojo::Equals(this->initial_proxy_config, other_struct.initial_proxy_config))
    return false;
  if (!mojo::Equals(this->proxy_config_client_request, other_struct.proxy_config_client_request))
    return false;
  if (!mojo::Equals(this->initial_custom_proxy_config, other_struct.initial_custom_proxy_config))
    return false;
  if (!mojo::Equals(this->custom_proxy_config_client_request, other_struct.custom_proxy_config_client_request))
    return false;
  if (!mojo::Equals(this->proxy_config_poller_client, other_struct.proxy_config_poller_client))
    return false;
  if (!mojo::Equals(this->proxy_error_client, other_struct.proxy_error_client))
    return false;
  if (!mojo::Equals(this->pac_quick_check_enabled, other_struct.pac_quick_check_enabled))
    return false;
  if (!mojo::Equals(this->enable_certificate_reporting, other_struct.enable_certificate_reporting))
    return false;
  if (!mojo::Equals(this->enable_expect_ct_reporting, other_struct.enable_expect_ct_reporting))
    return false;
  if (!mojo::Equals(this->ct_logs, other_struct.ct_logs))
    return false;
  if (!mojo::Equals(this->trial_comparison_cert_verifier_params, other_struct.trial_comparison_cert_verifier_params))
    return false;
  if (!mojo::Equals(this->cookie_manager_params, other_struct.cookie_manager_params))
    return false;
  if (!mojo::Equals(this->enable_domain_reliability, other_struct.enable_domain_reliability))
    return false;
  if (!mojo::Equals(this->domain_reliability_upload_reporter, other_struct.domain_reliability_upload_reporter))
    return false;
  if (!mojo::Equals(this->discard_domain_reliablity_uploads, other_struct.discard_domain_reliablity_uploads))
    return false;
  if (!mojo::Equals(this->reporting_delivery_interval, other_struct.reporting_delivery_interval))
    return false;
  if (!mojo::Equals(this->skip_reporting_send_permission_check, other_struct.skip_reporting_send_permission_check))
    return false;
  if (!mojo::Equals(this->primary_network_context, other_struct.primary_network_context))
    return false;
  if (!mojo::Equals(this->cors_origin_access_list, other_struct.cors_origin_access_list))
    return false;
  if (!mojo::Equals(this->cors_exempt_header_list, other_struct.cors_exempt_header_list))
    return false;
  return true;
}
template <typename StructPtrType>
NetworkConditionsPtr NetworkConditions::Clone() const {
  return New(
      mojo::Clone(offline),
      mojo::Clone(latency),
      mojo::Clone(download_throughput),
      mojo::Clone(upload_throughput)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkConditions>::value>::type*>
bool NetworkConditions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->offline, other_struct.offline))
    return false;
  if (!mojo::Equals(this->latency, other_struct.latency))
    return false;
  if (!mojo::Equals(this->download_throughput, other_struct.download_throughput))
    return false;
  if (!mojo::Equals(this->upload_throughput, other_struct.upload_throughput))
    return false;
  return true;
}
template <typename StructPtrType>
ClearDataFilterPtr ClearDataFilter::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(domains),
      mojo::Clone(origins)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ClearDataFilter>::value>::type*>
bool ClearDataFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->domains, other_struct.domains))
    return false;
  if (!mojo::Equals(this->origins, other_struct.origins))
    return false;
  return true;
}
template <typename StructPtrType>
NetworkUsagePtr NetworkUsage::Clone() const {
  return New(
      mojo::Clone(process_id),
      mojo::Clone(routing_id),
      mojo::Clone(total_bytes_received),
      mojo::Clone(total_bytes_sent)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkUsage>::value>::type*>
bool NetworkUsage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_id, other_struct.process_id))
    return false;
  if (!mojo::Equals(this->routing_id, other_struct.routing_id))
    return false;
  if (!mojo::Equals(this->total_bytes_received, other_struct.total_bytes_received))
    return false;
  if (!mojo::Equals(this->total_bytes_sent, other_struct.total_bytes_sent))
    return false;
  return true;
}
template <typename StructPtrType>
SignedExchangeReportPtr SignedExchangeReport::Clone() const {
  return New(
      mojo::Clone(success),
      mojo::Clone(type),
      mojo::Clone(outer_url),
      mojo::Clone(inner_url),
      mojo::Clone(cert_url),
      mojo::Clone(referrer),
      mojo::Clone(server_ip_address),
      mojo::Clone(protocol),
      mojo::Clone(method),
      mojo::Clone(status_code),
      mojo::Clone(elapsed_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SignedExchangeReport>::value>::type*>
bool SignedExchangeReport::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->success, other_struct.success))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->outer_url, other_struct.outer_url))
    return false;
  if (!mojo::Equals(this->inner_url, other_struct.inner_url))
    return false;
  if (!mojo::Equals(this->cert_url, other_struct.cert_url))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->server_ip_address, other_struct.server_ip_address))
    return false;
  if (!mojo::Equals(this->protocol, other_struct.protocol))
    return false;
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->status_code, other_struct.status_code))
    return false;
  if (!mojo::Equals(this->elapsed_time, other_struct.elapsed_time))
    return false;
  return true;
}
template <typename StructPtrType>
URLLoaderFactoryParamsPtr URLLoaderFactoryParams::Clone() const {
  return New(
      mojo::Clone(process_id),
      mojo::Clone(request_initiator_site_lock),
      mojo::Clone(is_corb_enabled),
      mojo::Clone(disable_web_security),
      mojo::Clone(header_client),
      mojo::Clone(factory_bound_allow_patterns)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLLoaderFactoryParams>::value>::type*>
bool URLLoaderFactoryParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_id, other_struct.process_id))
    return false;
  if (!mojo::Equals(this->request_initiator_site_lock, other_struct.request_initiator_site_lock))
    return false;
  if (!mojo::Equals(this->is_corb_enabled, other_struct.is_corb_enabled))
    return false;
  if (!mojo::Equals(this->disable_web_security, other_struct.disable_web_security))
    return false;
  if (!mojo::Equals(this->header_client, other_struct.header_client))
    return false;
  if (!mojo::Equals(this->factory_bound_allow_patterns, other_struct.factory_bound_allow_patterns))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::CustomProxyConfig::DataView,
                                         ::network::mojom::CustomProxyConfigPtr> {
  static bool IsNull(const ::network::mojom::CustomProxyConfigPtr& input) { return !input; }
  static void SetToNull(::network::mojom::CustomProxyConfigPtr* output) { output->reset(); }

  static const decltype(::network::mojom::CustomProxyConfig::rules)& rules(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->rules;
  }

  static decltype(::network::mojom::CustomProxyConfig::should_override_existing_config) should_override_existing_config(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->should_override_existing_config;
  }

  static decltype(::network::mojom::CustomProxyConfig::allow_non_idempotent_methods) allow_non_idempotent_methods(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->allow_non_idempotent_methods;
  }

  static decltype(::network::mojom::CustomProxyConfig::assume_https_proxies_support_quic) assume_https_proxies_support_quic(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->assume_https_proxies_support_quic;
  }

  static decltype(::network::mojom::CustomProxyConfig::can_use_proxy_on_http_url_redirect_cycles) can_use_proxy_on_http_url_redirect_cycles(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->can_use_proxy_on_http_url_redirect_cycles;
  }

  static const decltype(::network::mojom::CustomProxyConfig::pre_cache_headers)& pre_cache_headers(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->pre_cache_headers;
  }

  static const decltype(::network::mojom::CustomProxyConfig::post_cache_headers)& post_cache_headers(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->post_cache_headers;
  }

  static const decltype(::network::mojom::CustomProxyConfig::connect_tunnel_headers)& connect_tunnel_headers(
      const ::network::mojom::CustomProxyConfigPtr& input) {
    return input->connect_tunnel_headers;
  }

  static bool Read(::network::mojom::CustomProxyConfig::DataView input, ::network::mojom::CustomProxyConfigPtr* output);
};


template <>
struct  StructTraits<::network::mojom::NetworkContextParams::DataView,
                                         ::network::mojom::NetworkContextParamsPtr> {
  static bool IsNull(const ::network::mojom::NetworkContextParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkContextParamsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::NetworkContextParams::context_name)& context_name(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->context_name;
  }

  static const decltype(::network::mojom::NetworkContextParams::user_agent)& user_agent(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->user_agent;
  }

  static const decltype(::network::mojom::NetworkContextParams::accept_language)& accept_language(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->accept_language;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_brotli) enable_brotli(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_brotli;
  }

  static const decltype(::network::mojom::NetworkContextParams::quic_user_agent_id)& quic_user_agent_id(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->quic_user_agent_id;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_referrers) enable_referrers(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_referrers;
  }

  static decltype(::network::mojom::NetworkContextParams::validate_referrer_policy_on_initial_request) validate_referrer_policy_on_initial_request(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->validate_referrer_policy_on_initial_request;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_resolver_factory)& proxy_resolver_factory(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_resolver_factory;
  }

  static const decltype(::network::mojom::NetworkContextParams::cookie_path)& cookie_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->cookie_path;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_encrypted_cookies) enable_encrypted_cookies(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_encrypted_cookies;
  }

  static decltype(::network::mojom::NetworkContextParams::restore_old_session_cookies) restore_old_session_cookies(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->restore_old_session_cookies;
  }

  static decltype(::network::mojom::NetworkContextParams::persist_session_cookies) persist_session_cookies(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->persist_session_cookies;
  }

  static decltype(::network::mojom::NetworkContextParams::http_cache_enabled) http_cache_enabled(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_cache_enabled;
  }

  static decltype(::network::mojom::NetworkContextParams::http_cache_max_size) http_cache_max_size(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_cache_max_size;
  }

  static const decltype(::network::mojom::NetworkContextParams::http_cache_path)& http_cache_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_cache_path;
  }

  static const decltype(::network::mojom::NetworkContextParams::http_server_properties_path)& http_server_properties_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_server_properties_path;
  }

  static const decltype(::network::mojom::NetworkContextParams::transport_security_persister_path)& transport_security_persister_path(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->transport_security_persister_path;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_ftp_url_support) enable_ftp_url_support(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_ftp_url_support;
  }

  static decltype(::network::mojom::NetworkContextParams::enforce_chrome_ct_policy) enforce_chrome_ct_policy(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enforce_chrome_ct_policy;
  }

  static decltype(::network::mojom::NetworkContextParams::http_09_on_non_default_ports_enabled) http_09_on_non_default_ports_enabled(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->http_09_on_non_default_ports_enabled;
  }

  static decltype(::network::mojom::NetworkContextParams::disable_idle_sockets_close_on_memory_pressure) disable_idle_sockets_close_on_memory_pressure(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->disable_idle_sockets_close_on_memory_pressure;
  }

  static const decltype(::network::mojom::NetworkContextParams::initial_ssl_config)& initial_ssl_config(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->initial_ssl_config;
  }

  static  decltype(::network::mojom::NetworkContextParams::ssl_config_client_request)& ssl_config_client_request(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->ssl_config_client_request;
  }

  static  decltype(::network::mojom::NetworkContextParams::initial_proxy_config)& initial_proxy_config(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->initial_proxy_config;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_config_client_request)& proxy_config_client_request(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_config_client_request;
  }

  static const decltype(::network::mojom::NetworkContextParams::initial_custom_proxy_config)& initial_custom_proxy_config(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->initial_custom_proxy_config;
  }

  static  decltype(::network::mojom::NetworkContextParams::custom_proxy_config_client_request)& custom_proxy_config_client_request(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->custom_proxy_config_client_request;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_config_poller_client)& proxy_config_poller_client(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_config_poller_client;
  }

  static  decltype(::network::mojom::NetworkContextParams::proxy_error_client)& proxy_error_client(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->proxy_error_client;
  }

  static decltype(::network::mojom::NetworkContextParams::pac_quick_check_enabled) pac_quick_check_enabled(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->pac_quick_check_enabled;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_certificate_reporting) enable_certificate_reporting(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_certificate_reporting;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_expect_ct_reporting) enable_expect_ct_reporting(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_expect_ct_reporting;
  }

  static const decltype(::network::mojom::NetworkContextParams::ct_logs)& ct_logs(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->ct_logs;
  }

  static  decltype(::network::mojom::NetworkContextParams::trial_comparison_cert_verifier_params)& trial_comparison_cert_verifier_params(
       ::network::mojom::NetworkContextParamsPtr& input) {
    return input->trial_comparison_cert_verifier_params;
  }

  static const decltype(::network::mojom::NetworkContextParams::cookie_manager_params)& cookie_manager_params(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->cookie_manager_params;
  }

  static decltype(::network::mojom::NetworkContextParams::enable_domain_reliability) enable_domain_reliability(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->enable_domain_reliability;
  }

  static const decltype(::network::mojom::NetworkContextParams::domain_reliability_upload_reporter)& domain_reliability_upload_reporter(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->domain_reliability_upload_reporter;
  }

  static decltype(::network::mojom::NetworkContextParams::discard_domain_reliablity_uploads) discard_domain_reliablity_uploads(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->discard_domain_reliablity_uploads;
  }

  static const decltype(::network::mojom::NetworkContextParams::reporting_delivery_interval)& reporting_delivery_interval(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->reporting_delivery_interval;
  }

  static decltype(::network::mojom::NetworkContextParams::skip_reporting_send_permission_check) skip_reporting_send_permission_check(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->skip_reporting_send_permission_check;
  }

  static decltype(::network::mojom::NetworkContextParams::primary_network_context) primary_network_context(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->primary_network_context;
  }

  static const decltype(::network::mojom::NetworkContextParams::cors_origin_access_list)& cors_origin_access_list(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->cors_origin_access_list;
  }

  static const decltype(::network::mojom::NetworkContextParams::cors_exempt_header_list)& cors_exempt_header_list(
      const ::network::mojom::NetworkContextParamsPtr& input) {
    return input->cors_exempt_header_list;
  }

  static bool Read(::network::mojom::NetworkContextParams::DataView input, ::network::mojom::NetworkContextParamsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::NetworkConditions::DataView,
                                         ::network::mojom::NetworkConditionsPtr> {
  static bool IsNull(const ::network::mojom::NetworkConditionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkConditionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::NetworkConditions::offline) offline(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->offline;
  }

  static const decltype(::network::mojom::NetworkConditions::latency)& latency(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->latency;
  }

  static decltype(::network::mojom::NetworkConditions::download_throughput) download_throughput(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->download_throughput;
  }

  static decltype(::network::mojom::NetworkConditions::upload_throughput) upload_throughput(
      const ::network::mojom::NetworkConditionsPtr& input) {
    return input->upload_throughput;
  }

  static bool Read(::network::mojom::NetworkConditions::DataView input, ::network::mojom::NetworkConditionsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::ClearDataFilter::DataView,
                                         ::network::mojom::ClearDataFilterPtr> {
  static bool IsNull(const ::network::mojom::ClearDataFilterPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ClearDataFilterPtr* output) { output->reset(); }

  static decltype(::network::mojom::ClearDataFilter::type) type(
      const ::network::mojom::ClearDataFilterPtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::ClearDataFilter::domains)& domains(
      const ::network::mojom::ClearDataFilterPtr& input) {
    return input->domains;
  }

  static const decltype(::network::mojom::ClearDataFilter::origins)& origins(
      const ::network::mojom::ClearDataFilterPtr& input) {
    return input->origins;
  }

  static bool Read(::network::mojom::ClearDataFilter::DataView input, ::network::mojom::ClearDataFilterPtr* output);
};


template <>
struct  StructTraits<::network::mojom::NetworkUsage::DataView,
                                         ::network::mojom::NetworkUsagePtr> {
  static bool IsNull(const ::network::mojom::NetworkUsagePtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkUsagePtr* output) { output->reset(); }

  static decltype(::network::mojom::NetworkUsage::process_id) process_id(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->process_id;
  }

  static decltype(::network::mojom::NetworkUsage::routing_id) routing_id(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->routing_id;
  }

  static decltype(::network::mojom::NetworkUsage::total_bytes_received) total_bytes_received(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->total_bytes_received;
  }

  static decltype(::network::mojom::NetworkUsage::total_bytes_sent) total_bytes_sent(
      const ::network::mojom::NetworkUsagePtr& input) {
    return input->total_bytes_sent;
  }

  static bool Read(::network::mojom::NetworkUsage::DataView input, ::network::mojom::NetworkUsagePtr* output);
};


template <>
struct  StructTraits<::network::mojom::SignedExchangeReport::DataView,
                                         ::network::mojom::SignedExchangeReportPtr> {
  static bool IsNull(const ::network::mojom::SignedExchangeReportPtr& input) { return !input; }
  static void SetToNull(::network::mojom::SignedExchangeReportPtr* output) { output->reset(); }

  static decltype(::network::mojom::SignedExchangeReport::success) success(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->success;
  }

  static const decltype(::network::mojom::SignedExchangeReport::type)& type(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::SignedExchangeReport::outer_url)& outer_url(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->outer_url;
  }

  static const decltype(::network::mojom::SignedExchangeReport::inner_url)& inner_url(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->inner_url;
  }

  static const decltype(::network::mojom::SignedExchangeReport::cert_url)& cert_url(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->cert_url;
  }

  static const decltype(::network::mojom::SignedExchangeReport::referrer)& referrer(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->referrer;
  }

  static const decltype(::network::mojom::SignedExchangeReport::server_ip_address)& server_ip_address(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->server_ip_address;
  }

  static const decltype(::network::mojom::SignedExchangeReport::protocol)& protocol(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->protocol;
  }

  static const decltype(::network::mojom::SignedExchangeReport::method)& method(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->method;
  }

  static decltype(::network::mojom::SignedExchangeReport::status_code) status_code(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->status_code;
  }

  static const decltype(::network::mojom::SignedExchangeReport::elapsed_time)& elapsed_time(
      const ::network::mojom::SignedExchangeReportPtr& input) {
    return input->elapsed_time;
  }

  static bool Read(::network::mojom::SignedExchangeReport::DataView input, ::network::mojom::SignedExchangeReportPtr* output);
};


template <>
struct  StructTraits<::network::mojom::URLLoaderFactoryParams::DataView,
                                         ::network::mojom::URLLoaderFactoryParamsPtr> {
  static bool IsNull(const ::network::mojom::URLLoaderFactoryParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::URLLoaderFactoryParamsPtr* output) { output->reset(); }

  static decltype(::network::mojom::URLLoaderFactoryParams::process_id) process_id(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->process_id;
  }

  static const decltype(::network::mojom::URLLoaderFactoryParams::request_initiator_site_lock)& request_initiator_site_lock(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->request_initiator_site_lock;
  }

  static decltype(::network::mojom::URLLoaderFactoryParams::is_corb_enabled) is_corb_enabled(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->is_corb_enabled;
  }

  static decltype(::network::mojom::URLLoaderFactoryParams::disable_web_security) disable_web_security(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->disable_web_security;
  }

  static  decltype(::network::mojom::URLLoaderFactoryParams::header_client)& header_client(
       ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->header_client;
  }

  static const decltype(::network::mojom::URLLoaderFactoryParams::factory_bound_allow_patterns)& factory_bound_allow_patterns(
      const ::network::mojom::URLLoaderFactoryParamsPtr& input) {
    return input->factory_bound_allow_patterns;
  }

  static bool Read(::network::mojom::URLLoaderFactoryParams::DataView input, ::network::mojom::URLLoaderFactoryParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_H_