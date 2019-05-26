// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_FORWARD_H_

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


namespace network {
namespace mojom {

enum class DnsQueryType : int32_t;

enum class DnsConfigOverrides_Tristate : int32_t;

enum class ResolveHostParameters_Source : int32_t;

enum class MdnsListenClient_UpdateType : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_DnsQueryType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::DnsQueryType> {
  using Hash = network_mojom_internal_DnsQueryType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_DnsConfigOverrides_Tristate_DataHashFn;

template <>
struct DefaultHash<::network::mojom::DnsConfigOverrides_Tristate> {
  using Hash = network_mojom_internal_DnsConfigOverrides_Tristate_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_ResolveHostParameters_Source_DataHashFn;

template <>
struct DefaultHash<::network::mojom::ResolveHostParameters_Source> {
  using Hash = network_mojom_internal_ResolveHostParameters_Source_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_MdnsListenClient_UpdateType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::MdnsListenClient_UpdateType> {
  using Hash = network_mojom_internal_MdnsListenClient_UpdateType_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using DnsQueryType = DnsQueryType;  // Alias for definition in the parent namespace.
class DnsHost;
using DnsHostPtr = mojo::StructPtr<DnsHost>;

class DnsOverHttpsServer;
using DnsOverHttpsServerPtr = mojo::InlinedStructPtr<DnsOverHttpsServer>;

class DnsConfigOverrides;
using DnsConfigOverridesPtr = mojo::StructPtr<DnsConfigOverrides>;

class ResolveHostParameters;
using ResolveHostParametersPtr = mojo::StructPtr<ResolveHostParameters>;

class ResolveHostHandle;
using ResolveHostHandlePtr = mojo::InterfacePtr<ResolveHostHandle>;
using ResolveHostHandlePtrInfo = mojo::InterfacePtrInfo<ResolveHostHandle>;
using ThreadSafeResolveHostHandlePtr =
    mojo::ThreadSafeInterfacePtr<ResolveHostHandle>;
using ResolveHostHandleRequest = mojo::InterfaceRequest<ResolveHostHandle>;
using ResolveHostHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<ResolveHostHandle>;
using ThreadSafeResolveHostHandleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ResolveHostHandle>;
using ResolveHostHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ResolveHostHandle>;
using ResolveHostHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ResolveHostHandle>;

class ResolveHostClient;
using ResolveHostClientPtr = mojo::InterfacePtr<ResolveHostClient>;
using ResolveHostClientPtrInfo = mojo::InterfacePtrInfo<ResolveHostClient>;
using ThreadSafeResolveHostClientPtr =
    mojo::ThreadSafeInterfacePtr<ResolveHostClient>;
using ResolveHostClientRequest = mojo::InterfaceRequest<ResolveHostClient>;
using ResolveHostClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ResolveHostClient>;
using ThreadSafeResolveHostClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ResolveHostClient>;
using ResolveHostClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ResolveHostClient>;
using ResolveHostClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ResolveHostClient>;

class MdnsListenClient;
using MdnsListenClientPtr = mojo::InterfacePtr<MdnsListenClient>;
using MdnsListenClientPtrInfo = mojo::InterfacePtrInfo<MdnsListenClient>;
using ThreadSafeMdnsListenClientPtr =
    mojo::ThreadSafeInterfacePtr<MdnsListenClient>;
using MdnsListenClientRequest = mojo::InterfaceRequest<MdnsListenClient>;
using MdnsListenClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<MdnsListenClient>;
using ThreadSafeMdnsListenClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MdnsListenClient>;
using MdnsListenClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MdnsListenClient>;
using MdnsListenClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MdnsListenClient>;

class HostResolver;
using HostResolverPtr = mojo::InterfacePtr<HostResolver>;
using HostResolverPtrInfo = mojo::InterfacePtrInfo<HostResolver>;
using ThreadSafeHostResolverPtr =
    mojo::ThreadSafeInterfacePtr<HostResolver>;
using HostResolverRequest = mojo::InterfaceRequest<HostResolver>;
using HostResolverAssociatedPtr =
    mojo::AssociatedInterfacePtr<HostResolver>;
using ThreadSafeHostResolverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HostResolver>;
using HostResolverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HostResolver>;
using HostResolverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HostResolver>;

class DnsConfigChangeManagerClient;
using DnsConfigChangeManagerClientPtr = mojo::InterfacePtr<DnsConfigChangeManagerClient>;
using DnsConfigChangeManagerClientPtrInfo = mojo::InterfacePtrInfo<DnsConfigChangeManagerClient>;
using ThreadSafeDnsConfigChangeManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<DnsConfigChangeManagerClient>;
using DnsConfigChangeManagerClientRequest = mojo::InterfaceRequest<DnsConfigChangeManagerClient>;
using DnsConfigChangeManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DnsConfigChangeManagerClient>;
using ThreadSafeDnsConfigChangeManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DnsConfigChangeManagerClient>;
using DnsConfigChangeManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DnsConfigChangeManagerClient>;
using DnsConfigChangeManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DnsConfigChangeManagerClient>;

class DnsConfigChangeManager;
using DnsConfigChangeManagerPtr = mojo::InterfacePtr<DnsConfigChangeManager>;
using DnsConfigChangeManagerPtrInfo = mojo::InterfacePtrInfo<DnsConfigChangeManager>;
using ThreadSafeDnsConfigChangeManagerPtr =
    mojo::ThreadSafeInterfacePtr<DnsConfigChangeManager>;
using DnsConfigChangeManagerRequest = mojo::InterfaceRequest<DnsConfigChangeManager>;
using DnsConfigChangeManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DnsConfigChangeManager>;
using ThreadSafeDnsConfigChangeManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DnsConfigChangeManager>;
using DnsConfigChangeManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DnsConfigChangeManager>;
using DnsConfigChangeManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DnsConfigChangeManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_FORWARD_H_