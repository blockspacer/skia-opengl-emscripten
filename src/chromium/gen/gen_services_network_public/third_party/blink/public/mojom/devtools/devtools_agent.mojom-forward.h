// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_FORWARD_H_

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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class DevToolsMessageDataView;

class DevToolsSessionStateDataView;

class DevToolsMessage;
using DevToolsMessagePtr = mojo::StructPtr<DevToolsMessage>;

class DevToolsSessionState;
using DevToolsSessionStatePtr = mojo::StructPtr<DevToolsSessionState>;

class DevToolsAgent;
using DevToolsAgentPtr = mojo::InterfacePtr<DevToolsAgent>;
using DevToolsAgentPtrInfo = mojo::InterfacePtrInfo<DevToolsAgent>;
using ThreadSafeDevToolsAgentPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsAgent>;
using DevToolsAgentRequest = mojo::InterfaceRequest<DevToolsAgent>;
using DevToolsAgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsAgent>;
using ThreadSafeDevToolsAgentAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsAgent>;
using DevToolsAgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsAgent>;
using DevToolsAgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsAgent>;

class DevToolsAgentHost;
using DevToolsAgentHostPtr = mojo::InterfacePtr<DevToolsAgentHost>;
using DevToolsAgentHostPtrInfo = mojo::InterfacePtrInfo<DevToolsAgentHost>;
using ThreadSafeDevToolsAgentHostPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsAgentHost>;
using DevToolsAgentHostRequest = mojo::InterfaceRequest<DevToolsAgentHost>;
using DevToolsAgentHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsAgentHost>;
using ThreadSafeDevToolsAgentHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsAgentHost>;
using DevToolsAgentHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsAgentHost>;
using DevToolsAgentHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsAgentHost>;

class DevToolsSession;
using DevToolsSessionPtr = mojo::InterfacePtr<DevToolsSession>;
using DevToolsSessionPtrInfo = mojo::InterfacePtrInfo<DevToolsSession>;
using ThreadSafeDevToolsSessionPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsSession>;
using DevToolsSessionRequest = mojo::InterfaceRequest<DevToolsSession>;
using DevToolsSessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsSession>;
using ThreadSafeDevToolsSessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsSession>;
using DevToolsSessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsSession>;
using DevToolsSessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsSession>;

class DevToolsSessionHost;
using DevToolsSessionHostPtr = mojo::InterfacePtr<DevToolsSessionHost>;
using DevToolsSessionHostPtrInfo = mojo::InterfacePtrInfo<DevToolsSessionHost>;
using ThreadSafeDevToolsSessionHostPtr =
    mojo::ThreadSafeInterfacePtr<DevToolsSessionHost>;
using DevToolsSessionHostRequest = mojo::InterfaceRequest<DevToolsSessionHost>;
using DevToolsSessionHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<DevToolsSessionHost>;
using ThreadSafeDevToolsSessionHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DevToolsSessionHost>;
using DevToolsSessionHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DevToolsSessionHost>;
using DevToolsSessionHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DevToolsSessionHost>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_FORWARD_H_