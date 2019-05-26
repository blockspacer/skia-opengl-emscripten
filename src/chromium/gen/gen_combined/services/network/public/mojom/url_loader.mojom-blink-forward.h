// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {

enum class RequestPriority : int32_t;

enum class URLRequestReferrerPolicy : int32_t;

enum class DataElementType : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_RequestPriority_DataHashFn;

template <>
struct DefaultHash<::network::mojom::RequestPriority> {
  using Hash = network_mojom_internal_RequestPriority_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_URLRequestReferrerPolicy_DataHashFn;

template <>
struct DefaultHash<::network::mojom::URLRequestReferrerPolicy> {
  using Hash = network_mojom_internal_URLRequestReferrerPolicy_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct network_mojom_internal_DataElementType_DataHashFn;

template <>
struct DefaultHash<::network::mojom::DataElementType> {
  using Hash = network_mojom_internal_DataElementType_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using RequestPriority = RequestPriority;  // Alias for definition in the parent namespace.
using URLRequestReferrerPolicy = URLRequestReferrerPolicy;  // Alias for definition in the parent namespace.
using DataElementType = DataElementType;  // Alias for definition in the parent namespace.
using URLResponseHead = mojo::native::NativeStruct;
using URLResponseHeadPtr = mojo::native::NativeStructPtr;

using URLRequestRedirectInfo = mojo::native::NativeStruct;
using URLRequestRedirectInfoPtr = mojo::native::NativeStructPtr;

using CorsErrorStatus = mojo::native::NativeStruct;
using CorsErrorStatusPtr = mojo::native::NativeStructPtr;

using URLLoaderCompletionStatus = mojo::native::NativeStruct;
using URLLoaderCompletionStatusPtr = mojo::native::NativeStructPtr;

class URLRequest;
using URLRequestPtr = mojo::StructPtr<URLRequest>;

class URLRequestBody;
using URLRequestBodyPtr = mojo::StructPtr<URLRequestBody>;

class DataElement;
using DataElementPtr = mojo::StructPtr<DataElement>;

class URLLoaderClientEndpoints;
using URLLoaderClientEndpointsPtr = mojo::StructPtr<URLLoaderClientEndpoints>;

class URLLoader;
using URLLoaderPtr = mojo::InterfacePtr<URLLoader>;
using URLLoaderPtrInfo = mojo::InterfacePtrInfo<URLLoader>;
using ThreadSafeURLLoaderPtr =
    mojo::ThreadSafeInterfacePtr<URLLoader>;
using URLLoaderRequest = mojo::InterfaceRequest<URLLoader>;
using URLLoaderAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoader>;
using ThreadSafeURLLoaderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<URLLoader>;
using URLLoaderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoader>;
using URLLoaderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<URLLoader>;

class URLLoaderClient;
using URLLoaderClientPtr = mojo::InterfacePtr<URLLoaderClient>;
using URLLoaderClientPtrInfo = mojo::InterfacePtrInfo<URLLoaderClient>;
using ThreadSafeURLLoaderClientPtr =
    mojo::ThreadSafeInterfacePtr<URLLoaderClient>;
using URLLoaderClientRequest = mojo::InterfaceRequest<URLLoaderClient>;
using URLLoaderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<URLLoaderClient>;
using ThreadSafeURLLoaderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<URLLoaderClient>;
using URLLoaderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<URLLoaderClient>;
using URLLoaderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<URLLoaderClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace network
#include "third_party/blink/renderer/platform/network/encoded_form_data.h"

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_FORWARD_H_