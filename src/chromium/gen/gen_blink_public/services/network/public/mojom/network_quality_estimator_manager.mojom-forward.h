// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_FORWARD_H_



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






namespace network {
namespace mojom {
class NetworkQualityEstimatorManagerClient;
using NetworkQualityEstimatorManagerClientPtr = mojo::InterfacePtr<NetworkQualityEstimatorManagerClient>;
using NetworkQualityEstimatorManagerClientPtrInfo = mojo::InterfacePtrInfo<NetworkQualityEstimatorManagerClient>;
using ThreadSafeNetworkQualityEstimatorManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<NetworkQualityEstimatorManagerClient>;
using NetworkQualityEstimatorManagerClientRequest = mojo::InterfaceRequest<NetworkQualityEstimatorManagerClient>;
using NetworkQualityEstimatorManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkQualityEstimatorManagerClient>;
using ThreadSafeNetworkQualityEstimatorManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkQualityEstimatorManagerClient>;
using NetworkQualityEstimatorManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkQualityEstimatorManagerClient>;
using NetworkQualityEstimatorManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkQualityEstimatorManagerClient>;

class NetworkQualityEstimatorManager;
using NetworkQualityEstimatorManagerPtr = mojo::InterfacePtr<NetworkQualityEstimatorManager>;
using NetworkQualityEstimatorManagerPtrInfo = mojo::InterfacePtrInfo<NetworkQualityEstimatorManager>;
using ThreadSafeNetworkQualityEstimatorManagerPtr =
    mojo::ThreadSafeInterfacePtr<NetworkQualityEstimatorManager>;
using NetworkQualityEstimatorManagerRequest = mojo::InterfaceRequest<NetworkQualityEstimatorManager>;
using NetworkQualityEstimatorManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkQualityEstimatorManager>;
using ThreadSafeNetworkQualityEstimatorManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkQualityEstimatorManager>;
using NetworkQualityEstimatorManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkQualityEstimatorManager>;
using NetworkQualityEstimatorManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkQualityEstimatorManager>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_QUALITY_ESTIMATOR_MANAGER_MOJOM_FORWARD_H_