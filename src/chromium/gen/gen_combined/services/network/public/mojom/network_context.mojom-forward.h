// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_FORWARD_H_

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




namespace network {
namespace mojom {
class CustomProxyConfigDataView;

class NetworkContextParamsDataView;

class NetworkConditionsDataView;

class ClearDataFilterDataView;

class NetworkUsageDataView;

class SignedExchangeReportDataView;

class URLLoaderFactoryParamsDataView;


enum class ClearDataFilter_Type : int32_t;

enum class NetworkContext_DomainReliabilityClearMode : int32_t;

constexpr uint32_t kWebSocketOptionNone = 0U;

constexpr uint32_t kWebSocketOptionBlockAllCookies = 1U;

constexpr uint32_t kWebSocketOptionBlockThirdPartyCookies = 2U;

constexpr uint32_t kBrowserProcessId = 0U;

constexpr uint32_t kInvalidProcessId = 0xffffffffU;
class CustomProxyConfig;
using CustomProxyConfigPtr = mojo::StructPtr<CustomProxyConfig>;

class NetworkContextParams;
using NetworkContextParamsPtr = mojo::StructPtr<NetworkContextParams>;

class NetworkConditions;
using NetworkConditionsPtr = mojo::StructPtr<NetworkConditions>;

class ClearDataFilter;
using ClearDataFilterPtr = mojo::StructPtr<ClearDataFilter>;

class NetworkUsage;
using NetworkUsagePtr = mojo::InlinedStructPtr<NetworkUsage>;

class SignedExchangeReport;
using SignedExchangeReportPtr = mojo::StructPtr<SignedExchangeReport>;

class URLLoaderFactoryParams;
using URLLoaderFactoryParamsPtr = mojo::StructPtr<URLLoaderFactoryParams>;

class CustomProxyConfigClient;
using CustomProxyConfigClientPtr = mojo::InterfacePtr<CustomProxyConfigClient>;
using CustomProxyConfigClientPtrInfo = mojo::InterfacePtrInfo<CustomProxyConfigClient>;
using ThreadSafeCustomProxyConfigClientPtr =
    mojo::ThreadSafeInterfacePtr<CustomProxyConfigClient>;
using CustomProxyConfigClientRequest = mojo::InterfaceRequest<CustomProxyConfigClient>;
using CustomProxyConfigClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<CustomProxyConfigClient>;
using ThreadSafeCustomProxyConfigClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CustomProxyConfigClient>;
using CustomProxyConfigClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CustomProxyConfigClient>;
using CustomProxyConfigClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CustomProxyConfigClient>;

class TrustedHeaderClient;
using TrustedHeaderClientPtr = mojo::InterfacePtr<TrustedHeaderClient>;
using TrustedHeaderClientPtrInfo = mojo::InterfacePtrInfo<TrustedHeaderClient>;
using ThreadSafeTrustedHeaderClientPtr =
    mojo::ThreadSafeInterfacePtr<TrustedHeaderClient>;
using TrustedHeaderClientRequest = mojo::InterfaceRequest<TrustedHeaderClient>;
using TrustedHeaderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TrustedHeaderClient>;
using ThreadSafeTrustedHeaderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TrustedHeaderClient>;
using TrustedHeaderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TrustedHeaderClient>;
using TrustedHeaderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TrustedHeaderClient>;

class TrustedURLLoaderHeaderClient;
using TrustedURLLoaderHeaderClientPtr = mojo::InterfacePtr<TrustedURLLoaderHeaderClient>;
using TrustedURLLoaderHeaderClientPtrInfo = mojo::InterfacePtrInfo<TrustedURLLoaderHeaderClient>;
using ThreadSafeTrustedURLLoaderHeaderClientPtr =
    mojo::ThreadSafeInterfacePtr<TrustedURLLoaderHeaderClient>;
using TrustedURLLoaderHeaderClientRequest = mojo::InterfaceRequest<TrustedURLLoaderHeaderClient>;
using TrustedURLLoaderHeaderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TrustedURLLoaderHeaderClient>;
using ThreadSafeTrustedURLLoaderHeaderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TrustedURLLoaderHeaderClient>;
using TrustedURLLoaderHeaderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TrustedURLLoaderHeaderClient>;
using TrustedURLLoaderHeaderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TrustedURLLoaderHeaderClient>;

class NetworkContextClient;
using NetworkContextClientPtr = mojo::InterfacePtr<NetworkContextClient>;
using NetworkContextClientPtrInfo = mojo::InterfacePtrInfo<NetworkContextClient>;
using ThreadSafeNetworkContextClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkContextClient>;
using NetworkContextClientRequest = mojo::InterfaceRequest<NetworkContextClient>;
using NetworkContextClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkContextClient>;
using ThreadSafeNetworkContextClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkContextClient>;
using NetworkContextClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkContextClient>;
using NetworkContextClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkContextClient>;

class NetworkContext;
using NetworkContextPtr = mojo::InterfacePtr<NetworkContext>;
using NetworkContextPtrInfo = mojo::InterfacePtrInfo<NetworkContext>;
using ThreadSafeNetworkContextPtr =
    mojo::ThreadSafeInterfacePtr<NetworkContext>;
using NetworkContextRequest = mojo::InterfaceRequest<NetworkContext>;
using NetworkContextAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkContext>;
using ThreadSafeNetworkContextAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkContext>;
using NetworkContextAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkContext>;
using NetworkContextAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkContext>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_CONTEXT_MOJOM_FORWARD_H_