// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class FileSystemType : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_FileSystemType_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::FileSystemType> {
  using Hash = blink_mojom_internal_FileSystemType_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using FileSystemType = FileSystemType;  // Alias for definition in the parent namespace.
class FileSystemInfo;
using FileSystemInfoPtr = mojo::StructPtr<FileSystemInfo>;

class FileSystemCancellableOperation;
using FileSystemCancellableOperationPtr = mojo::InterfacePtr<FileSystemCancellableOperation>;
using FileSystemCancellableOperationPtrInfo = mojo::InterfacePtrInfo<FileSystemCancellableOperation>;
using ThreadSafeFileSystemCancellableOperationPtr =
    mojo::ThreadSafeInterfacePtr<FileSystemCancellableOperation>;
using FileSystemCancellableOperationRequest = mojo::InterfaceRequest<FileSystemCancellableOperation>;
using FileSystemCancellableOperationAssociatedPtr =
    mojo::AssociatedInterfacePtr<FileSystemCancellableOperation>;
using ThreadSafeFileSystemCancellableOperationAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FileSystemCancellableOperation>;
using FileSystemCancellableOperationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FileSystemCancellableOperation>;
using FileSystemCancellableOperationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FileSystemCancellableOperation>;

class FileSystemOperationListener;
using FileSystemOperationListenerPtr = mojo::InterfacePtr<FileSystemOperationListener>;
using FileSystemOperationListenerPtrInfo = mojo::InterfacePtrInfo<FileSystemOperationListener>;
using ThreadSafeFileSystemOperationListenerPtr =
    mojo::ThreadSafeInterfacePtr<FileSystemOperationListener>;
using FileSystemOperationListenerRequest = mojo::InterfaceRequest<FileSystemOperationListener>;
using FileSystemOperationListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FileSystemOperationListener>;
using ThreadSafeFileSystemOperationListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FileSystemOperationListener>;
using FileSystemOperationListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FileSystemOperationListener>;
using FileSystemOperationListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FileSystemOperationListener>;

class ReceivedSnapshotListener;
using ReceivedSnapshotListenerPtr = mojo::InterfacePtr<ReceivedSnapshotListener>;
using ReceivedSnapshotListenerPtrInfo = mojo::InterfacePtrInfo<ReceivedSnapshotListener>;
using ThreadSafeReceivedSnapshotListenerPtr =
    mojo::ThreadSafeInterfacePtr<ReceivedSnapshotListener>;
using ReceivedSnapshotListenerRequest = mojo::InterfaceRequest<ReceivedSnapshotListener>;
using ReceivedSnapshotListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ReceivedSnapshotListener>;
using ThreadSafeReceivedSnapshotListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ReceivedSnapshotListener>;
using ReceivedSnapshotListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ReceivedSnapshotListener>;
using ReceivedSnapshotListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ReceivedSnapshotListener>;

class FileSystemManager;
using FileSystemManagerPtr = mojo::InterfacePtr<FileSystemManager>;
using FileSystemManagerPtrInfo = mojo::InterfacePtrInfo<FileSystemManager>;
using ThreadSafeFileSystemManagerPtr =
    mojo::ThreadSafeInterfacePtr<FileSystemManager>;
using FileSystemManagerRequest = mojo::InterfaceRequest<FileSystemManager>;
using FileSystemManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<FileSystemManager>;
using ThreadSafeFileSystemManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FileSystemManager>;
using FileSystemManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FileSystemManager>;
using FileSystemManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FileSystemManager>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_BLINK_FORWARD_H_