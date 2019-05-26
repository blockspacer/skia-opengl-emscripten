// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class ProxyBypassRulesDataView;

class ProxyListDataView;

class ProxyRulesDataView;

class ProxyConfigDataView;


enum class ProxyRulesType : int32_t;
class ProxyBypassRules;
using ProxyBypassRulesPtr = mojo::StructPtr<ProxyBypassRules>;

class ProxyList;
using ProxyListPtr = mojo::StructPtr<ProxyList>;

class ProxyRules;
using ProxyRulesPtr = mojo::StructPtr<ProxyRules>;

class ProxyConfig;
using ProxyConfigPtr = mojo::StructPtr<ProxyConfig>;




}  // namespace mojom
}  // namespace network
#include "net/proxy_resolution/proxy_bypass_rules.h"
#include "net/proxy_resolution/proxy_config.h"
#include "net/proxy_resolution/proxy_list.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_FORWARD_H_