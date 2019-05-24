// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_FORWARD_H_

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
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class KeyValue;
using KeyValuePtr = mojo::StructPtr<KeyValue>;

class StorageAreaObserver;
using StorageAreaObserverPtr = mojo::InterfacePtr<StorageAreaObserver>;
using StorageAreaObserverPtrInfo = mojo::InterfacePtrInfo<StorageAreaObserver>;
using ThreadSafeStorageAreaObserverPtr =
    mojo::ThreadSafeInterfacePtr<StorageAreaObserver>;
using StorageAreaObserverRequest = mojo::InterfaceRequest<StorageAreaObserver>;
using StorageAreaObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<StorageAreaObserver>;
using ThreadSafeStorageAreaObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<StorageAreaObserver>;
using StorageAreaObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StorageAreaObserver>;
using StorageAreaObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StorageAreaObserver>;

class StorageAreaGetAllCallback;
using StorageAreaGetAllCallbackPtr = mojo::InterfacePtr<StorageAreaGetAllCallback>;
using StorageAreaGetAllCallbackPtrInfo = mojo::InterfacePtrInfo<StorageAreaGetAllCallback>;
using ThreadSafeStorageAreaGetAllCallbackPtr =
    mojo::ThreadSafeInterfacePtr<StorageAreaGetAllCallback>;
using StorageAreaGetAllCallbackRequest = mojo::InterfaceRequest<StorageAreaGetAllCallback>;
using StorageAreaGetAllCallbackAssociatedPtr =
    mojo::AssociatedInterfacePtr<StorageAreaGetAllCallback>;
using ThreadSafeStorageAreaGetAllCallbackAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<StorageAreaGetAllCallback>;
using StorageAreaGetAllCallbackAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StorageAreaGetAllCallback>;
using StorageAreaGetAllCallbackAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StorageAreaGetAllCallback>;

class StorageArea;
using StorageAreaPtr = mojo::InterfacePtr<StorageArea>;
using StorageAreaPtrInfo = mojo::InterfacePtrInfo<StorageArea>;
using ThreadSafeStorageAreaPtr =
    mojo::ThreadSafeInterfacePtr<StorageArea>;
using StorageAreaRequest = mojo::InterfaceRequest<StorageArea>;
using StorageAreaAssociatedPtr =
    mojo::AssociatedInterfacePtr<StorageArea>;
using ThreadSafeStorageAreaAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<StorageArea>;
using StorageAreaAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<StorageArea>;
using StorageAreaAssociatedRequest =
    mojo::AssociatedInterfaceRequest<StorageArea>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_FORWARD_H_