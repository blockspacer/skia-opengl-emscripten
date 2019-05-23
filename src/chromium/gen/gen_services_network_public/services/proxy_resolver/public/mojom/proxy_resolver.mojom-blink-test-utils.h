// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace proxy_resolver {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT HostResolverRequestClientInterceptorForTesting : public HostResolverRequestClient {
  virtual HostResolverRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error, WTF::Vector<::network::mojom::blink::IPAddressPtr> result) override;
};
class BLINK_PLATFORM_EXPORT HostResolverRequestClientAsyncWaiter {
 public:
  explicit HostResolverRequestClientAsyncWaiter(HostResolverRequestClient* proxy);
  ~HostResolverRequestClientAsyncWaiter();

 private:
  HostResolverRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HostResolverRequestClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyResolverInterceptorForTesting : public ProxyResolver {
  virtual ProxyResolver* GetForwardingInterface() = 0;
  void GetProxyForUrl(const ::blink::KURL& url, ProxyResolverRequestClientPtr client) override;
};
class BLINK_PLATFORM_EXPORT ProxyResolverAsyncWaiter {
 public:
  explicit ProxyResolverAsyncWaiter(ProxyResolver* proxy);
  ~ProxyResolverAsyncWaiter();

 private:
  ProxyResolver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyResolverRequestClientInterceptorForTesting : public ProxyResolverRequestClient {
  virtual ProxyResolverRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error, ProxyInfoPtr proxy_info) override;
  void Alert(const WTF::String& error) override;
  void OnError(int32_t line_number, const WTF::String& error) override;
  void ResolveDns(const WTF::String& host, HostResolveOperation operation, HostResolverRequestClientPtr client) override;
};
class BLINK_PLATFORM_EXPORT ProxyResolverRequestClientAsyncWaiter {
 public:
  explicit ProxyResolverRequestClientAsyncWaiter(ProxyResolverRequestClient* proxy);
  ~ProxyResolverRequestClientAsyncWaiter();

 private:
  ProxyResolverRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverRequestClientAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyResolverFactoryInterceptorForTesting : public ProxyResolverFactory {
  virtual ProxyResolverFactory* GetForwardingInterface() = 0;
  void CreateResolver(const WTF::String& pac_script, ProxyResolverRequest resolver, ProxyResolverFactoryRequestClientPtr client) override;
};
class BLINK_PLATFORM_EXPORT ProxyResolverFactoryAsyncWaiter {
 public:
  explicit ProxyResolverFactoryAsyncWaiter(ProxyResolverFactory* proxy);
  ~ProxyResolverFactoryAsyncWaiter();

 private:
  ProxyResolverFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverFactoryAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT ProxyResolverFactoryRequestClientInterceptorForTesting : public ProxyResolverFactoryRequestClient {
  virtual ProxyResolverFactoryRequestClient* GetForwardingInterface() = 0;
  void ReportResult(int32_t error) override;
  void Alert(const WTF::String& error) override;
  void OnError(int32_t line_number, const WTF::String& error) override;
  void ResolveDns(const WTF::String& host, HostResolveOperation operation, HostResolverRequestClientPtr client) override;
};
class BLINK_PLATFORM_EXPORT ProxyResolverFactoryRequestClientAsyncWaiter {
 public:
  explicit ProxyResolverFactoryRequestClientAsyncWaiter(ProxyResolverFactoryRequestClient* proxy);
  ~ProxyResolverFactoryRequestClientAsyncWaiter();

 private:
  ProxyResolverFactoryRequestClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProxyResolverFactoryRequestClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_TEST_UTILS_H_