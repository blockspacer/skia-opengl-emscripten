// Copyright 2015 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/network/url_request_context.h"

#include <memory>
#include <string>

#include "cobalt/network/job_factory_config.h"
#include "cobalt/network/network_delegate.h"
#include "cobalt/network/persistent_cookie_store.h"
#include "cobalt/network/proxy_config_service.h"
#include "net/cert/cert_net_fetcher.h"
#include "net/cert/cert_verify_proc.h"
#include "net/cert/ct_policy_enforcer.h"
#include "net/cert/do_nothing_ct_verifier.h"
#include "net/cert/multi_threaded_cert_verifier.h"
#include "net/cert_net/cert_net_fetcher_impl.h"
#include "net/dns/host_cache.h"
#include "net/http/http_auth_handler_factory.h"
#include "net/http/http_cache.h"
#include "net/http/http_network_layer.h"
#include "net/http/http_server_properties_impl.h"
#include "net/http/http_transaction_factory.h"
#include "net/proxy_resolution/proxy_config.h"
#include "net/proxy_resolution/proxy_resolution_service.h"
#include "net/ssl/ssl_config_service.h"
#include "net/ssl/ssl_config_service_defaults.h"
#include "net/url_request/data_protocol_handler.h"
#include "net/url_request/url_request_job_factory_impl.h"

namespace cobalt {
namespace network {
namespace {
net::ProxyConfig CreateCustomProxyConfig(const std::string& proxy_rules) {
  net::ProxyConfig proxy_config = net::ProxyConfig::CreateDirect();
  proxy_config.proxy_rules().ParseFromString(proxy_rules);
  return proxy_config;
}
}  // namespace

URLRequestContext::URLRequestContext(
    storage::StorageManager* storage_manager, const std::string& custom_proxy,
    net::NetLog* net_log, bool ignore_certificate_errors,
    scoped_refptr<base::SingleThreadTaskRunner> network_task_runner)
    : ALLOW_THIS_IN_INITIALIZER_LIST(storage_(this)) {
  if (storage_manager) {
    persistent_cookie_store_ =
        new PersistentCookieStore(storage_manager, network_task_runner);
  }
  storage_.set_cookie_store(
      std::unique_ptr<net::CookieStore>(new net::CookieMonster(
          persistent_cookie_store_, NULL /* channel_id_service */, net_log)));

  base::Optional<net::ProxyConfig> proxy_config;
  if (!custom_proxy.empty()) {
    proxy_config = CreateCustomProxyConfig(custom_proxy);
  }

  storage_.set_proxy_resolution_service(
      net::ProxyResolutionService::CreateUsingSystemProxyResolver(
          std::unique_ptr<net::ProxyConfigService>(
              new ProxyConfigService(proxy_config)),
          net_log));

  net::HostResolver::Options options;
  options.max_concurrent_resolves = net::HostResolver::kDefaultParallelism;
  options.max_retry_attempts = net::HostResolver::kDefaultRetryAttempts;
  options.enable_caching = true;
  storage_.set_host_resolver(
      net::HostResolver::CreateSystemResolver(options, NULL));

  storage_.set_ct_policy_enforcer(std::unique_ptr<net::CTPolicyEnforcer>(
      new net::DefaultCTPolicyEnforcer()));
  DCHECK(ct_policy_enforcer());
  storage_.set_cert_verifier(std::make_unique<net::MultiThreadedCertVerifier>(
      net::CertVerifyProc::CreateDefault()));
  storage_.set_transport_security_state(
      std::make_unique<net::TransportSecurityState>());
  // TODO[johnx]: Investigate if we want the cert transparency verifier.
  storage_.set_cert_transparency_verifier(
      std::make_unique<net::DoNothingCTVerifier>());
  storage_.set_ssl_config_service(
      std::make_unique<net::SSLConfigServiceDefaults>());

  storage_.set_http_auth_handler_factory(
      net::HttpAuthHandlerFactory::CreateDefault(host_resolver()));
  storage_.set_http_server_properties(
      std::make_unique<net::HttpServerPropertiesImpl>());

  net::HttpNetworkSession::Params params;
#if defined(ENABLE_IGNORE_CERTIFICATE_ERRORS)
  params.ignore_certificate_errors = ignore_certificate_errors;
#else
  SB_UNREFERENCED_PARAMETER(ignore_certificate_errors);
#endif  // defined(ENABLE_IGNORE_CERTIFICATE_ERRORS)

  net::HttpNetworkSession::Context context;
  context.client_socket_factory = NULL;
  context.host_resolver = host_resolver();
  context.cert_verifier = cert_verifier();
  context.ct_policy_enforcer = ct_policy_enforcer();
  context.channel_id_service = NULL;
  context.transport_security_state = transport_security_state();
  context.cert_transparency_verifier = cert_transparency_verifier();
  context.proxy_resolution_service = proxy_resolution_service();
  context.ssl_config_service = ssl_config_service();
  context.http_auth_handler_factory = http_auth_handler_factory();
  context.http_server_properties = http_server_properties();
#if defined(ENABLE_NETWORK_LOGGING)
  context.net_log = net_log;
  set_net_log(net_log);
#else
  SB_UNREFERENCED_PARAMETER(net_log);
#endif
  context.socket_performance_watcher_factory = NULL;
  context.network_quality_provider = NULL;

  storage_.set_http_network_session(
      std::make_unique<net::HttpNetworkSession>(params, context));
  storage_.set_http_transaction_factory(std::unique_ptr<net::HttpNetworkLayer>(
      new net::HttpNetworkLayer(storage_.http_network_session())));

  auto* job_factory = new net::URLRequestJobFactoryImpl();
  job_factory->SetProtocolHandler(url::kDataScheme,
                                  std::make_unique<net::DataProtocolHandler>());

#if defined(ENABLE_CONFIGURE_REQUEST_JOB_FACTORY)
  ConfigureRequestJobFactory(job_factory);
#endif  // defined(ENABLE_CONFIGURE_REQUEST_JOB_FACTORY)

  storage_.set_job_factory(
      std::unique_ptr<net::URLRequestJobFactory>(job_factory));
  if (!net::GetGlobalCertNetFetcher()) {
    net::SetGlobalCertNetFetcher(net::CreateCertNetFetcher(this));
  }
}

URLRequestContext::~URLRequestContext() {}

void URLRequestContext::SetProxy(const std::string& proxy_rules) {
  net::ProxyConfig proxy_config = CreateCustomProxyConfig(proxy_rules);
  // ProxyService takes ownership of the ProxyConfigService.
  proxy_resolution_service()->ResetConfigService(
      std::make_unique<ProxyConfigService>(proxy_config));
}

}  // namespace network
}  // namespace cobalt
