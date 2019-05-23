// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_FORWARD_H_



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
class WebDatabase;
using WebDatabasePtr = mojo::InterfacePtr<WebDatabase>;
using WebDatabasePtrInfo = mojo::InterfacePtrInfo<WebDatabase>;
using ThreadSafeWebDatabasePtr =
    mojo::ThreadSafeInterfacePtr<WebDatabase>;
using WebDatabaseRequest = mojo::InterfaceRequest<WebDatabase>;
using WebDatabaseAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebDatabase>;
using ThreadSafeWebDatabaseAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebDatabase>;
using WebDatabaseAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebDatabase>;
using WebDatabaseAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebDatabase>;

class WebDatabaseHost;
using WebDatabaseHostPtr = mojo::InterfacePtr<WebDatabaseHost>;
using WebDatabaseHostPtrInfo = mojo::InterfacePtrInfo<WebDatabaseHost>;
using ThreadSafeWebDatabaseHostPtr =
    mojo::ThreadSafeInterfacePtr<WebDatabaseHost>;
using WebDatabaseHostRequest = mojo::InterfaceRequest<WebDatabaseHost>;
using WebDatabaseHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebDatabaseHost>;
using ThreadSafeWebDatabaseHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WebDatabaseHost>;
using WebDatabaseHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebDatabaseHost>;
using WebDatabaseHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebDatabaseHost>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_FORWARD_H_