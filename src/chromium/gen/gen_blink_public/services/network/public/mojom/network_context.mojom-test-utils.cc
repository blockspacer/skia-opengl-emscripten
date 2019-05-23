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


#include "services/network/public/mojom/network_context.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
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


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_JUMBO_H_
#include "components/content_settings/core/common/content_settings_struct_traits.h"
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "mojo/public/cpp/base/values_mojom_traits.h"
#include "services/network/public/cpp/address_list_mojom_traits.h"
#include "services/network/public/cpp/host_resolver_mojom_traits.h"
#include "services/network/public/cpp/http_request_headers_mojom_traits.h"
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_with_annotation_mojom_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void CustomProxyConfigClientInterceptorForTesting::OnCustomProxyConfigUpdated(CustomProxyConfigPtr proxy_config) {
  GetForwardingInterface()->OnCustomProxyConfigUpdated(std::move(proxy_config));
}
void CustomProxyConfigClientInterceptorForTesting::MarkProxiesAsBad(base::TimeDelta bypass_duration, const net::ProxyList& bad_proxies, MarkProxiesAsBadCallback callback) {
  GetForwardingInterface()->MarkProxiesAsBad(std::move(bypass_duration), std::move(bad_proxies), std::move(callback));
}
void CustomProxyConfigClientInterceptorForTesting::ClearBadProxiesCache() {
  GetForwardingInterface()->ClearBadProxiesCache();
}
CustomProxyConfigClientAsyncWaiter::CustomProxyConfigClientAsyncWaiter(
    CustomProxyConfigClient* proxy) : proxy_(proxy) {}

CustomProxyConfigClientAsyncWaiter::~CustomProxyConfigClientAsyncWaiter() = default;

void CustomProxyConfigClientAsyncWaiter::MarkProxiesAsBad(
    base::TimeDelta bypass_duration, const net::ProxyList& bad_proxies) {
  base::RunLoop loop;
  proxy_->MarkProxiesAsBad(std::move(bypass_duration),std::move(bad_proxies),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void TrustedHeaderClientInterceptorForTesting::OnBeforeSendHeaders(const net::HttpRequestHeaders& headers, OnBeforeSendHeadersCallback callback) {
  GetForwardingInterface()->OnBeforeSendHeaders(std::move(headers), std::move(callback));
}
void TrustedHeaderClientInterceptorForTesting::OnHeadersReceived(const std::string& headers, OnHeadersReceivedCallback callback) {
  GetForwardingInterface()->OnHeadersReceived(std::move(headers), std::move(callback));
}
TrustedHeaderClientAsyncWaiter::TrustedHeaderClientAsyncWaiter(
    TrustedHeaderClient* proxy) : proxy_(proxy) {}

TrustedHeaderClientAsyncWaiter::~TrustedHeaderClientAsyncWaiter() = default;

void TrustedHeaderClientAsyncWaiter::OnBeforeSendHeaders(
    const net::HttpRequestHeaders& headers, int32_t* out_result, base::Optional<net::HttpRequestHeaders>* out_headers) {
  base::RunLoop loop;
  proxy_->OnBeforeSendHeaders(std::move(headers),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::HttpRequestHeaders>* out_headers
,
             int32_t result,
             const base::Optional<net::HttpRequestHeaders>& headers) {*out_result = std::move(result);*out_headers = std::move(headers);
            loop->Quit();
          },
          &loop,
          out_result,
          out_headers));
  loop.Run();
}
void TrustedHeaderClientAsyncWaiter::OnHeadersReceived(
    const std::string& headers, int32_t* out_result, base::Optional<std::string>* out_headers, GURL* out_allowed_unsafe_redirect_url) {
  base::RunLoop loop;
  proxy_->OnHeadersReceived(std::move(headers),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<std::string>* out_headers
,
             GURL* out_allowed_unsafe_redirect_url
,
             int32_t result,
             const base::Optional<std::string>& headers,
             const GURL& allowed_unsafe_redirect_url) {*out_result = std::move(result);*out_headers = std::move(headers);*out_allowed_unsafe_redirect_url = std::move(allowed_unsafe_redirect_url);
            loop->Quit();
          },
          &loop,
          out_result,
          out_headers,
          out_allowed_unsafe_redirect_url));
  loop.Run();
}



