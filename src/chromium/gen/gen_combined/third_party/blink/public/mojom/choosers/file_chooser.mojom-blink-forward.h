// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_FORWARD_H_

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

enum class FileChooserParams_Mode : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_FileChooserParams_Mode_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::FileChooserParams_Mode> {
  using Hash = blink_mojom_internal_FileChooserParams_Mode_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
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




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_FORWARD_H_