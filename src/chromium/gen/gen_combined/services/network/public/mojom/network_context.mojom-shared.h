// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/network/public/mojom/network_context.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "services/network/public/mojom/address_list.mojom-shared.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "services/network/public/mojom/cors_origin_pattern.mojom-shared.h"
#include "services/network/public/mojom/host_resolver.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/mdns_responder.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/net_log.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/origin_policy_manager.mojom-shared.h"
#include "services/network/public/mojom/p2p.mojom-shared.h"
#include "services/network/public/mojom/p2p_trusted.mojom-shared.h"
#include "services/network/public/mojom/proxy_config.mojom-shared.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom-shared.h"
#include "services/network/public/mojom/proxy_resolving_socket.mojom-shared.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared.h"
#include "services/network/public/mojom/ssl_config.mojom-shared.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared.h"
#include "services/network/public/mojom/udp_socket.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/network/public/mojom/websocket.mojom-shared.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "services/network/public/mojom/ct_log_info.mojom-shared.h"
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class CustomProxyConfigDataView;

class NetworkContextParamsDataView;

class NetworkConditionsDataView;

class ClearDataFilterDataView;

class NetworkUsageDataView;

class SignedExchangeReportDataView;

class URLLoaderFactoryParamsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::CustomProxyConfigDataView> {
  using Data = ::network::mojom::internal::CustomProxyConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::NetworkContextParamsDataView> {
  using Data = ::network::mojom::internal::NetworkContextParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::NetworkConditionsDataView> {
  using Data = ::network::mojom::internal::NetworkConditions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::ClearDataFilterDataView> {
  using Data = ::network::mojom::internal::ClearDataFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::NetworkUsageDataView> {
  using Data = ::network::mojom::internal::NetworkUsage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::SignedExchangeReportDataView> {
  using Data = ::network::mojom::internal::SignedExchangeReport_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::URLLoaderFactoryParamsDataView> {
  using Data = ::network::mojom::internal::URLLoaderFactoryParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class ClearDataFilter_Type : int32_t {
  
  DELETE_MATCHES,
  
  KEEP_MATCHES,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, ClearDataFilter_Type value);
inline bool IsKnownEnumValue(ClearDataFilter_Type value) {
  return internal::ClearDataFilter_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NetworkContext_DomainReliabilityClearMode : int32_t {
  
  CLEAR_CONTEXTS,
  
  CLEAR_BEACONS,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, NetworkContext_DomainReliabilityClearMode value);
inline bool IsKnownEnumValue(NetworkContext_DomainReliabilityClearMode value) {
  return internal::NetworkContext_DomainReliabilityClearMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CustomProxyConfigClientInterfaceBase {};

using CustomProxyConfigClientPtrDataView =
    mojo::InterfacePtrDataView<CustomProxyConfigClientInterfaceBase>;
using CustomProxyConfigClientRequestDataView =
    mojo::InterfaceRequestDataView<CustomProxyConfigClientInterfaceBase>;
using CustomProxyConfigClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CustomProxyConfigClientInterfaceBase>;
using CustomProxyConfigClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CustomProxyConfigClientInterfaceBase>;
class TrustedHeaderClientInterfaceBase {};

using TrustedHeaderClientPtrDataView =
    mojo::InterfacePtrDataView<TrustedHeaderClientInterfaceBase>;
using TrustedHeaderClientRequestDataView =
    mojo::InterfaceRequestDataView<TrustedHeaderClientInterfaceBase>;
using TrustedHeaderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TrustedHeaderClientInterfaceBase>;
using TrustedHeaderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TrustedHeaderClientInterfaceBase>;
class TrustedURLLoaderHeaderClientInterfaceBase {};

using TrustedURLLoaderHeaderClientPtrDataView =
    mojo::InterfacePtrDataView<TrustedURLLoaderHeaderClientInterfaceBase>;
using TrustedURLLoaderHeaderClientRequestDataView =
    mojo::InterfaceRequestDataView<TrustedURLLoaderHeaderClientInterfaceBase>;
using TrustedURLLoaderHeaderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TrustedURLLoaderHeaderClientInterfaceBase>;
using TrustedURLLoaderHeaderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TrustedURLLoaderHeaderClientInterfaceBase>;
class NetworkContextClientInterfaceBase {};

using NetworkContextClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkContextClientInterfaceBase>;
using NetworkContextClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkContextClientInterfaceBase>;
using NetworkContextClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkContextClientInterfaceBase>;
using NetworkContextClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkContextClientInterfaceBase>;
class NetworkContextInterfaceBase {};

using NetworkContextPtrDataView =
    mojo::InterfacePtrDataView<NetworkContextInterfaceBase>;
using NetworkContextRequestDataView =
    mojo::InterfaceRequestDataView<NetworkContextInterfaceBase>;
using NetworkContextAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkContextInterfaceBase>;
using NetworkContextAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkContextInterfaceBase>;
class CustomProxyConfigDataView {
 public:
  CustomProxyConfigDataView() {}

  CustomProxyConfigDataView(
      internal::CustomProxyConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRulesDataView(
      ::network::mojom::ProxyRulesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRules(UserType* output) {
    auto* pointer = data_->rules.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyRulesDataView>(
        pointer, output, context_);
  }
  bool should_override_existing_config() const {
    return data_->should_override_existing_config;
  }
  bool allow_non_idempotent_methods() const {
    return data_->allow_non_idempotent_methods;
  }
  bool assume_https_proxies_support_quic() const {
    return data_->assume_https_proxies_support_quic;
  }
  bool can_use_proxy_on_http_url_redirect_cycles() const {
    return data_->can_use_proxy_on_http_url_redirect_cycles;
  }
  inline void GetPreCacheHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreCacheHeaders(UserType* output) {
    auto* pointer = data_->pre_cache_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetPostCacheHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPostCacheHeaders(UserType* output) {
    auto* pointer = data_->post_cache_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetConnectTunnelHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConnectTunnelHeaders(UserType* output) {
    auto* pointer = data_->connect_tunnel_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
 private:
  internal::CustomProxyConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkContextParamsDataView {
 public:
  NetworkContextParamsDataView() {}

  NetworkContextParamsDataView(
      internal::NetworkContextParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContextNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContextName(UserType* output) {
    auto* pointer = data_->context_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUserAgentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserAgent(UserType* output) {
    auto* pointer = data_->user_agent.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAcceptLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAcceptLanguage(UserType* output) {
    auto* pointer = data_->accept_language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enable_brotli() const {
    return data_->enable_brotli;
  }
  inline void GetQuicUserAgentIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuicUserAgentId(UserType* output) {
    auto* pointer = data_->quic_user_agent_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool enable_referrers() const {
    return data_->enable_referrers;
  }
  bool validate_referrer_policy_on_initial_request() const {
    return data_->validate_referrer_policy_on_initial_request;
  }
  template <typename UserType>
  UserType TakeProxyResolverFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyResolverFactoryPtrDataView>(
            &data_->proxy_resolver_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetCookiePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookiePath(UserType* output) {
    auto* pointer = data_->cookie_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  bool enable_encrypted_cookies() const {
    return data_->enable_encrypted_cookies;
  }
  bool restore_old_session_cookies() const {
    return data_->restore_old_session_cookies;
  }
  bool persist_session_cookies() const {
    return data_->persist_session_cookies;
  }
  bool http_cache_enabled() const {
    return data_->http_cache_enabled;
  }
  int32_t http_cache_max_size() const {
    return data_->http_cache_max_size;
  }
  inline void GetHttpCachePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpCachePath(UserType* output) {
    auto* pointer = data_->http_cache_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetHttpServerPropertiesPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpServerPropertiesPath(UserType* output) {
    auto* pointer = data_->http_server_properties_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetTransportSecurityPersisterPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransportSecurityPersisterPath(UserType* output) {
    auto* pointer = data_->transport_security_persister_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  bool enable_ftp_url_support() const {
    return data_->enable_ftp_url_support;
  }
  bool enforce_chrome_ct_policy() const {
    return data_->enforce_chrome_ct_policy;
  }
  bool http_09_on_non_default_ports_enabled() const {
    return data_->http_09_on_non_default_ports_enabled;
  }
  bool disable_idle_sockets_close_on_memory_pressure() const {
    return data_->disable_idle_sockets_close_on_memory_pressure;
  }
  inline void GetInitialSslConfigDataView(
      ::network::mojom::SSLConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialSslConfig(UserType* output) {
    auto* pointer = data_->initial_ssl_config.Get();
    return mojo::internal::Deserialize<::network::mojom::SSLConfigDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSslConfigClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::SSLConfigClientRequestDataView>(
            &data_->ssl_config_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInitialProxyConfigDataView(
      ::network::mojom::ProxyConfigWithAnnotationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialProxyConfig(UserType* output) {
    auto* pointer = data_->initial_proxy_config.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeProxyConfigClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyConfigClientRequestDataView>(
            &data_->proxy_config_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInitialCustomProxyConfigDataView(
      CustomProxyConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialCustomProxyConfig(UserType* output) {
    auto* pointer = data_->initial_custom_proxy_config.Get();
    return mojo::internal::Deserialize<::network::mojom::CustomProxyConfigDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCustomProxyConfigClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CustomProxyConfigClientRequestDataView>(
            &data_->custom_proxy_config_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProxyConfigPollerClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyConfigPollerClientPtrDataView>(
            &data_->proxy_config_poller_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProxyErrorClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ProxyErrorClientPtrDataView>(
            &data_->proxy_error_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool pac_quick_check_enabled() const {
    return data_->pac_quick_check_enabled;
  }
  bool enable_certificate_reporting() const {
    return data_->enable_certificate_reporting;
  }
  bool enable_expect_ct_reporting() const {
    return data_->enable_expect_ct_reporting;
  }
  inline void GetCtLogsDataView(
      mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCtLogs(UserType* output) {
    auto* pointer = data_->ct_logs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetTrialComparisonCertVerifierParamsDataView(
      ::network::mojom::TrialComparisonCertVerifierParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrialComparisonCertVerifierParams(UserType* output) {
    auto* pointer = data_->trial_comparison_cert_verifier_params.Get();
    return mojo::internal::Deserialize<::network::mojom::TrialComparisonCertVerifierParamsDataView>(
        pointer, output, context_);
  }
  inline void GetCookieManagerParamsDataView(
      ::network::mojom::CookieManagerParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieManagerParams(UserType* output) {
    auto* pointer = data_->cookie_manager_params.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieManagerParamsDataView>(
        pointer, output, context_);
  }
  bool enable_domain_reliability() const {
    return data_->enable_domain_reliability;
  }
  inline void GetDomainReliabilityUploadReporterDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomainReliabilityUploadReporter(UserType* output) {
    auto* pointer = data_->domain_reliability_upload_reporter.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool discard_domain_reliablity_uploads() const {
    return data_->discard_domain_reliablity_uploads;
  }
  inline void GetReportingDeliveryIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportingDeliveryInterval(UserType* output) {
    auto* pointer = data_->reporting_delivery_interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool skip_reporting_send_permission_check() const {
    return data_->skip_reporting_send_permission_check;
  }
  bool primary_network_context() const {
    return data_->primary_network_context;
  }
  inline void GetCorsOriginAccessListDataView(
      mojo::ArrayDataView<::network::mojom::CorsOriginAccessPatternsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorsOriginAccessList(UserType* output) {
    auto* pointer = data_->cors_origin_access_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CorsOriginAccessPatternsDataView>>(
        pointer, output, context_);
  }
  inline void GetCorsExemptHeaderListDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorsExemptHeaderList(UserType* output) {
    auto* pointer = data_->cors_exempt_header_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkContextParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkConditionsDataView {
 public:
  NetworkConditionsDataView() {}

  NetworkConditionsDataView(
      internal::NetworkConditions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool offline() const {
    return data_->offline;
  }
  inline void GetLatencyDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatency(UserType* output) {
    auto* pointer = data_->latency.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  double download_throughput() const {
    return data_->download_throughput;
  }
  double upload_throughput() const {
    return data_->upload_throughput;
  }
 private:
  internal::NetworkConditions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ClearDataFilterDataView {
 public:
  ClearDataFilterDataView() {}

  ClearDataFilterDataView(
      internal::ClearDataFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ClearDataFilter_Type>(
        data_value, output);
  }

  ClearDataFilter_Type type() const {
    return static_cast<ClearDataFilter_Type>(data_->type);
  }
  inline void GetDomainsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomains(UserType* output) {
    auto* pointer = data_->domains.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetOriginsDataView(
      mojo::ArrayDataView<::url::mojom::OriginDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigins(UserType* output) {
    auto* pointer = data_->origins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ClearDataFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkUsageDataView {
 public:
  NetworkUsageDataView() {}

  NetworkUsageDataView(
      internal::NetworkUsage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  int64_t total_bytes_received() const {
    return data_->total_bytes_received;
  }
  int64_t total_bytes_sent() const {
    return data_->total_bytes_sent;
  }
 private:
  internal::NetworkUsage_Data* data_ = nullptr;
};

class SignedExchangeReportDataView {
 public:
  SignedExchangeReportDataView() {}

  SignedExchangeReportDataView(
      internal::SignedExchangeReport_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetOuterUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOuterUrl(UserType* output) {
    auto* pointer = data_->outer_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetInnerUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInnerUrl(UserType* output) {
    auto* pointer = data_->inner_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetCertUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertUrl(UserType* output) {
    auto* pointer = data_->cert_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetServerIpAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServerIpAddress(UserType* output) {
    auto* pointer = data_->server_ip_address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
  inline void GetProtocolDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtocol(UserType* output) {
    auto* pointer = data_->protocol.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t status_code() const {
    return data_->status_code;
  }
  inline void GetElapsedTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElapsedTime(UserType* output) {
    auto* pointer = data_->elapsed_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::SignedExchangeReport_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderFactoryParamsDataView {
 public:
  URLLoaderFactoryParamsDataView() {}

  URLLoaderFactoryParamsDataView(
      internal::URLLoaderFactoryParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  inline void GetRequestInitiatorSiteLockDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestInitiatorSiteLock(UserType* output) {
    auto* pointer = data_->request_initiator_site_lock.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  bool is_corb_enabled() const {
    return data_->is_corb_enabled;
  }
  bool disable_web_security() const {
    return data_->disable_web_security;
  }
  template <typename UserType>
  UserType TakeHeaderClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TrustedURLLoaderHeaderClientPtrDataView>(
            &data_->header_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetFactoryBoundAllowPatternsDataView(
      mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFactoryBoundAllowPatterns(UserType* output) {
    auto* pointer = data_->factory_bound_allow_patterns.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderFactoryParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ClearDataFilter_Type>
    : public mojo::internal::EnumHashImpl<::network::mojom::ClearDataFilter_Type> {};

template <>
struct hash<::network::mojom::NetworkContext_DomainReliabilityClearMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::NetworkContext_DomainReliabilityClearMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ClearDataFilter_Type, ::network::mojom::ClearDataFilter_Type> {
  static ::network::mojom::ClearDataFilter_Type ToMojom(::network::mojom::ClearDataFilter_Type input) { return input; }
  static bool FromMojom(::network::mojom::ClearDataFilter_Type input, ::network::mojom::ClearDataFilter_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ClearDataFilter_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ClearDataFilter_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ClearDataFilter_Type>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::NetworkContext_DomainReliabilityClearMode, ::network::mojom::NetworkContext_DomainReliabilityClearMode> {
  static ::network::mojom::NetworkContext_DomainReliabilityClearMode ToMojom(::network::mojom::NetworkContext_DomainReliabilityClearMode input) { return input; }
  static bool FromMojom(::network::mojom::NetworkContext_DomainReliabilityClearMode input, ::network::mojom::NetworkContext_DomainReliabilityClearMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkContext_DomainReliabilityClearMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::NetworkContext_DomainReliabilityClearMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::NetworkContext_DomainReliabilityClearMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CustomProxyConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CustomProxyConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CustomProxyConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::rules(input)) in_rules = Traits::rules(input);
    typename decltype((*output)->rules)::BaseType::BufferWriter
        rules_writer;
    mojo::internal::Serialize<::network::mojom::ProxyRulesDataView>(
        in_rules, buffer, &rules_writer, context);
    (*output)->rules.Set(
        rules_writer.is_null() ? nullptr : rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rules in CustomProxyConfig struct");
    (*output)->should_override_existing_config = Traits::should_override_existing_config(input);
    (*output)->allow_non_idempotent_methods = Traits::allow_non_idempotent_methods(input);
    (*output)->assume_https_proxies_support_quic = Traits::assume_https_proxies_support_quic(input);
    (*output)->can_use_proxy_on_http_url_redirect_cycles = Traits::can_use_proxy_on_http_url_redirect_cycles(input);
    decltype(Traits::pre_cache_headers(input)) in_pre_cache_headers = Traits::pre_cache_headers(input);
    typename decltype((*output)->pre_cache_headers)::BaseType::BufferWriter
        pre_cache_headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_pre_cache_headers, buffer, &pre_cache_headers_writer, context);
    (*output)->pre_cache_headers.Set(
        pre_cache_headers_writer.is_null() ? nullptr : pre_cache_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pre_cache_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pre_cache_headers in CustomProxyConfig struct");
    decltype(Traits::post_cache_headers(input)) in_post_cache_headers = Traits::post_cache_headers(input);
    typename decltype((*output)->post_cache_headers)::BaseType::BufferWriter
        post_cache_headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_post_cache_headers, buffer, &post_cache_headers_writer, context);
    (*output)->post_cache_headers.Set(
        post_cache_headers_writer.is_null() ? nullptr : post_cache_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->post_cache_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null post_cache_headers in CustomProxyConfig struct");
    decltype(Traits::connect_tunnel_headers(input)) in_connect_tunnel_headers = Traits::connect_tunnel_headers(input);
    typename decltype((*output)->connect_tunnel_headers)::BaseType::BufferWriter
        connect_tunnel_headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_connect_tunnel_headers, buffer, &connect_tunnel_headers_writer, context);
    (*output)->connect_tunnel_headers.Set(
        connect_tunnel_headers_writer.is_null() ? nullptr : connect_tunnel_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->connect_tunnel_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null connect_tunnel_headers in CustomProxyConfig struct");
  }

  static bool Deserialize(::network::mojom::internal::CustomProxyConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CustomProxyConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkContextParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkContextParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkContextParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::context_name(input)) in_context_name = Traits::context_name(input);
    typename decltype((*output)->context_name)::BaseType::BufferWriter
        context_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_context_name, buffer, &context_name_writer, context);
    (*output)->context_name.Set(
        context_name_writer.is_null() ? nullptr : context_name_writer.data());
    decltype(Traits::user_agent(input)) in_user_agent = Traits::user_agent(input);
    typename decltype((*output)->user_agent)::BaseType::BufferWriter
        user_agent_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_user_agent, buffer, &user_agent_writer, context);
    (*output)->user_agent.Set(
        user_agent_writer.is_null() ? nullptr : user_agent_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user_agent.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user_agent in NetworkContextParams struct");
    decltype(Traits::accept_language(input)) in_accept_language = Traits::accept_language(input);
    typename decltype((*output)->accept_language)::BaseType::BufferWriter
        accept_language_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_accept_language, buffer, &accept_language_writer, context);
    (*output)->accept_language.Set(
        accept_language_writer.is_null() ? nullptr : accept_language_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->accept_language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null accept_language in NetworkContextParams struct");
    (*output)->enable_brotli = Traits::enable_brotli(input);
    decltype(Traits::quic_user_agent_id(input)) in_quic_user_agent_id = Traits::quic_user_agent_id(input);
    typename decltype((*output)->quic_user_agent_id)::BaseType::BufferWriter
        quic_user_agent_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_quic_user_agent_id, buffer, &quic_user_agent_id_writer, context);
    (*output)->quic_user_agent_id.Set(
        quic_user_agent_id_writer.is_null() ? nullptr : quic_user_agent_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->quic_user_agent_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null quic_user_agent_id in NetworkContextParams struct");
    (*output)->enable_referrers = Traits::enable_referrers(input);
    (*output)->validate_referrer_policy_on_initial_request = Traits::validate_referrer_policy_on_initial_request(input);
    decltype(Traits::proxy_resolver_factory(input)) in_proxy_resolver_factory = Traits::proxy_resolver_factory(input);
    mojo::internal::Serialize<::proxy_resolver::mojom::ProxyResolverFactoryPtrDataView>(
        in_proxy_resolver_factory, &(*output)->proxy_resolver_factory, context);
    decltype(Traits::cookie_path(input)) in_cookie_path = Traits::cookie_path(input);
    typename decltype((*output)->cookie_path)::BaseType::BufferWriter
        cookie_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_cookie_path, buffer, &cookie_path_writer, context);
    (*output)->cookie_path.Set(
        cookie_path_writer.is_null() ? nullptr : cookie_path_writer.data());
    (*output)->enable_encrypted_cookies = Traits::enable_encrypted_cookies(input);
    (*output)->restore_old_session_cookies = Traits::restore_old_session_cookies(input);
    (*output)->persist_session_cookies = Traits::persist_session_cookies(input);
    (*output)->http_cache_enabled = Traits::http_cache_enabled(input);
    (*output)->http_cache_max_size = Traits::http_cache_max_size(input);
    decltype(Traits::http_cache_path(input)) in_http_cache_path = Traits::http_cache_path(input);
    typename decltype((*output)->http_cache_path)::BaseType::BufferWriter
        http_cache_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_http_cache_path, buffer, &http_cache_path_writer, context);
    (*output)->http_cache_path.Set(
        http_cache_path_writer.is_null() ? nullptr : http_cache_path_writer.data());
    decltype(Traits::http_server_properties_path(input)) in_http_server_properties_path = Traits::http_server_properties_path(input);
    typename decltype((*output)->http_server_properties_path)::BaseType::BufferWriter
        http_server_properties_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_http_server_properties_path, buffer, &http_server_properties_path_writer, context);
    (*output)->http_server_properties_path.Set(
        http_server_properties_path_writer.is_null() ? nullptr : http_server_properties_path_writer.data());
    decltype(Traits::transport_security_persister_path(input)) in_transport_security_persister_path = Traits::transport_security_persister_path(input);
    typename decltype((*output)->transport_security_persister_path)::BaseType::BufferWriter
        transport_security_persister_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_transport_security_persister_path, buffer, &transport_security_persister_path_writer, context);
    (*output)->transport_security_persister_path.Set(
        transport_security_persister_path_writer.is_null() ? nullptr : transport_security_persister_path_writer.data());
    (*output)->enable_ftp_url_support = Traits::enable_ftp_url_support(input);
    (*output)->enforce_chrome_ct_policy = Traits::enforce_chrome_ct_policy(input);
    (*output)->http_09_on_non_default_ports_enabled = Traits::http_09_on_non_default_ports_enabled(input);
    (*output)->disable_idle_sockets_close_on_memory_pressure = Traits::disable_idle_sockets_close_on_memory_pressure(input);
    decltype(Traits::initial_ssl_config(input)) in_initial_ssl_config = Traits::initial_ssl_config(input);
    typename decltype((*output)->initial_ssl_config)::BaseType::BufferWriter
        initial_ssl_config_writer;
    mojo::internal::Serialize<::network::mojom::SSLConfigDataView>(
        in_initial_ssl_config, buffer, &initial_ssl_config_writer, context);
    (*output)->initial_ssl_config.Set(
        initial_ssl_config_writer.is_null() ? nullptr : initial_ssl_config_writer.data());
    decltype(Traits::ssl_config_client_request(input)) in_ssl_config_client_request = Traits::ssl_config_client_request(input);
    mojo::internal::Serialize<::network::mojom::SSLConfigClientRequestDataView>(
        in_ssl_config_client_request, &(*output)->ssl_config_client_request, context);
    decltype(Traits::initial_proxy_config(input)) in_initial_proxy_config = Traits::initial_proxy_config(input);
    typename decltype((*output)->initial_proxy_config)::BaseType::BufferWriter
        initial_proxy_config_writer;
    mojo::internal::Serialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
        in_initial_proxy_config, buffer, &initial_proxy_config_writer, context);
    (*output)->initial_proxy_config.Set(
        initial_proxy_config_writer.is_null() ? nullptr : initial_proxy_config_writer.data());
    decltype(Traits::proxy_config_client_request(input)) in_proxy_config_client_request = Traits::proxy_config_client_request(input);
    mojo::internal::Serialize<::network::mojom::ProxyConfigClientRequestDataView>(
        in_proxy_config_client_request, &(*output)->proxy_config_client_request, context);
    decltype(Traits::initial_custom_proxy_config(input)) in_initial_custom_proxy_config = Traits::initial_custom_proxy_config(input);
    typename decltype((*output)->initial_custom_proxy_config)::BaseType::BufferWriter
        initial_custom_proxy_config_writer;
    mojo::internal::Serialize<::network::mojom::CustomProxyConfigDataView>(
        in_initial_custom_proxy_config, buffer, &initial_custom_proxy_config_writer, context);
    (*output)->initial_custom_proxy_config.Set(
        initial_custom_proxy_config_writer.is_null() ? nullptr : initial_custom_proxy_config_writer.data());
    decltype(Traits::custom_proxy_config_client_request(input)) in_custom_proxy_config_client_request = Traits::custom_proxy_config_client_request(input);
    mojo::internal::Serialize<::network::mojom::CustomProxyConfigClientRequestDataView>(
        in_custom_proxy_config_client_request, &(*output)->custom_proxy_config_client_request, context);
    decltype(Traits::proxy_config_poller_client(input)) in_proxy_config_poller_client = Traits::proxy_config_poller_client(input);
    mojo::internal::Serialize<::network::mojom::ProxyConfigPollerClientPtrDataView>(
        in_proxy_config_poller_client, &(*output)->proxy_config_poller_client, context);
    decltype(Traits::proxy_error_client(input)) in_proxy_error_client = Traits::proxy_error_client(input);
    mojo::internal::Serialize<::network::mojom::ProxyErrorClientPtrDataView>(
        in_proxy_error_client, &(*output)->proxy_error_client, context);
    (*output)->pac_quick_check_enabled = Traits::pac_quick_check_enabled(input);
    (*output)->enable_certificate_reporting = Traits::enable_certificate_reporting(input);
    (*output)->enable_expect_ct_reporting = Traits::enable_expect_ct_reporting(input);
    decltype(Traits::ct_logs(input)) in_ct_logs = Traits::ct_logs(input);
    typename decltype((*output)->ct_logs)::BaseType::BufferWriter
        ct_logs_writer;
    const mojo::internal::ContainerValidateParams ct_logs_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>>(
        in_ct_logs, buffer, &ct_logs_writer, &ct_logs_validate_params,
        context);
    (*output)->ct_logs.Set(
        ct_logs_writer.is_null() ? nullptr : ct_logs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ct_logs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ct_logs in NetworkContextParams struct");
    decltype(Traits::trial_comparison_cert_verifier_params(input)) in_trial_comparison_cert_verifier_params = Traits::trial_comparison_cert_verifier_params(input);
    typename decltype((*output)->trial_comparison_cert_verifier_params)::BaseType::BufferWriter
        trial_comparison_cert_verifier_params_writer;
    mojo::internal::Serialize<::network::mojom::TrialComparisonCertVerifierParamsDataView>(
        in_trial_comparison_cert_verifier_params, buffer, &trial_comparison_cert_verifier_params_writer, context);
    (*output)->trial_comparison_cert_verifier_params.Set(
        trial_comparison_cert_verifier_params_writer.is_null() ? nullptr : trial_comparison_cert_verifier_params_writer.data());
    decltype(Traits::cookie_manager_params(input)) in_cookie_manager_params = Traits::cookie_manager_params(input);
    typename decltype((*output)->cookie_manager_params)::BaseType::BufferWriter
        cookie_manager_params_writer;
    mojo::internal::Serialize<::network::mojom::CookieManagerParamsDataView>(
        in_cookie_manager_params, buffer, &cookie_manager_params_writer, context);
    (*output)->cookie_manager_params.Set(
        cookie_manager_params_writer.is_null() ? nullptr : cookie_manager_params_writer.data());
    (*output)->enable_domain_reliability = Traits::enable_domain_reliability(input);
    decltype(Traits::domain_reliability_upload_reporter(input)) in_domain_reliability_upload_reporter = Traits::domain_reliability_upload_reporter(input);
    typename decltype((*output)->domain_reliability_upload_reporter)::BaseType::BufferWriter
        domain_reliability_upload_reporter_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_domain_reliability_upload_reporter, buffer, &domain_reliability_upload_reporter_writer, context);
    (*output)->domain_reliability_upload_reporter.Set(
        domain_reliability_upload_reporter_writer.is_null() ? nullptr : domain_reliability_upload_reporter_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domain_reliability_upload_reporter.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domain_reliability_upload_reporter in NetworkContextParams struct");
    (*output)->discard_domain_reliablity_uploads = Traits::discard_domain_reliablity_uploads(input);
    decltype(Traits::reporting_delivery_interval(input)) in_reporting_delivery_interval = Traits::reporting_delivery_interval(input);
    typename decltype((*output)->reporting_delivery_interval)::BaseType::BufferWriter
        reporting_delivery_interval_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_reporting_delivery_interval, buffer, &reporting_delivery_interval_writer, context);
    (*output)->reporting_delivery_interval.Set(
        reporting_delivery_interval_writer.is_null() ? nullptr : reporting_delivery_interval_writer.data());
    (*output)->skip_reporting_send_permission_check = Traits::skip_reporting_send_permission_check(input);
    (*output)->primary_network_context = Traits::primary_network_context(input);
    decltype(Traits::cors_origin_access_list(input)) in_cors_origin_access_list = Traits::cors_origin_access_list(input);
    typename decltype((*output)->cors_origin_access_list)::BaseType::BufferWriter
        cors_origin_access_list_writer;
    const mojo::internal::ContainerValidateParams cors_origin_access_list_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CorsOriginAccessPatternsDataView>>(
        in_cors_origin_access_list, buffer, &cors_origin_access_list_writer, &cors_origin_access_list_validate_params,
        context);
    (*output)->cors_origin_access_list.Set(
        cors_origin_access_list_writer.is_null() ? nullptr : cors_origin_access_list_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cors_origin_access_list.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cors_origin_access_list in NetworkContextParams struct");
    decltype(Traits::cors_exempt_header_list(input)) in_cors_exempt_header_list = Traits::cors_exempt_header_list(input);
    typename decltype((*output)->cors_exempt_header_list)::BaseType::BufferWriter
        cors_exempt_header_list_writer;
    const mojo::internal::ContainerValidateParams cors_exempt_header_list_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_cors_exempt_header_list, buffer, &cors_exempt_header_list_writer, &cors_exempt_header_list_validate_params,
        context);
    (*output)->cors_exempt_header_list.Set(
        cors_exempt_header_list_writer.is_null() ? nullptr : cors_exempt_header_list_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cors_exempt_header_list.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cors_exempt_header_list in NetworkContextParams struct");
  }

  static bool Deserialize(::network::mojom::internal::NetworkContextParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkContextParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkConditionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkConditionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkConditions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->offline = Traits::offline(input);
    decltype(Traits::latency(input)) in_latency = Traits::latency(input);
    typename decltype((*output)->latency)::BaseType::BufferWriter
        latency_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_latency, buffer, &latency_writer, context);
    (*output)->latency.Set(
        latency_writer.is_null() ? nullptr : latency_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency in NetworkConditions struct");
    (*output)->download_throughput = Traits::download_throughput(input);
    (*output)->upload_throughput = Traits::upload_throughput(input);
  }

  static bool Deserialize(::network::mojom::internal::NetworkConditions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkConditionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ClearDataFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ClearDataFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ClearDataFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::ClearDataFilter_Type>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::domains(input)) in_domains = Traits::domains(input);
    typename decltype((*output)->domains)::BaseType::BufferWriter
        domains_writer;
    const mojo::internal::ContainerValidateParams domains_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_domains, buffer, &domains_writer, &domains_validate_params,
        context);
    (*output)->domains.Set(
        domains_writer.is_null() ? nullptr : domains_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domains.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domains in ClearDataFilter struct");
    decltype(Traits::origins(input)) in_origins = Traits::origins(input);
    typename decltype((*output)->origins)::BaseType::BufferWriter
        origins_writer;
    const mojo::internal::ContainerValidateParams origins_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
        in_origins, buffer, &origins_writer, &origins_validate_params,
        context);
    (*output)->origins.Set(
        origins_writer.is_null() ? nullptr : origins_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->origins.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origins in ClearDataFilter struct");
  }

  static bool Deserialize(::network::mojom::internal::ClearDataFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ClearDataFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkUsageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkUsageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkUsage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->process_id = Traits::process_id(input);
    (*output)->routing_id = Traits::routing_id(input);
    (*output)->total_bytes_received = Traits::total_bytes_received(input);
    (*output)->total_bytes_sent = Traits::total_bytes_sent(input);
  }

  static bool Deserialize(::network::mojom::internal::NetworkUsage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkUsageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SignedExchangeReportDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::SignedExchangeReportDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::SignedExchangeReport_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->success = Traits::success(input);
    decltype(Traits::type(input)) in_type = Traits::type(input);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in SignedExchangeReport struct");
    decltype(Traits::outer_url(input)) in_outer_url = Traits::outer_url(input);
    typename decltype((*output)->outer_url)::BaseType::BufferWriter
        outer_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_outer_url, buffer, &outer_url_writer, context);
    (*output)->outer_url.Set(
        outer_url_writer.is_null() ? nullptr : outer_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->outer_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null outer_url in SignedExchangeReport struct");
    decltype(Traits::inner_url(input)) in_inner_url = Traits::inner_url(input);
    typename decltype((*output)->inner_url)::BaseType::BufferWriter
        inner_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_inner_url, buffer, &inner_url_writer, context);
    (*output)->inner_url.Set(
        inner_url_writer.is_null() ? nullptr : inner_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->inner_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null inner_url in SignedExchangeReport struct");
    decltype(Traits::cert_url(input)) in_cert_url = Traits::cert_url(input);
    typename decltype((*output)->cert_url)::BaseType::BufferWriter
        cert_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_cert_url, buffer, &cert_url_writer, context);
    (*output)->cert_url.Set(
        cert_url_writer.is_null() ? nullptr : cert_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cert_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cert_url in SignedExchangeReport struct");
    decltype(Traits::referrer(input)) in_referrer = Traits::referrer(input);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referrer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referrer in SignedExchangeReport struct");
    decltype(Traits::server_ip_address(input)) in_server_ip_address = Traits::server_ip_address(input);
    typename decltype((*output)->server_ip_address)::BaseType::BufferWriter
        server_ip_address_writer;
    mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
        in_server_ip_address, buffer, &server_ip_address_writer, context);
    (*output)->server_ip_address.Set(
        server_ip_address_writer.is_null() ? nullptr : server_ip_address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->server_ip_address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null server_ip_address in SignedExchangeReport struct");
    decltype(Traits::protocol(input)) in_protocol = Traits::protocol(input);
    typename decltype((*output)->protocol)::BaseType::BufferWriter
        protocol_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_protocol, buffer, &protocol_writer, context);
    (*output)->protocol.Set(
        protocol_writer.is_null() ? nullptr : protocol_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->protocol.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null protocol in SignedExchangeReport struct");
    decltype(Traits::method(input)) in_method = Traits::method(input);
    typename decltype((*output)->method)::BaseType::BufferWriter
        method_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method, buffer, &method_writer, context);
    (*output)->method.Set(
        method_writer.is_null() ? nullptr : method_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in SignedExchangeReport struct");
    (*output)->status_code = Traits::status_code(input);
    decltype(Traits::elapsed_time(input)) in_elapsed_time = Traits::elapsed_time(input);
    typename decltype((*output)->elapsed_time)::BaseType::BufferWriter
        elapsed_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_elapsed_time, buffer, &elapsed_time_writer, context);
    (*output)->elapsed_time.Set(
        elapsed_time_writer.is_null() ? nullptr : elapsed_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->elapsed_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null elapsed_time in SignedExchangeReport struct");
  }

  static bool Deserialize(::network::mojom::internal::SignedExchangeReport_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::SignedExchangeReportDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLLoaderFactoryParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::URLLoaderFactoryParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::URLLoaderFactoryParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->process_id = Traits::process_id(input);
    decltype(Traits::request_initiator_site_lock(input)) in_request_initiator_site_lock = Traits::request_initiator_site_lock(input);
    typename decltype((*output)->request_initiator_site_lock)::BaseType::BufferWriter
        request_initiator_site_lock_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_request_initiator_site_lock, buffer, &request_initiator_site_lock_writer, context);
    (*output)->request_initiator_site_lock.Set(
        request_initiator_site_lock_writer.is_null() ? nullptr : request_initiator_site_lock_writer.data());
    (*output)->is_corb_enabled = Traits::is_corb_enabled(input);
    (*output)->disable_web_security = Traits::disable_web_security(input);
    decltype(Traits::header_client(input)) in_header_client = Traits::header_client(input);
    mojo::internal::Serialize<::network::mojom::TrustedURLLoaderHeaderClientPtrDataView>(
        in_header_client, &(*output)->header_client, context);
    decltype(Traits::factory_bound_allow_patterns(input)) in_factory_bound_allow_patterns = Traits::factory_bound_allow_patterns(input);
    typename decltype((*output)->factory_bound_allow_patterns)::BaseType::BufferWriter
        factory_bound_allow_patterns_writer;
    const mojo::internal::ContainerValidateParams factory_bound_allow_patterns_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        in_factory_bound_allow_patterns, buffer, &factory_bound_allow_patterns_writer, &factory_bound_allow_patterns_validate_params,
        context);
    (*output)->factory_bound_allow_patterns.Set(
        factory_bound_allow_patterns_writer.is_null() ? nullptr : factory_bound_allow_patterns_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->factory_bound_allow_patterns.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null factory_bound_allow_patterns in URLLoaderFactoryParams struct");
  }

  static bool Deserialize(::network::mojom::internal::URLLoaderFactoryParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::URLLoaderFactoryParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void CustomProxyConfigDataView::GetRulesDataView(
    ::network::mojom::ProxyRulesDataView* output) {
  auto pointer = data_->rules.Get();
  *output = ::network::mojom::ProxyRulesDataView(pointer, context_);
}
inline void CustomProxyConfigDataView::GetPreCacheHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->pre_cache_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void CustomProxyConfigDataView::GetPostCacheHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->post_cache_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void CustomProxyConfigDataView::GetConnectTunnelHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->connect_tunnel_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}


inline void NetworkContextParamsDataView::GetContextNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->context_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetUserAgentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_agent.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetAcceptLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->accept_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetQuicUserAgentIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->quic_user_agent_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCookiePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->cookie_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetHttpCachePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->http_cache_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetHttpServerPropertiesPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->http_server_properties_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetTransportSecurityPersisterPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->transport_security_persister_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetInitialSslConfigDataView(
    ::network::mojom::SSLConfigDataView* output) {
  auto pointer = data_->initial_ssl_config.Get();
  *output = ::network::mojom::SSLConfigDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetInitialProxyConfigDataView(
    ::network::mojom::ProxyConfigWithAnnotationDataView* output) {
  auto pointer = data_->initial_proxy_config.Get();
  *output = ::network::mojom::ProxyConfigWithAnnotationDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetInitialCustomProxyConfigDataView(
    CustomProxyConfigDataView* output) {
  auto pointer = data_->initial_custom_proxy_config.Get();
  *output = CustomProxyConfigDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCtLogsDataView(
    mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>* output) {
  auto pointer = data_->ct_logs.Get();
  *output = mojo::ArrayDataView<::network::mojom::CTLogInfoDataView>(pointer, context_);
}
inline void NetworkContextParamsDataView::GetTrialComparisonCertVerifierParamsDataView(
    ::network::mojom::TrialComparisonCertVerifierParamsDataView* output) {
  auto pointer = data_->trial_comparison_cert_verifier_params.Get();
  *output = ::network::mojom::TrialComparisonCertVerifierParamsDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCookieManagerParamsDataView(
    ::network::mojom::CookieManagerParamsDataView* output) {
  auto pointer = data_->cookie_manager_params.Get();
  *output = ::network::mojom::CookieManagerParamsDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetDomainReliabilityUploadReporterDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain_reliability_upload_reporter.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetReportingDeliveryIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->reporting_delivery_interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCorsOriginAccessListDataView(
    mojo::ArrayDataView<::network::mojom::CorsOriginAccessPatternsDataView>* output) {
  auto pointer = data_->cors_origin_access_list.Get();
  *output = mojo::ArrayDataView<::network::mojom::CorsOriginAccessPatternsDataView>(pointer, context_);
}
inline void NetworkContextParamsDataView::GetCorsExemptHeaderListDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->cors_exempt_header_list.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void NetworkConditionsDataView::GetLatencyDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->latency.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void ClearDataFilterDataView::GetDomainsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->domains.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void ClearDataFilterDataView::GetOriginsDataView(
    mojo::ArrayDataView<::url::mojom::OriginDataView>* output) {
  auto pointer = data_->origins.Get();
  *output = mojo::ArrayDataView<::url::mojom::OriginDataView>(pointer, context_);
}




inline void SignedExchangeReportDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetOuterUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->outer_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetInnerUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->inner_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetCertUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->cert_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetReferrerDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetServerIpAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->server_ip_address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetProtocolDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->protocol.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SignedExchangeReportDataView::GetElapsedTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->elapsed_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void URLLoaderFactoryParamsDataView::GetRequestInitiatorSiteLockDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->request_initiator_site_lock.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void URLLoaderFactoryParamsDataView::GetFactoryBoundAllowPatternsDataView(
    mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>* output) {
  auto pointer = data_->factory_bound_allow_patterns.Get();
  *output = mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_SHARED_H_