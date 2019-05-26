// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_FORWARD_H_

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
class FindOptionsDataView;


enum class StopFindAction : int32_t;

enum class FindMatchUpdateType : int32_t;
class FindOptions;
using FindOptionsPtr = mojo::StructPtr<FindOptions>;

class FindInPage;
using FindInPagePtr = mojo::InterfacePtr<FindInPage>;
using FindInPagePtrInfo = mojo::InterfacePtrInfo<FindInPage>;
using ThreadSafeFindInPagePtr =
    mojo::ThreadSafeInterfacePtr<FindInPage>;
using FindInPageRequest = mojo::InterfaceRequest<FindInPage>;
using FindInPageAssociatedPtr =
    mojo::AssociatedInterfacePtr<FindInPage>;
using ThreadSafeFindInPageAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FindInPage>;
using FindInPageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FindInPage>;
using FindInPageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FindInPage>;

class FindInPageClient;
using FindInPageClientPtr = mojo::InterfacePtr<FindInPageClient>;
using FindInPageClientPtrInfo = mojo::InterfacePtrInfo<FindInPageClient>;
using ThreadSafeFindInPageClientPtr =
    mojo::ThreadSafeInterfacePtr<FindInPageClient>;
using FindInPageClientRequest = mojo::InterfaceRequest<FindInPageClient>;
using FindInPageClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<FindInPageClient>;
using ThreadSafeFindInPageClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FindInPageClient>;
using FindInPageClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FindInPageClient>;
using FindInPageClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FindInPageClient>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_FORWARD_H_