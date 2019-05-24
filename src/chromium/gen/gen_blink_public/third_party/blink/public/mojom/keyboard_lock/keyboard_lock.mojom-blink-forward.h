// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_FORWARD_H_

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

enum class KeyboardLockRequestResult : int32_t;

enum class GetKeyboardLayoutMapStatus : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_KeyboardLockRequestResult_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::KeyboardLockRequestResult> {
  using Hash = blink_mojom_internal_KeyboardLockRequestResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_GetKeyboardLayoutMapStatus_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::GetKeyboardLayoutMapStatus> {
  using Hash = blink_mojom_internal_GetKeyboardLayoutMapStatus_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using KeyboardLockRequestResult = KeyboardLockRequestResult;  // Alias for definition in the parent namespace.
using GetKeyboardLayoutMapStatus = GetKeyboardLayoutMapStatus;  // Alias for definition in the parent namespace.
class GetKeyboardLayoutMapResult;
using GetKeyboardLayoutMapResultPtr = mojo::StructPtr<GetKeyboardLayoutMapResult>;

class KeyboardLockService;
using KeyboardLockServicePtr = mojo::InterfacePtr<KeyboardLockService>;
using KeyboardLockServicePtrInfo = mojo::InterfacePtrInfo<KeyboardLockService>;
using ThreadSafeKeyboardLockServicePtr =
    mojo::ThreadSafeInterfacePtr<KeyboardLockService>;
using KeyboardLockServiceRequest = mojo::InterfaceRequest<KeyboardLockService>;
using KeyboardLockServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<KeyboardLockService>;
using ThreadSafeKeyboardLockServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<KeyboardLockService>;
using KeyboardLockServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<KeyboardLockService>;
using KeyboardLockServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<KeyboardLockService>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_FORWARD_H_