// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_FORWARD_H_

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
#include "base/component_export.h"


namespace service_manager {
namespace mojom {

enum class ConnectResult : int32_t;

enum class BindInterfacePriority : int32_t;
}  // namespace service_manager
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct service_manager_mojom_internal_ConnectResult_DataHashFn;

template <>
struct DefaultHash<::service_manager::mojom::ConnectResult> {
  using Hash = service_manager_mojom_internal_ConnectResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct service_manager_mojom_internal_BindInterfacePriority_DataHashFn;

template <>
struct DefaultHash<::service_manager::mojom::BindInterfacePriority> {
  using Hash = service_manager_mojom_internal_BindInterfacePriority_DataHashFn;
};
}  // namespace WTF


namespace service_manager {
namespace mojom {
namespace blink {
using ConnectResult = ConnectResult;  // Alias for definition in the parent namespace.
using BindInterfacePriority = BindInterfacePriority;  // Alias for definition in the parent namespace.
class Identity;
using IdentityPtr = mojo::StructPtr<Identity>;

class ServiceInfo;
using ServiceInfoPtr = mojo::InlinedStructPtr<ServiceInfo>;

class ProcessMetadata;
using ProcessMetadataPtr = mojo::InterfacePtr<ProcessMetadata>;
using ProcessMetadataPtrInfo = mojo::InterfacePtrInfo<ProcessMetadata>;
using ThreadSafeProcessMetadataPtr =
    mojo::ThreadSafeInterfacePtr<ProcessMetadata>;
using ProcessMetadataRequest = mojo::InterfaceRequest<ProcessMetadata>;
using ProcessMetadataAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProcessMetadata>;
using ThreadSafeProcessMetadataAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProcessMetadata>;
using ProcessMetadataAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProcessMetadata>;
using ProcessMetadataAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProcessMetadata>;

class Connector;
using ConnectorPtr = mojo::InterfacePtr<Connector>;
using ConnectorPtrInfo = mojo::InterfacePtrInfo<Connector>;
using ThreadSafeConnectorPtr =
    mojo::ThreadSafeInterfacePtr<Connector>;
using ConnectorRequest = mojo::InterfaceRequest<Connector>;
using ConnectorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Connector>;
using ThreadSafeConnectorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Connector>;
using ConnectorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Connector>;
using ConnectorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Connector>;




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_FORWARD_H_