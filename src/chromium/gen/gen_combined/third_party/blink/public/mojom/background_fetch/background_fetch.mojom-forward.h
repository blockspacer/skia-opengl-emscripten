// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_FORWARD_H_

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
class BackgroundFetchSettledFetchDataView;

class BackgroundFetchOptionsDataView;

class BackgroundFetchRegistrationDataDataView;

class BackgroundFetchRegistrationDataView;

class BackgroundFetchUkmDataDataView;


enum class BackgroundFetchError : int32_t;

enum class BackgroundFetchResult : int32_t;

enum class BackgroundFetchFailureReason : int32_t;
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




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_FORWARD_H_