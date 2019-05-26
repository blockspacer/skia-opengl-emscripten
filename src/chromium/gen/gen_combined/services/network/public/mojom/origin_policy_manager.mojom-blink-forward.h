// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_FORWARD_H_

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

enum class OriginPolicyState : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_OriginPolicyState_DataHashFn;

template <>
struct DefaultHash<::network::mojom::OriginPolicyState> {
  using Hash = network_mojom_internal_OriginPolicyState_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using OriginPolicyState = OriginPolicyState;  // Alias for definition in the parent namespace.
class OriginPolicyContents;
using OriginPolicyContentsPtr = mojo::StructPtr<OriginPolicyContents>;

class OriginPolicy;
using OriginPolicyPtr = mojo::StructPtr<OriginPolicy>;

class OriginPolicyManager;
using OriginPolicyManagerPtr = mojo::InterfacePtr<OriginPolicyManager>;
using OriginPolicyManagerPtrInfo = mojo::InterfacePtrInfo<OriginPolicyManager>;
using ThreadSafeOriginPolicyManagerPtr =
    mojo::ThreadSafeInterfacePtr<OriginPolicyManager>;
using OriginPolicyManagerRequest = mojo::InterfaceRequest<OriginPolicyManager>;
using OriginPolicyManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<OriginPolicyManager>;
using ThreadSafeOriginPolicyManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OriginPolicyManager>;
using OriginPolicyManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OriginPolicyManager>;
using OriginPolicyManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OriginPolicyManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_FORWARD_H_