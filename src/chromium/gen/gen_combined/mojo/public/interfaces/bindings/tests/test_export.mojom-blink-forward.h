// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_FORWARD_H_

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
#include "mojo/public/cpp/bindings/tests/mojo_test_blink_export.h"


namespace mojo {
namespace test {
namespace test_export {
}  // namespace mojo
}  // namespace test
}  // namespace test_export


namespace mojo {
namespace test {
namespace test_export {
namespace blink {
class StringPair;
using StringPairPtr = mojo::InlinedStructPtr<StringPair>;

class StringPairContainer;
using StringPairContainerPtr = mojo::StructPtr<StringPairContainer>;

class ExportedInterface;
using ExportedInterfacePtr = mojo::InterfacePtr<ExportedInterface>;
using ExportedInterfacePtrInfo = mojo::InterfacePtrInfo<ExportedInterface>;
using ThreadSafeExportedInterfacePtr =
    mojo::ThreadSafeInterfacePtr<ExportedInterface>;
using ExportedInterfaceRequest = mojo::InterfaceRequest<ExportedInterface>;
using ExportedInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ExportedInterface>;
using ThreadSafeExportedInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ExportedInterface>;
using ExportedInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ExportedInterface>;
using ExportedInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ExportedInterface>;




}  // namespace blink
}  // namespace test_export
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_FORWARD_H_