// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_FORWARD_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_FORWARD_H_

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
#include "components/download/public/common/download_export.h"




namespace download {
namespace mojom {
class DownloadStreamHandleDataView;


enum class NetworkRequestStatus : int32_t;
class DownloadStreamHandle;
using DownloadStreamHandlePtr = mojo::StructPtr<DownloadStreamHandle>;

class DownloadStreamClient;
using DownloadStreamClientPtr = mojo::InterfacePtr<DownloadStreamClient>;
using DownloadStreamClientPtrInfo = mojo::InterfacePtrInfo<DownloadStreamClient>;
using ThreadSafeDownloadStreamClientPtr =
    mojo::ThreadSafeInterfacePtr<DownloadStreamClient>;
using DownloadStreamClientRequest = mojo::InterfaceRequest<DownloadStreamClient>;
using DownloadStreamClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DownloadStreamClient>;
using ThreadSafeDownloadStreamClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DownloadStreamClient>;
using DownloadStreamClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DownloadStreamClient>;
using DownloadStreamClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DownloadStreamClient>;




}  // namespace mojom
}  // namespace download

#endif  // COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_FORWARD_H_