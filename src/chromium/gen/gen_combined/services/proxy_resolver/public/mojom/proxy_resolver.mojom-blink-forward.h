// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace proxy_resolver {
namespace mojom {

enum class HostResolveOperation : int32_t;

enum class ProxyScheme : int32_t;
}  // namespace proxy_resolver
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct proxy_resolver_mojom_internal_HostResolveOperation_DataHashFn;

template <>
struct DefaultHash<::proxy_resolver::mojom::HostResolveOperation> {
  using Hash = proxy_resolver_mojom_internal_HostResolveOperation_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct proxy_resolver_mojom_internal_ProxyScheme_DataHashFn;

template <>
struct DefaultHash<::proxy_resolver::mojom::ProxyScheme> {
  using Hash = proxy_resolver_mojom_internal_ProxyScheme_DataHashFn;
};
}  // namespace WTF


namespace proxy_resolver {
namespace mojom {
namespace blink {
using HostResolveOperation = HostResolveOperation;  // Alias for definition in the parent namespace.
using ProxyScheme = ProxyScheme;  // Alias for definition in the parent namespace.

BLINK_PLATFORM_EXPORT extern const char kProxyResolverServiceName[];
class ProxyServer;
using ProxyServerPtr = mojo::InlinedStructPtr<ProxyServer>;

class ProxyInfo;
using ProxyInfoPtr = mojo::StructPtr<ProxyInfo>;

class HostResolverRequestClient;
using HostResolverRequestClientPtr = mojo::InterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientPtrInfo = mojo::InterfacePtrInfo<HostResolverRequestClient>;
using ThreadSafeHostResolverRequestClientPtr =
    mojo::ThreadSafeInterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientRequest = mojo::InterfaceRequest<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<HostResolverRequestClient>;
using ThreadSafeHostResolverRequestClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HostResolverRequestClient>;

class ProxyResolver;
using ProxyResolverPtr = mojo::InterfacePtr<ProxyResolver>;
using ProxyResolverPtrInfo = mojo::InterfacePtrInfo<ProxyResolver>;
using ThreadSafeProxyResolverPtr =
    mojo::ThreadSafeInterfacePtr<ProxyResolver>;
using ProxyResolverRequest = mojo::InterfaceRequest<ProxyResolver>;
using ProxyResolverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolver>;
using ThreadSafeProxyResolverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyResolver>;
using ProxyResolverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolver>;
using ProxyResolverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyResolver>;

class ProxyResolverRequestClient;
using ProxyResolverRequestClientPtr = mojo::InterfacePtr<ProxyResolverRequestClient>;
using ProxyResolverRequestClientPtrInfo = mojo::InterfacePtrInfo<ProxyResolverRequestClient>;
using ThreadSafeProxyResolverRequestClientPtr =
    mojo::ThreadSafeInterfacePtr<ProxyResolverRequestClient>;
using ProxyResolverRequestClientRequest = mojo::InterfaceRequest<ProxyResolverRequestClient>;
using ProxyResolverRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolverRequestClient>;
using ThreadSafeProxyResolverRequestClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyResolverRequestClient>;
using ProxyResolverRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolverRequestClient>;
using ProxyResolverRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyResolverRequestClient>;

class ProxyResolverFactory;
using ProxyResolverFactoryPtr = mojo::InterfacePtr<ProxyResolverFactory>;
using ProxyResolverFactoryPtrInfo = mojo::InterfacePtrInfo<ProxyResolverFactory>;
using ThreadSafeProxyResolverFactoryPtr =
    mojo::ThreadSafeInterfacePtr<ProxyResolverFactory>;
using ProxyResolverFactoryRequest = mojo::InterfaceRequest<ProxyResolverFactory>;
using ProxyResolverFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolverFactory>;
using ThreadSafeProxyResolverFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyResolverFactory>;
using ProxyResolverFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolverFactory>;
using ProxyResolverFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyResolverFactory>;

class ProxyResolverFactoryRequestClient;
using ProxyResolverFactoryRequestClientPtr = mojo::InterfacePtr<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientPtrInfo = mojo::InterfacePtrInfo<ProxyResolverFactoryRequestClient>;
using ThreadSafeProxyResolverFactoryRequestClientPtr =
    mojo::ThreadSafeInterfacePtr<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientRequest = mojo::InterfaceRequest<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolverFactoryRequestClient>;
using ThreadSafeProxyResolverFactoryRequestClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyResolverFactoryRequestClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_BLINK_FORWARD_H_