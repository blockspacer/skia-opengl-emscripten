// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class WebContentSecurityPolicyType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_WebContentSecurityPolicyType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::WebContentSecurityPolicyType> {
  using Hash = blink_mojom_internal_WebContentSecurityPolicyType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using WebContentSecurityPolicyType = WebContentSecurityPolicyType;  // Alias for definition in the parent namespace.
class SourceLocation;
using SourceLocationPtr = mojo::InlinedStructPtr<SourceLocation>;

class CSPViolationParams;
using CSPViolationParamsPtr = mojo::StructPtr<CSPViolationParams>;

class NavigationInitiator;
using NavigationInitiatorPtr = mojo::InterfacePtr<NavigationInitiator>;
using NavigationInitiatorPtrInfo = mojo::InterfacePtrInfo<NavigationInitiator>;
using ThreadSafeNavigationInitiatorPtr =
    mojo::ThreadSafeInterfacePtr<NavigationInitiator>;
using NavigationInitiatorRequest = mojo::InterfaceRequest<NavigationInitiator>;
using NavigationInitiatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<NavigationInitiator>;
using ThreadSafeNavigationInitiatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NavigationInitiator>;
using NavigationInitiatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NavigationInitiator>;
using NavigationInitiatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NavigationInitiator>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_BLINK_FORWARD_H_