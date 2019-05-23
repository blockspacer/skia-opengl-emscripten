// Copyright 2013 The Chromium Authors. All rights reserved.
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

#include "services/network/public/mojom/network_context.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/network/public/mojom/network_context.mojom-params-data.h"
#include "services/network/public/mojom/network_context.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_context.mojom-import-headers.h"


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
CustomProxyConfig::CustomProxyConfig()
    : rules(),
      should_override_existing_config(false),
      allow_non_idempotent_methods(false),
      assume_https_proxies_support_quic(false),
      can_use_proxy_on_http_url_redirect_cycles(true),
      pre_cache_headers(),
      post_cache_headers(),
      connect_tunnel_headers() {}

CustomProxyConfig::CustomProxyConfig(
    const net::ProxyConfig::ProxyRules& rules_in,
    bool should_override_existing_config_in,
    bool allow_non_idempotent_methods_in,
    bool assume_https_proxies_support_quic_in,
    bool can_use_proxy_on_http_url_redirect_cycles_in,
    const net::HttpRequestHeaders& pre_cache_headers_in,
    const net::HttpRequestHeaders& post_cache_headers_in,
    const net::HttpRequestHeaders& connect_tunnel_headers_in)
    : rules(std::move(rules_in)),
      should_override_existing_config(std::move(should_override_existing_config_in)),
      allow_non_idempotent_methods(std::move(allow_non_idempotent_methods_in)),
      assume_https_proxies_support_quic(std::move(assume_https_proxies_support_quic_in)),
      can_use_proxy_on_http_url_redirect_cycles(std::move(can_use_proxy_on_http_url_redirect_cycles_in)),
      pre_cache_headers(std::move(pre_cache_headers_in)),
      post_cache_headers(std::move(post_cache_headers_in)),
      connect_tunnel_headers(std::move(connect_tunnel_headers_in)) {}

CustomProxyConfig::~CustomProxyConfig() = default;

bool CustomProxyConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NetworkContextParams::NetworkContextParams()
    : context_name(),
      user_agent(),
      accept_language(),
      enable_brotli(true),
      quic_user_agent_id(),
      enable_referrers(true),
      validate_referrer_policy_on_initial_request(true),
      proxy_resolver_factory(),
      cookie_path(),
      enable_encrypted_cookies(true),
      restore_old_session_cookies(false),
      persist_session_cookies(false),
      http_cache_enabled(true),
      http_cache_max_size(0),
      http_cache_path(),
      http_server_properties_path(),
      transport_security_persister_path(),
      enable_ftp_url_support(false),
      enforce_chrome_ct_policy(false),
      http_09_on_non_default_ports_enabled(false),
      disable_idle_sockets_close_on_memory_pressure(false),
      initial_ssl_config(),
      ssl_config_client_request(),
      initial_proxy_config(),
      proxy_config_client_request(),
      initial_custom_proxy_config(),
      custom_proxy_config_client_request(),
      proxy_config_poller_client(),
      proxy_error_client(),
      pac_quick_check_enabled(true),
      enable_certificate_reporting(false),
      enable_expect_ct_reporting(false),
      ct_logs(),
      trial_comparison_cert_verifier_params(),
      cookie_manager_params(),
      enable_domain_reliability(false),
      domain_reliability_upload_reporter(),
      discard_domain_reliablity_uploads(false),
      reporting_delivery_interval(),
      skip_reporting_send_permission_check(false),
      primary_network_context(false),
      cors_origin_access_list(),
      cors_exempt_header_list() {}

NetworkContextParams::NetworkContextParams(
    const base::Optional<std::string>& context_name_in,
    const std::string& user_agent_in,
    const std::string& accept_language_in,
    bool enable_brotli_in,
    const std::string& quic_user_agent_id_in,
    bool enable_referrers_in,
    bool validate_referrer_policy_on_initial_request_in,
    ::proxy_resolver::mojom::ProxyResolverFactoryPtrInfo proxy_resolver_factory_in,
    const base::Optional<base::FilePath>& cookie_path_in,
    bool enable_encrypted_cookies_in,
    bool restore_old_session_cookies_in,
    bool persist_session_cookies_in,
    bool http_cache_enabled_in,
    int32_t http_cache_max_size_in,
    const base::Optional<base::FilePath>& http_cache_path_in,
    const base::Optional<base::FilePath>& http_server_properties_path_in,
    const base::Optional<base::FilePath>& transport_security_persister_path_in,
    bool enable_ftp_url_support_in,
    bool enforce_chrome_ct_policy_in,
    bool http_09_on_non_default_ports_enabled_in,
    bool disable_idle_sockets_close_on_memory_pressure_in,
    ::network::mojom::SSLConfigPtr initial_ssl_config_in,
    ::network::mojom::SSLConfigClientRequest ssl_config_client_request_in,
    const base::Optional<net::ProxyConfigWithAnnotation>& initial_proxy_config_in,
    ::network::mojom::ProxyConfigClientRequest proxy_config_client_request_in,
    CustomProxyConfigPtr initial_custom_proxy_config_in,
    CustomProxyConfigClientRequest custom_proxy_config_client_request_in,
    ::network::mojom::ProxyConfigPollerClientPtrInfo proxy_config_poller_client_in,
    ::network::mojom::ProxyErrorClientPtrInfo proxy_error_client_in,
    bool pac_quick_check_enabled_in,
    bool enable_certificate_reporting_in,
    bool enable_expect_ct_reporting_in,
    std::vector<::network::mojom::CTLogInfoPtr> ct_logs_in,
    ::network::mojom::TrialComparisonCertVerifierParamsPtr trial_comparison_cert_verifier_params_in,
    ::network::mojom::CookieManagerParamsPtr cookie_manager_params_in,
    bool enable_domain_reliability_in,
    const std::string& domain_reliability_upload_reporter_in,
    bool discard_domain_reliablity_uploads_in,
    base::Optional<base::TimeDelta> reporting_delivery_interval_in,
    bool skip_reporting_send_permission_check_in,
    bool primary_network_context_in,
    std::vector<::network::mojom::CorsOriginAccessPatternsPtr> cors_origin_access_list_in,
    const std::vector<std::string>& cors_exempt_header_list_in)
    : context_name(std::move(context_name_in)),
      user_agent(std::move(user_agent_in)),
      accept_language(std::move(accept_language_in)),
      enable_brotli(std::move(enable_brotli_in)),
      quic_user_agent_id(std::move(quic_user_agent_id_in)),
      enable_referrers(std::move(enable_referrers_in)),
      validate_referrer_policy_on_initial_request(std::move(validate_referrer_policy_on_initial_request_in)),
      proxy_resolver_factory(std::move(proxy_resolver_factory_in)),
      cookie_path(std::move(cookie_path_in)),
      enable_encrypted_cookies(std::move(enable_encrypted_cookies_in)),
      restore_old_session_cookies(std::move(restore_old_session_cookies_in)),
      persist_session_cookies(std::move(persist_session_cookies_in)),
      http_cache_enabled(std::move(http_cache_enabled_in)),
      http_cache_max_size(std::move(http_cache_max_size_in)),
      http_cache_path(std::move(http_cache_path_in)),
      http_server_properties_path(std::move(http_server_properties_path_in)),
      transport_security_persister_path(std::move(transport_security_persister_path_in)),
      enable_ftp_url_support(std::move(enable_ftp_url_support_in)),
      enforce_chrome_ct_policy(std::move(enforce_chrome_ct_policy_in)),
      http_09_on_non_default_ports_enabled(std::move(http_09_on_non_default_ports_enabled_in)),
      disable_idle_sockets_close_on_memory_pressure(std::move(disable_idle_sockets_close_on_memory_pressure_in)),
      initial_ssl_config(std::move(initial_ssl_config_in)),
      ssl_config_client_request(std::move(ssl_config_client_request_in)),
      initial_proxy_config(std::move(initial_proxy_config_in)),
      proxy_config_client_request(std::move(proxy_config_client_request_in)),
      initial_custom_proxy_config(std::move(initial_custom_proxy_config_in)),
      custom_proxy_config_client_request(std::move(custom_proxy_config_client_request_in)),
      proxy_config_poller_client(std::move(proxy_config_poller_client_in)),
      proxy_error_client(std::move(proxy_error_client_in)),
      pac_quick_check_enabled(std::move(pac_quick_check_enabled_in)),
      enable_certificate_reporting(std::move(enable_certificate_reporting_in)),
      enable_expect_ct_reporting(std::move(enable_expect_ct_reporting_in)),
      ct_logs(std::move(ct_logs_in)),
      trial_comparison_cert_verifier_params(std::move(trial_comparison_cert_verifier_params_in)),
      cookie_manager_params(std::move(cookie_manager_params_in)),
      enable_domain_reliability(std::move(enable_domain_reliability_in)),
      domain_reliability_upload_reporter(std::move(domain_reliability_upload_reporter_in)),
      discard_domain_reliablity_uploads(std::move(discard_domain_reliablity_uploads_in)),
      reporting_delivery_interval(std::move(reporting_delivery_interval_in)),
      skip_reporting_send_permission_check(std::move(skip_reporting_send_permission_check_in)),
      primary_network_context(std::move(primary_network_context_in)),
      cors_origin_access_list(std::move(cors_origin_access_list_in)),
      cors_exempt_header_list(std::move(cors_exempt_header_list_in)) {}

NetworkContextParams::~NetworkContextParams() = default;

bool NetworkContextParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NetworkConditions::NetworkConditions()
    : offline(),
      latency(),
      download_throughput(),
      upload_throughput() {}

NetworkConditions::NetworkConditions(
    bool offline_in,
    base::TimeDelta latency_in,
    double download_throughput_in,
    double upload_throughput_in)
    : offline(std::move(offline_in)),
      latency(std::move(latency_in)),
      download_throughput(std::move(download_throughput_in)),
      upload_throughput(std::move(upload_throughput_in)) {}

NetworkConditions::~NetworkConditions() = default;

bool NetworkConditions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ClearDataFilter::ClearDataFilter()
    : type(),
      domains(),
      origins() {}

ClearDataFilter::ClearDataFilter(
    ClearDataFilter::Type type_in,
    const std::vector<std::string>& domains_in,
    const std::vector<url::Origin>& origins_in)
    : type(std::move(type_in)),
      domains(std::move(domains_in)),
      origins(std::move(origins_in)) {}

ClearDataFilter::~ClearDataFilter() = default;

bool ClearDataFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NetworkUsage::NetworkUsage()
    : process_id(),
      routing_id(),
      total_bytes_received(),
      total_bytes_sent() {}

NetworkUsage::NetworkUsage(
    uint32_t process_id_in,
    uint32_t routing_id_in,
    int64_t total_bytes_received_in,
    int64_t total_bytes_sent_in)
    : process_id(std::move(process_id_in)),
      routing_id(std::move(routing_id_in)),
      total_bytes_received(std::move(total_bytes_received_in)),
      total_bytes_sent(std::move(total_bytes_sent_in)) {}

NetworkUsage::~NetworkUsage() = default;
size_t NetworkUsage::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->process_id);
  seed = mojo::internal::Hash(seed, this->routing_id);
  seed = mojo::internal::Hash(seed, this->total_bytes_received);
  seed = mojo::internal::Hash(seed, this->total_bytes_sent);
  return seed;
}

bool NetworkUsage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SignedExchangeReport::SignedExchangeReport()
    : success(),
      type(),
      outer_url(),
      inner_url(),
      cert_url(),
      referrer(),
      server_ip_address(),
      protocol(),
      method(),
      status_code(),
      elapsed_time() {}

SignedExchangeReport::SignedExchangeReport(
    bool success_in,
    const std::string& type_in,
    const GURL& outer_url_in,
    const GURL& inner_url_in,
    const GURL& cert_url_in,
    const std::string& referrer_in,
    const net::IPAddress& server_ip_address_in,
    const std::string& protocol_in,
    const std::string& method_in,
    int32_t status_code_in,
    base::TimeDelta elapsed_time_in)
    : success(std::move(success_in)),
      type(std::move(type_in)),
      outer_url(std::move(outer_url_in)),
      inner_url(std::move(inner_url_in)),
      cert_url(std::move(cert_url_in)),
      referrer(std::move(referrer_in)),
      server_ip_address(std::move(server_ip_address_in)),
      protocol(std::move(protocol_in)),
      method(std::move(method_in)),
      status_code(std::move(status_code_in)),
      elapsed_time(std::move(elapsed_time_in)) {}

SignedExchangeReport::~SignedExchangeReport() = default;

bool SignedExchangeReport::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
URLLoaderFactoryParams::URLLoaderFactoryParams()
    : process_id(kInvalidProcessId),
      request_initiator_site_lock(),
      is_corb_enabled(true),
      disable_web_security(false),
      header_client(),
      factory_bound_allow_patterns() {}

URLLoaderFactoryParams::URLLoaderFactoryParams(
    uint32_t process_id_in,
    const base::Optional<url::Origin>& request_initiator_site_lock_in,
    bool is_corb_enabled_in,
    bool disable_web_security_in,
    TrustedURLLoaderHeaderClientPtrInfo header_client_in,
    std::vector<::network::mojom::CorsOriginPatternPtr> factory_bound_allow_patterns_in)
    : process_id(std::move(process_id_in)),
      request_initiator_site_lock(std::move(request_initiator_site_lock_in)),
      is_corb_enabled(std::move(is_corb_enabled_in)),
      disable_web_security(std::move(disable_web_security_in)),
      header_client(std::move(header_client_in)),
      factory_bound_allow_patterns(std::move(factory_bound_allow_patterns_in)) {}

URLLoaderFactoryParams::~URLLoaderFactoryParams() = default;

bool URLLoaderFactoryParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char CustomProxyConfigClient::Name_[] = "network.mojom.CustomProxyConfigClient";

class CustomProxyConfigClient_MarkProxiesAsBad_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CustomProxyConfigClient_MarkProxiesAsBad_ForwardToCallback(
      CustomProxyConfigClient::MarkProxiesAsBadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CustomProxyConfigClient::MarkProxiesAsBadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CustomProxyConfigClient_MarkProxiesAsBad_ForwardToCallback);
};

CustomProxyConfigClientProxy::CustomProxyConfigClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CustomProxyConfigClientProxy::OnCustomProxyConfigUpdated(
    CustomProxyConfigPtr in_proxy_config) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::OnCustomProxyConfigUpdated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCustomProxyConfigClient_OnCustomProxyConfigUpdated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->proxy_config)::BaseType::BufferWriter
      proxy_config_writer;
  mojo::internal::Serialize<::network::mojom::CustomProxyConfigDataView>(
      in_proxy_config, buffer, &proxy_config_writer, &serialization_context);
  params->proxy_config.Set(
      proxy_config_writer.is_null() ? nullptr : proxy_config_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->proxy_config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null proxy_config in CustomProxyConfigClient.OnCustomProxyConfigUpdated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CustomProxyConfigClient::Name_);
  message.set_method_name("OnCustomProxyConfigUpdated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void CustomProxyConfigClientProxy::MarkProxiesAsBad(
    base::TimeDelta in_bypass_duration, const net::ProxyList& in_bad_proxies, MarkProxiesAsBadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::MarkProxiesAsBad");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCustomProxyConfigClient_MarkProxiesAsBad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CustomProxyConfigClient_MarkProxiesAsBad_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bypass_duration)::BaseType::BufferWriter
      bypass_duration_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_bypass_duration, buffer, &bypass_duration_writer, &serialization_context);
  params->bypass_duration.Set(
      bypass_duration_writer.is_null() ? nullptr : bypass_duration_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bypass_duration.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bypass_duration in CustomProxyConfigClient.MarkProxiesAsBad request");
  typename decltype(params->bad_proxies)::BaseType::BufferWriter
      bad_proxies_writer;
  mojo::internal::Serialize<::network::mojom::ProxyListDataView>(
      in_bad_proxies, buffer, &bad_proxies_writer, &serialization_context);
  params->bad_proxies.Set(
      bad_proxies_writer.is_null() ? nullptr : bad_proxies_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bad_proxies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bad_proxies in CustomProxyConfigClient.MarkProxiesAsBad request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CustomProxyConfigClient::Name_);
  message.set_method_name("MarkProxiesAsBad");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CustomProxyConfigClient_MarkProxiesAsBad_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void CustomProxyConfigClientProxy::ClearBadProxiesCache(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::ClearBadProxiesCache");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCustomProxyConfigClient_ClearBadProxiesCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CustomProxyConfigClient_ClearBadProxiesCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CustomProxyConfigClient::Name_);
  message.set_method_name("ClearBadProxiesCache");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder {
 public:
  static CustomProxyConfigClient::MarkProxiesAsBadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder> proxy(
        new CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CustomProxyConfigClient::MarkProxiesAsBadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder);
};

bool CustomProxyConfigClient_MarkProxiesAsBad_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::MarkProxiesAsBadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  CustomProxyConfigClient_MarkProxiesAsBad_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CustomProxyConfigClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCustomProxyConfigClient_MarkProxiesAsBad_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::MarkProxiesAsBadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CustomProxyConfigClient::Name_);
  message.set_method_name("MarkProxiesAsBad");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CustomProxyConfigClientStubDispatch::Accept(
    CustomProxyConfigClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCustomProxyConfigClient_OnCustomProxyConfigUpdated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::OnCustomProxyConfigUpdated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data* params =
          reinterpret_cast<internal::CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CustomProxyConfigPtr p_proxy_config{};
      CustomProxyConfigClient_OnCustomProxyConfigUpdated_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadProxyConfig(&p_proxy_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CustomProxyConfigClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCustomProxyConfigUpdated(
std::move(p_proxy_config));
      return true;
    }
    case internal::kCustomProxyConfigClient_MarkProxiesAsBad_Name: {
      break;
    }
    case internal::kCustomProxyConfigClient_ClearBadProxiesCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::ClearBadProxiesCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::CustomProxyConfigClient_ClearBadProxiesCache_Params_Data* params =
          reinterpret_cast<internal::CustomProxyConfigClient_ClearBadProxiesCache_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CustomProxyConfigClient_ClearBadProxiesCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CustomProxyConfigClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearBadProxiesCache();
      return true;
    }
  }
  return false;
}

// static
bool CustomProxyConfigClientStubDispatch::AcceptWithResponder(
    CustomProxyConfigClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCustomProxyConfigClient_OnCustomProxyConfigUpdated_Name: {
      break;
    }
    case internal::kCustomProxyConfigClient_MarkProxiesAsBad_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CustomProxyConfigClient::MarkProxiesAsBad",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CustomProxyConfigClient_MarkProxiesAsBad_Params_Data* params =
          reinterpret_cast<
              internal::CustomProxyConfigClient_MarkProxiesAsBad_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::TimeDelta p_bypass_duration{};
      net::ProxyList p_bad_proxies{};
      CustomProxyConfigClient_MarkProxiesAsBad_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBypassDuration(&p_bypass_duration))
        success = false;
      if (!input_data_view.ReadBadProxies(&p_bad_proxies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CustomProxyConfigClient::Name_, 1, false);
        return false;
      }
      CustomProxyConfigClient::MarkProxiesAsBadCallback callback =
          CustomProxyConfigClient_MarkProxiesAsBad_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MarkProxiesAsBad(
std::move(p_bypass_duration), 
std::move(p_bad_proxies), std::move(callback));
      return true;
    }
    case internal::kCustomProxyConfigClient_ClearBadProxiesCache_Name: {
      break;
    }
  }
  return false;
}

