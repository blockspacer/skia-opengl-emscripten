// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_FORWARD_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_FORWARD_H_

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




namespace font_service {
namespace mojom {
class TypefaceStyleDataView;

class FontIdentityDataView;

class FontRenderStyleDataView;


enum class TypefaceSlant : int32_t;

enum class RenderStyleSwitch : int32_t;
class TypefaceStyle;
using TypefaceStylePtr = mojo::InlinedStructPtr<TypefaceStyle>;

class FontIdentity;
using FontIdentityPtr = mojo::InlinedStructPtr<FontIdentity>;

class FontRenderStyle;
using FontRenderStylePtr = mojo::StructPtr<FontRenderStyle>;

class FontService;
using FontServicePtr = mojo::InterfacePtr<FontService>;
using FontServicePtrInfo = mojo::InterfacePtrInfo<FontService>;
using ThreadSafeFontServicePtr =
    mojo::ThreadSafeInterfacePtr<FontService>;
using FontServiceRequest = mojo::InterfaceRequest<FontService>;
using FontServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<FontService>;
using ThreadSafeFontServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FontService>;
using FontServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FontService>;
using FontServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FontService>;




}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_FORWARD_H_