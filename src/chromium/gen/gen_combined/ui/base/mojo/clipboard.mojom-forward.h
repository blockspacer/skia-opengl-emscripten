// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_FORWARD_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_FORWARD_H_



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






namespace ui {
namespace mojom {

enum class ClipboardType : int32_t;
class ClipboardHost;
using ClipboardHostPtr = mojo::InterfacePtr<ClipboardHost>;
using ClipboardHostPtrInfo = mojo::InterfacePtrInfo<ClipboardHost>;
using ThreadSafeClipboardHostPtr =
    mojo::ThreadSafeInterfacePtr<ClipboardHost>;
using ClipboardHostRequest = mojo::InterfaceRequest<ClipboardHost>;
using ClipboardHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClipboardHost>;
using ThreadSafeClipboardHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ClipboardHost>;
using ClipboardHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClipboardHost>;
using ClipboardHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ClipboardHost>;




}  // namespace mojom
}  // namespace ui
#include "ui/base/clipboard/clipboard_types.h"

#endif  // UI_BASE_MOJO_CLIPBOARD_MOJOM_FORWARD_H_