bool CustomProxyConfigClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CustomProxyConfigClient RequestValidator");

  switch (message->header()->name) {
    case internal::kCustomProxyConfigClient_OnCustomProxyConfigUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CustomProxyConfigClient_OnCustomProxyConfigUpdated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCustomProxyConfigClient_MarkProxiesAsBad_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CustomProxyConfigClient_MarkProxiesAsBad_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kCustomProxyConfigClient_ClearBadProxiesCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CustomProxyConfigClient_ClearBadProxiesCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool CustomProxyConfigClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CustomProxyConfigClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCustomProxyConfigClient_MarkProxiesAsBad_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CustomProxyConfigClient_MarkProxiesAsBad_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char TrustedHeaderClient::Name_[] = "network.mojom.TrustedHeaderClient";

class TrustedHeaderClient_OnBeforeSendHeaders_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TrustedHeaderClient_OnBeforeSendHeaders_ForwardToCallback(
      TrustedHeaderClient::OnBeforeSendHeadersCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TrustedHeaderClient::OnBeforeSendHeadersCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TrustedHeaderClient_OnBeforeSendHeaders_ForwardToCallback);
};

class TrustedHeaderClient_OnHeadersReceived_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  TrustedHeaderClient_OnHeadersReceived_ForwardToCallback(
      TrustedHeaderClient::OnHeadersReceivedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  TrustedHeaderClient::OnHeadersReceivedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(TrustedHeaderClient_OnHeadersReceived_ForwardToCallback);
};

TrustedHeaderClientProxy::TrustedHeaderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TrustedHeaderClientProxy::OnBeforeSendHeaders(
    const net::HttpRequestHeaders& in_headers, OnBeforeSendHeadersCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnBeforeSendHeaders");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrustedHeaderClient_OnBeforeSendHeaders_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrustedHeaderClient_OnBeforeSendHeaders_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->headers)::BaseType::BufferWriter
      headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
      in_headers, buffer, &headers_writer, &serialization_context);
  params->headers.Set(
      headers_writer.is_null() ? nullptr : headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null headers in TrustedHeaderClient.OnBeforeSendHeaders request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrustedHeaderClient::Name_);
  message.set_method_name("OnBeforeSendHeaders");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TrustedHeaderClient_OnBeforeSendHeaders_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void TrustedHeaderClientProxy::OnHeadersReceived(
    const std::string& in_headers, OnHeadersReceivedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnHeadersReceived");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrustedHeaderClient_OnHeadersReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrustedHeaderClient_OnHeadersReceived_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->headers)::BaseType::BufferWriter
      headers_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_headers, buffer, &headers_writer, &serialization_context);
  params->headers.Set(
      headers_writer.is_null() ? nullptr : headers_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->headers.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null headers in TrustedHeaderClient.OnHeadersReceived request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrustedHeaderClient::Name_);
  message.set_method_name("OnHeadersReceived");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new TrustedHeaderClient_OnHeadersReceived_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder {
 public:
  static TrustedHeaderClient::OnBeforeSendHeadersCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder> proxy(
        new TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "TrustedHeaderClient::OnBeforeSendHeadersCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<net::HttpRequestHeaders>& in_headers);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder);
};

bool TrustedHeaderClient_OnBeforeSendHeaders_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnBeforeSendHeadersCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<net::HttpRequestHeaders> p_headers{};
  TrustedHeaderClient_OnBeforeSendHeaders_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadHeaders(&p_headers))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TrustedHeaderClient::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_headers));
  return true;
}

void TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<net::HttpRequestHeaders>& in_headers) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrustedHeaderClient_OnBeforeSendHeaders_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->headers)::BaseType::BufferWriter
      headers_writer;
  mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
      in_headers, buffer, &headers_writer, &serialization_context);
  params->headers.Set(
      headers_writer.is_null() ? nullptr : headers_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnBeforeSendHeadersCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrustedHeaderClient::Name_);
  message.set_method_name("OnBeforeSendHeaders");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class TrustedHeaderClient_OnHeadersReceived_ProxyToResponder {
 public:
  static TrustedHeaderClient::OnHeadersReceivedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<TrustedHeaderClient_OnHeadersReceived_ProxyToResponder> proxy(
        new TrustedHeaderClient_OnHeadersReceived_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&TrustedHeaderClient_OnHeadersReceived_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~TrustedHeaderClient_OnHeadersReceived_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  TrustedHeaderClient_OnHeadersReceived_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "TrustedHeaderClient::OnHeadersReceivedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<std::string>& in_headers, const GURL& in_allowed_unsafe_redirect_url);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(TrustedHeaderClient_OnHeadersReceived_ProxyToResponder);
};

bool TrustedHeaderClient_OnHeadersReceived_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnHeadersReceivedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data* params =
      reinterpret_cast<
          internal::TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<std::string> p_headers{};
  GURL p_allowed_unsafe_redirect_url{};
  TrustedHeaderClient_OnHeadersReceived_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadHeaders(&p_headers))
    success = false;
  if (!input_data_view.ReadAllowedUnsafeRedirectUrl(&p_allowed_unsafe_redirect_url))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        TrustedHeaderClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_headers), 
std::move(p_allowed_unsafe_redirect_url));
  return true;
}

void TrustedHeaderClient_OnHeadersReceived_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<std::string>& in_headers, const GURL& in_allowed_unsafe_redirect_url) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrustedHeaderClient_OnHeadersReceived_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->headers)::BaseType::BufferWriter
      headers_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_headers, buffer, &headers_writer, &serialization_context);
  params->headers.Set(
      headers_writer.is_null() ? nullptr : headers_writer.data());
  typename decltype(params->allowed_unsafe_redirect_url)::BaseType::BufferWriter
      allowed_unsafe_redirect_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_allowed_unsafe_redirect_url, buffer, &allowed_unsafe_redirect_url_writer, &serialization_context);
  params->allowed_unsafe_redirect_url.Set(
      allowed_unsafe_redirect_url_writer.is_null() ? nullptr : allowed_unsafe_redirect_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->allowed_unsafe_redirect_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allowed_unsafe_redirect_url in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnHeadersReceivedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrustedHeaderClient::Name_);
  message.set_method_name("OnHeadersReceived");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool TrustedHeaderClientStubDispatch::Accept(
    TrustedHeaderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTrustedHeaderClient_OnBeforeSendHeaders_Name: {
      break;
    }
    case internal::kTrustedHeaderClient_OnHeadersReceived_Name: {
      break;
    }
  }
  return false;
}

// static
bool TrustedHeaderClientStubDispatch::AcceptWithResponder(
    TrustedHeaderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTrustedHeaderClient_OnBeforeSendHeaders_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnBeforeSendHeaders",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TrustedHeaderClient_OnBeforeSendHeaders_Params_Data* params =
          reinterpret_cast<
              internal::TrustedHeaderClient_OnBeforeSendHeaders_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HttpRequestHeaders p_headers{};
      TrustedHeaderClient_OnBeforeSendHeaders_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHeaders(&p_headers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TrustedHeaderClient::Name_, 0, false);
        return false;
      }
      TrustedHeaderClient::OnBeforeSendHeadersCallback callback =
          TrustedHeaderClient_OnBeforeSendHeaders_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnBeforeSendHeaders(
std::move(p_headers), std::move(callback));
      return true;
    }
    case internal::kTrustedHeaderClient_OnHeadersReceived_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TrustedHeaderClient::OnHeadersReceived",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::TrustedHeaderClient_OnHeadersReceived_Params_Data* params =
          reinterpret_cast<
              internal::TrustedHeaderClient_OnHeadersReceived_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_headers{};
      TrustedHeaderClient_OnHeadersReceived_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHeaders(&p_headers))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TrustedHeaderClient::Name_, 1, false);
        return false;
      }
      TrustedHeaderClient::OnHeadersReceivedCallback callback =
          TrustedHeaderClient_OnHeadersReceived_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnHeadersReceived(
std::move(p_headers), std::move(callback));
      return true;
    }
  }
  return false;
}

bool TrustedHeaderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TrustedHeaderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTrustedHeaderClient_OnBeforeSendHeaders_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrustedHeaderClient_OnBeforeSendHeaders_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTrustedHeaderClient_OnHeadersReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrustedHeaderClient_OnHeadersReceived_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool TrustedHeaderClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TrustedHeaderClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kTrustedHeaderClient_OnBeforeSendHeaders_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrustedHeaderClient_OnBeforeSendHeaders_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kTrustedHeaderClient_OnHeadersReceived_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrustedHeaderClient_OnHeadersReceived_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char TrustedURLLoaderHeaderClient::Name_[] = "network.mojom.TrustedURLLoaderHeaderClient";

TrustedURLLoaderHeaderClientProxy::TrustedURLLoaderHeaderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TrustedURLLoaderHeaderClientProxy::OnLoaderCreated(
    int32_t in_request_id, TrustedHeaderClientRequest in_header_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::TrustedURLLoaderHeaderClient::OnLoaderCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kTrustedURLLoaderHeaderClient_OnLoaderCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->request_id = in_request_id;
  mojo::internal::Serialize<::network::mojom::TrustedHeaderClientRequestDataView>(
      in_header_client, &params->header_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->header_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid header_client in TrustedURLLoaderHeaderClient.OnLoaderCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TrustedURLLoaderHeaderClient::Name_);
  message.set_method_name("OnLoaderCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool TrustedURLLoaderHeaderClientStubDispatch::Accept(
    TrustedURLLoaderHeaderClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTrustedURLLoaderHeaderClient_OnLoaderCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::TrustedURLLoaderHeaderClient::OnLoaderCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data* params =
          reinterpret_cast<internal::TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_request_id{};
      TrustedHeaderClientRequest p_header_client{};
      TrustedURLLoaderHeaderClient_OnLoaderCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request_id = input_data_view.request_id();
      p_header_client =
          input_data_view.TakeHeaderClient<decltype(p_header_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TrustedURLLoaderHeaderClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnLoaderCreated(
std::move(p_request_id), 
std::move(p_header_client));
      return true;
    }
  }
  return false;
}

// static
bool TrustedURLLoaderHeaderClientStubDispatch::AcceptWithResponder(
    TrustedURLLoaderHeaderClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kTrustedURLLoaderHeaderClient_OnLoaderCreated_Name: {
      break;
    }
  }
  return false;
}

bool TrustedURLLoaderHeaderClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "TrustedURLLoaderHeaderClient RequestValidator");

  switch (message->header()->name) {
    case internal::kTrustedURLLoaderHeaderClient_OnLoaderCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::TrustedURLLoaderHeaderClient_OnLoaderCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char NetworkContextClient::Name_[] = "network.mojom.NetworkContextClient";

class NetworkContextClient_OnCanSendReportingReports_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContextClient_OnCanSendReportingReports_ForwardToCallback(
      NetworkContextClient::OnCanSendReportingReportsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContextClient::OnCanSendReportingReportsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContextClient_OnCanSendReportingReports_ForwardToCallback);
};

class NetworkContextClient_OnCanSendDomainReliabilityUpload_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContextClient_OnCanSendDomainReliabilityUpload_ForwardToCallback(
      NetworkContextClient::OnCanSendDomainReliabilityUploadCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContextClient::OnCanSendDomainReliabilityUploadCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContextClient_OnCanSendDomainReliabilityUpload_ForwardToCallback);
};

NetworkContextClientProxy::NetworkContextClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetworkContextClientProxy::OnCanSendReportingReports(
    const std::vector<url::Origin>& in_origins, OnCanSendReportingReportsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendReportingReports");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContextClient_OnCanSendReportingReports_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContextClient_OnCanSendReportingReports_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origins)::BaseType::BufferWriter
      origins_writer;
  const mojo::internal::ContainerValidateParams origins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
      in_origins, buffer, &origins_writer, &origins_validate_params,
      &serialization_context);
  params->origins.Set(
      origins_writer.is_null() ? nullptr : origins_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origins in NetworkContextClient.OnCanSendReportingReports request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContextClient::Name_);
  message.set_method_name("OnCanSendReportingReports");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContextClient_OnCanSendReportingReports_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextClientProxy::OnCanSendDomainReliabilityUpload(
    const GURL& in_origin, OnCanSendDomainReliabilityUploadCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendDomainReliabilityUpload");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContextClient.OnCanSendDomainReliabilityUpload request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContextClient::Name_);
  message.set_method_name("OnCanSendDomainReliabilityUpload");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContextClient_OnCanSendDomainReliabilityUpload_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkContextClient_OnCanSendReportingReports_ProxyToResponder {
 public:
  static NetworkContextClient::OnCanSendReportingReportsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContextClient_OnCanSendReportingReports_ProxyToResponder> proxy(
        new NetworkContextClient_OnCanSendReportingReports_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContextClient_OnCanSendReportingReports_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContextClient_OnCanSendReportingReports_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContextClient_OnCanSendReportingReports_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContextClient::OnCanSendReportingReportsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::vector<url::Origin>& in_origins);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextClient_OnCanSendReportingReports_ProxyToResponder);
};

bool NetworkContextClient_OnCanSendReportingReports_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendReportingReportsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<url::Origin> p_origins{};
  NetworkContextClient_OnCanSendReportingReports_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadOrigins(&p_origins))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContextClient::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_origins));
  return true;
}

void NetworkContextClient_OnCanSendReportingReports_ProxyToResponder::Run(
    const std::vector<url::Origin>& in_origins) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContextClient_OnCanSendReportingReports_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origins)::BaseType::BufferWriter
      origins_writer;
  const mojo::internal::ContainerValidateParams origins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::OriginDataView>>(
      in_origins, buffer, &origins_writer, &origins_validate_params,
      &serialization_context);
  params->origins.Set(
      origins_writer.is_null() ? nullptr : origins_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origins in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendReportingReportsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContextClient::Name_);
  message.set_method_name("OnCanSendReportingReports");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder {
 public:
  static NetworkContextClient::OnCanSendDomainReliabilityUploadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder> proxy(
        new NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContextClient::OnCanSendDomainReliabilityUploadCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_allowed);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder);
};

bool NetworkContextClient_OnCanSendDomainReliabilityUpload_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendDomainReliabilityUploadCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_allowed{};
  NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_allowed = input_data_view.allowed();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContextClient::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_allowed));
  return true;
}

void NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder::Run(
    bool in_allowed) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->allowed = in_allowed;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendDomainReliabilityUploadCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContextClient::Name_);
  message.set_method_name("OnCanSendDomainReliabilityUpload");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool NetworkContextClientStubDispatch::Accept(
    NetworkContextClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkContextClient_OnCanSendReportingReports_Name: {
      break;
    }
    case internal::kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name: {
      break;
    }
  }
  return false;
}

// static
bool NetworkContextClientStubDispatch::AcceptWithResponder(
    NetworkContextClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkContextClient_OnCanSendReportingReports_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendReportingReports",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContextClient_OnCanSendReportingReports_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContextClient_OnCanSendReportingReports_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<url::Origin> p_origins{};
      NetworkContextClient_OnCanSendReportingReports_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigins(&p_origins))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContextClient::Name_, 0, false);
        return false;
      }
      NetworkContextClient::OnCanSendReportingReportsCallback callback =
          NetworkContextClient_OnCanSendReportingReports_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCanSendReportingReports(
std::move(p_origins), std::move(callback));
      return true;
    }
    case internal::kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContextClient::OnCanSendDomainReliabilityUpload",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_origin{};
      NetworkContextClient_OnCanSendDomainReliabilityUpload_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContextClient::Name_, 1, false);
        return false;
      }
      NetworkContextClient::OnCanSendDomainReliabilityUploadCallback callback =
          NetworkContextClient_OnCanSendDomainReliabilityUpload_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCanSendDomainReliabilityUpload(
std::move(p_origin), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetworkContextClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkContextClient RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkContextClient_OnCanSendReportingReports_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContextClient_OnCanSendReportingReports_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool NetworkContextClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkContextClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkContextClient_OnCanSendReportingReports_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContextClient_OnCanSendReportingReports_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContextClient_OnCanSendDomainReliabilityUpload_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContextClient_OnCanSendDomainReliabilityUpload_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char NetworkContext::Name_[] = "network.mojom.NetworkContext";
bool NetworkContext::EnableStaticKeyPinningForTesting() {
  NOTREACHED();
  return false;
}
bool NetworkContext::SetFailingHttpTransactionForTesting(int32_t rv) {
  NOTREACHED();
  return false;
}
bool NetworkContext::VerifyCertificateForTesting(const scoped_refptr<net::X509Certificate>& certificate, const std::string& hostname, const std::string& ocsp_response, int32_t* out_error_code) {
  NOTREACHED();
  return false;
}
bool NetworkContext::AddDomainReliabilityContextForTesting(const GURL& origin, const GURL& upload_url) {
  NOTREACHED();
  return false;
}
bool NetworkContext::ForceDomainReliabilityUploadsForTesting() {
  NOTREACHED();
  return false;
}

class NetworkContext_ClearNetworkingHistorySince_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearNetworkingHistorySince_ForwardToCallback(
      NetworkContext::ClearNetworkingHistorySinceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearNetworkingHistorySinceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkingHistorySince_ForwardToCallback);
};

class NetworkContext_ClearHttpCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearHttpCache_ForwardToCallback(
      NetworkContext::ClearHttpCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearHttpCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpCache_ForwardToCallback);
};

class NetworkContext_ComputeHttpCacheSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ComputeHttpCacheSize_ForwardToCallback(
      NetworkContext::ComputeHttpCacheSizeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ComputeHttpCacheSizeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ComputeHttpCacheSize_ForwardToCallback);
};

class NetworkContext_ClearHostCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearHostCache_ForwardToCallback(
      NetworkContext::ClearHostCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearHostCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHostCache_ForwardToCallback);
};

class NetworkContext_ClearHttpAuthCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearHttpAuthCache_ForwardToCallback(
      NetworkContext::ClearHttpAuthCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearHttpAuthCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpAuthCache_ForwardToCallback);
};

class NetworkContext_ClearReportingCacheReports_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearReportingCacheReports_ForwardToCallback(
      NetworkContext::ClearReportingCacheReportsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearReportingCacheReportsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheReports_ForwardToCallback);
};

class NetworkContext_ClearReportingCacheClients_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearReportingCacheClients_ForwardToCallback(
      NetworkContext::ClearReportingCacheClientsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearReportingCacheClientsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheClients_ForwardToCallback);
};

class NetworkContext_ClearNetworkErrorLogging_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearNetworkErrorLogging_ForwardToCallback(
      NetworkContext::ClearNetworkErrorLoggingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearNetworkErrorLoggingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkErrorLogging_ForwardToCallback);
};

class NetworkContext_ClearDomainReliability_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearDomainReliability_ForwardToCallback(
      NetworkContext::ClearDomainReliabilityCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearDomainReliabilityCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearDomainReliability_ForwardToCallback);
};

class NetworkContext_GetDomainReliabilityJSON_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_GetDomainReliabilityJSON_ForwardToCallback(
      NetworkContext::GetDomainReliabilityJSONCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::GetDomainReliabilityJSONCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_GetDomainReliabilityJSON_ForwardToCallback);
};

class NetworkContext_CloseAllConnections_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CloseAllConnections_ForwardToCallback(
      NetworkContext::CloseAllConnectionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CloseAllConnectionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CloseAllConnections_ForwardToCallback);
};

