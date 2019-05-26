// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_FORWARD_H_

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




namespace test_module {
class StructDataView;

class UnionDataView;

enum class GlobalEnum : int32_t;

enum class Struct_StructEnum : int32_t;

enum class Interface_InterfaceEnum : int32_t;

extern const char GlobalConst[];
class Struct;
using StructPtr = mojo::InlinedStructPtr<Struct>;

class Union;

typedef mojo::InlinedStructPtr<Union> UnionPtr;

class Interface;
using InterfacePtr = mojo::InterfacePtr<Interface>;
using InterfacePtrInfo = mojo::InterfacePtrInfo<Interface>;
using ThreadSafeInterfacePtr =
    mojo::ThreadSafeInterfacePtr<Interface>;
using InterfaceRequest = mojo::InterfaceRequest<Interface>;
using InterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Interface>;
using ThreadSafeInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Interface>;
using InterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Interface>;
using InterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Interface>;




}  // namespace test_module

#endif  // MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_FORWARD_H_