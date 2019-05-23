// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_FORWARD_H_

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
class LockInfoDataView;


enum class LockMode : int32_t;

enum class LockManager_WaitMode : int32_t;
class LockInfo;
using LockInfoPtr = mojo::InlinedStructPtr<LockInfo>;

class LockHandle;
using LockHandlePtr = mojo::InterfacePtr<LockHandle>;
using LockHandlePtrInfo = mojo::InterfacePtrInfo<LockHandle>;
using ThreadSafeLockHandlePtr =
    mojo::ThreadSafeInterfacePtr<LockHandle>;
using LockHandleRequest = mojo::InterfaceRequest<LockHandle>;
using LockHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<LockHandle>;
using ThreadSafeLockHandleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LockHandle>;
using LockHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LockHandle>;
using LockHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LockHandle>;

class LockRequest;
using LockRequestPtr = mojo::InterfacePtr<LockRequest>;
using LockRequestPtrInfo = mojo::InterfacePtrInfo<LockRequest>;
using ThreadSafeLockRequestPtr =
    mojo::ThreadSafeInterfacePtr<LockRequest>;
using LockRequestRequest = mojo::InterfaceRequest<LockRequest>;
using LockRequestAssociatedPtr =
    mojo::AssociatedInterfacePtr<LockRequest>;
using ThreadSafeLockRequestAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LockRequest>;
using LockRequestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LockRequest>;
using LockRequestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LockRequest>;

class LockManager;
using LockManagerPtr = mojo::InterfacePtr<LockManager>;
using LockManagerPtrInfo = mojo::InterfacePtrInfo<LockManager>;
using ThreadSafeLockManagerPtr =
    mojo::ThreadSafeInterfacePtr<LockManager>;
using LockManagerRequest = mojo::InterfaceRequest<LockManager>;
using LockManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<LockManager>;
using ThreadSafeLockManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<LockManager>;
using LockManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<LockManager>;
using LockManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<LockManager>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_FORWARD_H_