class NetworkContext_CloseIdleConnections_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CloseIdleConnections_ForwardToCallback(
      NetworkContext::CloseIdleConnectionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CloseIdleConnectionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CloseIdleConnections_ForwardToCallback);
};

class NetworkContext_AddExpectCT_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_AddExpectCT_ForwardToCallback(
      NetworkContext::AddExpectCTCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::AddExpectCTCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddExpectCT_ForwardToCallback);
};

class NetworkContext_SetExpectCTTestReport_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SetExpectCTTestReport_ForwardToCallback(
      NetworkContext::SetExpectCTTestReportCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::SetExpectCTTestReportCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetExpectCTTestReport_ForwardToCallback);
};

class NetworkContext_GetExpectCTState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_GetExpectCTState_ForwardToCallback(
      NetworkContext::GetExpectCTStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::GetExpectCTStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_GetExpectCTState_ForwardToCallback);
};

class NetworkContext_CreateTCPServerSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CreateTCPServerSocket_ForwardToCallback(
      NetworkContext::CreateTCPServerSocketCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CreateTCPServerSocketCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPServerSocket_ForwardToCallback);
};

class NetworkContext_CreateTCPConnectedSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CreateTCPConnectedSocket_ForwardToCallback(
      NetworkContext::CreateTCPConnectedSocketCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CreateTCPConnectedSocketCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPConnectedSocket_ForwardToCallback);
};

class NetworkContext_CreateTCPBoundSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_CreateTCPBoundSocket_ForwardToCallback(
      NetworkContext::CreateTCPBoundSocketCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::CreateTCPBoundSocketCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPBoundSocket_ForwardToCallback);
};

class NetworkContext_ForceReloadProxyConfig_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ForceReloadProxyConfig_ForwardToCallback(
      NetworkContext::ForceReloadProxyConfigCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ForceReloadProxyConfigCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ForceReloadProxyConfig_ForwardToCallback);
};

class NetworkContext_ClearBadProxiesCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ClearBadProxiesCache_ForwardToCallback(
      NetworkContext::ClearBadProxiesCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ClearBadProxiesCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearBadProxiesCache_ForwardToCallback);
};

class NetworkContext_VerifyCertForSignedExchange_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_VerifyCertForSignedExchange_ForwardToCallback(
      NetworkContext::VerifyCertForSignedExchangeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::VerifyCertForSignedExchangeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_VerifyCertForSignedExchange_ForwardToCallback);
};

class NetworkContext_AddHSTS_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_AddHSTS_ForwardToCallback(
      NetworkContext::AddHSTSCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::AddHSTSCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddHSTS_ForwardToCallback);
};

class NetworkContext_IsHSTSActiveForHost_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_IsHSTSActiveForHost_ForwardToCallback(
      NetworkContext::IsHSTSActiveForHostCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::IsHSTSActiveForHostCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_IsHSTSActiveForHost_ForwardToCallback);
};

class NetworkContext_GetHSTSState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_GetHSTSState_ForwardToCallback(
      NetworkContext::GetHSTSStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::GetHSTSStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_GetHSTSState_ForwardToCallback);
};

class NetworkContext_SetCorsOriginAccessListsForOrigin_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SetCorsOriginAccessListsForOrigin_ForwardToCallback(
      NetworkContext::SetCorsOriginAccessListsForOriginCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::SetCorsOriginAccessListsForOriginCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetCorsOriginAccessListsForOrigin_ForwardToCallback);
};

class NetworkContext_DeleteDynamicDataForHost_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_DeleteDynamicDataForHost_ForwardToCallback(
      NetworkContext::DeleteDynamicDataForHostCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::DeleteDynamicDataForHostCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_DeleteDynamicDataForHost_ForwardToCallback);
};

class NetworkContext_SaveHttpAuthCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SaveHttpAuthCache_ForwardToCallback(
      NetworkContext::SaveHttpAuthCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::SaveHttpAuthCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SaveHttpAuthCache_ForwardToCallback);
};

class NetworkContext_LoadHttpAuthCache_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_LoadHttpAuthCache_ForwardToCallback(
      NetworkContext::LoadHttpAuthCacheCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::LoadHttpAuthCacheCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_LoadHttpAuthCache_ForwardToCallback);
};

class NetworkContext_LookupBasicAuthCredentials_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_LookupBasicAuthCredentials_ForwardToCallback(
      NetworkContext::LookupBasicAuthCredentialsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::LookupBasicAuthCredentialsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_LookupBasicAuthCredentials_ForwardToCallback);
};
class NetworkContext_EnableStaticKeyPinningForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_EnableStaticKeyPinningForTesting_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_EnableStaticKeyPinningForTesting_HandleSyncResponse);
};

class NetworkContext_EnableStaticKeyPinningForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_EnableStaticKeyPinningForTesting_ForwardToCallback(
      NetworkContext::EnableStaticKeyPinningForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::EnableStaticKeyPinningForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_EnableStaticKeyPinningForTesting_ForwardToCallback);
};
class NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse);
};

class NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback(
      NetworkContext::SetFailingHttpTransactionForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::SetFailingHttpTransactionForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback);
};
class NetworkContext_VerifyCertificateForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_VerifyCertificateForTesting_HandleSyncResponse(
      bool* result, int32_t* out_error_code)
      : result_(result), out_error_code_(out_error_code) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  int32_t* out_error_code_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_VerifyCertificateForTesting_HandleSyncResponse);
};

class NetworkContext_VerifyCertificateForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_VerifyCertificateForTesting_ForwardToCallback(
      NetworkContext::VerifyCertificateForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::VerifyCertificateForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_VerifyCertificateForTesting_ForwardToCallback);
};
class NetworkContext_AddDomainReliabilityContextForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_AddDomainReliabilityContextForTesting_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddDomainReliabilityContextForTesting_HandleSyncResponse);
};

class NetworkContext_AddDomainReliabilityContextForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_AddDomainReliabilityContextForTesting_ForwardToCallback(
      NetworkContext::AddDomainReliabilityContextForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::AddDomainReliabilityContextForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddDomainReliabilityContextForTesting_ForwardToCallback);
};
class NetworkContext_ForceDomainReliabilityUploadsForTesting_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkContext_ForceDomainReliabilityUploadsForTesting_HandleSyncResponse);
};

class NetworkContext_ForceDomainReliabilityUploadsForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ForwardToCallback(
      NetworkContext::ForceDomainReliabilityUploadsForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkContext::ForceDomainReliabilityUploadsForTestingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ForceDomainReliabilityUploadsForTesting_ForwardToCallback);
};

