// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_FORWARD_H_

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

enum class ResolverType : int32_t;

enum class NetworkServiceTest_ShouldRequireCT : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_ResolverType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::ResolverType> {
  using Hash = network_mojom_internal_ResolverType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_NetworkServiceTest_ShouldRequireCT_DataHashFn;

template <>
struct DefaultHash<::network::mojom::NetworkServiceTest_ShouldRequireCT> {
  using Hash = network_mojom_internal_NetworkServiceTest_ShouldRequireCT_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using ResolverType = ResolverType;  // Alias for definition in the parent namespace.
class Rule;
using RulePtr = mojo::InlinedStructPtr<Rule>;

class NetworkServiceTest;
using NetworkServiceTestPtr = mojo::InterfacePtr<NetworkServiceTest>;
using NetworkServiceTestPtrInfo = mojo::InterfacePtrInfo<NetworkServiceTest>;
using ThreadSafeNetworkServiceTestPtr =
    mojo::ThreadSafeInterfacePtr<NetworkServiceTest>;
using NetworkServiceTestRequest = mojo::InterfaceRequest<NetworkServiceTest>;
using NetworkServiceTestAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkServiceTest>;
using ThreadSafeNetworkServiceTestAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetworkServiceTest>;
using NetworkServiceTestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkServiceTest>;
using NetworkServiceTestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetworkServiceTest>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_FORWARD_H_