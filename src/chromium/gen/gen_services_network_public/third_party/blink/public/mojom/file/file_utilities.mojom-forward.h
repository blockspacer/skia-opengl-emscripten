// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_FORWARD_H_



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
class FileUtilitiesHost;
using FileUtilitiesHostPtr = mojo::InterfacePtr<FileUtilitiesHost>;
using FileUtilitiesHostPtrInfo = mojo::InterfacePtrInfo<FileUtilitiesHost>;
using ThreadSafeFileUtilitiesHostPtr =
    mojo::ThreadSafeInterfacePtr<FileUtilitiesHost>;
using FileUtilitiesHostRequest = mojo::InterfaceRequest<FileUtilitiesHost>;
using FileUtilitiesHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<FileUtilitiesHost>;
using ThreadSafeFileUtilitiesHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FileUtilitiesHost>;
using FileUtilitiesHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FileUtilitiesHost>;
using FileUtilitiesHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FileUtilitiesHost>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_FORWARD_H_