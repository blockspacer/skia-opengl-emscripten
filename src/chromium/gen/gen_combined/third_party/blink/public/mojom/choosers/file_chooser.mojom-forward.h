// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_FORWARD_H_

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
class FileChooserParamsDataView;

class NativeFileInfoDataView;

class FileSystemFileInfoDataView;

class FileChooserResultDataView;

class FileChooserFileInfoDataView;

enum class FileChooserParams_Mode : int32_t;
class FileChooserParams;
using FileChooserParamsPtr = mojo::StructPtr<FileChooserParams>;

class NativeFileInfo;
using NativeFileInfoPtr = mojo::StructPtr<NativeFileInfo>;

class FileSystemFileInfo;
using FileSystemFileInfoPtr = mojo::StructPtr<FileSystemFileInfo>;

class FileChooserResult;
using FileChooserResultPtr = mojo::StructPtr<FileChooserResult>;

class FileChooserFileInfo;

typedef mojo::StructPtr<FileChooserFileInfo> FileChooserFileInfoPtr;

class FileChooser;
using FileChooserPtr = mojo::InterfacePtr<FileChooser>;
using FileChooserPtrInfo = mojo::InterfacePtrInfo<FileChooser>;
using ThreadSafeFileChooserPtr =
    mojo::ThreadSafeInterfacePtr<FileChooser>;
using FileChooserRequest = mojo::InterfaceRequest<FileChooser>;
using FileChooserAssociatedPtr =
    mojo::AssociatedInterfacePtr<FileChooser>;
using ThreadSafeFileChooserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FileChooser>;
using FileChooserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FileChooser>;
using FileChooserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FileChooser>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_FORWARD_H_