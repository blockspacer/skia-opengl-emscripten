// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_BLINK_FORWARD_H_

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

enum class Shape : int32_t;

enum class AnotherShape : int32_t;

enum class YetAnotherShape : int32_t;
}  // namespace imported
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct imported_internal_Shape_DataHashFn;

template <>
struct DefaultHash<::imported::Shape> {
  using Hash = imported_internal_Shape_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct imported_internal_AnotherShape_DataHashFn;

template <>
struct DefaultHash<::imported::AnotherShape> {
  using Hash = imported_internal_AnotherShape_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct imported_internal_YetAnotherShape_DataHashFn;

template <>
struct DefaultHash<::imported::YetAnotherShape> {
  using Hash = imported_internal_YetAnotherShape_DataHashFn;
};
}  // namespace WTF


namespace imported {
namespace blink {
using Shape = Shape;  // Alias for definition in the parent namespace.
using AnotherShape = AnotherShape;  // Alias for definition in the parent namespace.
using YetAnotherShape = YetAnotherShape;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_BLINK_FORWARD_H_