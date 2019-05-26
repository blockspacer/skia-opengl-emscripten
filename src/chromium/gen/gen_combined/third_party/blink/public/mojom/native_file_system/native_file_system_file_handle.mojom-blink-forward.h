// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class NativeFileSystemFileHandle;
using NativeFileSystemFileHandlePtr = mojo::InterfacePtr<NativeFileSystemFileHandle>;
using NativeFileSystemFileHandlePtrInfo = mojo::InterfacePtrInfo<NativeFileSystemFileHandle>;
using ThreadSafeNativeFileSystemFileHandlePtr =
    mojo::ThreadSafeInterfacePtr<NativeFileSystemFileHandle>;
using NativeFileSystemFileHandleRequest = mojo::InterfaceRequest<NativeFileSystemFileHandle>;
using NativeFileSystemFileHandleAssociatedPtr =
    mojo::AssociatedInterfacePtr<NativeFileSystemFileHandle>;
using ThreadSafeNativeFileSystemFileHandleAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NativeFileSystemFileHandle>;
using NativeFileSystemFileHandleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NativeFileSystemFileHandle>;
using NativeFileSystemFileHandleAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NativeFileSystemFileHandle>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_BLINK_FORWARD_H_