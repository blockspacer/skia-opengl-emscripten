// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_FORWARD_H_

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

enum class UserIdleState : int32_t;

enum class ScreenIdleState : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_UserIdleState_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::UserIdleState> {
  using Hash = blink_mojom_internal_UserIdleState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_ScreenIdleState_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ScreenIdleState> {
  using Hash = blink_mojom_internal_ScreenIdleState_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using UserIdleState = UserIdleState;  // Alias for definition in the parent namespace.
using ScreenIdleState = ScreenIdleState;  // Alias for definition in the parent namespace.
class IdleState;
using IdleStatePtr = mojo::InlinedStructPtr<IdleState>;

class IdleMonitor;
using IdleMonitorPtr = mojo::InterfacePtr<IdleMonitor>;
using IdleMonitorPtrInfo = mojo::InterfacePtrInfo<IdleMonitor>;
using ThreadSafeIdleMonitorPtr =
    mojo::ThreadSafeInterfacePtr<IdleMonitor>;
using IdleMonitorRequest = mojo::InterfaceRequest<IdleMonitor>;
using IdleMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<IdleMonitor>;
using ThreadSafeIdleMonitorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IdleMonitor>;
using IdleMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IdleMonitor>;
using IdleMonitorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IdleMonitor>;

class IdleManager;
using IdleManagerPtr = mojo::InterfacePtr<IdleManager>;
using IdleManagerPtrInfo = mojo::InterfacePtrInfo<IdleManager>;
using ThreadSafeIdleManagerPtr =
    mojo::ThreadSafeInterfacePtr<IdleManager>;
using IdleManagerRequest = mojo::InterfaceRequest<IdleManager>;
using IdleManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<IdleManager>;
using ThreadSafeIdleManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IdleManager>;
using IdleManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IdleManager>;
using IdleManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IdleManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_FORWARD_H_