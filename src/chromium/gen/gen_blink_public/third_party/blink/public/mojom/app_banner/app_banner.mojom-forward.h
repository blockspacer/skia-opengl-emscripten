// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_FORWARD_H_



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


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

enum class AppBannerPromptReply : int32_t;
class AppBannerController;
using AppBannerControllerPtr = mojo::InterfacePtr<AppBannerController>;
using AppBannerControllerPtrInfo = mojo::InterfacePtrInfo<AppBannerController>;
using ThreadSafeAppBannerControllerPtr =
    mojo::ThreadSafeInterfacePtr<AppBannerController>;
using AppBannerControllerRequest = mojo::InterfaceRequest<AppBannerController>;
using AppBannerControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppBannerController>;
using ThreadSafeAppBannerControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppBannerController>;
using AppBannerControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppBannerController>;
using AppBannerControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppBannerController>;

class AppBannerEvent;
using AppBannerEventPtr = mojo::InterfacePtr<AppBannerEvent>;
using AppBannerEventPtrInfo = mojo::InterfacePtrInfo<AppBannerEvent>;
using ThreadSafeAppBannerEventPtr =
    mojo::ThreadSafeInterfacePtr<AppBannerEvent>;
using AppBannerEventRequest = mojo::InterfaceRequest<AppBannerEvent>;
using AppBannerEventAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppBannerEvent>;
using ThreadSafeAppBannerEventAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppBannerEvent>;
using AppBannerEventAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppBannerEvent>;
using AppBannerEventAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppBannerEvent>;

class AppBannerService;
using AppBannerServicePtr = mojo::InterfacePtr<AppBannerService>;
using AppBannerServicePtrInfo = mojo::InterfacePtrInfo<AppBannerService>;
using ThreadSafeAppBannerServicePtr =
    mojo::ThreadSafeInterfacePtr<AppBannerService>;
using AppBannerServiceRequest = mojo::InterfaceRequest<AppBannerService>;
using AppBannerServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppBannerService>;
using ThreadSafeAppBannerServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppBannerService>;
using AppBannerServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppBannerService>;
using AppBannerServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppBannerService>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_FORWARD_H_