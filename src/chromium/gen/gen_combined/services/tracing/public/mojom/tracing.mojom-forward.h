// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_FORWARD_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_FORWARD_H_



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


#include "base/component_export.h"




namespace tracing {
namespace mojom {

enum class TraceDataType : int32_t;
class AgentRegistry;
using AgentRegistryPtr = mojo::InterfacePtr<AgentRegistry>;
using AgentRegistryPtrInfo = mojo::InterfacePtrInfo<AgentRegistry>;
using ThreadSafeAgentRegistryPtr =
    mojo::ThreadSafeInterfacePtr<AgentRegistry>;
using AgentRegistryRequest = mojo::InterfaceRequest<AgentRegistry>;
using AgentRegistryAssociatedPtr =
    mojo::AssociatedInterfacePtr<AgentRegistry>;
using ThreadSafeAgentRegistryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AgentRegistry>;
using AgentRegistryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AgentRegistry>;
using AgentRegistryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AgentRegistry>;

class Agent;
using AgentPtr = mojo::InterfacePtr<Agent>;
using AgentPtrInfo = mojo::InterfacePtrInfo<Agent>;
using ThreadSafeAgentPtr =
    mojo::ThreadSafeInterfacePtr<Agent>;
using AgentRequest = mojo::InterfaceRequest<Agent>;
using AgentAssociatedPtr =
    mojo::AssociatedInterfacePtr<Agent>;
using ThreadSafeAgentAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Agent>;
using AgentAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Agent>;
using AgentAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Agent>;

class Recorder;
using RecorderPtr = mojo::InterfacePtr<Recorder>;
using RecorderPtrInfo = mojo::InterfacePtrInfo<Recorder>;
using ThreadSafeRecorderPtr =
    mojo::ThreadSafeInterfacePtr<Recorder>;
using RecorderRequest = mojo::InterfaceRequest<Recorder>;
using RecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<Recorder>;
using ThreadSafeRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Recorder>;
using RecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Recorder>;
using RecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Recorder>;

class Coordinator;
using CoordinatorPtr = mojo::InterfacePtr<Coordinator>;
using CoordinatorPtrInfo = mojo::InterfacePtrInfo<Coordinator>;
using ThreadSafeCoordinatorPtr =
    mojo::ThreadSafeInterfacePtr<Coordinator>;
using CoordinatorRequest = mojo::InterfaceRequest<Coordinator>;
using CoordinatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Coordinator>;
using ThreadSafeCoordinatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Coordinator>;
using CoordinatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Coordinator>;
using CoordinatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Coordinator>;




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACING_MOJOM_FORWARD_H_