void TrustedURLLoaderHeaderClientInterceptorForTesting::OnLoaderCreated(int32_t request_id, TrustedHeaderClientRequest header_client) {
  GetForwardingInterface()->OnLoaderCreated(std::move(request_id), std::move(header_client));
}
TrustedURLLoaderHeaderClientAsyncWaiter::TrustedURLLoaderHeaderClientAsyncWaiter(
    TrustedURLLoaderHeaderClient* proxy) : proxy_(proxy) {}

TrustedURLLoaderHeaderClientAsyncWaiter::~TrustedURLLoaderHeaderClientAsyncWaiter() = default;




void NetworkContextClientInterceptorForTesting::OnCanSendReportingReports(const std::vector<url::Origin>& origins, OnCanSendReportingReportsCallback callback) {
  GetForwardingInterface()->OnCanSendReportingReports(std::move(origins), std::move(callback));
}
void NetworkContextClientInterceptorForTesting::OnCanSendDomainReliabilityUpload(const GURL& origin, OnCanSendDomainReliabilityUploadCallback callback) {
  GetForwardingInterface()->OnCanSendDomainReliabilityUpload(std::move(origin), std::move(callback));
}
NetworkContextClientAsyncWaiter::NetworkContextClientAsyncWaiter(
    NetworkContextClient* proxy) : proxy_(proxy) {}

NetworkContextClientAsyncWaiter::~NetworkContextClientAsyncWaiter() = default;

void NetworkContextClientAsyncWaiter::OnCanSendReportingReports(
    const std::vector<url::Origin>& origins, std::vector<url::Origin>* out_origins) {
  base::RunLoop loop;
  proxy_->OnCanSendReportingReports(std::move(origins),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<url::Origin>* out_origins
,
             const std::vector<url::Origin>& origins) {*out_origins = std::move(origins);
            loop->Quit();
          },
          &loop,
          out_origins));
  loop.Run();
}
void NetworkContextClientAsyncWaiter::OnCanSendDomainReliabilityUpload(
    const GURL& origin, bool* out_allowed) {
  base::RunLoop loop;
  proxy_->OnCanSendDomainReliabilityUpload(std::move(origin),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_allowed
,
             bool allowed) {*out_allowed = std::move(allowed);
            loop->Quit();
          },
          &loop,
          out_allowed));
  loop.Run();
}



