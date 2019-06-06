// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_FORWARD_H_

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




namespace network {
namespace mojom {
class CookieManagerParamsDataView;

class CookieOptionsDataView;

class CanonicalCookieDataView;

class CookieWithStatusDataView;

class CookieDeletionFilterDataView;


enum class CookiePriority : int32_t;

enum class CookieSameSite : int32_t;

enum class CookieSameSiteContext : int32_t;

enum class CookieInclusionStatus : int32_t;

enum class CookieChangeCause : int32_t;

enum class CookieDeletionSessionControl : int32_t;
class CookieManagerParams;
using CookieManagerParamsPtr = mojo::StructPtr<CookieManagerParams>;

class CookieOptions;
using CookieOptionsPtr = mojo::StructPtr<CookieOptions>;

class CanonicalCookie;
using CanonicalCookiePtr = mojo::StructPtr<CanonicalCookie>;

class CookieWithStatus;
using CookieWithStatusPtr = mojo::StructPtr<CookieWithStatus>;

class CookieDeletionFilter;
using CookieDeletionFilterPtr = mojo::StructPtr<CookieDeletionFilter>;

class CookieChangeListener;
using CookieChangeListenerPtr = mojo::InterfacePtr<CookieChangeListener>;
using CookieChangeListenerPtrInfo = mojo::InterfacePtrInfo<CookieChangeListener>;
using ThreadSafeCookieChangeListenerPtr =
    mojo::ThreadSafeInterfacePtr<CookieChangeListener>;
using CookieChangeListenerRequest = mojo::InterfaceRequest<CookieChangeListener>;
using CookieChangeListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<CookieChangeListener>;
using ThreadSafeCookieChangeListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CookieChangeListener>;
using CookieChangeListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CookieChangeListener>;
using CookieChangeListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CookieChangeListener>;

class CookieManager;
using CookieManagerPtr = mojo::InterfacePtr<CookieManager>;
using CookieManagerPtrInfo = mojo::InterfacePtrInfo<CookieManager>;
using ThreadSafeCookieManagerPtr =
    mojo::ThreadSafeInterfacePtr<CookieManager>;
using CookieManagerRequest = mojo::InterfaceRequest<CookieManager>;
using CookieManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<CookieManager>;
using ThreadSafeCookieManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CookieManager>;
using CookieManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CookieManager>;
using CookieManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CookieManager>;




}  // namespace mojom
}  // namespace network
#if defined(ENABLE_GIPC)
#include "ipc/ipc_message_utils.h"
#endif // ENABLE_GIPC
#include "net/cookies/canonical_cookie.h"
#include "net/cookies/cookie_constants.h"
#include "net/cookies/cookie_options.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_FORWARD_H_
