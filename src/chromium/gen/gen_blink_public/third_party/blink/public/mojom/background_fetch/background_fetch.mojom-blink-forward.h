// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_FORWARD_H_

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

enum class BackgroundFetchError : int32_t;

enum class BackgroundFetchResult : int32_t;

enum class BackgroundFetchFailureReason : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_BackgroundFetchError_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundFetchError> {
  using Hash = blink_mojom_internal_BackgroundFetchError_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_BackgroundFetchResult_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundFetchResult> {
  using Hash = blink_mojom_internal_BackgroundFetchResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_BackgroundFetchFailureReason_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::BackgroundFetchFailureReason> {
  using Hash = blink_mojom_internal_BackgroundFetchFailureReason_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using BackgroundFetchError = BackgroundFetchError;  // Alias for definition in the parent namespace.
using BackgroundFetchResult = BackgroundFetchResult;  // Alias for definition in the parent namespace.
using BackgroundFetchFailureReason = BackgroundFetchFailureReason;  // Alias for definition in the parent namespace.
class BackgroundFetchSettledFetch;
using BackgroundFetchSettledFetchPtr = mojo::StructPtr<BackgroundFetchSettledFetch>;

class BackgroundFetchOptions;
using BackgroundFetchOptionsPtr = mojo::StructPtr<BackgroundFetchOptions>;

class BackgroundFetchRegistrationData;
using BackgroundFetchRegistrationDataPtr = mojo::StructPtr<BackgroundFetchRegistrationData>;

class BackgroundFetchRegistration;
using BackgroundFetchRegistrationPtr = mojo::StructPtr<BackgroundFetchRegistration>;

class BackgroundFetchUkmData;
using BackgroundFetchUkmDataPtr = mojo::InlinedStructPtr<BackgroundFetchUkmData>;

class BackgroundFetchRegistrationObserver;
using BackgroundFetchRegistrationObserverPtr = mojo::InterfacePtr<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverPtrInfo = mojo::InterfacePtrInfo<BackgroundFetchRegistrationObserver>;
using ThreadSafeBackgroundFetchRegistrationObserverPtr =
    mojo::ThreadSafeInterfacePtr<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverRequest = mojo::InterfaceRequest<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundFetchRegistrationObserver>;
using ThreadSafeBackgroundFetchRegistrationObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundFetchRegistrationObserver>;
using BackgroundFetchRegistrationObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundFetchRegistrationObserver>;

class BackgroundFetchService;
using BackgroundFetchServicePtr = mojo::InterfacePtr<BackgroundFetchService>;
using BackgroundFetchServicePtrInfo = mojo::InterfacePtrInfo<BackgroundFetchService>;
using ThreadSafeBackgroundFetchServicePtr =
    mojo::ThreadSafeInterfacePtr<BackgroundFetchService>;
using BackgroundFetchServiceRequest = mojo::InterfaceRequest<BackgroundFetchService>;
using BackgroundFetchServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundFetchService>;
using ThreadSafeBackgroundFetchServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundFetchService>;
using BackgroundFetchServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundFetchService>;
using BackgroundFetchServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundFetchService>;

class BackgroundFetchRegistrationService;
using BackgroundFetchRegistrationServicePtr = mojo::InterfacePtr<BackgroundFetchRegistrationService>;
using BackgroundFetchRegistrationServicePtrInfo = mojo::InterfacePtrInfo<BackgroundFetchRegistrationService>;
using ThreadSafeBackgroundFetchRegistrationServicePtr =
    mojo::ThreadSafeInterfacePtr<BackgroundFetchRegistrationService>;
using BackgroundFetchRegistrationServiceRequest = mojo::InterfaceRequest<BackgroundFetchRegistrationService>;
using BackgroundFetchRegistrationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundFetchRegistrationService>;
using ThreadSafeBackgroundFetchRegistrationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<BackgroundFetchRegistrationService>;
using BackgroundFetchRegistrationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundFetchRegistrationService>;
using BackgroundFetchRegistrationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<BackgroundFetchRegistrationService>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_BLINK_FORWARD_H_