NetworkContextProxy::NetworkContextProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void NetworkContextProxy::SetClient(
    NetworkContextClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetClient");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkContextClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NetworkContext.SetClient request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CreateURLLoaderFactory(
    ::network::mojom::URLLoaderFactoryRequest in_url_loader_factory, URLLoaderFactoryParamsPtr in_params) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateURLLoaderFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateURLLoaderFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateURLLoaderFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryRequestDataView>(
      in_url_loader_factory, &params->url_loader_factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->url_loader_factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid url_loader_factory in NetworkContext.CreateURLLoaderFactory request");
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::network::mojom::URLLoaderFactoryParamsDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in NetworkContext.CreateURLLoaderFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateURLLoaderFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::ResetURLLoaderFactories(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ResetURLLoaderFactories");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ResetURLLoaderFactories_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ResetURLLoaderFactories_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ResetURLLoaderFactories");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::GetCookieManager(
    ::network::mojom::CookieManagerRequest in_cookie_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetCookieManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetCookieManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetCookieManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::CookieManagerRequestDataView>(
      in_cookie_manager, &params->cookie_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cookie_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cookie_manager in NetworkContext.GetCookieManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetCookieManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::GetRestrictedCookieManager(
    ::network::mojom::RestrictedCookieManagerRequest in_restricted_cookie_manager, const url::Origin& in_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetRestrictedCookieManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetRestrictedCookieManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetRestrictedCookieManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::RestrictedCookieManagerRequestDataView>(
      in_restricted_cookie_manager, &params->restricted_cookie_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->restricted_cookie_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid restricted_cookie_manager in NetworkContext.GetRestrictedCookieManager request");
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContext.GetRestrictedCookieManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetRestrictedCookieManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::ClearNetworkingHistorySince(
    base::Time in_start_time, ClearNetworkingHistorySinceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkingHistorySince");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkingHistorySince_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkingHistorySince_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearNetworkingHistorySince request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearNetworkingHistorySince");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearNetworkingHistorySince_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearHttpCache(
    base::Time in_start_time, base::Time in_end_time, ClearDataFilterPtr in_filter, ClearHttpCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearHttpCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearHttpCache request");
  typename decltype(params->end_time)::BaseType::BufferWriter
      end_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_end_time, buffer, &end_time_writer, &serialization_context);
  params->end_time.Set(
      end_time_writer.is_null() ? nullptr : end_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->end_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null end_time in NetworkContext.ClearHttpCache request");
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearHttpCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearHttpCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ComputeHttpCacheSize(
    base::Time in_start_time, base::Time in_end_time, ComputeHttpCacheSizeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ComputeHttpCacheSize");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ComputeHttpCacheSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ComputeHttpCacheSize_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ComputeHttpCacheSize request");
  typename decltype(params->end_time)::BaseType::BufferWriter
      end_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_end_time, buffer, &end_time_writer, &serialization_context);
  params->end_time.Set(
      end_time_writer.is_null() ? nullptr : end_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->end_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null end_time in NetworkContext.ComputeHttpCacheSize request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ComputeHttpCacheSize");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ComputeHttpCacheSize_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::NotifyExternalCacheHit(
    const GURL& in_url, const std::string& in_http_method, const base::Optional<url::Origin>& in_top_frame_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::NotifyExternalCacheHit");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_NotifyExternalCacheHit_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_NotifyExternalCacheHit_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.NotifyExternalCacheHit request");
  typename decltype(params->http_method)::BaseType::BufferWriter
      http_method_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_http_method, buffer, &http_method_writer, &serialization_context);
  params->http_method.Set(
      http_method_writer.is_null() ? nullptr : http_method_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->http_method.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null http_method in NetworkContext.NotifyExternalCacheHit request");
  typename decltype(params->top_frame_origin)::BaseType::BufferWriter
      top_frame_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_top_frame_origin, buffer, &top_frame_origin_writer, &serialization_context);
  params->top_frame_origin.Set(
      top_frame_origin_writer.is_null() ? nullptr : top_frame_origin_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("NotifyExternalCacheHit");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::WriteCacheMetadata(
    const GURL& in_url, net::RequestPriority in_priority, base::Time in_expected_response_time, mojo_base::BigBuffer in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::WriteCacheMetadata");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_WriteCacheMetadata_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_WriteCacheMetadata_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.WriteCacheMetadata request");
  mojo::internal::Serialize<::network::mojom::RequestPriority>(
      in_priority, &params->priority);
  typename decltype(params->expected_response_time)::BaseType::BufferWriter
      expected_response_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expected_response_time, buffer, &expected_response_time_writer, &serialization_context);
  params->expected_response_time.Set(
      expected_response_time_writer.is_null() ? nullptr : expected_response_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expected_response_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expected_response_time in NetworkContext.WriteCacheMetadata request");
  typename decltype(params->data)::BufferWriter data_writer;
  data_writer.AllocateInline(buffer, &params->data);
  mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
      in_data, buffer, &data_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in NetworkContext.WriteCacheMetadata request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("WriteCacheMetadata");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::ClearHostCache(
    ClearDataFilterPtr in_filter, ClearHostCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHostCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearHostCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHostCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearHostCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearHostCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearHttpAuthCache(
    base::Time in_start_time, ClearHttpAuthCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpAuthCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpAuthCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->start_time)::BaseType::BufferWriter
      start_time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_start_time, buffer, &start_time_writer, &serialization_context);
  params->start_time.Set(
      start_time_writer.is_null() ? nullptr : start_time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->start_time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null start_time in NetworkContext.ClearHttpAuthCache request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearHttpAuthCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearHttpAuthCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearReportingCacheReports(
    ClearDataFilterPtr in_filter, ClearReportingCacheReportsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheReports");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheReports_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheReports_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearReportingCacheReports");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearReportingCacheReports_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearReportingCacheClients(
    ClearDataFilterPtr in_filter, ClearReportingCacheClientsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheClients");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheClients_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearReportingCacheClients");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearReportingCacheClients_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearNetworkErrorLogging(
    ClearDataFilterPtr in_filter, ClearNetworkErrorLoggingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkErrorLogging");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkErrorLogging_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkErrorLogging_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearNetworkErrorLogging");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearNetworkErrorLogging_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearDomainReliability(
    ClearDataFilterPtr in_filter, NetworkContext::DomainReliabilityClearMode in_mode, ClearDomainReliabilityCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearDomainReliability");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearDomainReliability_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearDomainReliability_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->filter)::BaseType::BufferWriter
      filter_writer;
  mojo::internal::Serialize<::network::mojom::ClearDataFilterDataView>(
      in_filter, buffer, &filter_writer, &serialization_context);
  params->filter.Set(
      filter_writer.is_null() ? nullptr : filter_writer.data());
  mojo::internal::Serialize<::network::mojom::NetworkContext_DomainReliabilityClearMode>(
      in_mode, &params->mode);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearDomainReliability");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearDomainReliability_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::GetDomainReliabilityJSON(
    GetDomainReliabilityJSONCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetDomainReliabilityJSON");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetDomainReliabilityJSON_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetDomainReliabilityJSON_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetDomainReliabilityJSON");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_GetDomainReliabilityJSON_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::QueueReport(
    const std::string& in_type, const std::string& in_group, const GURL& in_url, const base::Optional<std::string>& in_user_agent, base::Value in_body) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::QueueReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_QueueReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_QueueReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->type)::BaseType::BufferWriter
      type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_type, buffer, &type_writer, &serialization_context);
  params->type.Set(
      type_writer.is_null() ? nullptr : type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null type in NetworkContext.QueueReport request");
  typename decltype(params->group)::BaseType::BufferWriter
      group_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group, buffer, &group_writer, &serialization_context);
  params->group.Set(
      group_writer.is_null() ? nullptr : group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group in NetworkContext.QueueReport request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.QueueReport request");
  typename decltype(params->user_agent)::BaseType::BufferWriter
      user_agent_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_user_agent, buffer, &user_agent_writer, &serialization_context);
  params->user_agent.Set(
      user_agent_writer.is_null() ? nullptr : user_agent_writer.data());
  typename decltype(params->body)::BaseType::BufferWriter
      body_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_body, buffer, &body_writer, &serialization_context);
  params->body.Set(
      body_writer.is_null() ? nullptr : body_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->body.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null body in NetworkContext.QueueReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("QueueReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::QueueSignedExchangeReport(
    SignedExchangeReportPtr in_report) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::QueueSignedExchangeReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_QueueSignedExchangeReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_QueueSignedExchangeReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->report)::BaseType::BufferWriter
      report_writer;
  mojo::internal::Serialize<::network::mojom::SignedExchangeReportDataView>(
      in_report, buffer, &report_writer, &serialization_context);
  params->report.Set(
      report_writer.is_null() ? nullptr : report_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->report.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null report in NetworkContext.QueueSignedExchangeReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("QueueSignedExchangeReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CloseAllConnections(
    CloseAllConnectionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CloseAllConnections");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CloseAllConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CloseAllConnections_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CloseAllConnections");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CloseAllConnections_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::CloseIdleConnections(
    CloseIdleConnectionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CloseIdleConnections");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CloseIdleConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CloseIdleConnections_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CloseIdleConnections");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CloseIdleConnections_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::SetNetworkConditions(
    const base::UnguessableToken& in_throttling_profile_id, NetworkConditionsPtr in_conditions) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetNetworkConditions");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetNetworkConditions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetNetworkConditions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->throttling_profile_id)::BaseType::BufferWriter
      throttling_profile_id_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_throttling_profile_id, buffer, &throttling_profile_id_writer, &serialization_context);
  params->throttling_profile_id.Set(
      throttling_profile_id_writer.is_null() ? nullptr : throttling_profile_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->throttling_profile_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null throttling_profile_id in NetworkContext.SetNetworkConditions request");
  typename decltype(params->conditions)::BaseType::BufferWriter
      conditions_writer;
  mojo::internal::Serialize<::network::mojom::NetworkConditionsDataView>(
      in_conditions, buffer, &conditions_writer, &serialization_context);
  params->conditions.Set(
      conditions_writer.is_null() ? nullptr : conditions_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetNetworkConditions");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::SetAcceptLanguage(
    const std::string& in_new_accept_language) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetAcceptLanguage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetAcceptLanguage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetAcceptLanguage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->new_accept_language)::BaseType::BufferWriter
      new_accept_language_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_new_accept_language, buffer, &new_accept_language_writer, &serialization_context);
  params->new_accept_language.Set(
      new_accept_language_writer.is_null() ? nullptr : new_accept_language_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_accept_language.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_accept_language in NetworkContext.SetAcceptLanguage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetAcceptLanguage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::SetEnableReferrers(
    bool in_enable_referrers) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetEnableReferrers");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetEnableReferrers_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetEnableReferrers_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->enable_referrers = in_enable_referrers;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetEnableReferrers");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::SetCTPolicy(
    const std::vector<std::string>& in_required_hosts, const std::vector<std::string>& in_excluded_hosts, const std::vector<std::string>& in_excluded_spkis, const std::vector<std::string>& in_excluded_legacy_spkis) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetCTPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetCTPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetCTPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->required_hosts)::BaseType::BufferWriter
      required_hosts_writer;
  const mojo::internal::ContainerValidateParams required_hosts_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_required_hosts, buffer, &required_hosts_writer, &required_hosts_validate_params,
      &serialization_context);
  params->required_hosts.Set(
      required_hosts_writer.is_null() ? nullptr : required_hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->required_hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null required_hosts in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_hosts)::BaseType::BufferWriter
      excluded_hosts_writer;
  const mojo::internal::ContainerValidateParams excluded_hosts_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_excluded_hosts, buffer, &excluded_hosts_writer, &excluded_hosts_validate_params,
      &serialization_context);
  params->excluded_hosts.Set(
      excluded_hosts_writer.is_null() ? nullptr : excluded_hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_hosts in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_spkis)::BaseType::BufferWriter
      excluded_spkis_writer;
  const mojo::internal::ContainerValidateParams excluded_spkis_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_excluded_spkis, buffer, &excluded_spkis_writer, &excluded_spkis_validate_params,
      &serialization_context);
  params->excluded_spkis.Set(
      excluded_spkis_writer.is_null() ? nullptr : excluded_spkis_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_spkis.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_spkis in NetworkContext.SetCTPolicy request");
  typename decltype(params->excluded_legacy_spkis)::BaseType::BufferWriter
      excluded_legacy_spkis_writer;
  const mojo::internal::ContainerValidateParams excluded_legacy_spkis_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_excluded_legacy_spkis, buffer, &excluded_legacy_spkis_writer, &excluded_legacy_spkis_validate_params,
      &serialization_context);
  params->excluded_legacy_spkis.Set(
      excluded_legacy_spkis_writer.is_null() ? nullptr : excluded_legacy_spkis_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->excluded_legacy_spkis.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null excluded_legacy_spkis in NetworkContext.SetCTPolicy request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetCTPolicy");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::AddExpectCT(
    const std::string& in_host, base::Time in_expiry, bool in_enforce, const GURL& in_report_uri, AddExpectCTCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddExpectCT");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddExpectCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddExpectCT_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.AddExpectCT request");
  typename decltype(params->expiry)::BaseType::BufferWriter
      expiry_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expiry, buffer, &expiry_writer, &serialization_context);
  params->expiry.Set(
      expiry_writer.is_null() ? nullptr : expiry_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expiry.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expiry in NetworkContext.AddExpectCT request");
  params->enforce = in_enforce;
  typename decltype(params->report_uri)::BaseType::BufferWriter
      report_uri_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_report_uri, buffer, &report_uri_writer, &serialization_context);
  params->report_uri.Set(
      report_uri_writer.is_null() ? nullptr : report_uri_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->report_uri.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null report_uri in NetworkContext.AddExpectCT request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddExpectCT");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_AddExpectCT_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::SetExpectCTTestReport(
    const GURL& in_report_uri, SetExpectCTTestReportCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetExpectCTTestReport");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetExpectCTTestReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetExpectCTTestReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->report_uri)::BaseType::BufferWriter
      report_uri_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_report_uri, buffer, &report_uri_writer, &serialization_context);
  params->report_uri.Set(
      report_uri_writer.is_null() ? nullptr : report_uri_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->report_uri.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null report_uri in NetworkContext.SetExpectCTTestReport request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetExpectCTTestReport");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SetExpectCTTestReport_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::GetExpectCTState(
    const std::string& in_domain, GetExpectCTStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetExpectCTState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetExpectCTState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetExpectCTState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->domain)::BaseType::BufferWriter
      domain_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_domain, buffer, &domain_writer, &serialization_context);
  params->domain.Set(
      domain_writer.is_null() ? nullptr : domain_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->domain.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null domain in NetworkContext.GetExpectCTState request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetExpectCTState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_GetExpectCTState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::CreateUDPSocket(
    ::network::mojom::UDPSocketRequest in_request, ::network::mojom::UDPSocketReceiverPtr in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateUDPSocket");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateUDPSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateUDPSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::UDPSocketRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in NetworkContext.CreateUDPSocket request");
  mojo::internal::Serialize<::network::mojom::UDPSocketReceiverPtrDataView>(
      in_receiver, &params->receiver, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateUDPSocket");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CreateTCPServerSocket(
    const net::IPEndPoint& in_local_addr, uint32_t in_backlog, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TCPServerSocketRequest in_socket, CreateTCPServerSocketCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPServerSocket");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateTCPServerSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPServerSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_addr in NetworkContext.CreateTCPServerSocket request");
  params->backlog = in_backlog;
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPServerSocket request");
  mojo::internal::Serialize<::network::mojom::TCPServerSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPServerSocket request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateTCPServerSocket");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CreateTCPServerSocket_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::CreateTCPConnectedSocket(
    const base::Optional<net::IPEndPoint>& in_local_addr, const net::AddressList& in_remote_addr_list, ::network::mojom::TCPConnectedSocketOptionsPtr in_tcp_connected_socket_options, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TCPConnectedSocketRequest in_socket, ::network::mojom::SocketObserverPtr in_observer, CreateTCPConnectedSocketCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPConnectedSocket");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateTCPConnectedSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPConnectedSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  typename decltype(params->remote_addr_list)::BaseType::BufferWriter
      remote_addr_list_writer;
  mojo::internal::Serialize<::network::mojom::AddressListDataView>(
      in_remote_addr_list, buffer, &remote_addr_list_writer, &serialization_context);
  params->remote_addr_list.Set(
      remote_addr_list_writer.is_null() ? nullptr : remote_addr_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->remote_addr_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_addr_list in NetworkContext.CreateTCPConnectedSocket request");
  typename decltype(params->tcp_connected_socket_options)::BaseType::BufferWriter
      tcp_connected_socket_options_writer;
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketOptionsDataView>(
      in_tcp_connected_socket_options, buffer, &tcp_connected_socket_options_writer, &serialization_context);
  params->tcp_connected_socket_options.Set(
      tcp_connected_socket_options_writer.is_null() ? nullptr : tcp_connected_socket_options_writer.data());
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPConnectedSocket request");
  mojo::internal::Serialize<::network::mojom::TCPConnectedSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPConnectedSocket request");
  mojo::internal::Serialize<::network::mojom::SocketObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateTCPConnectedSocket");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CreateTCPConnectedSocket_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::CreateTCPBoundSocket(
    const net::IPEndPoint& in_local_addr, const net::MutableNetworkTrafficAnnotationTag& in_traffic_annotation, ::network::mojom::TCPBoundSocketRequest in_socket, CreateTCPBoundSocketCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPBoundSocket");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateTCPBoundSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPBoundSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_addr.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_addr in NetworkContext.CreateTCPBoundSocket request");
  typename decltype(params->traffic_annotation)::BaseType::BufferWriter
      traffic_annotation_writer;
  mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
      in_traffic_annotation, buffer, &traffic_annotation_writer, &serialization_context);
  params->traffic_annotation.Set(
      traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->traffic_annotation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null traffic_annotation in NetworkContext.CreateTCPBoundSocket request");
  mojo::internal::Serialize<::network::mojom::TCPBoundSocketRequestDataView>(
      in_socket, &params->socket, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkContext.CreateTCPBoundSocket request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateTCPBoundSocket");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_CreateTCPBoundSocket_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::CreateProxyResolvingSocketFactory(
    ::network::mojom::ProxyResolvingSocketFactoryRequest in_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateProxyResolvingSocketFactory");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateProxyResolvingSocketFactory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateProxyResolvingSocketFactory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ProxyResolvingSocketFactoryRequestDataView>(
      in_factory, &params->factory, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in NetworkContext.CreateProxyResolvingSocketFactory request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateProxyResolvingSocketFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::LookUpProxyForURL(
    const GURL& in_url, ::network::mojom::ProxyLookupClientPtr in_proxy_lookup_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::LookUpProxyForURL");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_LookUpProxyForURL_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_LookUpProxyForURL_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.LookUpProxyForURL request");
  mojo::internal::Serialize<::network::mojom::ProxyLookupClientPtrDataView>(
      in_proxy_lookup_client, &params->proxy_lookup_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->proxy_lookup_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid proxy_lookup_client in NetworkContext.LookUpProxyForURL request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("LookUpProxyForURL");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::ForceReloadProxyConfig(
    ForceReloadProxyConfigCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ForceReloadProxyConfig");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ForceReloadProxyConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ForceReloadProxyConfig_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ForceReloadProxyConfig");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ForceReloadProxyConfig_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::ClearBadProxiesCache(
    ClearBadProxiesCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearBadProxiesCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearBadProxiesCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearBadProxiesCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearBadProxiesCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ClearBadProxiesCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::CreateWebSocket(
    ::network::mojom::WebSocketRequest in_request, int32_t in_process_id, int32_t in_render_frame_id, const url::Origin& in_origin, uint32_t in_options, ::network::mojom::AuthenticationHandlerPtr in_auth_handler, TrustedHeaderClientPtr in_header_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateWebSocket");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateWebSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateWebSocket_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::WebSocketRequestDataView>(
      in_request, &params->request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in NetworkContext.CreateWebSocket request");
  params->process_id = in_process_id;
  params->render_frame_id = in_render_frame_id;
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContext.CreateWebSocket request");
  params->options = in_options;
  mojo::internal::Serialize<::network::mojom::AuthenticationHandlerPtrDataView>(
      in_auth_handler, &params->auth_handler, &serialization_context);
  mojo::internal::Serialize<::network::mojom::TrustedHeaderClientPtrDataView>(
      in_header_client, &params->header_client, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateWebSocket");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CreateNetLogExporter(
    ::network::mojom::NetLogExporterRequest in_exporter) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateNetLogExporter");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateNetLogExporter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateNetLogExporter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetLogExporterRequestDataView>(
      in_exporter, &params->exporter, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->exporter),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid exporter in NetworkContext.CreateNetLogExporter request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateNetLogExporter");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::PreconnectSockets(
    uint32_t in_num_streams, const GURL& in_url, int32_t in_load_flags, bool in_privacy_mode_enabled) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::PreconnectSockets");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_PreconnectSockets_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_PreconnectSockets_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->num_streams = in_num_streams;
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.PreconnectSockets request");
  params->load_flags = in_load_flags;
  params->privacy_mode_enabled = in_privacy_mode_enabled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("PreconnectSockets");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CreateP2PSocketManager(
    ::network::mojom::P2PTrustedSocketManagerClientPtr in_client, ::network::mojom::P2PTrustedSocketManagerRequest in_trusted_socket_manager, ::network::mojom::P2PSocketManagerRequest in_socket_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateP2PSocketManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateP2PSocketManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateP2PSocketManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::P2PTrustedSocketManagerClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in NetworkContext.CreateP2PSocketManager request");
  mojo::internal::Serialize<::network::mojom::P2PTrustedSocketManagerRequestDataView>(
      in_trusted_socket_manager, &params->trusted_socket_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->trusted_socket_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid trusted_socket_manager in NetworkContext.CreateP2PSocketManager request");
  mojo::internal::Serialize<::network::mojom::P2PSocketManagerRequestDataView>(
      in_socket_manager, &params->socket_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->socket_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket_manager in NetworkContext.CreateP2PSocketManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateP2PSocketManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CreateMdnsResponder(
    ::network::mojom::MdnsResponderRequest in_responder_request) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateMdnsResponder");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateMdnsResponder_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateMdnsResponder_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::MdnsResponderRequestDataView>(
      in_responder_request, &params->responder_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->responder_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid responder_request in NetworkContext.CreateMdnsResponder request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateMdnsResponder");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::ResolveHost(
    const net::HostPortPair& in_host, ::network::mojom::ResolveHostParametersPtr in_optional_parameters, ::network::mojom::ResolveHostClientPtr in_response_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ResolveHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ResolveHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ResolveHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.ResolveHost request");
  typename decltype(params->optional_parameters)::BaseType::BufferWriter
      optional_parameters_writer;
  mojo::internal::Serialize<::network::mojom::ResolveHostParametersDataView>(
      in_optional_parameters, buffer, &optional_parameters_writer, &serialization_context);
  params->optional_parameters.Set(
      optional_parameters_writer.is_null() ? nullptr : optional_parameters_writer.data());
  mojo::internal::Serialize<::network::mojom::ResolveHostClientPtrDataView>(
      in_response_client, &params->response_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_client in NetworkContext.ResolveHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ResolveHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::CreateHostResolver(
    const base::Optional<net::DnsConfigOverrides>& in_config_overrides, ::network::mojom::HostResolverRequest in_host_resolver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateHostResolver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateHostResolver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateHostResolver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->config_overrides)::BaseType::BufferWriter
      config_overrides_writer;
  mojo::internal::Serialize<::network::mojom::DnsConfigOverridesDataView>(
      in_config_overrides, buffer, &config_overrides_writer, &serialization_context);
  params->config_overrides.Set(
      config_overrides_writer.is_null() ? nullptr : config_overrides_writer.data());
  mojo::internal::Serialize<::network::mojom::HostResolverRequestDataView>(
      in_host_resolver, &params->host_resolver, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->host_resolver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid host_resolver in NetworkContext.CreateHostResolver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateHostResolver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkContextProxy::VerifyCertForSignedExchange(
    const scoped_refptr<net::X509Certificate>& in_certificate, const GURL& in_url, const std::string& in_ocsp_response, const std::string& in_sct_list, VerifyCertForSignedExchangeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertForSignedExchange");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_VerifyCertForSignedExchange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_VerifyCertForSignedExchange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->certificate)::BaseType::BufferWriter
      certificate_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      in_certificate, buffer, &certificate_writer, &serialization_context);
  params->certificate.Set(
      certificate_writer.is_null() ? nullptr : certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null certificate in NetworkContext.VerifyCertForSignedExchange request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.VerifyCertForSignedExchange request");
  typename decltype(params->ocsp_response)::BaseType::BufferWriter
      ocsp_response_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_ocsp_response, buffer, &ocsp_response_writer, &serialization_context);
  params->ocsp_response.Set(
      ocsp_response_writer.is_null() ? nullptr : ocsp_response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ocsp_response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ocsp_response in NetworkContext.VerifyCertForSignedExchange request");
  typename decltype(params->sct_list)::BaseType::BufferWriter
      sct_list_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_sct_list, buffer, &sct_list_writer, &serialization_context);
  params->sct_list.Set(
      sct_list_writer.is_null() ? nullptr : sct_list_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sct_list.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sct_list in NetworkContext.VerifyCertForSignedExchange request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("VerifyCertForSignedExchange");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_VerifyCertForSignedExchange_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::AddHSTS(
    const std::string& in_host, base::Time in_expiry, bool in_include_subdomains, AddHSTSCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddHSTS");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddHSTS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddHSTS_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.AddHSTS request");
  typename decltype(params->expiry)::BaseType::BufferWriter
      expiry_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_expiry, buffer, &expiry_writer, &serialization_context);
  params->expiry.Set(
      expiry_writer.is_null() ? nullptr : expiry_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->expiry.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null expiry in NetworkContext.AddHSTS request");
  params->include_subdomains = in_include_subdomains;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddHSTS");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_AddHSTS_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::IsHSTSActiveForHost(
    const std::string& in_host, IsHSTSActiveForHostCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::IsHSTSActiveForHost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_IsHSTSActiveForHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_IsHSTSActiveForHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.IsHSTSActiveForHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("IsHSTSActiveForHost");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_IsHSTSActiveForHost_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::GetHSTSState(
    const std::string& in_domain, GetHSTSStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetHSTSState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetHSTSState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetHSTSState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->domain)::BaseType::BufferWriter
      domain_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_domain, buffer, &domain_writer, &serialization_context);
  params->domain.Set(
      domain_writer.is_null() ? nullptr : domain_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->domain.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null domain in NetworkContext.GetHSTSState request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetHSTSState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_GetHSTSState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::SetCorsOriginAccessListsForOrigin(
    const url::Origin& in_source_origin, std::vector<::network::mojom::CorsOriginPatternPtr> in_allow_patterns, std::vector<::network::mojom::CorsOriginPatternPtr> in_block_patterns, SetCorsOriginAccessListsForOriginCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetCorsOriginAccessListsForOrigin");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetCorsOriginAccessListsForOrigin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_origin)::BaseType::BufferWriter
      source_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_source_origin, buffer, &source_origin_writer, &serialization_context);
  params->source_origin.Set(
      source_origin_writer.is_null() ? nullptr : source_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_origin in NetworkContext.SetCorsOriginAccessListsForOrigin request");
  typename decltype(params->allow_patterns)::BaseType::BufferWriter
      allow_patterns_writer;
  const mojo::internal::ContainerValidateParams allow_patterns_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
      in_allow_patterns, buffer, &allow_patterns_writer, &allow_patterns_validate_params,
      &serialization_context);
  params->allow_patterns.Set(
      allow_patterns_writer.is_null() ? nullptr : allow_patterns_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->allow_patterns.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allow_patterns in NetworkContext.SetCorsOriginAccessListsForOrigin request");
  typename decltype(params->block_patterns)::BaseType::BufferWriter
      block_patterns_writer;
  const mojo::internal::ContainerValidateParams block_patterns_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
      in_block_patterns, buffer, &block_patterns_writer, &block_patterns_validate_params,
      &serialization_context);
  params->block_patterns.Set(
      block_patterns_writer.is_null() ? nullptr : block_patterns_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->block_patterns.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null block_patterns in NetworkContext.SetCorsOriginAccessListsForOrigin request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetCorsOriginAccessListsForOrigin");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SetCorsOriginAccessListsForOrigin_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::DeleteDynamicDataForHost(
    const std::string& in_host, DeleteDynamicDataForHostCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::DeleteDynamicDataForHost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_DeleteDynamicDataForHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_DeleteDynamicDataForHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkContext.DeleteDynamicDataForHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("DeleteDynamicDataForHost");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_DeleteDynamicDataForHost_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::SaveHttpAuthCache(
    SaveHttpAuthCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SaveHttpAuthCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SaveHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SaveHttpAuthCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SaveHttpAuthCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SaveHttpAuthCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::LoadHttpAuthCache(
    const base::UnguessableToken& in_cache_key, LoadHttpAuthCacheCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::LoadHttpAuthCache");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_LoadHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_LoadHttpAuthCache_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_key)::BaseType::BufferWriter
      cache_key_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_cache_key, buffer, &cache_key_writer, &serialization_context);
  params->cache_key.Set(
      cache_key_writer.is_null() ? nullptr : cache_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_key in NetworkContext.LoadHttpAuthCache request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("LoadHttpAuthCache");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_LoadHttpAuthCache_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::LookupBasicAuthCredentials(
    const GURL& in_url, LookupBasicAuthCredentialsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::LookupBasicAuthCredentials");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_LookupBasicAuthCredentials_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_LookupBasicAuthCredentials_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in NetworkContext.LookupBasicAuthCredentials request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("LookupBasicAuthCredentials");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_LookupBasicAuthCredentials_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkContextProxy::EnableStaticKeyPinningForTesting(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::EnableStaticKeyPinningForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("EnableStaticKeyPinningForTesting");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_EnableStaticKeyPinningForTesting_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::EnableStaticKeyPinningForTesting(
    EnableStaticKeyPinningForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::EnableStaticKeyPinningForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("EnableStaticKeyPinningForTesting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_EnableStaticKeyPinningForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkContextProxy::SetFailingHttpTransactionForTesting(
    int32_t param_rv) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetFailingHttpTransactionForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->rv = param_rv;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetFailingHttpTransactionForTesting");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::SetFailingHttpTransactionForTesting(
    int32_t in_rv, SetFailingHttpTransactionForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetFailingHttpTransactionForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->rv = in_rv;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetFailingHttpTransactionForTesting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkContextProxy::VerifyCertificateForTesting(
    const scoped_refptr<net::X509Certificate>& param_certificate, const std::string& param_hostname, const std::string& param_ocsp_response, int32_t* out_param_error_code) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertificateForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_VerifyCertificateForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_VerifyCertificateForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->certificate)::BaseType::BufferWriter
      certificate_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      param_certificate, buffer, &certificate_writer, &serialization_context);
  params->certificate.Set(
      certificate_writer.is_null() ? nullptr : certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null certificate in NetworkContext.VerifyCertificateForTesting request");
  typename decltype(params->hostname)::BaseType::BufferWriter
      hostname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_hostname, buffer, &hostname_writer, &serialization_context);
  params->hostname.Set(
      hostname_writer.is_null() ? nullptr : hostname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->hostname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null hostname in NetworkContext.VerifyCertificateForTesting request");
  typename decltype(params->ocsp_response)::BaseType::BufferWriter
      ocsp_response_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_ocsp_response, buffer, &ocsp_response_writer, &serialization_context);
  params->ocsp_response.Set(
      ocsp_response_writer.is_null() ? nullptr : ocsp_response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ocsp_response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ocsp_response in NetworkContext.VerifyCertificateForTesting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("VerifyCertificateForTesting");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_VerifyCertificateForTesting_HandleSyncResponse(
          &result, out_param_error_code));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::VerifyCertificateForTesting(
    const scoped_refptr<net::X509Certificate>& in_certificate, const std::string& in_hostname, const std::string& in_ocsp_response, VerifyCertificateForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertificateForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_VerifyCertificateForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_VerifyCertificateForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->certificate)::BaseType::BufferWriter
      certificate_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      in_certificate, buffer, &certificate_writer, &serialization_context);
  params->certificate.Set(
      certificate_writer.is_null() ? nullptr : certificate_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->certificate.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null certificate in NetworkContext.VerifyCertificateForTesting request");
  typename decltype(params->hostname)::BaseType::BufferWriter
      hostname_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_hostname, buffer, &hostname_writer, &serialization_context);
  params->hostname.Set(
      hostname_writer.is_null() ? nullptr : hostname_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->hostname.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null hostname in NetworkContext.VerifyCertificateForTesting request");
  typename decltype(params->ocsp_response)::BaseType::BufferWriter
      ocsp_response_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_ocsp_response, buffer, &ocsp_response_writer, &serialization_context);
  params->ocsp_response.Set(
      ocsp_response_writer.is_null() ? nullptr : ocsp_response_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ocsp_response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ocsp_response in NetworkContext.VerifyCertificateForTesting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("VerifyCertificateForTesting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_VerifyCertificateForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkContextProxy::AddDomainReliabilityContextForTesting(
    const GURL& param_origin, const GURL& param_upload_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddDomainReliabilityContextForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContext.AddDomainReliabilityContextForTesting request");
  typename decltype(params->upload_url)::BaseType::BufferWriter
      upload_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      param_upload_url, buffer, &upload_url_writer, &serialization_context);
  params->upload_url.Set(
      upload_url_writer.is_null() ? nullptr : upload_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->upload_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null upload_url in NetworkContext.AddDomainReliabilityContextForTesting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddDomainReliabilityContextForTesting");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_AddDomainReliabilityContextForTesting_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::AddDomainReliabilityContextForTesting(
    const GURL& in_origin, const GURL& in_upload_url, AddDomainReliabilityContextForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddDomainReliabilityContextForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->origin)::BaseType::BufferWriter
      origin_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_origin, buffer, &origin_writer, &serialization_context);
  params->origin.Set(
      origin_writer.is_null() ? nullptr : origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in NetworkContext.AddDomainReliabilityContextForTesting request");
  typename decltype(params->upload_url)::BaseType::BufferWriter
      upload_url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_upload_url, buffer, &upload_url_writer, &serialization_context);
  params->upload_url.Set(
      upload_url_writer.is_null() ? nullptr : upload_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->upload_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null upload_url in NetworkContext.AddDomainReliabilityContextForTesting request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddDomainReliabilityContextForTesting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_AddDomainReliabilityContextForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkContextProxy::ForceDomainReliabilityUploadsForTesting(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ForceDomainReliabilityUploadsForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ForceDomainReliabilityUploadsForTesting");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ForceDomainReliabilityUploadsForTesting_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkContextProxy::ForceDomainReliabilityUploadsForTesting(
    ForceDomainReliabilityUploadsForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ForceDomainReliabilityUploadsForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ForceDomainReliabilityUploadsForTesting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkContext_ForceDomainReliabilityUploadsForTesting_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkContextProxy::GetOriginPolicyManager(
    ::network::mojom::OriginPolicyManagerRequest in_origin_policy_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetOriginPolicyManager");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetOriginPolicyManager_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetOriginPolicyManager_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::OriginPolicyManagerRequestDataView>(
      in_origin_policy_manager, &params->origin_policy_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->origin_policy_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid origin_policy_manager in NetworkContext.GetOriginPolicyManager request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetOriginPolicyManager");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class NetworkContext_ClearNetworkingHistorySince_ProxyToResponder {
 public:
  static NetworkContext::ClearNetworkingHistorySinceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearNetworkingHistorySince_ProxyToResponder> proxy(
        new NetworkContext_ClearNetworkingHistorySince_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearNetworkingHistorySince_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearNetworkingHistorySince_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearNetworkingHistorySinceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkingHistorySince_ProxyToResponder);
};

bool NetworkContext_ClearNetworkingHistorySince_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkingHistorySinceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearNetworkingHistorySince_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkingHistorySince_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkingHistorySinceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearNetworkingHistorySince");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearHttpCache_ProxyToResponder {
 public:
  static NetworkContext::ClearHttpCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearHttpCache_ProxyToResponder> proxy(
        new NetworkContext_ClearHttpCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearHttpCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearHttpCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearHttpCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearHttpCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpCache_ProxyToResponder);
};

bool NetworkContext_ClearHttpCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearHttpCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearHttpCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearHttpCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearHttpCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearHttpCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearHttpCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ComputeHttpCacheSize_ProxyToResponder {
 public:
  static NetworkContext::ComputeHttpCacheSizeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ComputeHttpCacheSize_ProxyToResponder> proxy(
        new NetworkContext_ComputeHttpCacheSize_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ComputeHttpCacheSize_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ComputeHttpCacheSize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ComputeHttpCacheSize_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ComputeHttpCacheSizeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_is_upper_bound, int64_t in_size_or_error);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ComputeHttpCacheSize_ProxyToResponder);
};

bool NetworkContext_ComputeHttpCacheSize_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ComputeHttpCacheSizeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ComputeHttpCacheSize_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ComputeHttpCacheSize_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_is_upper_bound{};
  int64_t p_size_or_error{};
  NetworkContext_ComputeHttpCacheSize_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_is_upper_bound = input_data_view.is_upper_bound();
  p_size_or_error = input_data_view.size_or_error();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_is_upper_bound), 
std::move(p_size_or_error));
  return true;
}

void NetworkContext_ComputeHttpCacheSize_ProxyToResponder::Run(
    bool in_is_upper_bound, int64_t in_size_or_error) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ComputeHttpCacheSize_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ComputeHttpCacheSize_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->is_upper_bound = in_is_upper_bound;
  params->size_or_error = in_size_or_error;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ComputeHttpCacheSizeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ComputeHttpCacheSize");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearHostCache_ProxyToResponder {
 public:
  static NetworkContext::ClearHostCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearHostCache_ProxyToResponder> proxy(
        new NetworkContext_ClearHostCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearHostCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearHostCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearHostCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearHostCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHostCache_ProxyToResponder);
};

bool NetworkContext_ClearHostCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHostCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearHostCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearHostCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearHostCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearHostCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearHostCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHostCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHostCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearHostCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearHttpAuthCache_ProxyToResponder {
 public:
  static NetworkContext::ClearHttpAuthCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearHttpAuthCache_ProxyToResponder> proxy(
        new NetworkContext_ClearHttpAuthCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearHttpAuthCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearHttpAuthCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearHttpAuthCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearHttpAuthCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearHttpAuthCache_ProxyToResponder);
};

bool NetworkContext_ClearHttpAuthCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpAuthCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearHttpAuthCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearHttpAuthCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpAuthCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearHttpAuthCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearReportingCacheReports_ProxyToResponder {
 public:
  static NetworkContext::ClearReportingCacheReportsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearReportingCacheReports_ProxyToResponder> proxy(
        new NetworkContext_ClearReportingCacheReports_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearReportingCacheReports_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearReportingCacheReports_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearReportingCacheReports_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearReportingCacheReportsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheReports_ProxyToResponder);
};

bool NetworkContext_ClearReportingCacheReports_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheReportsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearReportingCacheReports_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearReportingCacheReports_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheReports_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheReportsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearReportingCacheReports");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearReportingCacheClients_ProxyToResponder {
 public:
  static NetworkContext::ClearReportingCacheClientsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearReportingCacheClients_ProxyToResponder> proxy(
        new NetworkContext_ClearReportingCacheClients_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearReportingCacheClients_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearReportingCacheClients_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearReportingCacheClients_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearReportingCacheClientsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearReportingCacheClients_ProxyToResponder);
};

bool NetworkContext_ClearReportingCacheClients_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheClientsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearReportingCacheClients_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 13, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearReportingCacheClients_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearReportingCacheClients_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheClientsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearReportingCacheClients");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearNetworkErrorLogging_ProxyToResponder {
 public:
  static NetworkContext::ClearNetworkErrorLoggingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearNetworkErrorLogging_ProxyToResponder> proxy(
        new NetworkContext_ClearNetworkErrorLogging_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearNetworkErrorLogging_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearNetworkErrorLogging_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearNetworkErrorLoggingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearNetworkErrorLogging_ProxyToResponder);
};

bool NetworkContext_ClearNetworkErrorLogging_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkErrorLoggingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearNetworkErrorLogging_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 14, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearNetworkErrorLogging_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkErrorLoggingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearNetworkErrorLogging");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearDomainReliability_ProxyToResponder {
 public:
  static NetworkContext::ClearDomainReliabilityCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearDomainReliability_ProxyToResponder> proxy(
        new NetworkContext_ClearDomainReliability_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearDomainReliability_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearDomainReliability_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearDomainReliability_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearDomainReliabilityCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearDomainReliability_ProxyToResponder);
};

bool NetworkContext_ClearDomainReliability_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearDomainReliabilityCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearDomainReliability_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearDomainReliability_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearDomainReliability_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 15, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearDomainReliability_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearDomainReliability_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearDomainReliability_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearDomainReliabilityCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearDomainReliability");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_GetDomainReliabilityJSON_ProxyToResponder {
 public:
  static NetworkContext::GetDomainReliabilityJSONCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_GetDomainReliabilityJSON_ProxyToResponder> proxy(
        new NetworkContext_GetDomainReliabilityJSON_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_GetDomainReliabilityJSON_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_GetDomainReliabilityJSON_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_GetDomainReliabilityJSON_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::GetDomainReliabilityJSONCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Value in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_GetDomainReliabilityJSON_ProxyToResponder);
};

bool NetworkContext_GetDomainReliabilityJSON_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetDomainReliabilityJSONCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Value p_data{};
  NetworkContext_GetDomainReliabilityJSON_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 16, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_data));
  return true;
}

