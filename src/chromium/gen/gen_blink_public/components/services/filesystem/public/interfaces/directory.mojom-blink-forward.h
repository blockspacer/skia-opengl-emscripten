// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_BLINK_FORWARD_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_BLINK_FORWARD_H_

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


namespace filesystem {
namespace mojom {
}  // namespace filesystem
}  // namespace mojom


namespace filesystem {
namespace mojom {
namespace blink {
class FileOpenDetails;
using FileOpenDetailsPtr = mojo::InlinedStructPtr<FileOpenDetails>;

class FileOpenResult;
using FileOpenResultPtr = mojo::StructPtr<FileOpenResult>;

class Directory;
using DirectoryPtr = mojo::InterfacePtr<Directory>;
using DirectoryPtrInfo = mojo::InterfacePtrInfo<Directory>;
using ThreadSafeDirectoryPtr =
    mojo::ThreadSafeInterfacePtr<Directory>;
using DirectoryRequest = mojo::InterfaceRequest<Directory>;
using DirectoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<Directory>;
using ThreadSafeDirectoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Directory>;
using DirectoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Directory>;
using DirectoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Directory>;




}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_BLINK_FORWARD_H_