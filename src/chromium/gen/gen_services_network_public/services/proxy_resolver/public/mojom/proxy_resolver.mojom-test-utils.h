// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_TEST_UTILS_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_TEST_UTILS_H_

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom.h"


namespace proxy_resolver {
namespace mojom {


class  HostResolverRequestClientInterceptorForTesting : public HostResolverRequestClient {
  virtual HostResolverRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error, const std::vector<net::IPAddress>& result) override;
};
class  HostResolverRequestClientAsyncWaiter {
 public:
  explicit HostResolverRequestClientAsyncWaiter(HostResolverRequestClient* proxy);
  ~HostResolverRequestClientAsyncWaiter();

 private:
  HostResolverRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HostResolverRequestClientAsyncWaiter);
};


class  ProxyResolverInterceptorForTesting : public ProxyResolver {
  virtual ProxyResolver* GetForwardingInterface() = 0;
  void GetProxyForUrl(const GURL& url, ProxyResolverRequestClientPtr client) override;
};
class  ProxyResolverAsyncWaiter {
 public:
  explicit ProxyResolverAsyncWaiter(ProxyResolver* proxy);
  ~ProxyResolverAsyncWaiter();

 private:
  ProxyResolver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverAsyncWaiter);
};


class  ProxyResolverRequestClientInterceptorForTesting : public ProxyResolverRequestClient {
  virtual ProxyResolverRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error, const net::ProxyInfo& proxy_info) override;
  void Alert(const std::string& error) override;
  void OnError(int32_t line_number, const std::string& error) override;
  void ResolveDns(const std::string& host, net::ProxyResolveDnsOperation operation, HostResolverRequestClientPtr client) override;
};
class  ProxyResolverRequestClientAsyncWaiter {
 public:
  explicit ProxyResolverRequestClientAsyncWaiter(ProxyResolverRequestClient* proxy);
  ~ProxyResolverRequestClientAsyncWaiter();

 private:
  ProxyResolverRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverRequestClientAsyncWaiter);
};


class  ProxyResolverFactoryInterceptorForTesting : public ProxyResolverFactory {
  virtual ProxyResolverFactory* GetForwardingInterface() = 0;
  void CreateResolver(const std::string& pac_script, ProxyResolverRequest resolver, ProxyResolverFactoryRequestClientPtr client) override;
};
class  ProxyResolverFactoryAsyncWaiter {
 public:
  explicit ProxyResolverFactoryAsyncWaiter(ProxyResolverFactory* proxy);
  ~ProxyResolverFactoryAsyncWaiter();

 private:
  ProxyResolverFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverFactoryAsyncWaiter);
};


class  ProxyResolverFactoryRequestClientInterceptorForTesting : public ProxyResolverFactoryRequestClient {
  virtual ProxyResolverFactoryRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error) override;
  void Alert(const std::string& error) override;
  void OnError(int32_t line_number, const std::string& error) override;
  void ResolveDns(const std::string& host, net::ProxyResolveDnsOperation operation, HostResolverRequestClientPtr client) override;
};
class  ProxyResolverFactoryRequestClientAsyncWaiter {
 public:
  explicit ProxyResolverFactoryRequestClientAsyncWaiter(ProxyResolverFactoryRequestClient* proxy);
  ~ProxyResolverFactoryRequestClientAsyncWaiter();

 private:
  ProxyResolverFactoryRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverFactoryRequestClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_TEST_UTILS_H_