// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_FORWARD_H_

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




namespace imported {
class PointDataView;

class PointOrShapeDataView;

enum class Shape : int32_t;

enum class AnotherShape : int32_t;

enum class YetAnotherShape : int32_t;
class Point;
using PointPtr = mojo::InlinedStructPtr<Point>;

class PointOrShape;

typedef mojo::StructPtr<PointOrShape> PointOrShapePtr;

class ImportedInterface;
using ImportedInterfacePtr = mojo::InterfacePtr<ImportedInterface>;
using ImportedInterfacePtrInfo = mojo::InterfacePtrInfo<ImportedInterface>;
using ThreadSafeImportedInterfacePtr =
    mojo::ThreadSafeInterfacePtr<ImportedInterface>;
using ImportedInterfaceRequest = mojo::InterfaceRequest<ImportedInterface>;
using ImportedInterfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImportedInterface>;
using ThreadSafeImportedInterfaceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImportedInterface>;
using ImportedInterfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImportedInterface>;
using ImportedInterfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImportedInterface>;




}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_FORWARD_H_