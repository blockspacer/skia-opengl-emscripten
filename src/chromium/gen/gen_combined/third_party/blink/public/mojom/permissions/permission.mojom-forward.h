// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_FORWARD_H_

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
class MidiPermissionDescriptorDataView;

class ClipboardPermissionDescriptorDataView;

class PermissionDescriptorDataView;

class PermissionDescriptorExtensionDataView;

enum class PermissionName : int32_t;
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




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_FORWARD_H_