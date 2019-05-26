// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_FORWARD_H_

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




namespace mojo {
namespace test {
using PickledStructDataView = mojo::native::NativeStructDataView;

class PickleContainerDataView;

using TestNativeStructMojomDataView = mojo::native::NativeStructDataView;

using TestNativeStructWithAttachmentsMojomDataView = mojo::native::NativeStructDataView;

using PickledEnum = mojo::NativeEnum;
using PickledStruct = mojo::native::NativeStruct;
using PickledStructPtr = mojo::native::NativeStructPtr;

class PickleContainer;
using PickleContainerPtr = mojo::StructPtr<PickleContainer>;

using TestNativeStructMojom = mojo::native::NativeStruct;
using TestNativeStructMojomPtr = mojo::native::NativeStructPtr;

using TestNativeStructWithAttachmentsMojom = mojo::native::NativeStruct;
using TestNativeStructWithAttachmentsMojomPtr = mojo::native::NativeStructPtr;

class PicklePasser;
using PicklePasserPtr = mojo::InterfacePtr<PicklePasser>;
using PicklePasserPtrInfo = mojo::InterfacePtrInfo<PicklePasser>;
using ThreadSafePicklePasserPtr =
    mojo::ThreadSafeInterfacePtr<PicklePasser>;
using PicklePasserRequest = mojo::InterfaceRequest<PicklePasser>;
using PicklePasserAssociatedPtr =
    mojo::AssociatedInterfacePtr<PicklePasser>;
using ThreadSafePicklePasserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PicklePasser>;
using PicklePasserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PicklePasser>;
using PicklePasserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PicklePasser>;

class RectService;
using RectServicePtr = mojo::InterfacePtr<RectService>;
using RectServicePtrInfo = mojo::InterfacePtrInfo<RectService>;
using ThreadSafeRectServicePtr =
    mojo::ThreadSafeInterfacePtr<RectService>;
using RectServiceRequest = mojo::InterfaceRequest<RectService>;
using RectServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<RectService>;
using ThreadSafeRectServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RectService>;
using RectServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RectService>;
using RectServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RectService>;

class NativeTypeTester;
using NativeTypeTesterPtr = mojo::InterfacePtr<NativeTypeTester>;
using NativeTypeTesterPtrInfo = mojo::InterfacePtrInfo<NativeTypeTester>;
using ThreadSafeNativeTypeTesterPtr =
    mojo::ThreadSafeInterfacePtr<NativeTypeTester>;
using NativeTypeTesterRequest = mojo::InterfaceRequest<NativeTypeTester>;
using NativeTypeTesterAssociatedPtr =
    mojo::AssociatedInterfacePtr<NativeTypeTester>;
using ThreadSafeNativeTypeTesterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NativeTypeTester>;
using NativeTypeTesterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NativeTypeTester>;
using NativeTypeTesterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NativeTypeTester>;




}  // namespace test
}  // namespace mojo
#include "mojo/public/cpp/bindings/tests/pickled_types_chromium.h"
#include "mojo/public/cpp/bindings/tests/test_native_types.h"

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_FORWARD_H_