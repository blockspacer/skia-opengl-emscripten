// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_FORWARD_H_

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
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class ColorSuggestion;
using ColorSuggestionPtr = mojo::InlinedStructPtr<ColorSuggestion>;

class ColorChooserFactory;
using ColorChooserFactoryPtr = mojo::InterfacePtr<ColorChooserFactory>;
using ColorChooserFactoryPtrInfo = mojo::InterfacePtrInfo<ColorChooserFactory>;
using ThreadSafeColorChooserFactoryPtr =
    mojo::ThreadSafeInterfacePtr<ColorChooserFactory>;
using ColorChooserFactoryRequest = mojo::InterfaceRequest<ColorChooserFactory>;
using ColorChooserFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ColorChooserFactory>;
using ThreadSafeColorChooserFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ColorChooserFactory>;
using ColorChooserFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ColorChooserFactory>;
using ColorChooserFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ColorChooserFactory>;

class ColorChooser;
using ColorChooserPtr = mojo::InterfacePtr<ColorChooser>;
using ColorChooserPtrInfo = mojo::InterfacePtrInfo<ColorChooser>;
using ThreadSafeColorChooserPtr =
    mojo::ThreadSafeInterfacePtr<ColorChooser>;
using ColorChooserRequest = mojo::InterfaceRequest<ColorChooser>;
using ColorChooserAssociatedPtr =
    mojo::AssociatedInterfacePtr<ColorChooser>;
using ThreadSafeColorChooserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ColorChooser>;
using ColorChooserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ColorChooser>;
using ColorChooserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ColorChooser>;

class ColorChooserClient;
using ColorChooserClientPtr = mojo::InterfacePtr<ColorChooserClient>;
using ColorChooserClientPtrInfo = mojo::InterfacePtrInfo<ColorChooserClient>;
using ThreadSafeColorChooserClientPtr =
    mojo::ThreadSafeInterfacePtr<ColorChooserClient>;
using ColorChooserClientRequest = mojo::InterfaceRequest<ColorChooserClient>;
using ColorChooserClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ColorChooserClient>;
using ThreadSafeColorChooserClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ColorChooserClient>;
using ColorChooserClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ColorChooserClient>;
using ColorChooserClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ColorChooserClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_FORWARD_H_