// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_FORWARD_H_

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

enum class AppCacheEventID : int32_t;

enum class AppCacheErrorReason : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_AppCacheEventID_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AppCacheEventID> {
  using Hash = blink_mojom_internal_AppCacheEventID_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_AppCacheErrorReason_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::AppCacheErrorReason> {
  using Hash = blink_mojom_internal_AppCacheErrorReason_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using AppCacheEventID = AppCacheEventID;  // Alias for definition in the parent namespace.
using AppCacheErrorReason = AppCacheErrorReason;  // Alias for definition in the parent namespace.

constexpr int64_t kAppCacheNoHostId = 0;
class AppCacheResourceInfo;
using AppCacheResourceInfoPtr = mojo::StructPtr<AppCacheResourceInfo>;

class AppCacheErrorDetails;
using AppCacheErrorDetailsPtr = mojo::StructPtr<AppCacheErrorDetails>;

class AppCacheBackend;
using AppCacheBackendPtr = mojo::InterfacePtr<AppCacheBackend>;
using AppCacheBackendPtrInfo = mojo::InterfacePtrInfo<AppCacheBackend>;
using ThreadSafeAppCacheBackendPtr =
    mojo::ThreadSafeInterfacePtr<AppCacheBackend>;
using AppCacheBackendRequest = mojo::InterfaceRequest<AppCacheBackend>;
using AppCacheBackendAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppCacheBackend>;
using ThreadSafeAppCacheBackendAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppCacheBackend>;
using AppCacheBackendAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppCacheBackend>;
using AppCacheBackendAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppCacheBackend>;

class AppCacheHost;
using AppCacheHostPtr = mojo::InterfacePtr<AppCacheHost>;
using AppCacheHostPtrInfo = mojo::InterfacePtrInfo<AppCacheHost>;
using ThreadSafeAppCacheHostPtr =
    mojo::ThreadSafeInterfacePtr<AppCacheHost>;
using AppCacheHostRequest = mojo::InterfaceRequest<AppCacheHost>;
using AppCacheHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppCacheHost>;
using ThreadSafeAppCacheHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppCacheHost>;
using AppCacheHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppCacheHost>;
using AppCacheHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppCacheHost>;

class AppCacheFrontend;
using AppCacheFrontendPtr = mojo::InterfacePtr<AppCacheFrontend>;
using AppCacheFrontendPtrInfo = mojo::InterfacePtrInfo<AppCacheFrontend>;
using ThreadSafeAppCacheFrontendPtr =
    mojo::ThreadSafeInterfacePtr<AppCacheFrontend>;
using AppCacheFrontendRequest = mojo::InterfaceRequest<AppCacheFrontend>;
using AppCacheFrontendAssociatedPtr =
    mojo::AssociatedInterfacePtr<AppCacheFrontend>;
using ThreadSafeAppCacheFrontendAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AppCacheFrontend>;
using AppCacheFrontendAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AppCacheFrontend>;
using AppCacheFrontendAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AppCacheFrontend>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_FORWARD_H_