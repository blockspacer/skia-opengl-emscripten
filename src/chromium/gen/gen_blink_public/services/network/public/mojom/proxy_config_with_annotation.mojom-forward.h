// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_FORWARD_H_

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
class ProxyConfigWithAnnotationDataView;

class ProxyConfigWithAnnotation;
using ProxyConfigWithAnnotationPtr = mojo::StructPtr<ProxyConfigWithAnnotation>;

class ProxyConfigClient;
using ProxyConfigClientPtr = mojo::InterfacePtr<ProxyConfigClient>;
using ProxyConfigClientPtrInfo = mojo::InterfacePtrInfo<ProxyConfigClient>;
using ThreadSafeProxyConfigClientPtr =
    mojo::ThreadSafeInterfacePtr<ProxyConfigClient>;
using ProxyConfigClientRequest = mojo::InterfaceRequest<ProxyConfigClient>;
using ProxyConfigClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyConfigClient>;
using ThreadSafeProxyConfigClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyConfigClient>;
using ProxyConfigClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyConfigClient>;
using ProxyConfigClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyConfigClient>;

class ProxyConfigPollerClient;
using ProxyConfigPollerClientPtr = mojo::InterfacePtr<ProxyConfigPollerClient>;
using ProxyConfigPollerClientPtrInfo = mojo::InterfacePtrInfo<ProxyConfigPollerClient>;
using ThreadSafeProxyConfigPollerClientPtr =
    mojo::ThreadSafeInterfacePtr<ProxyConfigPollerClient>;
using ProxyConfigPollerClientRequest = mojo::InterfaceRequest<ProxyConfigPollerClient>;
using ProxyConfigPollerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyConfigPollerClient>;
using ThreadSafeProxyConfigPollerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyConfigPollerClient>;
using ProxyConfigPollerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyConfigPollerClient>;
using ProxyConfigPollerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyConfigPollerClient>;

class ProxyErrorClient;
using ProxyErrorClientPtr = mojo::InterfacePtr<ProxyErrorClient>;
using ProxyErrorClientPtrInfo = mojo::InterfacePtrInfo<ProxyErrorClient>;
using ThreadSafeProxyErrorClientPtr =
    mojo::ThreadSafeInterfacePtr<ProxyErrorClient>;
using ProxyErrorClientRequest = mojo::InterfaceRequest<ProxyErrorClient>;
using ProxyErrorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyErrorClient>;
using ThreadSafeProxyErrorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProxyErrorClient>;
using ProxyErrorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyErrorClient>;
using ProxyErrorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProxyErrorClient>;




}  // namespace mojom
}  // namespace network
#include "net/proxy_resolution/proxy_config_with_annotation.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_FORWARD_H_