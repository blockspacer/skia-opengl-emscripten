// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_FORWARD_H_

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

enum class SingletonJavaScriptValue : int32_t;

enum class RemoteInvocationError : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_SingletonJavaScriptValue_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::SingletonJavaScriptValue> {
  using Hash = blink_mojom_internal_SingletonJavaScriptValue_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_RemoteInvocationError_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::RemoteInvocationError> {
  using Hash = blink_mojom_internal_RemoteInvocationError_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using SingletonJavaScriptValue = SingletonJavaScriptValue;  // Alias for definition in the parent namespace.
using RemoteInvocationError = RemoteInvocationError;  // Alias for definition in the parent namespace.
class RemoteInvocationResult;
using RemoteInvocationResultPtr = mojo::StructPtr<RemoteInvocationResult>;

class RemoteInvocationArgument;

typedef mojo::StructPtr<RemoteInvocationArgument> RemoteInvocationArgumentPtr;

class RemoteInvocationResultValue;

typedef mojo::StructPtr<RemoteInvocationResultValue> RemoteInvocationResultValuePtr;

class RemoteObjectHost;
using RemoteObjectHostPtr = mojo::InterfacePtr<RemoteObjectHost>;
using RemoteObjectHostPtrInfo = mojo::InterfacePtrInfo<RemoteObjectHost>;
using ThreadSafeRemoteObjectHostPtr =
    mojo::ThreadSafeInterfacePtr<RemoteObjectHost>;
using RemoteObjectHostRequest = mojo::InterfaceRequest<RemoteObjectHost>;
using RemoteObjectHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemoteObjectHost>;
using ThreadSafeRemoteObjectHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemoteObjectHost>;
using RemoteObjectHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemoteObjectHost>;
using RemoteObjectHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemoteObjectHost>;

class RemoteObject;
using RemoteObjectPtr = mojo::InterfacePtr<RemoteObject>;
using RemoteObjectPtrInfo = mojo::InterfacePtrInfo<RemoteObject>;
using ThreadSafeRemoteObjectPtr =
    mojo::ThreadSafeInterfacePtr<RemoteObject>;
using RemoteObjectRequest = mojo::InterfaceRequest<RemoteObject>;
using RemoteObjectAssociatedPtr =
    mojo::AssociatedInterfacePtr<RemoteObject>;
using ThreadSafeRemoteObjectAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<RemoteObject>;
using RemoteObjectAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RemoteObject>;
using RemoteObjectAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RemoteObject>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_FORWARD_H_