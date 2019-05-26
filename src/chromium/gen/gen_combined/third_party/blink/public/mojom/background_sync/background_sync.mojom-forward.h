// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_FORWARD_H_

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
class SyncRegistrationOptionsDataView;

class BackgroundSyncRegistrationInfoDataView;


enum class BackgroundSyncError : int32_t;

enum class BackgroundSyncState : int32_t;

enum class BackgroundSyncEventLastChance : int32_t;

enum class BackgroundSyncType : int32_t;
class SyncRegistrationOptions;
using SyncRegistrationOptionsPtr = mojo::InlinedStructPtr<SyncRegistrationOptions>;

class BackgroundSyncRegistrationInfo;
using BackgroundSyncRegistrationInfoPtr = mojo::InlinedStructPtr<BackgroundSyncRegistrationInfo>;

class BackgroundSyncService;
using BackgroundSyncServicePtr = mojo::InterfacePtr<BackgroundSyncService>;
using BackgroundSyncServicePtrInfo = mojo::InterfacePtrInfo<BackgroundSyncService>;
using ThreadSafeBackgroundSyncServicePtr =
    mojo::ThreadSafeInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServiceRequest = mojo::InterfaceRequest<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundSyncService>;
using ThreadSafeBackgroundSyncServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundSyncService>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_FORWARD_H_