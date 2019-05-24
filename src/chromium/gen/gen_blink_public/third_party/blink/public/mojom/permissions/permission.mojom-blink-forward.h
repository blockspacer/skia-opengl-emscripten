// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_FORWARD_H_

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

enum class PermissionName : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_PermissionName_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::PermissionName> {
  using Hash = blink_mojom_internal_PermissionName_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using PermissionName = PermissionName;  // Alias for definition in the parent namespace.
class MidiPermissionDescriptor;
using MidiPermissionDescriptorPtr = mojo::InlinedStructPtr<MidiPermissionDescriptor>;

class ClipboardPermissionDescriptor;
using ClipboardPermissionDescriptorPtr = mojo::InlinedStructPtr<ClipboardPermissionDescriptor>;

class PermissionDescriptor;
using PermissionDescriptorPtr = mojo::StructPtr<PermissionDescriptor>;

class PermissionDescriptorExtension;

typedef mojo::StructPtr<PermissionDescriptorExtension> PermissionDescriptorExtensionPtr;

class PermissionObserver;
using PermissionObserverPtr = mojo::InterfacePtr<PermissionObserver>;
using PermissionObserverPtrInfo = mojo::InterfacePtrInfo<PermissionObserver>;
using ThreadSafePermissionObserverPtr =
    mojo::ThreadSafeInterfacePtr<PermissionObserver>;
using PermissionObserverRequest = mojo::InterfaceRequest<PermissionObserver>;
using PermissionObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionObserver>;
using ThreadSafePermissionObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PermissionObserver>;
using PermissionObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionObserver>;
using PermissionObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PermissionObserver>;

class PermissionService;
using PermissionServicePtr = mojo::InterfacePtr<PermissionService>;
using PermissionServicePtrInfo = mojo::InterfacePtrInfo<PermissionService>;
using ThreadSafePermissionServicePtr =
    mojo::ThreadSafeInterfacePtr<PermissionService>;
using PermissionServiceRequest = mojo::InterfaceRequest<PermissionService>;
using PermissionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionService>;
using ThreadSafePermissionServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PermissionService>;
using PermissionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionService>;
using PermissionServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PermissionService>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_BLINK_FORWARD_H_