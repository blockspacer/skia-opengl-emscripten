// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_FORWARD_H_

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

enum class BackgroundSyncError : int32_t;

enum class BackgroundSyncState : int32_t;

enum class BackgroundSyncEventLastChance : int32_t;

enum class BackgroundSyncType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_BackgroundSyncError_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncError> {
  using Hash = blink_mojom_internal_BackgroundSyncError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_BackgroundSyncState_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncState> {
  using Hash = blink_mojom_internal_BackgroundSyncState_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_BackgroundSyncEventLastChance_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncEventLastChance> {
  using Hash = blink_mojom_internal_BackgroundSyncEventLastChance_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_BackgroundSyncType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundSyncType> {
  using Hash = blink_mojom_internal_BackgroundSyncType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using BackgroundSyncError = BackgroundSyncError;  // Alias for definition in the parent namespace.
using BackgroundSyncState = BackgroundSyncState;  // Alias for definition in the parent namespace.
using BackgroundSyncEventLastChance = BackgroundSyncEventLastChance;  // Alias for definition in the parent namespace.
using BackgroundSyncType = BackgroundSyncType;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_FORWARD_H_