void NetworkContext_GetDomainReliabilityJSON_ProxyToResponder::Run(
    base::Value in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetDomainReliabilityJSON_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BufferWriter data_writer;
  data_writer.AllocateInline(buffer, &params->data);
  mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
      in_data, buffer, &data_writer, true, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetDomainReliabilityJSONCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetDomainReliabilityJSON");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CloseAllConnections_ProxyToResponder {
 public:
  static NetworkContext::CloseAllConnectionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CloseAllConnections_ProxyToResponder> proxy(
        new NetworkContext_CloseAllConnections_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CloseAllConnections_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CloseAllConnections_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CloseAllConnections_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CloseAllConnectionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CloseAllConnections_ProxyToResponder);
};

bool NetworkContext_CloseAllConnections_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CloseAllConnectionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_CloseAllConnections_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CloseAllConnections_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_CloseAllConnections_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 19, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_CloseAllConnections_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CloseAllConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CloseAllConnections_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CloseAllConnectionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CloseAllConnections");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CloseIdleConnections_ProxyToResponder {
 public:
  static NetworkContext::CloseIdleConnectionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CloseIdleConnections_ProxyToResponder> proxy(
        new NetworkContext_CloseIdleConnections_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CloseIdleConnections_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CloseIdleConnections_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CloseIdleConnections_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CloseIdleConnectionsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CloseIdleConnections_ProxyToResponder);
};

bool NetworkContext_CloseIdleConnections_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CloseIdleConnectionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_CloseIdleConnections_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CloseIdleConnections_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_CloseIdleConnections_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 20, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_CloseIdleConnections_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CloseIdleConnections_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CloseIdleConnections_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CloseIdleConnectionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CloseIdleConnections");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_AddExpectCT_ProxyToResponder {
 public:
  static NetworkContext::AddExpectCTCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_AddExpectCT_ProxyToResponder> proxy(
        new NetworkContext_AddExpectCT_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_AddExpectCT_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_AddExpectCT_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_AddExpectCT_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::AddExpectCTCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddExpectCT_ProxyToResponder);
};

bool NetworkContext_AddExpectCT_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddExpectCTCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_AddExpectCT_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_AddExpectCT_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  NetworkContext_AddExpectCT_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 25, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void NetworkContext_AddExpectCT_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddExpectCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddExpectCT_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::AddExpectCTCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddExpectCT");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_SetExpectCTTestReport_ProxyToResponder {
 public:
  static NetworkContext::SetExpectCTTestReportCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_SetExpectCTTestReport_ProxyToResponder> proxy(
        new NetworkContext_SetExpectCTTestReport_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_SetExpectCTTestReport_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_SetExpectCTTestReport_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_SetExpectCTTestReport_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::SetExpectCTTestReportCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetExpectCTTestReport_ProxyToResponder);
};

bool NetworkContext_SetExpectCTTestReport_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetExpectCTTestReportCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_SetExpectCTTestReport_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_SetExpectCTTestReport_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  NetworkContext_SetExpectCTTestReport_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 26, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void NetworkContext_SetExpectCTTestReport_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetExpectCTTestReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetExpectCTTestReport_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetExpectCTTestReportCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetExpectCTTestReport");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_GetExpectCTState_ProxyToResponder {
 public:
  static NetworkContext::GetExpectCTStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_GetExpectCTState_ProxyToResponder> proxy(
        new NetworkContext_GetExpectCTState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_GetExpectCTState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_GetExpectCTState_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_GetExpectCTState_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::GetExpectCTStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Value in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_GetExpectCTState_ProxyToResponder);
};

bool NetworkContext_GetExpectCTState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetExpectCTStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_GetExpectCTState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_GetExpectCTState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Value p_state{};
  NetworkContext_GetExpectCTState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 27, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_state));
  return true;
}

void NetworkContext_GetExpectCTState_ProxyToResponder::Run(
    base::Value in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetExpectCTState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetExpectCTState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetExpectCTStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetExpectCTState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CreateTCPServerSocket_ProxyToResponder {
 public:
  static NetworkContext::CreateTCPServerSocketCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CreateTCPServerSocket_ProxyToResponder> proxy(
        new NetworkContext_CreateTCPServerSocket_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CreateTCPServerSocket_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CreateTCPServerSocket_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CreateTCPServerSocket_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CreateTCPServerSocketCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr_out);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPServerSocket_ProxyToResponder);
};

bool NetworkContext_CreateTCPServerSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPServerSocketCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<net::IPEndPoint> p_local_addr_out{};
  NetworkContext_CreateTCPServerSocket_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadLocalAddrOut(&p_local_addr_out))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 29, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr_out));
  return true;
}

void NetworkContext_CreateTCPServerSocket_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr_out) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateTCPServerSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->local_addr_out)::BaseType::BufferWriter
      local_addr_out_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr_out, buffer, &local_addr_out_writer, &serialization_context);
  params->local_addr_out.Set(
      local_addr_out_writer.is_null() ? nullptr : local_addr_out_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPServerSocketCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateTCPServerSocket");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CreateTCPConnectedSocket_ProxyToResponder {
 public:
  static NetworkContext::CreateTCPConnectedSocketCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CreateTCPConnectedSocket_ProxyToResponder> proxy(
        new NetworkContext_CreateTCPConnectedSocket_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CreateTCPConnectedSocket_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CreateTCPConnectedSocket_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CreateTCPConnectedSocketCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr, const base::Optional<net::IPEndPoint>& in_peer_addr, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPConnectedSocket_ProxyToResponder);
};

bool NetworkContext_CreateTCPConnectedSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPConnectedSocketCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<net::IPEndPoint> p_local_addr{};
  base::Optional<net::IPEndPoint> p_peer_addr{};
  mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
  mojo::ScopedDataPipeProducerHandle p_send_stream{};
  NetworkContext_CreateTCPConnectedSocket_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadLocalAddr(&p_local_addr))
    success = false;
  if (!input_data_view.ReadPeerAddr(&p_peer_addr))
    success = false;
  p_receive_stream = input_data_view.TakeReceiveStream();
  p_send_stream = input_data_view.TakeSendStream();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 30, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr), 
std::move(p_peer_addr), 
std::move(p_receive_stream), 
std::move(p_send_stream));
  return true;
}

void NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr, const base::Optional<net::IPEndPoint>& in_peer_addr, mojo::ScopedDataPipeConsumerHandle in_receive_stream, mojo::ScopedDataPipeProducerHandle in_send_stream) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateTCPConnectedSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  typename decltype(params->peer_addr)::BaseType::BufferWriter
      peer_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_peer_addr, buffer, &peer_addr_writer, &serialization_context);
  params->peer_addr.Set(
      peer_addr_writer.is_null() ? nullptr : peer_addr_writer.data());
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_receive_stream, &params->receive_stream, &serialization_context);
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_send_stream, &params->send_stream, &serialization_context);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPConnectedSocketCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateTCPConnectedSocket");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_CreateTCPBoundSocket_ProxyToResponder {
 public:
  static NetworkContext::CreateTCPBoundSocketCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_CreateTCPBoundSocket_ProxyToResponder> proxy(
        new NetworkContext_CreateTCPBoundSocket_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_CreateTCPBoundSocket_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_CreateTCPBoundSocket_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_CreateTCPBoundSocket_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::CreateTCPBoundSocketCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_CreateTCPBoundSocket_ProxyToResponder);
};

bool NetworkContext_CreateTCPBoundSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPBoundSocketCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_CreateTCPBoundSocket_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_CreateTCPBoundSocket_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  base::Optional<net::IPEndPoint> p_local_addr{};
  NetworkContext_CreateTCPBoundSocket_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadLocalAddr(&p_local_addr))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 31, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_local_addr));
  return true;
}

void NetworkContext_CreateTCPBoundSocket_ProxyToResponder::Run(
    int32_t in_result, const base::Optional<net::IPEndPoint>& in_local_addr) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_CreateTCPBoundSocket_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_CreateTCPBoundSocket_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->local_addr)::BaseType::BufferWriter
      local_addr_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_local_addr, buffer, &local_addr_writer, &serialization_context);
  params->local_addr.Set(
      local_addr_writer.is_null() ? nullptr : local_addr_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPBoundSocketCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("CreateTCPBoundSocket");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ForceReloadProxyConfig_ProxyToResponder {
 public:
  static NetworkContext::ForceReloadProxyConfigCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ForceReloadProxyConfig_ProxyToResponder> proxy(
        new NetworkContext_ForceReloadProxyConfig_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ForceReloadProxyConfig_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ForceReloadProxyConfig_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ForceReloadProxyConfig_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ForceReloadProxyConfigCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ForceReloadProxyConfig_ProxyToResponder);
};

bool NetworkContext_ForceReloadProxyConfig_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ForceReloadProxyConfigCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ForceReloadProxyConfig_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ForceReloadProxyConfig_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ForceReloadProxyConfig_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 34, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ForceReloadProxyConfig_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ForceReloadProxyConfig_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ForceReloadProxyConfig_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ForceReloadProxyConfigCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ForceReloadProxyConfig");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_ClearBadProxiesCache_ProxyToResponder {
 public:
  static NetworkContext::ClearBadProxiesCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ClearBadProxiesCache_ProxyToResponder> proxy(
        new NetworkContext_ClearBadProxiesCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ClearBadProxiesCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ClearBadProxiesCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ClearBadProxiesCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ClearBadProxiesCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ClearBadProxiesCache_ProxyToResponder);
};

bool NetworkContext_ClearBadProxiesCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ClearBadProxiesCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ClearBadProxiesCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ClearBadProxiesCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ClearBadProxiesCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 35, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ClearBadProxiesCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ClearBadProxiesCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ClearBadProxiesCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearBadProxiesCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ClearBadProxiesCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_VerifyCertForSignedExchange_ProxyToResponder {
 public:
  static NetworkContext::VerifyCertForSignedExchangeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_VerifyCertForSignedExchange_ProxyToResponder> proxy(
        new NetworkContext_VerifyCertForSignedExchange_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_VerifyCertForSignedExchange_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_VerifyCertForSignedExchange_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_VerifyCertForSignedExchange_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::VerifyCertForSignedExchangeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_error_code, const net::CertVerifyResult& in_cv_result, const net::ct::CTVerifyResult& in_ct_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_VerifyCertForSignedExchange_ProxyToResponder);
};

