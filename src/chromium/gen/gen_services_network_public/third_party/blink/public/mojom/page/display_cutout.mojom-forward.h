// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_FORWARD_H_

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
class DisplayCutoutSafeAreaDataView;


enum class ViewportFit : int32_t;
class DisplayCutoutSafeArea;
using DisplayCutoutSafeAreaPtr = mojo::InlinedStructPtr<DisplayCutoutSafeArea>;

class DisplayCutoutHost;
using DisplayCutoutHostPtr = mojo::InterfacePtr<DisplayCutoutHost>;
using DisplayCutoutHostPtrInfo = mojo::InterfacePtrInfo<DisplayCutoutHost>;
using ThreadSafeDisplayCutoutHostPtr =
    mojo::ThreadSafeInterfacePtr<DisplayCutoutHost>;
using DisplayCutoutHostRequest = mojo::InterfaceRequest<DisplayCutoutHost>;
using DisplayCutoutHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayCutoutHost>;
using ThreadSafeDisplayCutoutHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DisplayCutoutHost>;
using DisplayCutoutHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayCutoutHost>;
using DisplayCutoutHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayCutoutHost>;

class DisplayCutoutClient;
using DisplayCutoutClientPtr = mojo::InterfacePtr<DisplayCutoutClient>;
using DisplayCutoutClientPtrInfo = mojo::InterfacePtrInfo<DisplayCutoutClient>;
using ThreadSafeDisplayCutoutClientPtr =
    mojo::ThreadSafeInterfacePtr<DisplayCutoutClient>;
using DisplayCutoutClientRequest = mojo::InterfaceRequest<DisplayCutoutClient>;
using DisplayCutoutClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DisplayCutoutClient>;
using ThreadSafeDisplayCutoutClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DisplayCutoutClient>;
using DisplayCutoutClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DisplayCutoutClient>;
using DisplayCutoutClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DisplayCutoutClient>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_FORWARD_H_