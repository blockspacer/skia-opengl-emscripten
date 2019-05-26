// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_FORWARD_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_FORWARD_H_

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




namespace proxy_resolver {
namespace mojom {
class ProxyServerDataView;

class ProxyInfoDataView;


enum class HostResolveOperation : int32_t;

enum class ProxyScheme : int32_t;

extern const char kProxyResolverServiceName[];
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




}  // namespace mojom
}  // namespace proxy_resolver
#include "net/base/proxy_server.h"
#include "net/proxy_resolution/proxy_info.h"
#include "net/proxy_resolution/proxy_resolve_dns_operation.h"

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_FORWARD_H_