bool NetworkContext_VerifyCertForSignedExchange_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertForSignedExchangeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_error_code{};
  net::CertVerifyResult p_cv_result{};
  net::ct::CTVerifyResult p_ct_result{};
  NetworkContext_VerifyCertForSignedExchange_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_error_code = input_data_view.error_code();
  if (!input_data_view.ReadCvResult(&p_cv_result))
    success = false;
  if (!input_data_view.ReadCtResult(&p_ct_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 43, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code), 
std::move(p_cv_result), 
std::move(p_ct_result));
  return true;
}

void NetworkContext_VerifyCertForSignedExchange_ProxyToResponder::Run(
    int32_t in_error_code, const net::CertVerifyResult& in_cv_result, const net::ct::CTVerifyResult& in_ct_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_VerifyCertForSignedExchange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error_code = in_error_code;
  typename decltype(params->cv_result)::BaseType::BufferWriter
      cv_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      in_cv_result, buffer, &cv_result_writer, &serialization_context);
  params->cv_result.Set(
      cv_result_writer.is_null() ? nullptr : cv_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cv_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cv_result in ");
  typename decltype(params->ct_result)::BaseType::BufferWriter
      ct_result_writer;
  mojo::internal::Serialize<::network::mojom::CTVerifyResultDataView>(
      in_ct_result, buffer, &ct_result_writer, &serialization_context);
  params->ct_result.Set(
      ct_result_writer.is_null() ? nullptr : ct_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->ct_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ct_result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertForSignedExchangeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("VerifyCertForSignedExchange");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_AddHSTS_ProxyToResponder {
 public:
  static NetworkContext::AddHSTSCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_AddHSTS_ProxyToResponder> proxy(
        new NetworkContext_AddHSTS_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_AddHSTS_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_AddHSTS_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_AddHSTS_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::AddHSTSCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddHSTS_ProxyToResponder);
};

bool NetworkContext_AddHSTS_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddHSTSCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_AddHSTS_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_AddHSTS_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_AddHSTS_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 44, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_AddHSTS_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddHSTS_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddHSTS_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::AddHSTSCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddHSTS");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_IsHSTSActiveForHost_ProxyToResponder {
 public:
  static NetworkContext::IsHSTSActiveForHostCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_IsHSTSActiveForHost_ProxyToResponder> proxy(
        new NetworkContext_IsHSTSActiveForHost_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_IsHSTSActiveForHost_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_IsHSTSActiveForHost_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_IsHSTSActiveForHost_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::IsHSTSActiveForHostCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_IsHSTSActiveForHost_ProxyToResponder);
};

bool NetworkContext_IsHSTSActiveForHost_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::IsHSTSActiveForHostCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_IsHSTSActiveForHost_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_IsHSTSActiveForHost_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  NetworkContext_IsHSTSActiveForHost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 45, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NetworkContext_IsHSTSActiveForHost_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_IsHSTSActiveForHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_IsHSTSActiveForHost_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::IsHSTSActiveForHostCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("IsHSTSActiveForHost");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_GetHSTSState_ProxyToResponder {
 public:
  static NetworkContext::GetHSTSStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_GetHSTSState_ProxyToResponder> proxy(
        new NetworkContext_GetHSTSState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_GetHSTSState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_GetHSTSState_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_GetHSTSState_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::GetHSTSStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Value in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_GetHSTSState_ProxyToResponder);
};

bool NetworkContext_GetHSTSState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::GetHSTSStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_GetHSTSState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_GetHSTSState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Value p_state{};
  NetworkContext_GetHSTSState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 46, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_state));
  return true;
}

void NetworkContext_GetHSTSState_ProxyToResponder::Run(
    base::Value in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_GetHSTSState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_GetHSTSState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::mojo_base::mojom::DictionaryValueDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetHSTSStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("GetHSTSState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder {
 public:
  static NetworkContext::SetCorsOriginAccessListsForOriginCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder> proxy(
        new NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::SetCorsOriginAccessListsForOriginCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder);
};

bool NetworkContext_SetCorsOriginAccessListsForOrigin_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetCorsOriginAccessListsForOriginCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 47, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetCorsOriginAccessListsForOrigin_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetCorsOriginAccessListsForOriginCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetCorsOriginAccessListsForOrigin");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_DeleteDynamicDataForHost_ProxyToResponder {
 public:
  static NetworkContext::DeleteDynamicDataForHostCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_DeleteDynamicDataForHost_ProxyToResponder> proxy(
        new NetworkContext_DeleteDynamicDataForHost_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_DeleteDynamicDataForHost_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_DeleteDynamicDataForHost_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_DeleteDynamicDataForHost_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::DeleteDynamicDataForHostCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_DeleteDynamicDataForHost_ProxyToResponder);
};

bool NetworkContext_DeleteDynamicDataForHost_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::DeleteDynamicDataForHostCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  NetworkContext_DeleteDynamicDataForHost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 48, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void NetworkContext_DeleteDynamicDataForHost_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_DeleteDynamicDataForHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::DeleteDynamicDataForHostCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("DeleteDynamicDataForHost");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_SaveHttpAuthCache_ProxyToResponder {
 public:
  static NetworkContext::SaveHttpAuthCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_SaveHttpAuthCache_ProxyToResponder> proxy(
        new NetworkContext_SaveHttpAuthCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_SaveHttpAuthCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_SaveHttpAuthCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_SaveHttpAuthCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::SaveHttpAuthCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_cache_key);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SaveHttpAuthCache_ProxyToResponder);
};

bool NetworkContext_SaveHttpAuthCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SaveHttpAuthCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_SaveHttpAuthCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_SaveHttpAuthCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_cache_key{};
  NetworkContext_SaveHttpAuthCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCacheKey(&p_cache_key))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 49, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cache_key));
  return true;
}

void NetworkContext_SaveHttpAuthCache_ProxyToResponder::Run(
    const base::UnguessableToken& in_cache_key) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SaveHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SaveHttpAuthCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cache_key)::BaseType::BufferWriter
      cache_key_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_cache_key, buffer, &cache_key_writer, &serialization_context);
  params->cache_key.Set(
      cache_key_writer.is_null() ? nullptr : cache_key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cache_key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cache_key in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SaveHttpAuthCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SaveHttpAuthCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_LoadHttpAuthCache_ProxyToResponder {
 public:
  static NetworkContext::LoadHttpAuthCacheCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_LoadHttpAuthCache_ProxyToResponder> proxy(
        new NetworkContext_LoadHttpAuthCache_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_LoadHttpAuthCache_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_LoadHttpAuthCache_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_LoadHttpAuthCache_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::LoadHttpAuthCacheCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_LoadHttpAuthCache_ProxyToResponder);
};

bool NetworkContext_LoadHttpAuthCache_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::LoadHttpAuthCacheCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_LoadHttpAuthCache_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_LoadHttpAuthCache_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_LoadHttpAuthCache_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 50, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_LoadHttpAuthCache_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_LoadHttpAuthCache_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_LoadHttpAuthCache_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::LoadHttpAuthCacheCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("LoadHttpAuthCache");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_LookupBasicAuthCredentials_ProxyToResponder {
 public:
  static NetworkContext::LookupBasicAuthCredentialsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_LookupBasicAuthCredentials_ProxyToResponder> proxy(
        new NetworkContext_LookupBasicAuthCredentials_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_LookupBasicAuthCredentials_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_LookupBasicAuthCredentials_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_LookupBasicAuthCredentials_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::LookupBasicAuthCredentialsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::Optional<net::AuthCredentials>& in_credentials);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_LookupBasicAuthCredentials_ProxyToResponder);
};

bool NetworkContext_LookupBasicAuthCredentials_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::LookupBasicAuthCredentialsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Optional<net::AuthCredentials> p_credentials{};
  NetworkContext_LookupBasicAuthCredentials_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadCredentials(&p_credentials))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 51, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_credentials));
  return true;
}

void NetworkContext_LookupBasicAuthCredentials_ProxyToResponder::Run(
    const base::Optional<net::AuthCredentials>& in_credentials) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_LookupBasicAuthCredentials_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->credentials)::BaseType::BufferWriter
      credentials_writer;
  mojo::internal::Serialize<::network::mojom::AuthCredentialsDataView>(
      in_credentials, buffer, &credentials_writer, &serialization_context);
  params->credentials.Set(
      credentials_writer.is_null() ? nullptr : credentials_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::LookupBasicAuthCredentialsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("LookupBasicAuthCredentials");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder {
 public:
  static NetworkContext::EnableStaticKeyPinningForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder> proxy(
        new NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::EnableStaticKeyPinningForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder);
};

bool NetworkContext_EnableStaticKeyPinningForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::EnableStaticKeyPinningForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_EnableStaticKeyPinningForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 52, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::EnableStaticKeyPinningForTestingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("EnableStaticKeyPinningForTesting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_EnableStaticKeyPinningForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_EnableStaticKeyPinningForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 52, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder {
 public:
  static NetworkContext::SetFailingHttpTransactionForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder> proxy(
        new NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::SetFailingHttpTransactionForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder);
};

bool NetworkContext_SetFailingHttpTransactionForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::SetFailingHttpTransactionForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 53, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetFailingHttpTransactionForTestingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("SetFailingHttpTransactionForTesting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_SetFailingHttpTransactionForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_SetFailingHttpTransactionForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 53, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkContext_VerifyCertificateForTesting_ProxyToResponder {
 public:
  static NetworkContext::VerifyCertificateForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_VerifyCertificateForTesting_ProxyToResponder> proxy(
        new NetworkContext_VerifyCertificateForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_VerifyCertificateForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_VerifyCertificateForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_VerifyCertificateForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::VerifyCertificateForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_error_code);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_VerifyCertificateForTesting_ProxyToResponder);
};

bool NetworkContext_VerifyCertificateForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertificateForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_error_code{};
  NetworkContext_VerifyCertificateForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_error_code = input_data_view.error_code();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 54, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error_code));
  return true;
}

void NetworkContext_VerifyCertificateForTesting_ProxyToResponder::Run(
    int32_t in_error_code) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_VerifyCertificateForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->error_code = in_error_code;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertificateForTestingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("VerifyCertificateForTesting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_VerifyCertificateForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_error_code{};
  NetworkContext_VerifyCertificateForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_error_code = input_data_view.error_code();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 54, true);
    return false;
  }
  *out_error_code_ = std::move(p_error_code);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder {
 public:
  static NetworkContext::AddDomainReliabilityContextForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder> proxy(
        new NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::AddDomainReliabilityContextForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder);
};

bool NetworkContext_AddDomainReliabilityContextForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::AddDomainReliabilityContextForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_AddDomainReliabilityContextForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 55, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::AddDomainReliabilityContextForTestingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("AddDomainReliabilityContextForTesting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_AddDomainReliabilityContextForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_AddDomainReliabilityContextForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 55, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder {
 public:
  static NetworkContext::ForceDomainReliabilityUploadsForTestingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder> proxy(
        new NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkContext::ForceDomainReliabilityUploadsForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder);
};

bool NetworkContext_ForceDomainReliabilityUploadsForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkContext::ForceDomainReliabilityUploadsForTestingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 56, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ForceDomainReliabilityUploadsForTestingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkContext::Name_);
  message.set_method_name("ForceDomainReliabilityUploadsForTesting");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkContext_ForceDomainReliabilityUploadsForTesting_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkContext::Name_, 56, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool NetworkContextStubDispatch::Accept(
    NetworkContext* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkContext_SetClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetClient_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetClient_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContextClientPtr p_client{};
      NetworkContext_SetClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kNetworkContext_CreateURLLoaderFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateURLLoaderFactory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateURLLoaderFactory_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateURLLoaderFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::URLLoaderFactoryRequest p_url_loader_factory{};
      URLLoaderFactoryParamsPtr p_params{};
      NetworkContext_CreateURLLoaderFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_url_loader_factory =
          input_data_view.TakeUrlLoaderFactory<decltype(p_url_loader_factory)>();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateURLLoaderFactory(
std::move(p_url_loader_factory), 
std::move(p_params));
      return true;
    }
    case internal::kNetworkContext_ResetURLLoaderFactories_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ResetURLLoaderFactories",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_ResetURLLoaderFactories_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_ResetURLLoaderFactories_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_ResetURLLoaderFactories_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResetURLLoaderFactories();
      return true;
    }
    case internal::kNetworkContext_GetCookieManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetCookieManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_GetCookieManager_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_GetCookieManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::CookieManagerRequest p_cookie_manager{};
      NetworkContext_GetCookieManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_cookie_manager =
          input_data_view.TakeCookieManager<decltype(p_cookie_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetCookieManager(
std::move(p_cookie_manager));
      return true;
    }
    case internal::kNetworkContext_GetRestrictedCookieManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetRestrictedCookieManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_GetRestrictedCookieManager_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_GetRestrictedCookieManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::RestrictedCookieManagerRequest p_restricted_cookie_manager{};
      url::Origin p_origin{};
      NetworkContext_GetRestrictedCookieManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_restricted_cookie_manager =
          input_data_view.TakeRestrictedCookieManager<decltype(p_restricted_cookie_manager)>();
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRestrictedCookieManager(
std::move(p_restricted_cookie_manager), 
std::move(p_origin));
      return true;
    }
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
      break;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
      break;
    }
    case internal::kNetworkContext_ComputeHttpCacheSize_Name: {
      break;
    }
    case internal::kNetworkContext_NotifyExternalCacheHit_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::NotifyExternalCacheHit",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_NotifyExternalCacheHit_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_NotifyExternalCacheHit_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_http_method{};
      base::Optional<url::Origin> p_top_frame_origin{};
      NetworkContext_NotifyExternalCacheHit_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadHttpMethod(&p_http_method))
        success = false;
      if (!input_data_view.ReadTopFrameOrigin(&p_top_frame_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NotifyExternalCacheHit(
std::move(p_url), 
std::move(p_http_method), 
std::move(p_top_frame_origin));
      return true;
    }
    case internal::kNetworkContext_WriteCacheMetadata_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::WriteCacheMetadata",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_WriteCacheMetadata_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_WriteCacheMetadata_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      net::RequestPriority p_priority{};
      base::Time p_expected_response_time{};
      mojo_base::BigBuffer p_data{};
      NetworkContext_WriteCacheMetadata_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadPriority(&p_priority))
        success = false;
      if (!input_data_view.ReadExpectedResponseTime(&p_expected_response_time))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteCacheMetadata(
std::move(p_url), 
std::move(p_priority), 
std::move(p_expected_response_time), 
std::move(p_data));
      return true;
    }
    case internal::kNetworkContext_ClearHostCache_Name: {
      break;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
      break;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
      break;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
      break;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
      break;
    }
    case internal::kNetworkContext_ClearDomainReliability_Name: {
      break;
    }
    case internal::kNetworkContext_GetDomainReliabilityJSON_Name: {
      break;
    }
    case internal::kNetworkContext_QueueReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::QueueReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_QueueReport_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_QueueReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_type{};
      std::string p_group{};
      GURL p_url{};
      base::Optional<std::string> p_user_agent{};
      base::Value p_body{};
      NetworkContext_QueueReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadGroup(&p_group))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadUserAgent(&p_user_agent))
        success = false;
      if (!input_data_view.ReadBody(&p_body))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 17, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueueReport(
std::move(p_type), 
std::move(p_group), 
std::move(p_url), 
std::move(p_user_agent), 
std::move(p_body));
      return true;
    }
    case internal::kNetworkContext_QueueSignedExchangeReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::QueueSignedExchangeReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_QueueSignedExchangeReport_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_QueueSignedExchangeReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SignedExchangeReportPtr p_report{};
      NetworkContext_QueueSignedExchangeReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReport(&p_report))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 18, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueueSignedExchangeReport(
std::move(p_report));
      return true;
    }
    case internal::kNetworkContext_CloseAllConnections_Name: {
      break;
    }
    case internal::kNetworkContext_CloseIdleConnections_Name: {
      break;
    }
    case internal::kNetworkContext_SetNetworkConditions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetNetworkConditions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetNetworkConditions_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetNetworkConditions_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_throttling_profile_id{};
      NetworkConditionsPtr p_conditions{};
      NetworkContext_SetNetworkConditions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadThrottlingProfileId(&p_throttling_profile_id))
        success = false;
      if (!input_data_view.ReadConditions(&p_conditions))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 21, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetNetworkConditions(
std::move(p_throttling_profile_id), 
std::move(p_conditions));
      return true;
    }
    case internal::kNetworkContext_SetAcceptLanguage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetAcceptLanguage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetAcceptLanguage_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetAcceptLanguage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_new_accept_language{};
      NetworkContext_SetAcceptLanguage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadNewAcceptLanguage(&p_new_accept_language))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 22, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetAcceptLanguage(
std::move(p_new_accept_language));
      return true;
    }
    case internal::kNetworkContext_SetEnableReferrers_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetEnableReferrers",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetEnableReferrers_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetEnableReferrers_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_enable_referrers{};
      NetworkContext_SetEnableReferrers_ParamsDataView input_data_view(params, &serialization_context);
      
      p_enable_referrers = input_data_view.enable_referrers();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 23, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetEnableReferrers(
std::move(p_enable_referrers));
      return true;
    }
    case internal::kNetworkContext_SetCTPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetCTPolicy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_SetCTPolicy_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_SetCTPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<std::string> p_required_hosts{};
      std::vector<std::string> p_excluded_hosts{};
      std::vector<std::string> p_excluded_spkis{};
      std::vector<std::string> p_excluded_legacy_spkis{};
      NetworkContext_SetCTPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequiredHosts(&p_required_hosts))
        success = false;
      if (!input_data_view.ReadExcludedHosts(&p_excluded_hosts))
        success = false;
      if (!input_data_view.ReadExcludedSpkis(&p_excluded_spkis))
        success = false;
      if (!input_data_view.ReadExcludedLegacySpkis(&p_excluded_legacy_spkis))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 24, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCTPolicy(
std::move(p_required_hosts), 
std::move(p_excluded_hosts), 
std::move(p_excluded_spkis), 
std::move(p_excluded_legacy_spkis));
      return true;
    }
    case internal::kNetworkContext_AddExpectCT_Name: {
      break;
    }
    case internal::kNetworkContext_SetExpectCTTestReport_Name: {
      break;
    }
    case internal::kNetworkContext_GetExpectCTState_Name: {
      break;
    }
    case internal::kNetworkContext_CreateUDPSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateUDPSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateUDPSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateUDPSocket_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::UDPSocketRequest p_request{};
      ::network::mojom::UDPSocketReceiverPtr p_receiver{};
      NetworkContext_CreateUDPSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_receiver =
          input_data_view.TakeReceiver<decltype(p_receiver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 28, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateUDPSocket(
std::move(p_request), 
std::move(p_receiver));
      return true;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
      break;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
      break;
    }
    case internal::kNetworkContext_CreateTCPBoundSocket_Name: {
      break;
    }
    case internal::kNetworkContext_CreateProxyResolvingSocketFactory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateProxyResolvingSocketFactory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateProxyResolvingSocketFactory_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateProxyResolvingSocketFactory_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::ProxyResolvingSocketFactoryRequest p_factory{};
      NetworkContext_CreateProxyResolvingSocketFactory_ParamsDataView input_data_view(params, &serialization_context);
      
      p_factory =
          input_data_view.TakeFactory<decltype(p_factory)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 32, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateProxyResolvingSocketFactory(
std::move(p_factory));
      return true;
    }
    case internal::kNetworkContext_LookUpProxyForURL_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::LookUpProxyForURL",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_LookUpProxyForURL_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_LookUpProxyForURL_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      ::network::mojom::ProxyLookupClientPtr p_proxy_lookup_client{};
      NetworkContext_LookUpProxyForURL_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_proxy_lookup_client =
          input_data_view.TakeProxyLookupClient<decltype(p_proxy_lookup_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 33, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LookUpProxyForURL(
std::move(p_url), 
std::move(p_proxy_lookup_client));
      return true;
    }
    case internal::kNetworkContext_ForceReloadProxyConfig_Name: {
      break;
    }
    case internal::kNetworkContext_ClearBadProxiesCache_Name: {
      break;
    }
    case internal::kNetworkContext_CreateWebSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateWebSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateWebSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateWebSocket_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::WebSocketRequest p_request{};
      int32_t p_process_id{};
      int32_t p_render_frame_id{};
      url::Origin p_origin{};
      uint32_t p_options{};
      ::network::mojom::AuthenticationHandlerPtr p_auth_handler{};
      TrustedHeaderClientPtr p_header_client{};
      NetworkContext_CreateWebSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      p_request =
          input_data_view.TakeRequest<decltype(p_request)>();
      p_process_id = input_data_view.process_id();
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_options = input_data_view.options();
      p_auth_handler =
          input_data_view.TakeAuthHandler<decltype(p_auth_handler)>();
      p_header_client =
          input_data_view.TakeHeaderClient<decltype(p_header_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 36, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateWebSocket(
std::move(p_request), 
std::move(p_process_id), 
std::move(p_render_frame_id), 
std::move(p_origin), 
std::move(p_options), 
std::move(p_auth_handler), 
std::move(p_header_client));
      return true;
    }
    case internal::kNetworkContext_CreateNetLogExporter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateNetLogExporter",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateNetLogExporter_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateNetLogExporter_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::NetLogExporterRequest p_exporter{};
      NetworkContext_CreateNetLogExporter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_exporter =
          input_data_view.TakeExporter<decltype(p_exporter)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 37, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateNetLogExporter(
std::move(p_exporter));
      return true;
    }
    case internal::kNetworkContext_PreconnectSockets_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::PreconnectSockets",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_PreconnectSockets_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_PreconnectSockets_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_num_streams{};
      GURL p_url{};
      int32_t p_load_flags{};
      bool p_privacy_mode_enabled{};
      NetworkContext_PreconnectSockets_ParamsDataView input_data_view(params, &serialization_context);
      
      p_num_streams = input_data_view.num_streams();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      p_load_flags = input_data_view.load_flags();
      p_privacy_mode_enabled = input_data_view.privacy_mode_enabled();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 38, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PreconnectSockets(
std::move(p_num_streams), 
std::move(p_url), 
std::move(p_load_flags), 
std::move(p_privacy_mode_enabled));
      return true;
    }
    case internal::kNetworkContext_CreateP2PSocketManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateP2PSocketManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateP2PSocketManager_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateP2PSocketManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::P2PTrustedSocketManagerClientPtr p_client{};
      ::network::mojom::P2PTrustedSocketManagerRequest p_trusted_socket_manager{};
      ::network::mojom::P2PSocketManagerRequest p_socket_manager{};
      NetworkContext_CreateP2PSocketManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_trusted_socket_manager =
          input_data_view.TakeTrustedSocketManager<decltype(p_trusted_socket_manager)>();
      p_socket_manager =
          input_data_view.TakeSocketManager<decltype(p_socket_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 39, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateP2PSocketManager(
std::move(p_client), 
std::move(p_trusted_socket_manager), 
std::move(p_socket_manager));
      return true;
    }
    case internal::kNetworkContext_CreateMdnsResponder_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateMdnsResponder",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateMdnsResponder_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateMdnsResponder_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::MdnsResponderRequest p_responder_request{};
      NetworkContext_CreateMdnsResponder_ParamsDataView input_data_view(params, &serialization_context);
      
      p_responder_request =
          input_data_view.TakeResponderRequest<decltype(p_responder_request)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 40, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateMdnsResponder(
std::move(p_responder_request));
      return true;
    }
    case internal::kNetworkContext_ResolveHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ResolveHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_ResolveHost_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_ResolveHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostPortPair p_host{};
      ::network::mojom::ResolveHostParametersPtr p_optional_parameters{};
      ::network::mojom::ResolveHostClientPtr p_response_client{};
      NetworkContext_ResolveHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadOptionalParameters(&p_optional_parameters))
        success = false;
      p_response_client =
          input_data_view.TakeResponseClient<decltype(p_response_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 41, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResolveHost(
std::move(p_host), 
std::move(p_optional_parameters), 
std::move(p_response_client));
      return true;
    }
    case internal::kNetworkContext_CreateHostResolver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateHostResolver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_CreateHostResolver_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_CreateHostResolver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<net::DnsConfigOverrides> p_config_overrides{};
      ::network::mojom::HostResolverRequest p_host_resolver{};
      NetworkContext_CreateHostResolver_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadConfigOverrides(&p_config_overrides))
        success = false;
      p_host_resolver =
          input_data_view.TakeHostResolver<decltype(p_host_resolver)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 42, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateHostResolver(
std::move(p_config_overrides), 
std::move(p_host_resolver));
      return true;
    }
    case internal::kNetworkContext_VerifyCertForSignedExchange_Name: {
      break;
    }
    case internal::kNetworkContext_AddHSTS_Name: {
      break;
    }
    case internal::kNetworkContext_IsHSTSActiveForHost_Name: {
      break;
    }
    case internal::kNetworkContext_GetHSTSState_Name: {
      break;
    }
    case internal::kNetworkContext_SetCorsOriginAccessListsForOrigin_Name: {
      break;
    }
    case internal::kNetworkContext_DeleteDynamicDataForHost_Name: {
      break;
    }
    case internal::kNetworkContext_SaveHttpAuthCache_Name: {
      break;
    }
    case internal::kNetworkContext_LoadHttpAuthCache_Name: {
      break;
    }
    case internal::kNetworkContext_LookupBasicAuthCredentials_Name: {
      break;
    }
    case internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name: {
      break;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
      break;
    }
    case internal::kNetworkContext_VerifyCertificateForTesting_Name: {
      break;
    }
    case internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name: {
      break;
    }
    case internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name: {
      break;
    }
    case internal::kNetworkContext_GetOriginPolicyManager_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetOriginPolicyManager",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkContext_GetOriginPolicyManager_Params_Data* params =
          reinterpret_cast<internal::NetworkContext_GetOriginPolicyManager_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::OriginPolicyManagerRequest p_origin_policy_manager{};
      NetworkContext_GetOriginPolicyManager_ParamsDataView input_data_view(params, &serialization_context);
      
      p_origin_policy_manager =
          input_data_view.TakeOriginPolicyManager<decltype(p_origin_policy_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 57, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetOriginPolicyManager(
std::move(p_origin_policy_manager));
      return true;
    }
  }
  return false;
}