void NetworkContextInterceptorForTesting::SetClient(NetworkContextClientPtr client) {
  GetForwardingInterface()->SetClient(std::move(client));
}
void NetworkContextInterceptorForTesting::CreateURLLoaderFactory(::network::mojom::URLLoaderFactoryRequest url_loader_factory, URLLoaderFactoryParamsPtr params) {
  GetForwardingInterface()->CreateURLLoaderFactory(std::move(url_loader_factory), std::move(params));
}
void NetworkContextInterceptorForTesting::ResetURLLoaderFactories() {
  GetForwardingInterface()->ResetURLLoaderFactories();
}
void NetworkContextInterceptorForTesting::GetCookieManager(::network::mojom::CookieManagerRequest cookie_manager) {
  GetForwardingInterface()->GetCookieManager(std::move(cookie_manager));
}
void NetworkContextInterceptorForTesting::GetRestrictedCookieManager(::network::mojom::RestrictedCookieManagerRequest restricted_cookie_manager, const url::Origin& origin) {
  GetForwardingInterface()->GetRestrictedCookieManager(std::move(restricted_cookie_manager), std::move(origin));
}
void NetworkContextInterceptorForTesting::ClearNetworkingHistorySince(base::Time start_time, ClearNetworkingHistorySinceCallback callback) {
  GetForwardingInterface()->ClearNetworkingHistorySince(std::move(start_time), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearHttpCache(base::Time start_time, base::Time end_time, ClearDataFilterPtr filter, ClearHttpCacheCallback callback) {
  GetForwardingInterface()->ClearHttpCache(std::move(start_time), std::move(end_time), std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ComputeHttpCacheSize(base::Time start_time, base::Time end_time, ComputeHttpCacheSizeCallback callback) {
  GetForwardingInterface()->ComputeHttpCacheSize(std::move(start_time), std::move(end_time), std::move(callback));
}
void NetworkContextInterceptorForTesting::NotifyExternalCacheHit(const GURL& url, const std::string& http_method, const base::Optional<url::Origin>& top_frame_origin) {
  GetForwardingInterface()->NotifyExternalCacheHit(std::move(url), std::move(http_method), std::move(top_frame_origin));
}
void NetworkContextInterceptorForTesting::WriteCacheMetadata(const GURL& url, net::RequestPriority priority, base::Time expected_response_time, mojo_base::BigBuffer data) {
  GetForwardingInterface()->WriteCacheMetadata(std::move(url), std::move(priority), std::move(expected_response_time), std::move(data));
}
void NetworkContextInterceptorForTesting::ClearHostCache(ClearDataFilterPtr filter, ClearHostCacheCallback callback) {
  GetForwardingInterface()->ClearHostCache(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearHttpAuthCache(base::Time start_time, ClearHttpAuthCacheCallback callback) {
  GetForwardingInterface()->ClearHttpAuthCache(std::move(start_time), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearReportingCacheReports(ClearDataFilterPtr filter, ClearReportingCacheReportsCallback callback) {
  GetForwardingInterface()->ClearReportingCacheReports(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearReportingCacheClients(ClearDataFilterPtr filter, ClearReportingCacheClientsCallback callback) {
  GetForwardingInterface()->ClearReportingCacheClients(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearNetworkErrorLogging(ClearDataFilterPtr filter, ClearNetworkErrorLoggingCallback callback) {
  GetForwardingInterface()->ClearNetworkErrorLogging(std::move(filter), std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearDomainReliability(ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode, ClearDomainReliabilityCallback callback) {
  GetForwardingInterface()->ClearDomainReliability(std::move(filter), std::move(mode), std::move(callback));
}
void NetworkContextInterceptorForTesting::GetDomainReliabilityJSON(GetDomainReliabilityJSONCallback callback) {
  GetForwardingInterface()->GetDomainReliabilityJSON(std::move(callback));
}
void NetworkContextInterceptorForTesting::QueueReport(const std::string& type, const std::string& group, const GURL& url, const base::Optional<std::string>& user_agent, base::Value body) {
  GetForwardingInterface()->QueueReport(std::move(type), std::move(group), std::move(url), std::move(user_agent), std::move(body));
}
void NetworkContextInterceptorForTesting::QueueSignedExchangeReport(SignedExchangeReportPtr report) {
  GetForwardingInterface()->QueueSignedExchangeReport(std::move(report));
}
void NetworkContextInterceptorForTesting::CloseAllConnections(CloseAllConnectionsCallback callback) {
  GetForwardingInterface()->CloseAllConnections(std::move(callback));
}
void NetworkContextInterceptorForTesting::CloseIdleConnections(CloseIdleConnectionsCallback callback) {
  GetForwardingInterface()->CloseIdleConnections(std::move(callback));
}
void NetworkContextInterceptorForTesting::SetNetworkConditions(const base::UnguessableToken& throttling_profile_id, NetworkConditionsPtr conditions) {
  GetForwardingInterface()->SetNetworkConditions(std::move(throttling_profile_id), std::move(conditions));
}
void NetworkContextInterceptorForTesting::SetAcceptLanguage(const std::string& new_accept_language) {
  GetForwardingInterface()->SetAcceptLanguage(std::move(new_accept_language));
}
void NetworkContextInterceptorForTesting::SetEnableReferrers(bool enable_referrers) {
  GetForwardingInterface()->SetEnableReferrers(std::move(enable_referrers));
}
void NetworkContextInterceptorForTesting::SetCTPolicy(const std::vector<std::string>& required_hosts, const std::vector<std::string>& excluded_hosts, const std::vector<std::string>& excluded_spkis, const std::vector<std::string>& excluded_legacy_spkis) {
  GetForwardingInterface()->SetCTPolicy(std::move(required_hosts), std::move(excluded_hosts), std::move(excluded_spkis), std::move(excluded_legacy_spkis));
}
void NetworkContextInterceptorForTesting::AddExpectCT(const std::string& host, base::Time expiry, bool enforce, const GURL& report_uri, AddExpectCTCallback callback) {
  GetForwardingInterface()->AddExpectCT(std::move(host), std::move(expiry), std::move(enforce), std::move(report_uri), std::move(callback));
}
void NetworkContextInterceptorForTesting::SetExpectCTTestReport(const GURL& report_uri, SetExpectCTTestReportCallback callback) {
  GetForwardingInterface()->SetExpectCTTestReport(std::move(report_uri), std::move(callback));
}
void NetworkContextInterceptorForTesting::GetExpectCTState(const std::string& domain, GetExpectCTStateCallback callback) {
  GetForwardingInterface()->GetExpectCTState(std::move(domain), std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateUDPSocket(::network::mojom::UDPSocketRequest request, ::network::mojom::UDPSocketReceiverPtr receiver) {
  GetForwardingInterface()->CreateUDPSocket(std::move(request), std::move(receiver));
}
void NetworkContextInterceptorForTesting::CreateTCPServerSocket(const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, CreateTCPServerSocketCallback callback) {
  GetForwardingInterface()->CreateTCPServerSocket(std::move(local_addr), std::move(backlog), std::move(traffic_annotation), std::move(socket), std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateTCPConnectedSocket(const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateTCPConnectedSocketCallback callback) {
  GetForwardingInterface()->CreateTCPConnectedSocket(std::move(local_addr), std::move(remote_addr_list), std::move(tcp_connected_socket_options), std::move(traffic_annotation), std::move(socket), std::move(observer), std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateTCPBoundSocket(const net::IPEndPoint& local_addr, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPBoundSocketRequest socket, CreateTCPBoundSocketCallback callback) {
  GetForwardingInterface()->CreateTCPBoundSocket(std::move(local_addr), std::move(traffic_annotation), std::move(socket), std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateProxyResolvingSocketFactory(::network::mojom::ProxyResolvingSocketFactoryRequest factory) {
  GetForwardingInterface()->CreateProxyResolvingSocketFactory(std::move(factory));
}
void NetworkContextInterceptorForTesting::LookUpProxyForURL(const GURL& url, ::network::mojom::ProxyLookupClientPtr proxy_lookup_client) {
  GetForwardingInterface()->LookUpProxyForURL(std::move(url), std::move(proxy_lookup_client));
}
void NetworkContextInterceptorForTesting::ForceReloadProxyConfig(ForceReloadProxyConfigCallback callback) {
  GetForwardingInterface()->ForceReloadProxyConfig(std::move(callback));
}
void NetworkContextInterceptorForTesting::ClearBadProxiesCache(ClearBadProxiesCacheCallback callback) {
  GetForwardingInterface()->ClearBadProxiesCache(std::move(callback));
}
void NetworkContextInterceptorForTesting::CreateWebSocket(::network::mojom::WebSocketRequest request, int32_t process_id, int32_t render_frame_id, const url::Origin& origin, uint32_t options, ::network::mojom::AuthenticationHandlerPtr auth_handler, TrustedHeaderClientPtr header_client) {
  GetForwardingInterface()->CreateWebSocket(std::move(request), std::move(process_id), std::move(render_frame_id), std::move(origin), std::move(options), std::move(auth_handler), std::move(header_client));
}
void NetworkContextInterceptorForTesting::CreateNetLogExporter(::network::mojom::NetLogExporterRequest exporter) {
  GetForwardingInterface()->CreateNetLogExporter(std::move(exporter));
}
void NetworkContextInterceptorForTesting::PreconnectSockets(uint32_t num_streams, const GURL& url, int32_t load_flags, bool privacy_mode_enabled) {
  GetForwardingInterface()->PreconnectSockets(std::move(num_streams), std::move(url), std::move(load_flags), std::move(privacy_mode_enabled));
}
void NetworkContextInterceptorForTesting::CreateP2PSocketManager(::network::mojom::P2PTrustedSocketManagerClientPtr client, ::network::mojom::P2PTrustedSocketManagerRequest trusted_socket_manager, ::network::mojom::P2PSocketManagerRequest socket_manager) {
  GetForwardingInterface()->CreateP2PSocketManager(std::move(client), std::move(trusted_socket_manager), std::move(socket_manager));
}
void NetworkContextInterceptorForTesting::CreateMdnsResponder(::network::mojom::MdnsResponderRequest responder_request) {
  GetForwardingInterface()->CreateMdnsResponder(std::move(responder_request));
}
void NetworkContextInterceptorForTesting::ResolveHost(const net::HostPortPair& host, ::network::mojom::ResolveHostParametersPtr optional_parameters, ::network::mojom::ResolveHostClientPtr response_client) {
  GetForwardingInterface()->ResolveHost(std::move(host), std::move(optional_parameters), std::move(response_client));
}
void NetworkContextInterceptorForTesting::CreateHostResolver(const base::Optional<net::DnsConfigOverrides>& config_overrides, ::network::mojom::HostResolverRequest host_resolver) {
  GetForwardingInterface()->CreateHostResolver(std::move(config_overrides), std::move(host_resolver));
}
void NetworkContextInterceptorForTesting::VerifyCertForSignedExchange(const scoped_refptr<net::X509Certificate>& certificate, const GURL& url, const std::string& ocsp_response, const std::string& sct_list, VerifyCertForSignedExchangeCallback callback) {
  GetForwardingInterface()->VerifyCertForSignedExchange(std::move(certificate), std::move(url), std::move(ocsp_response), std::move(sct_list), std::move(callback));
}
void NetworkContextInterceptorForTesting::AddHSTS(const std::string& host, base::Time expiry, bool include_subdomains, AddHSTSCallback callback) {
  GetForwardingInterface()->AddHSTS(std::move(host), std::move(expiry), std::move(include_subdomains), std::move(callback));
}
void NetworkContextInterceptorForTesting::IsHSTSActiveForHost(const std::string& host, IsHSTSActiveForHostCallback callback) {
  GetForwardingInterface()->IsHSTSActiveForHost(std::move(host), std::move(callback));
}
void NetworkContextInterceptorForTesting::GetHSTSState(const std::string& domain, GetHSTSStateCallback callback) {
  GetForwardingInterface()->GetHSTSState(std::move(domain), std::move(callback));
}
void NetworkContextInterceptorForTesting::SetCorsOriginAccessListsForOrigin(const url::Origin& source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> block_patterns, SetCorsOriginAccessListsForOriginCallback callback) {
  GetForwardingInterface()->SetCorsOriginAccessListsForOrigin(std::move(source_origin), std::move(allow_patterns), std::move(block_patterns), std::move(callback));
}
void NetworkContextInterceptorForTesting::DeleteDynamicDataForHost(const std::string& host, DeleteDynamicDataForHostCallback callback) {
  GetForwardingInterface()->DeleteDynamicDataForHost(std::move(host), std::move(callback));
}
void NetworkContextInterceptorForTesting::SaveHttpAuthCache(SaveHttpAuthCacheCallback callback) {
  GetForwardingInterface()->SaveHttpAuthCache(std::move(callback));
}
void NetworkContextInterceptorForTesting::LoadHttpAuthCache(const base::UnguessableToken& cache_key, LoadHttpAuthCacheCallback callback) {
  GetForwardingInterface()->LoadHttpAuthCache(std::move(cache_key), std::move(callback));
}
void NetworkContextInterceptorForTesting::LookupBasicAuthCredentials(const GURL& url, LookupBasicAuthCredentialsCallback callback) {
  GetForwardingInterface()->LookupBasicAuthCredentials(std::move(url), std::move(callback));
}
void NetworkContextInterceptorForTesting::EnableStaticKeyPinningForTesting(EnableStaticKeyPinningForTestingCallback callback) {
  GetForwardingInterface()->EnableStaticKeyPinningForTesting(std::move(callback));
}
void NetworkContextInterceptorForTesting::SetFailingHttpTransactionForTesting(int32_t rv, SetFailingHttpTransactionForTestingCallback callback) {
  GetForwardingInterface()->SetFailingHttpTransactionForTesting(std::move(rv), std::move(callback));
}
void NetworkContextInterceptorForTesting::VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, VerifyCertificateForTestingCallback callback) {
  GetForwardingInterface()->VerifyCertificateForTesting(std::move(certificate), std::move(hostname), std::move(ocsp_response), std::move(callback));
}
void NetworkContextInterceptorForTesting::AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url, AddDomainReliabilityContextForTestingCallback callback) {
  GetForwardingInterface()->AddDomainReliabilityContextForTesting(std::move(origin), std::move(upload_url), std::move(callback));
}
void NetworkContextInterceptorForTesting::ForceDomainReliabilityUploadsForTesting(ForceDomainReliabilityUploadsForTestingCallback callback) {
  GetForwardingInterface()->ForceDomainReliabilityUploadsForTesting(std::move(callback));
}
void NetworkContextInterceptorForTesting::GetOriginPolicyManager(::network::mojom::OriginPolicyManagerRequest origin_policy_manager) {
  GetForwardingInterface()->GetOriginPolicyManager(std::move(origin_policy_manager));
}
NetworkContextAsyncWaiter::NetworkContextAsyncWaiter(
    NetworkContext* proxy) : proxy_(proxy) {}

NetworkContextAsyncWaiter::~NetworkContextAsyncWaiter() = default;

void NetworkContextAsyncWaiter::ClearNetworkingHistorySince(
    base::Time start_time) {
  base::RunLoop loop;
  proxy_->ClearNetworkingHistorySince(std::move(start_time),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearHttpCache(
    base::Time start_time, base::Time end_time, ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearHttpCache(std::move(start_time),std::move(end_time),std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ComputeHttpCacheSize(
    base::Time start_time, base::Time end_time, bool* out_is_upper_bound, int64_t* out_size_or_error) {
  base::RunLoop loop;
  proxy_->ComputeHttpCacheSize(std::move(start_time),std::move(end_time),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_is_upper_bound
,
             int64_t* out_size_or_error
,
             bool is_upper_bound,
             int64_t size_or_error) {*out_is_upper_bound = std::move(is_upper_bound);*out_size_or_error = std::move(size_or_error);
            loop->Quit();
          },
          &loop,
          out_is_upper_bound,
          out_size_or_error));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearHostCache(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearHostCache(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearHttpAuthCache(
    base::Time start_time) {
  base::RunLoop loop;
  proxy_->ClearHttpAuthCache(std::move(start_time),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearReportingCacheReports(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearReportingCacheReports(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearReportingCacheClients(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearReportingCacheClients(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearNetworkErrorLogging(
    ClearDataFilterPtr filter) {
  base::RunLoop loop;
  proxy_->ClearNetworkErrorLogging(std::move(filter),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearDomainReliability(
    ClearDataFilterPtr filter, NetworkContext::DomainReliabilityClearMode mode) {
  base::RunLoop loop;
  proxy_->ClearDomainReliability(std::move(filter),std::move(mode),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::GetDomainReliabilityJSON(
    base::Value* out_data) {
  base::RunLoop loop;
  proxy_->GetDomainReliabilityJSON(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Value* out_data
,
             base::Value data) {*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_data));
  loop.Run();
}
void NetworkContextAsyncWaiter::CloseAllConnections(
    ) {
  base::RunLoop loop;
  proxy_->CloseAllConnections(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::CloseIdleConnections(
    ) {
  base::RunLoop loop;
  proxy_->CloseIdleConnections(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::AddExpectCT(
    const std::string& host, base::Time expiry, bool enforce, const GURL& report_uri, bool* out_success) {
  base::RunLoop loop;
  proxy_->AddExpectCT(std::move(host),std::move(expiry),std::move(enforce),std::move(report_uri),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void NetworkContextAsyncWaiter::SetExpectCTTestReport(
    const GURL& report_uri, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetExpectCTTestReport(std::move(report_uri),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void NetworkContextAsyncWaiter::GetExpectCTState(
    const std::string& domain, base::Value* out_state) {
  base::RunLoop loop;
  proxy_->GetExpectCTState(std::move(domain),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Value* out_state
,
             base::Value state) {*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_state));
  loop.Run();
}
void NetworkContextAsyncWaiter::CreateTCPServerSocket(
    const net::IPEndPoint& local_addr, uint32_t backlog, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPServerSocketRequest socket, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr_out) {
  base::RunLoop loop;
  proxy_->CreateTCPServerSocket(std::move(local_addr),std::move(backlog),std::move(traffic_annotation),std::move(socket),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr_out
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr_out) {*out_result = std::move(result);*out_local_addr_out = std::move(local_addr_out);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr_out));
  loop.Run();
}
void NetworkContextAsyncWaiter::CreateTCPConnectedSocket(
    const base::Optional<net::IPEndPoint>& local_addr, const net::AddressList& remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPConnectedSocketRequest socket, ::network::mojom::SocketObserverPtr observer, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr, base::Optional<net::IPEndPoint>* out_peer_addr, mojo::ScopedDataPipeConsumerHandle* out_receive_stream, mojo::ScopedDataPipeProducerHandle* out_send_stream) {
  base::RunLoop loop;
  proxy_->CreateTCPConnectedSocket(std::move(local_addr),std::move(remote_addr_list),std::move(tcp_connected_socket_options),std::move(traffic_annotation),std::move(socket),std::move(observer),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr
,
             base::Optional<net::IPEndPoint>* out_peer_addr
,
             mojo::ScopedDataPipeConsumerHandle* out_receive_stream
,
             mojo::ScopedDataPipeProducerHandle* out_send_stream
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr,
             const base::Optional<net::IPEndPoint>& peer_addr,
             mojo::ScopedDataPipeConsumerHandle receive_stream,
             mojo::ScopedDataPipeProducerHandle send_stream) {*out_result = std::move(result);*out_local_addr = std::move(local_addr);*out_peer_addr = std::move(peer_addr);*out_receive_stream = std::move(receive_stream);*out_send_stream = std::move(send_stream);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr,
          out_peer_addr,
          out_receive_stream,
          out_send_stream));
  loop.Run();
}
void NetworkContextAsyncWaiter::CreateTCPBoundSocket(
    const net::IPEndPoint& local_addr, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TCPBoundSocketRequest socket, int32_t* out_result, base::Optional<net::IPEndPoint>* out_local_addr) {
  base::RunLoop loop;
  proxy_->CreateTCPBoundSocket(std::move(local_addr),std::move(traffic_annotation),std::move(socket),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_result
,
             base::Optional<net::IPEndPoint>* out_local_addr
,
             int32_t result,
             const base::Optional<net::IPEndPoint>& local_addr) {*out_result = std::move(result);*out_local_addr = std::move(local_addr);
            loop->Quit();
          },
          &loop,
          out_result,
          out_local_addr));
  loop.Run();
}
void NetworkContextAsyncWaiter::ForceReloadProxyConfig(
    ) {
  base::RunLoop loop;
  proxy_->ForceReloadProxyConfig(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ClearBadProxiesCache(
    ) {
  base::RunLoop loop;
  proxy_->ClearBadProxiesCache(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::VerifyCertForSignedExchange(
    const scoped_refptr<net::X509Certificate>& certificate, const GURL& url, const std::string& ocsp_response, const std::string& sct_list, int32_t* out_error_code, net::CertVerifyResult* out_cv_result, net::ct::CTVerifyResult* out_ct_result) {
  base::RunLoop loop;
  proxy_->VerifyCertForSignedExchange(std::move(certificate),std::move(url),std::move(ocsp_response),std::move(sct_list),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_error_code
,
             net::CertVerifyResult* out_cv_result
,
             net::ct::CTVerifyResult* out_ct_result
,
             int32_t error_code,
             const net::CertVerifyResult& cv_result,
             const net::ct::CTVerifyResult& ct_result) {*out_error_code = std::move(error_code);*out_cv_result = std::move(cv_result);*out_ct_result = std::move(ct_result);
            loop->Quit();
          },
          &loop,
          out_error_code,
          out_cv_result,
          out_ct_result));
  loop.Run();
}
void NetworkContextAsyncWaiter::AddHSTS(
    const std::string& host, base::Time expiry, bool include_subdomains) {
  base::RunLoop loop;
  proxy_->AddHSTS(std::move(host),std::move(expiry),std::move(include_subdomains),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::IsHSTSActiveForHost(
    const std::string& host, bool* out_result) {
  base::RunLoop loop;
  proxy_->IsHSTSActiveForHost(std::move(host),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void NetworkContextAsyncWaiter::GetHSTSState(
    const std::string& domain, base::Value* out_state) {
  base::RunLoop loop;
  proxy_->GetHSTSState(std::move(domain),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Value* out_state
,
             base::Value state) {*out_state = std::move(state);
            loop->Quit();
          },
          &loop,
          out_state));
  loop.Run();
}
void NetworkContextAsyncWaiter::SetCorsOriginAccessListsForOrigin(
    const url::Origin& source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> block_patterns) {
  base::RunLoop loop;
  proxy_->SetCorsOriginAccessListsForOrigin(std::move(source_origin),std::move(allow_patterns),std::move(block_patterns),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::DeleteDynamicDataForHost(
    const std::string& host, bool* out_result) {
  base::RunLoop loop;
  proxy_->DeleteDynamicDataForHost(std::move(host),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void NetworkContextAsyncWaiter::SaveHttpAuthCache(
    base::UnguessableToken* out_cache_key) {
  base::RunLoop loop;
  proxy_->SaveHttpAuthCache(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_cache_key
,
             const base::UnguessableToken& cache_key) {*out_cache_key = std::move(cache_key);
            loop->Quit();
          },
          &loop,
          out_cache_key));
  loop.Run();
}
void NetworkContextAsyncWaiter::LoadHttpAuthCache(
    const base::UnguessableToken& cache_key) {
  base::RunLoop loop;
  proxy_->LoadHttpAuthCache(std::move(cache_key),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::LookupBasicAuthCredentials(
    const GURL& url, base::Optional<net::AuthCredentials>* out_credentials) {
  base::RunLoop loop;
  proxy_->LookupBasicAuthCredentials(std::move(url),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<net::AuthCredentials>* out_credentials
,
             const base::Optional<net::AuthCredentials>& credentials) {*out_credentials = std::move(credentials);
            loop->Quit();
          },
          &loop,
          out_credentials));
  loop.Run();
}
void NetworkContextAsyncWaiter::EnableStaticKeyPinningForTesting(
    ) {
  base::RunLoop loop;
  proxy_->EnableStaticKeyPinningForTesting(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::SetFailingHttpTransactionForTesting(
    int32_t rv) {
  base::RunLoop loop;
  proxy_->SetFailingHttpTransactionForTesting(std::move(rv),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::VerifyCertificateForTesting(
    const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, int32_t* out_error_code) {
  base::RunLoop loop;
  proxy_->VerifyCertificateForTesting(std::move(certificate),std::move(hostname),std::move(ocsp_response),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_error_code
,
             int32_t error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void NetworkContextAsyncWaiter::AddDomainReliabilityContextForTesting(
    const GURL& origin, const GURL& upload_url) {
  base::RunLoop loop;
  proxy_->AddDomainReliabilityContextForTesting(std::move(origin),std::move(upload_url),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void NetworkContextAsyncWaiter::ForceDomainReliabilityUploadsForTesting(
    ) {
  base::RunLoop loop;
  proxy_->ForceDomainReliabilityUploadsForTesting(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif