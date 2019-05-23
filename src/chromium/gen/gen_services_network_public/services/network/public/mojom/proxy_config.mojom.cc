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

#include "services/network/public/mojom/proxy_config.mojom.h"

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

#include "services/network/public/mojom/proxy_config.mojom-params-data.h"
#include "services/network/public/mojom/proxy_config.mojom-shared-message-ids.h"

#include "services/network/public/mojom/proxy_config.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "services/network/public/cpp/proxy_config_mojom_traits.h"
#endif
namespace network {
namespace mojom {
ProxyBypassRules::ProxyBypassRules()
    : rules() {}

ProxyBypassRules::ProxyBypassRules(
    const std::vector<std::string>& rules_in)
    : rules(std::move(rules_in)) {}

ProxyBypassRules::~ProxyBypassRules() = default;

bool ProxyBypassRules::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProxyList::ProxyList()
    : proxies() {}

ProxyList::ProxyList(
    const std::vector<std::string>& proxies_in)
    : proxies(std::move(proxies_in)) {}

ProxyList::~ProxyList() = default;

bool ProxyList::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProxyRules::ProxyRules()
    : bypass_rules(),
      reverse_bypass(),
      type(),
      single_proxies(),
      proxies_for_http(),
      proxies_for_https(),
      proxies_for_ftp(),
      fallback_proxies() {}

ProxyRules::ProxyRules(
    const net::ProxyBypassRules& bypass_rules_in,
    bool reverse_bypass_in,
    net::ProxyConfig::ProxyRules::Type type_in,
    const net::ProxyList& single_proxies_in,
    const net::ProxyList& proxies_for_http_in,
    const net::ProxyList& proxies_for_https_in,
    const net::ProxyList& proxies_for_ftp_in,
    const net::ProxyList& fallback_proxies_in)
    : bypass_rules(std::move(bypass_rules_in)),
      reverse_bypass(std::move(reverse_bypass_in)),
      type(std::move(type_in)),
      single_proxies(std::move(single_proxies_in)),
      proxies_for_http(std::move(proxies_for_http_in)),
      proxies_for_https(std::move(proxies_for_https_in)),
      proxies_for_ftp(std::move(proxies_for_ftp_in)),
      fallback_proxies(std::move(fallback_proxies_in)) {}

ProxyRules::~ProxyRules() = default;

bool ProxyRules::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ProxyConfig::ProxyConfig()
    : auto_detect(),
      pac_url(),
      pac_mandatory(),
      proxy_rules() {}

ProxyConfig::ProxyConfig(
    bool auto_detect_in,
    const std::string& pac_url_in,
    bool pac_mandatory_in,
    const net::ProxyConfig::ProxyRules& proxy_rules_in)
    : auto_detect(std::move(auto_detect_in)),
      pac_url(std::move(pac_url_in)),
      pac_mandatory(std::move(pac_mandatory_in)),
      proxy_rules(std::move(proxy_rules_in)) {}

ProxyConfig::~ProxyConfig() = default;

bool ProxyConfig::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::ProxyBypassRules::DataView, ::network::mojom::ProxyBypassRulesPtr>::Read(
    ::network::mojom::ProxyBypassRules::DataView input,
    ::network::mojom::ProxyBypassRulesPtr* output) {
  bool success = true;
  ::network::mojom::ProxyBypassRulesPtr result(::network::mojom::ProxyBypassRules::New());
  
      if (!input.ReadRules(&result->rules))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ProxyList::DataView, ::network::mojom::ProxyListPtr>::Read(
    ::network::mojom::ProxyList::DataView input,
    ::network::mojom::ProxyListPtr* output) {
  bool success = true;
  ::network::mojom::ProxyListPtr result(::network::mojom::ProxyList::New());
  
      if (!input.ReadProxies(&result->proxies))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ProxyRules::DataView, ::network::mojom::ProxyRulesPtr>::Read(
    ::network::mojom::ProxyRules::DataView input,
    ::network::mojom::ProxyRulesPtr* output) {
  bool success = true;
  ::network::mojom::ProxyRulesPtr result(::network::mojom::ProxyRules::New());
  
      if (!input.ReadBypassRules(&result->bypass_rules))
        success = false;
      result->reverse_bypass = input.reverse_bypass();
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadSingleProxies(&result->single_proxies))
        success = false;
      if (!input.ReadProxiesForHttp(&result->proxies_for_http))
        success = false;
      if (!input.ReadProxiesForHttps(&result->proxies_for_https))
        success = false;
      if (!input.ReadProxiesForFtp(&result->proxies_for_ftp))
        success = false;
      if (!input.ReadFallbackProxies(&result->fallback_proxies))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ProxyConfig::DataView, ::network::mojom::ProxyConfigPtr>::Read(
    ::network::mojom::ProxyConfig::DataView input,
    ::network::mojom::ProxyConfigPtr* output) {
  bool success = true;
  ::network::mojom::ProxyConfigPtr result(::network::mojom::ProxyConfig::New());
  
      result->auto_detect = input.auto_detect();
      if (!input.ReadPacUrl(&result->pac_url))
        success = false;
      result->pac_mandatory = input.pac_mandatory();
      if (!input.ReadProxyRules(&result->proxy_rules))
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