// static
bool NetworkContextStubDispatch::AcceptWithResponder(
    NetworkContext* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkContext_SetClient_Name: {
      break;
    }
    case internal::kNetworkContext_CreateURLLoaderFactory_Name: {
      break;
    }
    case internal::kNetworkContext_ResetURLLoaderFactories_Name: {
      break;
    }
    case internal::kNetworkContext_GetCookieManager_Name: {
      break;
    }
    case internal::kNetworkContext_GetRestrictedCookieManager_Name: {
      break;
    }
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkingHistorySince",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearNetworkingHistorySince_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearNetworkingHistorySince_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      NetworkContext_ClearNetworkingHistorySince_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 5, false);
        return false;
      }
      NetworkContext::ClearNetworkingHistorySinceCallback callback =
          NetworkContext_ClearNetworkingHistorySince_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearNetworkingHistorySince(
std::move(p_start_time), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearHttpCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearHttpCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      base::Time p_end_time{};
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearHttpCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!input_data_view.ReadEndTime(&p_end_time))
        success = false;
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 6, false);
        return false;
      }
      NetworkContext::ClearHttpCacheCallback callback =
          NetworkContext_ClearHttpCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearHttpCache(
std::move(p_start_time), 
std::move(p_end_time), 
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ComputeHttpCacheSize_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ComputeHttpCacheSize",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ComputeHttpCacheSize_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ComputeHttpCacheSize_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      base::Time p_end_time{};
      NetworkContext_ComputeHttpCacheSize_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!input_data_view.ReadEndTime(&p_end_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 7, false);
        return false;
      }
      NetworkContext::ComputeHttpCacheSizeCallback callback =
          NetworkContext_ComputeHttpCacheSize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ComputeHttpCacheSize(
std::move(p_start_time), 
std::move(p_end_time), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_NotifyExternalCacheHit_Name: {
      break;
    }
    case internal::kNetworkContext_WriteCacheMetadata_Name: {
      break;
    }
    case internal::kNetworkContext_ClearHostCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHostCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearHostCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearHostCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearHostCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 10, false);
        return false;
      }
      NetworkContext::ClearHostCacheCallback callback =
          NetworkContext_ClearHostCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearHostCache(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearHttpAuthCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearHttpAuthCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearHttpAuthCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Time p_start_time{};
      NetworkContext_ClearHttpAuthCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadStartTime(&p_start_time))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 11, false);
        return false;
      }
      NetworkContext::ClearHttpAuthCacheCallback callback =
          NetworkContext_ClearHttpAuthCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearHttpAuthCache(
std::move(p_start_time), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheReports",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearReportingCacheReports_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearReportingCacheReports_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearReportingCacheReports_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 12, false);
        return false;
      }
      NetworkContext::ClearReportingCacheReportsCallback callback =
          NetworkContext_ClearReportingCacheReports_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearReportingCacheReports(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearReportingCacheClients",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearReportingCacheClients_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearReportingCacheClients_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearReportingCacheClients_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 13, false);
        return false;
      }
      NetworkContext::ClearReportingCacheClientsCallback callback =
          NetworkContext_ClearReportingCacheClients_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearReportingCacheClients(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearNetworkErrorLogging",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearNetworkErrorLogging_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearNetworkErrorLogging_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext_ClearNetworkErrorLogging_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 14, false);
        return false;
      }
      NetworkContext::ClearNetworkErrorLoggingCallback callback =
          NetworkContext_ClearNetworkErrorLogging_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearNetworkErrorLogging(
std::move(p_filter), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearDomainReliability_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearDomainReliability",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearDomainReliability_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearDomainReliability_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClearDataFilterPtr p_filter{};
      NetworkContext::DomainReliabilityClearMode p_mode{};
      NetworkContext_ClearDomainReliability_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFilter(&p_filter))
        success = false;
      if (!input_data_view.ReadMode(&p_mode))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 15, false);
        return false;
      }
      NetworkContext::ClearDomainReliabilityCallback callback =
          NetworkContext_ClearDomainReliability_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearDomainReliability(
std::move(p_filter), 
std::move(p_mode), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_GetDomainReliabilityJSON_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetDomainReliabilityJSON",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_GetDomainReliabilityJSON_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_GetDomainReliabilityJSON_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_GetDomainReliabilityJSON_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 16, false);
        return false;
      }
      NetworkContext::GetDomainReliabilityJSONCallback callback =
          NetworkContext_GetDomainReliabilityJSON_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetDomainReliabilityJSON(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_QueueReport_Name: {
      break;
    }
    case internal::kNetworkContext_QueueSignedExchangeReport_Name: {
      break;
    }
    case internal::kNetworkContext_CloseAllConnections_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CloseAllConnections",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_CloseAllConnections_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CloseAllConnections_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_CloseAllConnections_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 19, false);
        return false;
      }
      NetworkContext::CloseAllConnectionsCallback callback =
          NetworkContext_CloseAllConnections_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseAllConnections(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CloseIdleConnections_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CloseIdleConnections",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_CloseIdleConnections_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CloseIdleConnections_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_CloseIdleConnections_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 20, false);
        return false;
      }
      NetworkContext::CloseIdleConnectionsCallback callback =
          NetworkContext_CloseIdleConnections_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CloseIdleConnections(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SetNetworkConditions_Name: {
      break;
    }
    case internal::kNetworkContext_SetAcceptLanguage_Name: {
      break;
    }
    case internal::kNetworkContext_SetEnableReferrers_Name: {
      break;
    }
    case internal::kNetworkContext_SetCTPolicy_Name: {
      break;
    }
    case internal::kNetworkContext_AddExpectCT_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::AddExpectCT",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_AddExpectCT_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_AddExpectCT_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_host{};
      base::Time p_expiry{};
      bool p_enforce{};
      GURL p_report_uri{};
      NetworkContext_AddExpectCT_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadExpiry(&p_expiry))
        success = false;
      p_enforce = input_data_view.enforce();
      if (!input_data_view.ReadReportUri(&p_report_uri))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 25, false);
        return false;
      }
      NetworkContext::AddExpectCTCallback callback =
          NetworkContext_AddExpectCT_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddExpectCT(
std::move(p_host), 
std::move(p_expiry), 
std::move(p_enforce), 
std::move(p_report_uri), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SetExpectCTTestReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetExpectCTTestReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_SetExpectCTTestReport_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_SetExpectCTTestReport_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_report_uri{};
      NetworkContext_SetExpectCTTestReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadReportUri(&p_report_uri))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 26, false);
        return false;
      }
      NetworkContext::SetExpectCTTestReportCallback callback =
          NetworkContext_SetExpectCTTestReport_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetExpectCTTestReport(
std::move(p_report_uri), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_GetExpectCTState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetExpectCTState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_GetExpectCTState_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_GetExpectCTState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_domain{};
      NetworkContext_GetExpectCTState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDomain(&p_domain))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 27, false);
        return false;
      }
      NetworkContext::GetExpectCTStateCallback callback =
          NetworkContext_GetExpectCTState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetExpectCTState(
std::move(p_domain), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateUDPSocket_Name: {
      break;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPServerSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_CreateTCPServerSocket_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CreateTCPServerSocket_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::IPEndPoint p_local_addr{};
      uint32_t p_backlog{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TCPServerSocketRequest p_socket{};
      NetworkContext_CreateTCPServerSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddr(&p_local_addr))
        success = false;
      p_backlog = input_data_view.backlog();
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 29, false);
        return false;
      }
      NetworkContext::CreateTCPServerSocketCallback callback =
          NetworkContext_CreateTCPServerSocket_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateTCPServerSocket(
std::move(p_local_addr), 
std::move(p_backlog), 
std::move(p_traffic_annotation), 
std::move(p_socket), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPConnectedSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_CreateTCPConnectedSocket_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CreateTCPConnectedSocket_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::Optional<net::IPEndPoint> p_local_addr{};
      net::AddressList p_remote_addr_list{};
      ::network::mojom::TCPConnectedSocketOptionsPtr p_tcp_connected_socket_options{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TCPConnectedSocketRequest p_socket{};
      ::network::mojom::SocketObserverPtr p_observer{};
      NetworkContext_CreateTCPConnectedSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddr(&p_local_addr))
        success = false;
      if (!input_data_view.ReadRemoteAddrList(&p_remote_addr_list))
        success = false;
      if (!input_data_view.ReadTcpConnectedSocketOptions(&p_tcp_connected_socket_options))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 30, false);
        return false;
      }
      NetworkContext::CreateTCPConnectedSocketCallback callback =
          NetworkContext_CreateTCPConnectedSocket_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateTCPConnectedSocket(
std::move(p_local_addr), 
std::move(p_remote_addr_list), 
std::move(p_tcp_connected_socket_options), 
std::move(p_traffic_annotation), 
std::move(p_socket), 
std::move(p_observer), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateTCPBoundSocket_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::CreateTCPBoundSocket",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_CreateTCPBoundSocket_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_CreateTCPBoundSocket_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::IPEndPoint p_local_addr{};
      net::MutableNetworkTrafficAnnotationTag p_traffic_annotation{};
      ::network::mojom::TCPBoundSocketRequest p_socket{};
      NetworkContext_CreateTCPBoundSocket_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadLocalAddr(&p_local_addr))
        success = false;
      if (!input_data_view.ReadTrafficAnnotation(&p_traffic_annotation))
        success = false;
      p_socket =
          input_data_view.TakeSocket<decltype(p_socket)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 31, false);
        return false;
      }
      NetworkContext::CreateTCPBoundSocketCallback callback =
          NetworkContext_CreateTCPBoundSocket_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateTCPBoundSocket(
std::move(p_local_addr), 
std::move(p_traffic_annotation), 
std::move(p_socket), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateProxyResolvingSocketFactory_Name: {
      break;
    }
    case internal::kNetworkContext_LookUpProxyForURL_Name: {
      break;
    }
    case internal::kNetworkContext_ForceReloadProxyConfig_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ForceReloadProxyConfig",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ForceReloadProxyConfig_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ForceReloadProxyConfig_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_ForceReloadProxyConfig_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 34, false);
        return false;
      }
      NetworkContext::ForceReloadProxyConfigCallback callback =
          NetworkContext_ForceReloadProxyConfig_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ForceReloadProxyConfig(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ClearBadProxiesCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ClearBadProxiesCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ClearBadProxiesCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ClearBadProxiesCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_ClearBadProxiesCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 35, false);
        return false;
      }
      NetworkContext::ClearBadProxiesCacheCallback callback =
          NetworkContext_ClearBadProxiesCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearBadProxiesCache(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_CreateWebSocket_Name: {
      break;
    }
    case internal::kNetworkContext_CreateNetLogExporter_Name: {
      break;
    }
    case internal::kNetworkContext_PreconnectSockets_Name: {
      break;
    }
    case internal::kNetworkContext_CreateP2PSocketManager_Name: {
      break;
    }
    case internal::kNetworkContext_CreateMdnsResponder_Name: {
      break;
    }
    case internal::kNetworkContext_ResolveHost_Name: {
      break;
    }
    case internal::kNetworkContext_CreateHostResolver_Name: {
      break;
    }
    case internal::kNetworkContext_VerifyCertForSignedExchange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertForSignedExchange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_VerifyCertForSignedExchange_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_VerifyCertForSignedExchange_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<net::X509Certificate> p_certificate{};
      GURL p_url{};
      std::string p_ocsp_response{};
      std::string p_sct_list{};
      NetworkContext_VerifyCertForSignedExchange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCertificate(&p_certificate))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadOcspResponse(&p_ocsp_response))
        success = false;
      if (!input_data_view.ReadSctList(&p_sct_list))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 43, false);
        return false;
      }
      NetworkContext::VerifyCertForSignedExchangeCallback callback =
          NetworkContext_VerifyCertForSignedExchange_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->VerifyCertForSignedExchange(
std::move(p_certificate), 
std::move(p_url), 
std::move(p_ocsp_response), 
std::move(p_sct_list), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_AddHSTS_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::AddHSTS",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_AddHSTS_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_AddHSTS_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_host{};
      base::Time p_expiry{};
      bool p_include_subdomains{};
      NetworkContext_AddHSTS_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadExpiry(&p_expiry))
        success = false;
      p_include_subdomains = input_data_view.include_subdomains();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 44, false);
        return false;
      }
      NetworkContext::AddHSTSCallback callback =
          NetworkContext_AddHSTS_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddHSTS(
std::move(p_host), 
std::move(p_expiry), 
std::move(p_include_subdomains), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_IsHSTSActiveForHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::IsHSTSActiveForHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_IsHSTSActiveForHost_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_IsHSTSActiveForHost_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_host{};
      NetworkContext_IsHSTSActiveForHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 45, false);
        return false;
      }
      NetworkContext::IsHSTSActiveForHostCallback callback =
          NetworkContext_IsHSTSActiveForHost_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsHSTSActiveForHost(
std::move(p_host), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_GetHSTSState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::GetHSTSState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_GetHSTSState_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_GetHSTSState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_domain{};
      NetworkContext_GetHSTSState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDomain(&p_domain))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 46, false);
        return false;
      }
      NetworkContext::GetHSTSStateCallback callback =
          NetworkContext_GetHSTSState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetHSTSState(
std::move(p_domain), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SetCorsOriginAccessListsForOrigin_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetCorsOriginAccessListsForOrigin",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      url::Origin p_source_origin{};
      std::vector<::network::mojom::CorsOriginPatternPtr> p_allow_patterns{};
      std::vector<::network::mojom::CorsOriginPatternPtr> p_block_patterns{};
      NetworkContext_SetCorsOriginAccessListsForOrigin_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceOrigin(&p_source_origin))
        success = false;
      if (!input_data_view.ReadAllowPatterns(&p_allow_patterns))
        success = false;
      if (!input_data_view.ReadBlockPatterns(&p_block_patterns))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 47, false);
        return false;
      }
      NetworkContext::SetCorsOriginAccessListsForOriginCallback callback =
          NetworkContext_SetCorsOriginAccessListsForOrigin_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCorsOriginAccessListsForOrigin(
std::move(p_source_origin), 
std::move(p_allow_patterns), 
std::move(p_block_patterns), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_DeleteDynamicDataForHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::DeleteDynamicDataForHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_DeleteDynamicDataForHost_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_DeleteDynamicDataForHost_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_host{};
      NetworkContext_DeleteDynamicDataForHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 48, false);
        return false;
      }
      NetworkContext::DeleteDynamicDataForHostCallback callback =
          NetworkContext_DeleteDynamicDataForHost_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteDynamicDataForHost(
std::move(p_host), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SaveHttpAuthCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SaveHttpAuthCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_SaveHttpAuthCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_SaveHttpAuthCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_SaveHttpAuthCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 49, false);
        return false;
      }
      NetworkContext::SaveHttpAuthCacheCallback callback =
          NetworkContext_SaveHttpAuthCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SaveHttpAuthCache(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_LoadHttpAuthCache_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::LoadHttpAuthCache",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_LoadHttpAuthCache_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_LoadHttpAuthCache_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_cache_key{};
      NetworkContext_LoadHttpAuthCache_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCacheKey(&p_cache_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 50, false);
        return false;
      }
      NetworkContext::LoadHttpAuthCacheCallback callback =
          NetworkContext_LoadHttpAuthCache_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LoadHttpAuthCache(
std::move(p_cache_key), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_LookupBasicAuthCredentials_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::LookupBasicAuthCredentials",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_LookupBasicAuthCredentials_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_LookupBasicAuthCredentials_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      NetworkContext_LookupBasicAuthCredentials_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 51, false);
        return false;
      }
      NetworkContext::LookupBasicAuthCredentialsCallback callback =
          NetworkContext_LookupBasicAuthCredentials_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LookupBasicAuthCredentials(
std::move(p_url), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::EnableStaticKeyPinningForTesting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_EnableStaticKeyPinningForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 52, false);
        return false;
      }
      NetworkContext::EnableStaticKeyPinningForTestingCallback callback =
          NetworkContext_EnableStaticKeyPinningForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EnableStaticKeyPinningForTesting(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::SetFailingHttpTransactionForTesting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_rv{};
      NetworkContext_SetFailingHttpTransactionForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      p_rv = input_data_view.rv();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 53, false);
        return false;
      }
      NetworkContext::SetFailingHttpTransactionForTestingCallback callback =
          NetworkContext_SetFailingHttpTransactionForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetFailingHttpTransactionForTesting(
std::move(p_rv), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_VerifyCertificateForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::VerifyCertificateForTesting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_VerifyCertificateForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_VerifyCertificateForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      scoped_refptr<net::X509Certificate> p_certificate{};
      std::string p_hostname{};
      std::string p_ocsp_response{};
      NetworkContext_VerifyCertificateForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCertificate(&p_certificate))
        success = false;
      if (!input_data_view.ReadHostname(&p_hostname))
        success = false;
      if (!input_data_view.ReadOcspResponse(&p_ocsp_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 54, false);
        return false;
      }
      NetworkContext::VerifyCertificateForTestingCallback callback =
          NetworkContext_VerifyCertificateForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->VerifyCertificateForTesting(
std::move(p_certificate), 
std::move(p_hostname), 
std::move(p_ocsp_response), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::AddDomainReliabilityContextForTesting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_origin{};
      GURL p_upload_url{};
      NetworkContext_AddDomainReliabilityContextForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      if (!input_data_view.ReadUploadUrl(&p_upload_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 55, false);
        return false;
      }
      NetworkContext::AddDomainReliabilityContextForTestingCallback callback =
          NetworkContext_AddDomainReliabilityContextForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddDomainReliabilityContextForTesting(
std::move(p_origin), 
std::move(p_upload_url), std::move(callback));
      return true;
    }
    case internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkContext::ForceDomainReliabilityUploadsForTesting",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data* params =
          reinterpret_cast<
              internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkContext_ForceDomainReliabilityUploadsForTesting_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkContext::Name_, 56, false);
        return false;
      }
      NetworkContext::ForceDomainReliabilityUploadsForTestingCallback callback =
          NetworkContext_ForceDomainReliabilityUploadsForTesting_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ForceDomainReliabilityUploadsForTesting(std::move(callback));
      return true;
    }
    case internal::kNetworkContext_GetOriginPolicyManager_Name: {
      break;
    }
  }
  return false;
}

bool NetworkContextRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkContext RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkContext_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateURLLoaderFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateURLLoaderFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ResetURLLoaderFactories_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ResetURLLoaderFactories_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetCookieManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetCookieManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetRestrictedCookieManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetRestrictedCookieManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkingHistorySince_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ComputeHttpCacheSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ComputeHttpCacheSize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_NotifyExternalCacheHit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_NotifyExternalCacheHit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_WriteCacheMetadata_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_WriteCacheMetadata_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHostCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHostCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpAuthCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheReports_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheClients_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkErrorLogging_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearDomainReliability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearDomainReliability_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetDomainReliabilityJSON_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetDomainReliabilityJSON_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_QueueReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_QueueReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_QueueSignedExchangeReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_QueueSignedExchangeReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CloseAllConnections_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CloseAllConnections_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CloseIdleConnections_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CloseIdleConnections_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetNetworkConditions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetNetworkConditions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetAcceptLanguage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetAcceptLanguage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetEnableReferrers_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetEnableReferrers_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetCTPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetCTPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddExpectCT_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddExpectCT_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetExpectCTTestReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetExpectCTTestReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetExpectCTState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetExpectCTState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateUDPSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateUDPSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPServerSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPConnectedSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPBoundSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPBoundSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateProxyResolvingSocketFactory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateProxyResolvingSocketFactory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_LookUpProxyForURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_LookUpProxyForURL_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ForceReloadProxyConfig_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ForceReloadProxyConfig_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearBadProxiesCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearBadProxiesCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateWebSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateWebSocket_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateNetLogExporter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateNetLogExporter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_PreconnectSockets_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_PreconnectSockets_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateP2PSocketManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateP2PSocketManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateMdnsResponder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateMdnsResponder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ResolveHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ResolveHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateHostResolver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateHostResolver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_VerifyCertForSignedExchange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_VerifyCertForSignedExchange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddHSTS_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddHSTS_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_IsHSTSActiveForHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_IsHSTSActiveForHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetHSTSState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetHSTSState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetCorsOriginAccessListsForOrigin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetCorsOriginAccessListsForOrigin_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_DeleteDynamicDataForHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_DeleteDynamicDataForHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SaveHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SaveHttpAuthCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_LoadHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_LoadHttpAuthCache_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_LookupBasicAuthCredentials_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_LookupBasicAuthCredentials_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_EnableStaticKeyPinningForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetFailingHttpTransactionForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_VerifyCertificateForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_VerifyCertificateForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddDomainReliabilityContextForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetOriginPolicyManager_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetOriginPolicyManager_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool NetworkContextResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkContext ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkContext_ClearNetworkingHistorySince_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkingHistorySince_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ComputeHttpCacheSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ComputeHttpCacheSize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHostCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHostCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearHttpAuthCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheReports_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheReports_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearReportingCacheClients_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearReportingCacheClients_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearNetworkErrorLogging_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearNetworkErrorLogging_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearDomainReliability_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearDomainReliability_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetDomainReliabilityJSON_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetDomainReliabilityJSON_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CloseAllConnections_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CloseAllConnections_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CloseIdleConnections_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CloseIdleConnections_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddExpectCT_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddExpectCT_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetExpectCTTestReport_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetExpectCTTestReport_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetExpectCTState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetExpectCTState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPServerSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPServerSocket_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPConnectedSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPConnectedSocket_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_CreateTCPBoundSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_CreateTCPBoundSocket_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ForceReloadProxyConfig_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ForceReloadProxyConfig_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ClearBadProxiesCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ClearBadProxiesCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_VerifyCertForSignedExchange_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_VerifyCertForSignedExchange_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddHSTS_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddHSTS_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_IsHSTSActiveForHost_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_IsHSTSActiveForHost_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_GetHSTSState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_GetHSTSState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetCorsOriginAccessListsForOrigin_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetCorsOriginAccessListsForOrigin_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_DeleteDynamicDataForHost_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_DeleteDynamicDataForHost_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SaveHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SaveHttpAuthCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_LoadHttpAuthCache_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_LoadHttpAuthCache_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_LookupBasicAuthCredentials_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_LookupBasicAuthCredentials_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_EnableStaticKeyPinningForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_EnableStaticKeyPinningForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_SetFailingHttpTransactionForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_SetFailingHttpTransactionForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_VerifyCertificateForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_VerifyCertificateForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_AddDomainReliabilityContextForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_AddDomainReliabilityContextForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkContext_ForceDomainReliabilityUploadsForTesting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkContext_ForceDomainReliabilityUploadsForTesting_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::CustomProxyConfig::DataView, ::network::mojom::CustomProxyConfigPtr>::Read(
    ::network::mojom::CustomProxyConfig::DataView input,
    ::network::mojom::CustomProxyConfigPtr* output) {
  bool success = true;
  ::network::mojom::CustomProxyConfigPtr result(::network::mojom::CustomProxyConfig::New());
  
      if (!input.ReadRules(&result->rules))
        success = false;
      result->should_override_existing_config = input.should_override_existing_config();
      result->allow_non_idempotent_methods = input.allow_non_idempotent_methods();
      result->assume_https_proxies_support_quic = input.assume_https_proxies_support_quic();
      result->can_use_proxy_on_http_url_redirect_cycles = input.can_use_proxy_on_http_url_redirect_cycles();
      if (!input.ReadPreCacheHeaders(&result->pre_cache_headers))
        success = false;
      if (!input.ReadPostCacheHeaders(&result->post_cache_headers))
        success = false;
      if (!input.ReadConnectTunnelHeaders(&result->connect_tunnel_headers))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::NetworkContextParams::DataView, ::network::mojom::NetworkContextParamsPtr>::Read(
    ::network::mojom::NetworkContextParams::DataView input,
    ::network::mojom::NetworkContextParamsPtr* output) {
  bool success = true;
  ::network::mojom::NetworkContextParamsPtr result(::network::mojom::NetworkContextParams::New());
  
      if (!input.ReadContextName(&result->context_name))
        success = false;
      if (!input.ReadUserAgent(&result->user_agent))
        success = false;
      if (!input.ReadAcceptLanguage(&result->accept_language))
        success = false;
      result->enable_brotli = input.enable_brotli();
      if (!input.ReadQuicUserAgentId(&result->quic_user_agent_id))
        success = false;
      result->enable_referrers = input.enable_referrers();
      result->validate_referrer_policy_on_initial_request = input.validate_referrer_policy_on_initial_request();
      result->proxy_resolver_factory =
          input.TakeProxyResolverFactory<decltype(result->proxy_resolver_factory)>();
      if (!input.ReadCookiePath(&result->cookie_path))
        success = false;
      result->enable_encrypted_cookies = input.enable_encrypted_cookies();
      result->restore_old_session_cookies = input.restore_old_session_cookies();
      result->persist_session_cookies = input.persist_session_cookies();
      result->http_cache_enabled = input.http_cache_enabled();
      result->http_cache_max_size = input.http_cache_max_size();
      if (!input.ReadHttpCachePath(&result->http_cache_path))
        success = false;
      if (!input.ReadHttpServerPropertiesPath(&result->http_server_properties_path))
        success = false;
      if (!input.ReadTransportSecurityPersisterPath(&result->transport_security_persister_path))
        success = false;
      result->enable_ftp_url_support = input.enable_ftp_url_support();
      result->enforce_chrome_ct_policy = input.enforce_chrome_ct_policy();
      result->http_09_on_non_default_ports_enabled = input.http_09_on_non_default_ports_enabled();
      result->disable_idle_sockets_close_on_memory_pressure = input.disable_idle_sockets_close_on_memory_pressure();
      if (!input.ReadInitialSslConfig(&result->initial_ssl_config))
        success = false;
      result->ssl_config_client_request =
          input.TakeSslConfigClientRequest<decltype(result->ssl_config_client_request)>();
      if (!input.ReadInitialProxyConfig(&result->initial_proxy_config))
        success = false;
      result->proxy_config_client_request =
          input.TakeProxyConfigClientRequest<decltype(result->proxy_config_client_request)>();
      if (!input.ReadInitialCustomProxyConfig(&result->initial_custom_proxy_config))
        success = false;
      result->custom_proxy_config_client_request =
          input.TakeCustomProxyConfigClientRequest<decltype(result->custom_proxy_config_client_request)>();
      result->proxy_config_poller_client =
          input.TakeProxyConfigPollerClient<decltype(result->proxy_config_poller_client)>();
      result->proxy_error_client =
          input.TakeProxyErrorClient<decltype(result->proxy_error_client)>();
      result->pac_quick_check_enabled = input.pac_quick_check_enabled();
      result->enable_certificate_reporting = input.enable_certificate_reporting();
      result->enable_expect_ct_reporting = input.enable_expect_ct_reporting();
      if (!input.ReadCtLogs(&result->ct_logs))
        success = false;
      if (!input.ReadTrialComparisonCertVerifierParams(&result->trial_comparison_cert_verifier_params))
        success = false;
      if (!input.ReadCookieManagerParams(&result->cookie_manager_params))
        success = false;
      result->enable_domain_reliability = input.enable_domain_reliability();
      if (!input.ReadDomainReliabilityUploadReporter(&result->domain_reliability_upload_reporter))
        success = false;
      result->discard_domain_reliablity_uploads = input.discard_domain_reliablity_uploads();
      if (!input.ReadReportingDeliveryInterval(&result->reporting_delivery_interval))
        success = false;
      result->skip_reporting_send_permission_check = input.skip_reporting_send_permission_check();
      result->primary_network_context = input.primary_network_context();
      if (!input.ReadCorsOriginAccessList(&result->cors_origin_access_list))
        success = false;
      if (!input.ReadCorsExemptHeaderList(&result->cors_exempt_header_list))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::NetworkConditions::DataView, ::network::mojom::NetworkConditionsPtr>::Read(
    ::network::mojom::NetworkConditions::DataView input,
    ::network::mojom::NetworkConditionsPtr* output) {
  bool success = true;
  ::network::mojom::NetworkConditionsPtr result(::network::mojom::NetworkConditions::New());
  
      result->offline = input.offline();
      if (!input.ReadLatency(&result->latency))
        success = false;
      result->download_throughput = input.download_throughput();
      result->upload_throughput = input.upload_throughput();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ClearDataFilter::DataView, ::network::mojom::ClearDataFilterPtr>::Read(
    ::network::mojom::ClearDataFilter::DataView input,
    ::network::mojom::ClearDataFilterPtr* output) {
  bool success = true;
  ::network::mojom::ClearDataFilterPtr result(::network::mojom::ClearDataFilter::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadDomains(&result->domains))
        success = false;
      if (!input.ReadOrigins(&result->origins))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::NetworkUsage::DataView, ::network::mojom::NetworkUsagePtr>::Read(
    ::network::mojom::NetworkUsage::DataView input,
    ::network::mojom::NetworkUsagePtr* output) {
  bool success = true;
  ::network::mojom::NetworkUsagePtr result(::network::mojom::NetworkUsage::New());
  
      result->process_id = input.process_id();
      result->routing_id = input.routing_id();
      result->total_bytes_received = input.total_bytes_received();
      result->total_bytes_sent = input.total_bytes_sent();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::SignedExchangeReport::DataView, ::network::mojom::SignedExchangeReportPtr>::Read(
    ::network::mojom::SignedExchangeReport::DataView input,
    ::network::mojom::SignedExchangeReportPtr* output) {
  bool success = true;
  ::network::mojom::SignedExchangeReportPtr result(::network::mojom::SignedExchangeReport::New());
  
      result->success = input.success();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadOuterUrl(&result->outer_url))
        success = false;
      if (!input.ReadInnerUrl(&result->inner_url))
        success = false;
      if (!input.ReadCertUrl(&result->cert_url))
        success = false;
      if (!input.ReadReferrer(&result->referrer))
        success = false;
      if (!input.ReadServerIpAddress(&result->server_ip_address))
        success = false;
      if (!input.ReadProtocol(&result->protocol))
        success = false;
      if (!input.ReadMethod(&result->method))
        success = false;
      result->status_code = input.status_code();
      if (!input.ReadElapsedTime(&result->elapsed_time))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::URLLoaderFactoryParams::DataView, ::network::mojom::URLLoaderFactoryParamsPtr>::Read(
    ::network::mojom::URLLoaderFactoryParams::DataView input,
    ::network::mojom::URLLoaderFactoryParamsPtr* output) {
  bool success = true;
  ::network::mojom::URLLoaderFactoryParamsPtr result(::network::mojom::URLLoaderFactoryParams::New());
  
      result->process_id = input.process_id();
      if (!input.ReadRequestInitiatorSiteLock(&result->request_initiator_site_lock))
        success = false;
      result->is_corb_enabled = input.is_corb_enabled();
      result->disable_web_security = input.disable_web_security();
      result->header_client =
          input.TakeHeaderClient<decltype(result->header_client)>();
      if (!input.ReadFactoryBoundAllowPatterns(&result->factory_bound_allow_patterns))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif